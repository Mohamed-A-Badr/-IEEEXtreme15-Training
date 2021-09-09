vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
      vector<bool> arr(n, false);
      for(int i = 0; i < edges.size(); i++)
        arr[edges[i][1]] = true;
      vector<int> res;
      for(int i = 0; i < n; i++)
        if(arr[i] == false)
          res.push_back(i);
      return res;
    }
