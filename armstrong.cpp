#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum = 0;
    int x=n;
    while(n>0)
    {
        int t = n%10;
        sum = sum+(t*t*t);
        n=n/10;
    }
    if(x==sum)
    {
        cout<<"armstrong number";
    }
    else{
        cout<<"Not a armstrong number";
    }
}