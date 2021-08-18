#include<iostream>
using namespace std;
int sum(int num)
{
    int s= 0;
    for(int i=1;i<=num;i++)
    {
        s = s + i;
    }
    return s;
}
int main()
{
    int n;
    cin>>n;
    int add = sum(n);
    cout<<add;
}