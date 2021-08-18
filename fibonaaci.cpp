#include<iostream>
using namespace std;
void fibo(int num)
{
    int t0 = 0;
    int t1 = 1;
    int next;
    for(int i=1;i<=num;i++)
    { 
        cout<<t0<<endl;
        next = t0+t1;
        t0 = t1;
        t1 = next;
    }
    return;
}
int main()
{
    int n;
    cin>>n;
    fibo(n);
}