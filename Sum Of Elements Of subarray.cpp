#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
     int n,mx=INT_MIN,s=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];

    }
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            s=s+a[j];
            mx=max(s,mx);

        }
        s=0;
    }
    cout<<mx;
    return 0;
}
