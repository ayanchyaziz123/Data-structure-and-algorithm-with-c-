#include<bits/stdc++.h>
using namespace std;

int VERTEX;
int EDGE;

void addEdge(vector<int> adj[],int src, int dst){
	adj[src].push_back(dst);
	adj[dst].push_back(src);
}

// Time Complexity = 0(Vertex + Edge)
void breadth_first_search(vector<int> adj[], int src){
	vector<bool> visited(VERTEX);
	vector<int> cost(VERTEX);
	queue<int> q;
	q.push(src);
	visited[src] = true;
	while(!q.empty()){
		int pr = q.front();
		cout << pr << endl;
		q.pop();
		for(int chd: adj[pr]){
			if(!visited[chd]){
				q.push(chd);
				visited[chd] = true;
				cost[chd] = cost[pr] + 1;
			}
		}
	}
}

int main(){
	cin >> VERTEX >> EDGE;
	vector<int> adj[VERTEX];
	for(int i = 0; i < EDGE; i++){
		int src, dst;
		cin >> src >> dst;
		addEdge(adj, src, dst);
	}
	int src;
	cin >> src;
	breadth_first_search(adj, src);

	return 0;
}