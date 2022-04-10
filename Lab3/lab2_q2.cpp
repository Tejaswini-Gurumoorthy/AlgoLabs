#include <bits/stdc++.h>
using namespace std;
const int N=100;
vector<int> g[N];
int previous[N]={0};
bool vis[N]={0};

void dfs(int start)
{
    //cout<<start<<" " ;
    vis[start]=true;
    for(auto child: g[start])
    {
        if(vis[child] && previous[start]==child)
        {
            continue;
        }
        else if(vis[child] && previous[start]!=child)
        {
            cout<<"Contains cycle "<<endl;
            break;
        }
        else
        {
            vis[child]=true;
            previous[child]= start;
            dfs(child);
        }
    }
    return;

}

int main()
{
    int n, m,vert;
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
    cout<<"Enter starting vertex : "<<endl;
    cin>>vert;
    previous[vert]=-1;
    dfs(vert);
}
