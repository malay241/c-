#include<iostream>
using namespace std;
int fact(int num)
{
    int factorial = 1;
    for(int i = 1 ; i <=num ; i++)
    {
        factorial = factorial * i;
    }
    return factorial;
}
int ncr(int nfact,int rfact)
{
    int answer = (fact(nfact))/(fact(nfact-rfact)*fact(rfact));
    return answer;
}
int main()
{
    int n;
    cin>>n;
    for(int i = 0; i<n;i++)
    {
        for(int j = 0; j<=i;j++)
        {
            cout<<ncr(i,j);
        }
        cout<<endl;
    }
}