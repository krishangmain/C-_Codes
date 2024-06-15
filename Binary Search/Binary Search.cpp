 #include <iostream>
using namespace std;
int main() {
int n;
cin>>n;
int arr[n];
for(int i=0; i<n; i++)
    cin>>arr[i];
bool flag=false;
int low = 0, high = n - 1, x;
cin>>x;
while (low <= high) {
    int mid = (low + high) / 2;

    if(arr[mid]==x){
        flag=true;
        break;
    }
    else if (arr[mid] < x) {
        low = mid + 1;
    }

    else {
        high = mid - 1;
    }

}
if(flag){
    cout<<"Element found";
       else{
    cout<<"Element not found";
}
}
}