#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

void dfs(vector<vector<int> > &graph, int v, vector<bool> &visited){
    visited[v]=true;
    cout << v << " ";

    for(size_t i=0; i<graph[v].size(); i++){
        int node=graph[v][i];
        if(!visited[node]){
            dfs(graph, node, visited);
        }
    }
}

void bfs(vector<vector<int> > &graph, int start, vector<bool> &visited){
    queue<int> q;
    q.push(start);
    visited[start]=true;

    while(!q.empty()){
        int v = q.front();
        q.pop();
        cout << v << " ";
        
        for(size_t i=0; i<graph[v].size(); i++){
            int node = graph[v][i];
            if(!visited[node]){
                q.push(node);
                visited[node]=true;
            }
        }
    }
}

int main() {
    int n,m,v;
    cin >> n >> m >> v;

    //visited
    vector<bool> visited(n+1, false);

    //graph
    vector<vector<int> > graph(n+1);
    for(size_t i=0 ; i < m ; i++){
        int x,y;
        cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }

    //sort
    for(size_t i=0 ; i < n+1 ; i++){
        sort(graph[i].begin(), graph[i].end());
    }

    dfs(graph, v, visited);
    cout << endl;

    fill(visited.begin(), visited.end(), false);
    bfs(graph, v, visited);

    cout << endl;
    return 0;
}