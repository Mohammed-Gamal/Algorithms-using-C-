#include <iostream>
#include <list>
using namespace std;

class Graph 
{
	private:
		// No. of vertices
		int numVertices; 
		
		// Pointer to an array containing adjacency lists
		list<int> *adjLists;
	
	public:
		// Constructor
		Graph(int vertices);
		
		// function to add an edge to graph
		void addEdge(int src, int dest);
		
		// prints BFS traversal from a given source startVertex
		void BFS(int startVertex);
};

// Create a graph with given vertices, and maintain an adjacency list
Graph::Graph(int vertices)
{
  numVertices = vertices;
  adjLists = new list<int>[vertices];
}

// Add edges to the graph
void Graph::addEdge(int src, int dest)
{
  adjLists[src].push_back(dest);
  adjLists[dest].push_back(src);
}

// BFS algorithm
void Graph::BFS(int startVertex)
{
	// Mark all the vertices as not visited
	bool *visited = new bool[numVertices];
	
	for (int i = 0; i < numVertices; i++)
		visited[i] = false;
	
	// Create a queue for BFS
	list<int> queue;
	
	// Mark the current node as visited and enqueue it
	visited[startVertex] = true;
	queue.push_back(startVertex);
	
	// 'i' will be used to get all adjacent vertices of a vertex
	list<int>::iterator i;
	
	while (!queue.empty())
	{
		// Dequeue a vertex from queue and print it
		int currVertex = queue.front();
		cout << "Visited " << currVertex << " ";
		queue.pop_front();
		
		
		// Get all adjacent vertices of the dequeued vertex s.
		// If an adjacent has not been visited, then mark it visited and enqueue it
		for (i = adjLists[currVertex].begin(); i != adjLists[currVertex].end(); ++i)
		{
			int adjVertex = *i;
			
			if (!visited[adjVertex])
			{
				visited[adjVertex] = true;
				queue.push_back(adjVertex);
			}
		}
	}
}

int main()
{
	// Create a graph
	Graph g(4);
	g.addEdge(0, 1);
	g.addEdge(0, 2);
	g.addEdge(1, 2);
	g.addEdge(2, 0);
	g.addEdge(2, 3);
	g.addEdge(3, 3);
	
	cout << "Following is Breadth First Search Traversal " << "(starting from vertex 2) \n";
	
	g.BFS(2);
	
	return 0;
}
