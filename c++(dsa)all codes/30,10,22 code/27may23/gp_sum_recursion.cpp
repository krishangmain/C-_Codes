#include<bits/stdc++.h>
using namespace std;
float sum1=0;
void sum(int k){
    if(k<0){
        return;
    }
    float temp=pow(2,k);
    sum1+=(1/temp);
    return sum(k-1);
}
int main(){
    int k;
    cin >> k;
    sum(k);
    cout << sum1;
    return 0;
}