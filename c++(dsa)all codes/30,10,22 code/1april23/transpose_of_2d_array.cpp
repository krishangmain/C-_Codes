#include<bits/stdc++.h>
using namespace std;
int main(){
    int n , i , j , m , swap ;
    cin>>n>>m;
    int arr[n][m];
    cout<<"Original matrix"<<endl;

    for(i = 0; i<n; i++){
        for(j = 0; j<m; j++){
            cin>> arr[i][j];
            cout<<arr[i][j]<<" ";

        }
        cout<<endl;
    } 
    cout<<"Transpose matrix"<<endl;
    for(i = 0; i<n; i++){
        for(j = i; j<m; j++){
            swap = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = swap;
        }
    }
    for(i = 0; i<n; i++){
        for(j = 0; j<m; j++){
            cout<<arr[i][j]<< " ";
        }
        cout<<endl;

    }
    return 0;
}

//transpose of 2D array