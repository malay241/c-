#include "bits/stdc++.h"
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int a[n];
    a[0]=arr[0]*arr[1];
    a[n-1]=arr[n-1]*arr[n-2];
    for(int i=1;i<n-1;i++)
    {
        a[i]=arr[i-1]*arr[i+1];
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}