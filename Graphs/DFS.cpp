void calldfs(int i, vector<int> &vis, vector<int> &ans, vector<vector<int>>& adjList){
	if(!vis[i]){
		ans.push_back(i);
		vis[i] = 1;
		for(auto it : adjList[i]){
			calldfs(it, vis, ans, adjList);
		}
	}
}

vector<int> dfs(vector<vector<int>> &adjList) {
	vector<int> ans;
	int n = adjList.size();
	vector<int> vis(n, 0);
	
	for(int i = 0; i < vis.size(); i++){
		calldfs(i, vis, ans, adjList);
	}
	return ans;
}