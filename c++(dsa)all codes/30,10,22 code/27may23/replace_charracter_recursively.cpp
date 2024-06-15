#include <bits/stdc++.h>
using namespace std;
void replace(char* str, char c1, char c2)
{
    //base case
    int j, n = strlen(str);
    //recursive call
    for (int i = j = 0; i < n; i++) {
        if (str[i] != c1) {
            str[j++] = str[i];
        }
        //current work
        else {
            str[j++] = c2;
        }
    }
 
    str[j] = '\0';
}
int main()
{
    
    char str[] = "abaacdol";
    char c1 = 'a';
    char c2 = 'l';
    replace(str, c1, c2);
    cout << str;
    return 0;
}