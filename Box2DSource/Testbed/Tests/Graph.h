/*
 * Graph.h
 *
 *  Created on: 4 Apr 2013
 *      Author: Vilius Narbutas
 */

#ifndef GRAPH_H_
#define GRAPH_H_

#include <list>
#include <vector>
#include <iostream>

#include "Geometry.h"

using namespace std;

class Graph
{
public:
	vector<list<int>> *graph;
	vector<vector<Point*>> *connections;

	Graph (int size, bool c);
	Graph (vector<list<int>> *graph);
	~Graph();

	void setNumberOfNodes (int size);

	bool hasEdge (int i, int j);

	void addEdge (int i, int j);
	void addEdge (int i, int j, Point *p);

	friend ostream& operator<< (ostream &os, Graph &graph)
	{
		for (unsigned int i = 0; i < graph.graph -> size (); i++)
		{
			os << i << ": ";
			for (list<int>::iterator it2 = graph.graph -> at (i).begin (); it2 != graph.graph -> at (i).end (); it2++)
			{
				os << (*it2) << " ";
			}
			os << endl;
		}
		return os;
	}
	friend ostream& operator<< (ostream &os, Graph *graph)
	{
		for (unsigned int i = 0; i < graph -> graph -> size (); i++)
		{
			os << i << ": ";
			for (list<int>::iterator it2 = graph -> graph -> at (i).begin ();
					it2 != graph -> graph -> at (i).end (); it2++)
			{
				os << (*it2) << " ";
			}
			os << endl;
		}
		return os;
	}
};

#endif /* GRAPH_H_ */
