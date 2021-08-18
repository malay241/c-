#include<iostream>
using namespace std;
int binarysearch(int a[],int n,int key)
{
    int s = 0;
    int e = n;
    while(s<=e)
    {
        int mid = (s+e)/2;
        if(a[mid]==key)
        {
            return mid;
        }
        else
        if(a[mid]<key)
        {
            s = mid+1;
        }
        else
        if(a[mid]>key)
        {
            e = mid-1;
        }
    }
    return -1;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int key;
    cin>>key;
    cout<<binarysearch(arr,n,key);
}