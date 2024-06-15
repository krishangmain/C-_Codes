#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int rose,money,t;
    cin>>t;
    // int sizze=2*t;
    int result[2*t];
    int count=0;
    while(t>0){
            cin>>rose;
            int price[rose];
            for(int i = 0; i < rose; i++)
            {
                cin>>price[i];
            }
            cin>>money;
            sort(price,price+rose);
            bool rosefound=false;
            for(int i = 0; i < rose; i++)
            {
                for(int j = i+1; j < rose; j++)
                {
                    if((price[i]+price[j]==money)&&(price[j]-price[i]<money/2)){
                        // cout<<"Deepak should buy roses whose prices are "<<price[i]<<" and "<<price[j]<<"."<<endl;
                        result[2*count]=price[i];
                        result[2*count+1]=price[j];
                        rosefound=true;
                        count++;
                        break;
                    }
                
                    
                }
                if(rosefound){
                    break;
                }
            } 
            t--;
    }  

    for(int i = 0; i < count; i++)
    {
        cout<<"Deepak should buy roses whose prices are "<<result[2*i]<<" and "<<result[2*i+1]<<"."<<endl;
    }
     
                    
    return 0;
}
