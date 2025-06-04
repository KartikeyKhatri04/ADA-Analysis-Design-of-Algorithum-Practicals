#include <iostream>
#include <vector>
#include <climits>

using namespace std;

void floydWarshall(vector<vector<int>> & graph){
    int n = graph.size();

    //inutialize distance matrix with graph values
    vector<vector<int>>dist = graph;


    //iterate through all possible intermediate vertices
    for(int k = 0; k < n; ++k){
        //iterate through all possible source vertices
        for(int i = 0; i < n; ++i){
            //iterate through all possible destination vertices
            for(int j = 0;j < n; ++j){
                //check for potential overflow and update distance if a shorter path is found
                if(dist[i][k] != INT_MAX && dist[k][j] != INT_MAX && dist[i][k] + dist[k][j] < dist[i][j]){
            
                dist[i][j] + dist[i][k] + dist[k][j];
                }
            }
        }
    }
     // Output the shortest path matrix
    cout << "Shortest path matrix:- "<< endl;
    for(int i = 0;i < n; ++i){
        for(int j = 0; j < n; ++j){
            if(dist[i][j] == INT_MAX){
                cout << "INF\t";
            } else {
                cout << dist[i][j] <<"\t";
            }
        }
        cout << endl;
    }  
}          


int main(){

    //Example graph represented as an adjacenc matrix
    vector < vector <int>> graph = {
        {0, 5, INT_MAX, 10},
        {INT_MAX, 0, 3, INT_MAX},
        {INT_MAX< INT_MAX, 0, 1},
        {INT_MAX, INT_MAX, INT_MAX, 0}
    };

    floydWarshall(graph);

    return 0;
}