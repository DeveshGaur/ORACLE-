#include<iostream>
using namespace std;
int main()
{
    int n,i,m,v;
    cout<<"Enter the number of elements:";
    cin>>n;
    int a[n];
    cout<<"\nEnter elements:";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"n="<<n;
    cout<<"\nElements:";
    for(i=0;i<n;i++)
    {
        cout<<"\n"<<a[i];
    }
    cout<<"\nEnter the value to be delete";
    cin>>v;
    for(i=0;i<n;i++)
    {
        if(v==a[i])
            {
                m=i;
            }
    }
    for(i=m;i<n;i++)
    {
        a[i]=a[i+1];
    }
    for(i=0;i<(n-1);i++)
    {
        cout<<"\n"<<a[i];
    }

}

