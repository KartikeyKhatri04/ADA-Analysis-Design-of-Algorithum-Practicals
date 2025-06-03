#include <iostream>
using namespace std;

int main()
{
    int a1[3][3];
    int a2[3][3];

    cout << "Enter first matrix element:-"<<endl;
    for(int i = 0; i < 3; ++i)
    {
       for(int j = 0; j < 3; ++j)
       {
         cout << "Element [" << i << "][" << j << "]=";
         cin >> a1[i][j];
       }
    }

    cout << "Enter second matrix element:-"<<endl;
    for(int i = 0; i < 3; ++i)
    {
        for(int j = 0; j < 3; ++j)
        {
            cout << "Element ["<< i << "]["<< j << "]=";
            cin >> a2[i][j];
        }
    }
    cout << "Your 1st matrix:-"<<endl;
    for(int i = 0; i < 3; ++i)
    {
        for(int j = 0; j < 3; ++j)
        {
            cout << a2[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Your 2nd matrix:-"<<endl;
    for(int i = 0; i < 3; ++i)
    {
        for(int j = 0; j < 3; ++j)
        {
            cout << a2[i][j] << " ";
        }
        cout << endl;
    }
    int resultMat[3][3];

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            resultMat[i][j] = a1[i][j] + a2[i][j];
        }
    }

    cout <<"Sum of the two matrix is:- "<<endl;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout << resultMat[i][j] <<" ";
        }
        cout <<endl;
    }

    return 0;
 
}