vector < int > lst;

void topsort(int source, bool visited[], vector < int> graph[]) { 
	
	visited[source] = true;
	
	rep(i,(int)graph[source].size())
		if(!visited[graph[source][i]]) topsort(graph[source][i],visited,graph);
	lst.pb(source);
	
}
