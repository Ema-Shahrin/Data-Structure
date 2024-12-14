
#include<bits/stdc++.h>
using namespace std;

void delend(int a[], int &n)
{
    if(n>0)n--;
}

void delpos(int a[],int pos,int &n)
{
    if(pos>n or pos<0)
    {
        cout<<"index not found!!";
        return;
    }

    for(int i=pos; i<n-1; i++)a[i] = a[i+1];

    n--;
}

void delfrmbeg(int a[], int &n)
{
    if(n<0)
    {
        cout<<"Index dont exist\n";
        return;
    }
    for(int i=0; i<n-1; i++)
    {
        a[i]=a[i+1];
    }
    n--;
}
void travarsearr(int a[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
}

int main()
{
    int n;
    cin>>n;
    int a[n+10];

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    travarsearr(a,n);
    delfrmbeg(a,n);
    cout<<"\nAfter del from beg : ";
    travarsearr(a,n);
    int pos;
    cout<<"\nEnter pos (0-"<<n-1<<") want to dlt : ";
    cin>>pos;
    delpos(a,pos,n);
    travarsearr(a,n);
    cout<<"\nfrom end dlt : ";
    delend(a,n);
    travarsearr(a,n);
}
