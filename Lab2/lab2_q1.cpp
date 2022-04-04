#include<bits/stdc++.h>
using namespace std;
const int N = 100;
vector<int> graph[N];
vector <int> vis;
int cnt;

void dfs(int vertex)
{
    cnt++;
    cout<<vertex<<" ";
    cnt++;
    vis.push_back(1);
    for(int child : graph[vertex])
    {
        cnt++;
        cout<<"parent : "<<vertex<<"child : "<<child<<endl;
        cnt++;
        if(vis[child])
        {
            cnt++;
            continue;
        }
        dfs(child);
    }

}


int main()
{
    cnt++;
    int n,m;
    cnt++;
    cin>>n>>m;
    cnt++;
    for(int i=0;i<m;i++)
    {
        cnt++;
        int v1,v2;
        cnt++;
        cin>>v1>>v2;
        cnt++;
        graph[v1].push_back(v2);
        cnt++;
        graph[v2].push_back(v1);
    }
    cnt++;
    cnt++;
    int vert;
    cnt++;
    cout<<"Enter vertex to start with : "<<endl;
    cnt++;
    cin>>vert;
    cnt++;
    cout<<"Total number of steps : "<<cnt<<endl;
    

}
