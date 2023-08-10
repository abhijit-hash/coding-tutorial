class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        int n= numCourses;
        vector<int>adj[n];
        vector<int>indegree(n,0);
        vector<int>ans;
        for(auto x:prerequisites){
            adj[x[1]].push_back(x[0]);
        }

        for(int i=0;i<n;i++){
            for(auto j:adj[i]){
                indegree[j]++;
            }
        }

        queue<int>q;
        for(int i=0;i<n;i++){
            if(indegree[i]==0){
                q.push(i);
            }
        }
        while(!q.empty()){
            int front=q.front();
            ans.push_back(front);
            q.pop();

            for(auto x:adj[front]){
                indegree[x]--;
                if(indegree[x]==0){
                    q.push(x);
                }
            }
        }

        if(ans.size()==n){
            return ans;
        }
        return {};
    }
};
