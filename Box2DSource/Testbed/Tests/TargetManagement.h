/*
 * TargetManagement.h
 *
 *  Created on: 9 Apr 2013
 *      Author: Vilius Narbutas
 */

#ifndef TARGETMANAGEMENT_H_
#define TARGETMANAGEMENT_H_

#include <iostream>
#include <list>
#include <vector>
#include <stack>

#include "Level.h"
#include "Geometry.h"
#include "Graph.h"

using namespace std;

class TargetManagement {
public:
	vector<int> *targets;
	vector<int> *discovered;
	vector<LevelObject*> *objects;
	vector<vector<Point*>*> *corners;
	Graph *graph;
	vector<int> *info;
	stack<vector<int>> lastCorners;
	stack<Point*> lastPoints;
	vector<Point*> range;

	TargetManagement(vector<LevelObject*> *o, vector<vector<Point*>*> *c, Graph *g, vector<int> *info);
	~TargetManagement();

	int initialTarget ();
	int furtherTarget ();
	Point* findNewCorner (vector<Point*> *recCorners, list<int> *g, vector<Point*> *points,
			Point *corner, Point *nextCorner);
	void findTargets ();
	int setCorner (Point *point);
	bool foundNewTarget (int currentTarget);
	bool traceConnection ();
	bool rollBack ();
	void clearStack ();
	bool reachedEnd (Point* point, int count);
};

#endif /* TARGETMANAGEMENT_H_ */
