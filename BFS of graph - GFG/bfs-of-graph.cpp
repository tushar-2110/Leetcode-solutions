//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  
  
    void bfs(vector<int> adj[],int V,vector<int> &res)
    {
              bool visited[V+1];
              
              for(int i=0;i<=V;i++)
              visited[i]=false;
              queue<int> q;
              q.push(0);
              visited[0]=true;
              res.push_back(0);
              
              while(!q.empty())
              {
                  int u=q.front();
                  q.pop();
                  
                  for(int v:adj[u])
                   {
                       if(!visited[v])
                       {
                           visited[v]=true;
                           q.push(v);
                           res.push_back(v);
                       }
                   }
                  
                  
              }
              
        
    }
  
  
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        
        
        vector<int> ans;
        
        bfs(adj,V,ans);
        
        return ans;
        // Code here
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >>

            E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            // 		adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.bfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends