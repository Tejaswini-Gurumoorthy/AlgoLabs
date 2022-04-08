#include <iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
int cnt=0;

int main()
{
    cnt+=4;
    int n;
    cin>>n;
    int arr[n],idx;
    cout<<"Enter array elements : "<<endl;
    for(int i=0;i<n;i++)
    {
        cnt+=2;
        cin>>arr[i];
    }
    cnt+=2;
    int temp;
    for(int i=0;i<n-1;i++)
    {
        cnt+=2;
        idx=i;
        for(int j=i;j<5;j++)
        {   
            cnt+=2;
            if(arr[j]<arr[idx])
            {
                cnt++;
                idx=j;
            }
        }
        cnt+=4;
        temp=arr[idx];
        arr[idx]=arr[i];
        arr[i]=temp;
    }
    cnt++;
    for(int i=0;i<5;i++)
    {
        cnt+=2;
        cout<<arr[i]<<" ";
    }
    cnt+=2;
    cout<<endl;
    cout<<"The total count is : "<<cnt<<endl;


}
