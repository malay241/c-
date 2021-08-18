#include "bits/stdc++.h"
using namespace std;
int power_of(int n)
{
    return (n && !(n & n-1));
}
int main()
{
    cout<<power_of(15);
    return 0;
}