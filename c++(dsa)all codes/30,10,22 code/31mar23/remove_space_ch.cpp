#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[100]={"Welcome to coding blocks"};
    int expected = 0, actual = 0;
    
    while(str[actual]!='\0')
    {
        if(str[actual]!=' ')
        {
            str[expected] = str[actual];
            expected++;
        }

        actual++;
    }
    str[expected]='\0';
    puts(str);
    return 0;
}