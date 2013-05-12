/*
 * KRR.h
 *
 *  Created on: 9 Apr 2013
 *      Author: Vilius Narbutas
 */

#ifndef KRR_H_
#define KRR_H_

#include <vector>

#include "Geometry.h"
#include "TargetManagement.h"
#include "Level.h"
#include "Graph.h"

class KRR {
public:
	TargetManagement *tm;
	vector<LevelObject*> *objects;
	vector<int> info;
	Graph *graph;
	vector<vector<Point*>*> *corners;

	KRR(vector<LevelObject*> *o);
	~KRR();

	void findTargets ();
	void produceSimpleGraph (vector<vector<Point*>*> *c, Graph *g);
};

#endif /* KRR_H_ */
