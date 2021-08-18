#include<iostream>
using namespace std;
int decimalTobinary(int num)
{
    int answer = 0;
    int x = 1;
    while(x <= num)
    {
        x = x * 2;
    }
    x =x/2;
    while(x>0)
    {
        int t = num/x;
        num = num-t*x;
        x=x/2;
        answer = answer*10 + t;
    }
    return answer;
}
int main()
{
    int n;
    cin>>n;
    cout<<decimalTobinary(n)<<endl;
}