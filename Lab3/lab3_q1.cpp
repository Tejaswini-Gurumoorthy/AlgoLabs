#include <bits/stdc++.h>
using namespace std;
const int N = 100;
vector<int> g[N];
bool vis[N] = {0};
int dist[N]={0};
int previous[N]={0};

void bfs(int start)
{
    queue<int> q;
    q.push(start);
    vis[start]=true;
    //cout << q.back();

    while (!q.empty())
    {
        for (auto child : g[q.front()])
        {
            if (vis[child] == 0)
            {
                q.push(child);
                vis[child] = true;
                //cout << q.back()<<" ";
                previous[child]= q.front(); 
                //dist[child]= dist[previous[child]]+1;
            }
        }
        vis[q.front()] = true;
        q.pop();
    }
    return;
}

//function for testing
void printit(int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<i<<": "<< previous[i]<<endl;
    }
}

void print_path(int n,int src,int dest)
{
    stack<int>path;
    int i=dest;
    path.push(i);
    while(i!=src)
    {
        path.push(previous[i]);
        i= previous[i];
    }
    cout<<"The path is : "<<endl;
    while(!path.empty())
    {
        cout<<path.top()<<" ";
        path.pop();
    }
}

int main()
{
    int n, m, src, dest;
    cout << "Enter number of vertices and edges : " << endl;
    cin >> n >> m;

    cout << "Enter the graph : " << endl;
    for (int i = 0; i < m; i++)
    {
        int v1, v2;
        cin >> v1 >> v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }
    cout<<endl;
    cout << "Enter source vertex : " << endl;
    cin >> src;
    cout<<"Enter Destination vertex : "<<endl;
    cin>>dest;
    previous[src]=-1;
    bfs(src);
    print_path(n,src,dest);

}
