#include <bits/stdc++.h>
using namespace std;
bool ispossibleanswer(int mid, vector<int>v, int m){
    int curr=0, studentcount=1;
    for(int i=0;i<v.size();i++){
        // can allocate this book ki condition. Purani books + new book ka sum mid se small hona chahiye
        if(curr+v[i]<=mid){
            curr+=v[i];
        }
        else{
            //allocation to new student
            studentcount++;
            // agar student count available students se zyada ho gaya ya fir koi 1 book ke pages mid se hi zyada hai to usko kisi ko allocate nhi kar sakte
            if(studentcount>m||v[i]>mid){
                return false;
            }
            // new student ko current book de di
            curr=v[i];
        }
    }
    // saari books allocate kar di m students mein such that kisi ka bhi sum mid se zyada nhi hua
    return true;
}
int main(){
    int n,m, sum=0;
    cin>>n>>m;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        sum+=v[i];
    }
    int s=1, e=sum, ans=-1;
    while(s<=e){
        int mid=(s+e)/2;
        // if mid se chota ya equal koi answer exist karta hai
        if(ispossibleanswer(mid, v,m)){
            ans=mid;
            e=mid-1;
        }
        // ya nhi
        else{
            s=mid+1;
        }
    }
    cout<<ans;
}