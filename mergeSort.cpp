#include <iostream>
using namespace std;

void merge(int arr[], int left, int mid, int right)
{
    int n1 = mid - left + 1; // left subarray size
    int n2 = right - mid;    // right subarray size

    //temporary arrays
    int* L = new int[n1];
    int* R = new int[n2];
    
    //transfer data to tem. arrays
    for(int i = 0; i < n1; i++){
        L[i] = arr[left + i];
    }
    for(int j = 0; j < n2; j++){
        R[j] = arr[mid + 1 + j];
    }
    
    //merge temp. arrays back into array left and right
    int i = 0;  //initialise index of first sub array
    int j = 0;  //initialise index of second sub array
    int k = left;   // initialise index of merged subarray

    while(i < n1 && j <n2){
        if(L[i] <= R[j]){
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    //copy any remaining elements pf L[], if any
    while(i < n1){
        arr[k] = L[i];
        i++;
        k++;
    }

    //copy any remaining elements pf R[], if any
    while (j < n2){
        arr[k] = R[j];
        j++;
        k++;
    }

    delete[] L;
    delete[] R;
}

void mergeSort(int arr[], int left, int right){
    if(left < right){
        int mid = left + (right - left) / 2;
        
        mergeSort(arr, left, mid);
        mergeSort(arr, mid+1, right);

        merge(arr, left, mid, right);
    }
}

void printArray(int arr[], int size){
    for(int i = 0; i < size; i++)
    cout <<arr[i] << " ";
    cout <<endl;
}

int main(){
    int n;
    cout <<"Enter the number of elements:- ";
    cin >> n;

    int* arr = new int[n];

    cout << "Enter " << n << " elements:-\n";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << "\nOriginal array:- ";
    printArray(arr, n);

    mergeSort(arr, 0, n -1);

    cout << "Sorted array:- ";
    printArray(arr, n);

    delete[] arr; 

    return 0;

}