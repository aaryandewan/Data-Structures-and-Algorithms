vector topologicalSort(vector<vector<int>> &adjList) {
	int n = adjList.size();
	vector<int> indegree(n, 0);
	vector<int> topoSort;
	for(int i = 0; i < adjList.size(); i++){
		for(auto k : adjList[i]) indegree[k]++;
	}
	
	queue<int> q;
	int cnt = 0;
	for(int i = 0; i < n; i++){
		if(indegree[i] == 0) {
			q.push(i);
			topoSort.push_back(i);
		}
	}
	int top;
	while(!q.empty()){
		top = q.front();
		q.pop();
		for(auto k : adjList[top]){
			indegree[k]--;
			if(indegree[k] == 0) {
				q.push(k);
				topoSort.push_back(i);
			}
		}
	}
	
	//print topoSort
	
	
}
