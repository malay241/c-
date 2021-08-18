#include<iostream>
using namespace std;
int binaryTodecimal(int num)
{
    int answer = 0;
    int x = 1;
    while(num>0)
    {
        int temp = num%10;
        answer = answer + (x*temp);
        x = x*2;
        num = num/10;
    }
    return answer;
}
int main()
{
    int n;
    cin>>n;
    cout<<binaryTodecimal(n)<<endl;
}