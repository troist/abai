/*
 * Geometry.cpp
 *
 *  Created on: 6 Apr 2013
 *      Author: williux
 */

#define _USE_MATH_DEFINES
#define SIZESCALE 40

#include <cmath>

#include "Geometry.h"

Geometry::Geometry(int n) {
	corners = new vector<vector<Point*>*> ();
	useful_end = n;
}

Geometry::~Geometry() {
	corners -> clear ();
}

void Geometry::findRecCorners (LevelObject *object, vector<Point*> *rec)
{
	double xdist, ydist;
	RectangleShape *s = (RectangleShape*)object -> object -> shape;

	ydist = sin (object -> angle * M_PI / 180);
	xdist = cos (object -> angle * M_PI / 180);
	double x1, x2, x3, x4;
	double y1, y2, y3, y4;

	y1 = (s -> height/SIZESCALE) * xdist + (-1) * object -> y - (s -> width/SIZESCALE) * ydist;
	x1 = object -> x - (s -> width/SIZESCALE) * xdist - (s -> height/SIZESCALE) * ydist;

	y2 = (-1) * object -> y - (s -> height/SIZESCALE) * xdist - (s -> width/SIZESCALE) * ydist;
	x2 = object -> x - (s -> width/SIZESCALE) * xdist + (s -> height/SIZESCALE) * ydist;

	y3 = (-1) * object -> y + (s -> width/SIZESCALE) * ydist + (s -> height/SIZESCALE) * xdist;
	x3 = object -> x + (s -> width/SIZESCALE) * xdist - (s -> height/SIZESCALE) * ydist;

	y4 = (-1) * object -> y + (s -> width/SIZESCALE) * ydist - (s -> height/SIZESCALE) * xdist;
	x4 = object -> x + (s -> height/SIZESCALE) * ydist + (s -> width/SIZESCALE) * xdist;

	double sx1, sx2, sy1, sy2, dx1, dy1, dx2, dy2;
	if (y1 + 0.1 < y2 || (y1 < y2 + 0.1 && x1 + 0.1 < x2))
	{
		sx1 = x1;
		sy1 = y1;
		dx1 = x2;
		dy1 = y2;
	}
	else
	{
		sx1 = x2;
		sy1 = y2;
		dx1 = x1;
		dy1 = y1;
	}
	if (y3 + 0.1 < y4 || (y3 < y4 + 0.1 && x3 + 0.1 < x4))
	{
		sx2 = x3;
		sy2 = y3;
		dx2 = x4;
		dy2 = y4;
	}
	else
	{
		sx2 = x4;
		sy2 = y4;
		dx2 = x3;
		dy2 = y3;
	}
	if (sy1 + 0.1 < sy2 || (sy1 < sy2 + 0.1 && sx1 + 0.1 < sx2))
	{
		rec -> at (0) -> x = sx1;
		rec -> at (0) -> y = sy1;
		sx1 = sx2;
		sy1 = sy2;
	}
	else
	{
		rec -> at (0) -> x = sx2;
		rec -> at (0) -> y = sy2;
	}
	if (dy1 + 0.1 < dy2 || (dy1 < dy2 + 0.1 && dx1 + 0.1 < dx2))
	{
		rec -> at (3) -> x = dx2;
		rec -> at (3) -> y = dy2;
	}
	else
	{
		rec -> at (3) -> x = dx1;
		rec -> at (3) -> y = dy1;
		dx1 = dx2;
		dy1 = dy2;
	}
	if (sy1 + 0.1 < dy1 || (sy1 < dy1 + 0.1 && sx1 + 0.1 < dx1))
	{
		rec -> at (1) -> x = sx1;
		rec -> at (1) -> y = sy1;
		rec -> at (2) -> x = dx1;
		rec -> at (2) -> y = dy1;
	}
	else
	{
		rec -> at (2) -> x = sx1;
		rec -> at (2) -> y = sy1;
		rec -> at (1) -> x = dx1;
		rec -> at (1) -> y = dy1;
	}

	x1 = rec -> at (2) -> x;
	y1 = rec -> at (2) -> y;
	rec -> at (2) -> x = rec -> at (3) -> x;
	rec -> at (2) -> y = rec -> at (3) -> y;
	rec -> at (3) -> x = x1;
	rec -> at (3) -> y = y1;

	if (rec -> at (1) -> x < rec -> at (3) -> x)
	{
		x1 = rec -> at (1) -> x;
		y1 = rec -> at (1) -> y;
		rec -> at (1) -> x = rec -> at (3) -> x;
		rec -> at (1) -> y = rec -> at (3) -> y;
		rec -> at (3) -> x = x1;
		rec -> at (3) -> y = y1;
	}

	/*cout << object -> angle << endl;
	cout << s -> width/SIZESCALE << " " << s -> height/SIZESCALE << endl;
	cout << object -> x << " " << -1 * object -> y << endl;
	cout << rec -> at (0) -> x << " " << rec -> at (0) -> y << " ";
	cout << rec -> at (1) -> x << " " << rec -> at (1) -> y << endl;
	cout << rec -> at (2) -> x << " " << rec -> at (2) -> y << " ";
	cout << rec -> at (3) -> x << " " << rec -> at (3) -> y << endl << endl;*/
}

void Geometry::findCorners (vector<LevelObject*> *objects)
{
	int i = 0;
	for (vector<LevelObject*>::iterator it = objects -> begin ();
			it != objects -> end () - (objects -> size () - useful_end); it++)
	{
		if ((*it) -> object -> shape -> shapeType () == 'r')
		{
			/*
			 * c1 is top right corner;
			 * c2 is bottom right corner;
			 * c3 is top left corner;
			 * c4 is bottom left corner;
			 * c1-c3-c4-c2;
			 */
			vector<Point*> *p = new vector<Point*> ();
			corners->push_back (p);
			corners->back () -> push_back (new Point ());
			corners->back () -> push_back (new Point ());
			corners->back () -> push_back (new Point ());
			corners->back () -> push_back (new Point ());
			//cout << i << endl;
			findRecCorners ((*it), corners->back ());
		}
		i++;
	}
	//cout << corners -> size () << endl;
}

// The function for checking whether the point is on the line.
bool Geometry::pointOfLine (Point *check, Point *one, Point *two)
{
	if (((check -> x - 0.18 < one -> x && check -> x + 0.18 > two -> x) ||
			(check -> x + 0.18 > one -> x && check -> x - 0.18 < two -> x)) &&
			((check -> y - 0.18 < one -> y && check -> y + 0.18 > two -> y) ||
			(check -> y + 0.18 > one -> y && check -> y - 0.18 < two -> y)))
	{
		double dist = twoPointDistance(one, two);
		double dist1 = twoPointDistance(check, two);
		double dist2 = twoPointDistance(one, check);
		if (dist + 0.18 > dist1 + dist2)
		{
			return true;
		}
	}

	return false;
}

// This function find the distance between two points
double Geometry::twoPointDistance (Point *one, Point *two)
{
	return std::sqrt (std::pow ((one -> x - two -> x), 2) + std::pow ((one -> y - two -> y), 2));
}
