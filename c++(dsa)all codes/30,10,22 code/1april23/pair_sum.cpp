#include<bits/stdc++.h>
using namespace std;
int main()
{
    //int arr[]={5,2,1,3,2,4,9,2,1,4,3}, freq[10];
    int n, max_arr=0, term = 14;
    
    
    cout<<endl;
    cin>>n;
    int arr[n];
    
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i]>max_arr) max_arr = arr[i];
    }

    int freq[max_arr + 1];
    memset(freq, 0, sizeof(freq));
    
    for(int i=0; i<n; i++)
        freq[arr[i]]++;//frequency array: stores frequencies of elements of any designated array
    
    
    for(int i=0; i<n; i++)
    {
        if(term-arr[i]>max_arr+1)
        {
            continue;
        }
        else if(freq[arr[i]] >= 1 && freq[term-arr[i]] >= 1)
            {
                cout<<arr[i]<<endl;
                cout<<"yes";
                break;
            }
    }
    return 0;
}