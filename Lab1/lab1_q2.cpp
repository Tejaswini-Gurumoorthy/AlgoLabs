#include <bits/stdc++.h>
using namespace std;
int cnt=0;

int main()
{
    int n;
    cin>>n;
    int a[n];
    cnt+=3;
    for(int i=0;i<n;i++)
    {
        cnt+=2;
        cin>>a[i];
    }
    cnt+=2;
    int temp;
    for(int i=0;i<n-1;i++)
    {
        cnt++;
        for(int j=0;j<n-1-i;j++)
        {
            cnt+=2;
            if(a[j]>a[j+1])
            {
                cnt+=3;
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
        cnt++;
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
}
