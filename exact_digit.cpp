#include "bits/stdc++.h"
using namespace std;
int main()
{
    string str;
    int sum = 0;
    getline(cin,str);
    for(int i=0;i<str.length();i++)
    {
        if(isdigit(str[i]))
        {
            sum = sum + (int(str[i])-48);
        }
    }
    cout<< sum<< endl;
    return 0;
}