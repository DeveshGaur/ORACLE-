#include<iostream>
using namespace std;
int main()
{
    int i,j,n,t;
    cout<<"Enter the number of elements:";
    cin>>n;
    int a[n];
    cout<<"Enter a sorted array:";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"\nEnter the element you want to search:";
    cin>>j;
    int beg=0,end=n,mid;
    mid=(beg+end)/2;
    while(beg<end && a[mid]!=j)
    {
        if(j<a[mid])
            end=mid-1;
        else
            beg=mid+1;
       mid=int(beg+end)/2;
    }
  if(a[mid]==j)
    {
    t=mid;
    cout<<"\nlocation of variable:"<<t;
    }
  else
    cout<<"\nNot found";
}
