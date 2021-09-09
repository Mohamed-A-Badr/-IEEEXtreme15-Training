int findCenter(vector<vector<int>>& edges) {
    map<int,int> mp;
    for(int i = 0; i < edges.size(); i++){
        for(int j = 0; j < 2; j++){
            mp[edges[i][j]]++;
        }
    }
    int mx = 0, in = 0;
    for(int i = 1; i <= mp.size(); i++){
        if(mp[i] > mx){
            mx = mp[i];
            in = i;
        }
    }
    
      return in;
    }
