vector<int> bfs(vector<vector<int>> &adjList) {
	vector<int> bfs;
	int n = adjList.size();
	vector<int> visited(n, 0);
	
	for(int i = 0; i < visited.size(); i++){
		if(!visited[i]){
			queue<int> q;
			q.push(i);
			visited[i] = 1;
			while(!q.empty()){
				int topElem = q.front();
				bfs.push_back(topElem);
				q.pop();
				for(auto it : adjList[topElem]){
					if(!visited[it]){
						q.push(it);
						visited[it] = 1;
					}
				}
			}
		}
	}
	
	return bfs;
	
	
	
}