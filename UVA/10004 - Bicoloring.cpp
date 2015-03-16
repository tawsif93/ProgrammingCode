#include <iostream>
#include <vector>
#include <queue>
#include <sstream>
#include <algorithm>
#include <stack>
#include <cmath>
#include <iterator>
#include <list>


using namespace std;


struct Node
{
	int color ;
	list <int> nextNode ;
};

struct Graph
{
	int v ;
	list <Node> nodes ;
};

Graph creatGraph (int v )
{
	Graph newGraph ;
	Node newNode;

	for (int i = 0; i < v; ++i)
	{
		newGraph.nodes.push_back(newNode);
	}

	return newGraph ;
}

void addEdge( Graph &graph , int currentNode , int nextNode )
{
	//Adding Edge from current node to Next node 

	list <Node> ::iterator it = graph.nodes.begin();
	advance(it , currentNode );
	it->nextNode.push_front(nextNode );

	//Adding Edge from next Node to Current Node 

	it = graph.nodes.begin();
	advance(it , nextNode);
	it->nextNode.push_front(currentNode);

}

bool bfs (Graph &graph)
{
	queue < int > vertex ;
	vertex.push(0);
	
	bool bicolor = true ;

	while(!vertex.empty()) {
	    int u = vertex.front();
	    vertex.pop() ;
	    
	    list<Node> ::iterator it = graph.nodes.begin();
	    
	    advance(it , u) ;
	    list<int> ::iterator it1 = it->nextNode.begin();

	    for (int i = 0; i < it->nextNode.size(); ++i)
	    {
   		    list<Node> ::iterator it2 = graph.nodes.begin();
   		    advance(it2 , *it1);

			if(i % 2== 0 && it2->color == 0)
			{
				it2->color = 1;
				vertex.push(*it1);
				it1++;
			}
			else if (i % 2== 1 && it2->color == 0)
			{
				it2->color = 2 ;
				vertex.push(*it1);
				it1++ ;
			}


	    }
	}
}

int main(int argc, char const *argv[])
{
	int edges , vertex ;

	while(cin >> vertex  && vertex)
	{
		
		cin >> edges ;

		Graph graph = creatGraph(vertex);
		for(int i = 0 ; i < edges ; i++)
		{
			int currentNode , nextNode ;
			cin >> currentNode ;
			cin >> nextNode ;

			addEdge(graph , currentNode , nextNode);
		}

	} 


	return 0;
}
