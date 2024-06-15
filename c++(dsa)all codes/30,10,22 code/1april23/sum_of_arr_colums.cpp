#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m, i,j;
    cin>>n>>m;
    int arr[n][m];
    for(i = 0; i<n; i++){
        for(j = 0; j<m; j++){
            cin>> arr[i][j];
        }
    }
    int sum[j];
    memset(sum,0,sizeof(sum));
    for(i = 0; i<n; i++){
        for(j = 0; j<m; j++){
            sum[j]= arr[i][j]+sum[j];
        }
    }
    cout<< "Sum of each column"<<endl;

    for(j = 0; j<m; j++){
        cout<<"Column"<<" "<<sum[j]<<endl;
    }
    return 0;
}