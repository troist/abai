/*
 * KRR.cpp
 *
 *  Created on: 9 Apr 2013
 *      Author: root
 */

#include "KRR.h"

KRR::KRR(vector<LevelObject*> *o) {
	objects = o;
}

KRR::~KRR() {
	// TODO Auto-generated destructor stub
}

void KRR::findTargets()
{
	tm = new TargetManagement (objects, corners, graph, &info);
}

void KRR::produceSimpleGraph (vector<vector<Point*>*> *c, Graph *g)
{
	corners = c;
	graph = g;
	info = vector<int> (objects->size ());
	int i = 0;
	int t = 0;
	for (vector<vector<Point*>*>::iterator it = corners -> begin (); it != corners -> end (); it++)
	{
		while (objects -> at (i) -> object -> shape -> shapeType() != 'r')
		{
			info[i] = -1;
			i++;
		}
		info[i] = t;

		for (int j = 0; j < 4; j++)
		{
			int z = 0;
			for (vector<vector<Point*>*>::iterator it2 = corners -> begin (); it2 != corners -> end (); it2++)
			{
				while (objects -> at (z) -> object -> shape -> shapeType() != 'r')
				{
					z++;
				}

				if ((*it) != (*it2))
				{
					if (Geometry::pointOfLine ((*it) -> at (j), (*it2) -> at (0), (*it2) -> at (1)))
					{
						try
						{
							graph -> addEdge (i, z, (*it) -> at (j));
						}
						catch (int e)
						{
							cout << "Error " << e << ":Graph does not contain some provided node" << endl;
						}
					}
					else if (Geometry::pointOfLine ((*it) -> at (j), (*it2) -> at (0), (*it2) -> at (3)))
					{
						try
						{
							graph -> addEdge (i, z, (*it) -> at (j));
						}
						catch (int e)
						{
							cout << "Error " << e << ":Graph does not contain some provided node" << endl;
						}
					}
					else if (Geometry::pointOfLine ((*it) -> at (j), (*it2) -> at (1), (*it2) -> at (2)))
					{
						try
						{
							graph -> addEdge (i, z, (*it) -> at (j));
						}
						catch (int e)
						{
							cout << "Error " << e << ":Graph does not contain some provided node" << endl;
						}
					}
					else if (Geometry::pointOfLine ((*it) -> at (j), (*it2) -> at (2), (*it2) -> at (3)))
					{
						try
						{
							graph -> addEdge (i, z, (*it) -> at (j));
						}
						catch (int e)
						{
							cout << "Error " << e << ":Graph does not contain some provided node" << endl;
						}
					}
				}
				z++;
			}
		}
		i++;
		t++;
	}
}
