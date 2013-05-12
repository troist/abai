/*
 * Geometry.h
 *
 *  Created on: 6 Apr 2013
 *      Author: williux
 */

#include <iostream>
#include <vector>

#include "Level.h"

using namespace std;

#ifndef GEOMETRY_H_
#define GEOMETRY_H_

struct Point
{
	double x, y;

	Point (double x, double y)
	{
		this -> x = x;
		this -> y = y;
	}

	Point ()
	{
		this -> x = 0;
		this -> y = 0;
	}

	friend ostream& operator<<(ostream &os, const Point *p)
	{
		os << p -> x << " " << p -> y;
		return os;
	}
	friend ostream& operator<<(ostream &os, const Point &p)
	{
		os << p.x << " " << p.y;
		return os;
	}
};

class Geometry {
public:
	vector<vector<Point*>*> *corners;
	int useful_end;

	Geometry(int n);
	~Geometry();

	void findRecCorners (LevelObject *object, vector<Point*> *rec);
	void findCorners (vector<LevelObject*> *objects);
	static bool pointOfLine (Point *check, Point *one, Point *two);
	static double twoPointDistance (Point *one, Point *two);
};

#endif /* GEOMETRY_H_ */
