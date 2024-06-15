#include <bits/stdc++.h>
using namespace std;
int main(){
    priority_queue<int>pq;
    //   minheap->   priority_queue<int, vector<int>, greater<int>>pq;
    pq.push(5);
    pq.push(50);
    pq.push(25);
    pq.push(35);
    pq.push(15);
    pq.push(20);
    while(pq.size()){
        cout<<pq.top()<<endl;
        pq.pop();
    }
}