/*
 * Graph.cpp
 *
 *  Created on: 4 Apr 2013
 *      Author: Vilius Narbutas
 */

#include "Graph.h"

Graph::Graph(int size, bool c)
{
	Graph::setNumberOfNodes (size);

	if (c)
	{
		connections = new vector<vector<Point*>> (size);
	}
}

Graph::Graph (vector<list<int>> *graph)
{
	Graph::graph = graph;
}

Graph::~Graph() {

}

void Graph::setNumberOfNodes (int size)
{
	graph = new vector<list<int>> (size);
}

bool Graph::hasEdge (int i, int j)
{
	if ((unsigned)i < graph -> size () && (unsigned)j < graph -> size ())
	{
		for (list<int>::iterator it = graph -> at (i).begin (); it != graph -> at(i).end(); it++)
		{
			if ((*it) == j)
			{
				return true;
			}
		}

		return false;
	}
	else
	{
		return false;
	}
}

// Make sure that point information is not needed when using this as no checking occurs.
void Graph::addEdge (int i, int j)
{
	if ((unsigned)i < graph -> size () && (unsigned)j < graph -> size ())
	{
		if (!hasEdge (i, j))
		{
			graph -> at (i).push_back(j);
			graph -> at (j).push_back(i);
		}
	}
	else
	{
		throw 13;
	}
}

void Graph::addEdge (int i, int j, Point *p)
{
	if ((unsigned)i < graph -> size () && (unsigned)j < graph -> size ())
	{
		if (!hasEdge (i, j))
		{
			graph -> at (i).push_back(j);
			graph -> at (j).push_back(i);

			connections -> at (i).push_back (p);
			connections -> at (j).push_back (p);
		}
	}
	else
	{
		throw 13;
	}
}
