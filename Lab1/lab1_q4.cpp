#include <bits/stdc++.h>
using namespace std;
int cnt=0;

int main()
{
    cnt+=3;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cnt+=2;
        cin>>a[i];
    }
    cnt++;
    int temp;
    for(int j=1;j<n;j++)
    { 
        cnt+=3;
        int i=j-1;
        temp=a[j];
        while(i>=0 && a[i]>temp)
        {
            cnt+=3;
            a[i+1]=a[i];
            i=i-1;
        }
        cnt+=2;
        a[i+1]=temp;
    }
    cnt+=2;
    cout<<"THE SORTED ARRAY IS: ";
    for(int i=0;i<n;i++)
    {
        cnt+=2;
        cout<<a[i]<<" ";
    }
    cnt+=2;
    cout<<endl;
    cout<<"Total number of steps : "<<cnt<<endl;
}
