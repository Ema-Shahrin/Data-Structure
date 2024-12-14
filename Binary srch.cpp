#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n+10];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int target;
    cin>>target;

    int left = 0;
    int right = n-1;
    int mid;

    while( left <= right)
    {
        mid = left + (right-left)/2;
        if(a[mid] == target)
        {
            cout<<"Target found at index "<<mid;
            return 0;
        }
        else if( a[mid] < target )
        {
            left = mid+1;
        }
        else right = mid-1;
    }
    cout<<"Target not present in array"<<endl;
    return 0;
}
