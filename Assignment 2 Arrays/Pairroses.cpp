#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int rose,money;
    // cin>>t;
    int result[2];
    int count=0;
    // while(t>0){
    //     for(int i = 0; i < t; i++)
    //     {
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
                    if(price[i]+price[j]==money)
                    { result[count*2]=price[i];
                      result[(count*2)+1]=price[j];
                    
            
                        rosefound=true;
                        break;
                    }
                
                    
                }
                if(rosefound){
                    break;
                }
                
            // }
        // }

        count++;
        // t--;
    }
    
    for (int i = 0; i < count; i++)
    {
        cout<<"Deepak should buy roses whose prices are "<<result[i*2]<<" and "<<result[i*2+1]<<"."<<endl;
    }
    
    
    
    return 0;
}
