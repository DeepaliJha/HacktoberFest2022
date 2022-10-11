 void dfs(int node, vector<int>&vis ,int &cnt, vector<vector<int>> &adj)
    {
        vis[node]=1;
        cnt=cnt+1;
        for (auto it: adj[node])
        {
            if (!vis[it])
            {
                dfs(it,vis,cnt,adj);
            }
        }
    }
    int maximumDetonation(vector<vector<int>>& bombs) 
    {
        int n=bombs.size();
        vector<vector<int>>adj(n);
        for (int i=0;i<n;i++)
        {
            long long x=bombs[i][0];
            long long y=bombs[i][1];
            long long r=bombs[i][2];
            for (long long j=0;j<n;j++)
            {
                if (i==j) continue;
                long long xx=abs(x-bombs[j][0]);
                long long yy=abs(y-bombs[j][1]);
                if (xx*xx + yy*yy <= r*r )
                {
                    adj[i].push_back(j);
                }
            }
        }
        int maxCnt=0;
        
        for (int i=0;i<n;i++)
        {
            vector<int>vis(n,0);
            queue<int>q;
            int cnt=0;
            dfs(i,vis,cnt,adj);
            if (cnt>maxCnt) maxCnt=cnt;
        }
        return maxCnt;
        
    }
