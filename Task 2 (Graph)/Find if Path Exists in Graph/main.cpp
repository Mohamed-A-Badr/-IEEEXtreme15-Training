class Solution {
private:
  vector<int> adj[2*100001];
  unordered_set<int> vis;

public:
  void dfs(int st){
    vis.insert(st);
    for(auto xx : adj[st])
      if(vis.find(xx) == vis.end())
        dfs(xx);
  }
  bool validPath(int n, vector<vector<int>>& edges, int start, int end) {
    for(vector<int> arr: edges){
      adj[arr[0]].push_back(arr[1]);
      adj[arr[1]].push_back(arr[0]);
    }
    dfs(start);
    return vis.find(end) != vis.end();
  }
};
