/*
 * TargetManagement.cpp
 *
 *  Created on: 9 Apr 2013
 *      Author: Vilius Narbutas
 */

#include "TargetManagement.h"

TargetManagement::TargetManagement(vector<LevelObject*> *o, vector<vector<Point*>*> *c,
		Graph *g, vector<int> *i) {
	//TODO: Implement
	targets = new vector<int> ();
	discovered = new vector<int> ();
	lastCorners = stack<vector<int> > ();
	lastPoints = stack<Point*> ();
	range = vector<Point*> ();
	objects = o;
	corners = c;
	graph = g;
	info = i;

	findTargets ();
	/*for (vector<int>::iterator it = targets->begin(); it != targets->end(); it++)
	{
		cout << (*it) << " ";
	}
	cout << endl;*/
}

TargetManagement::~TargetManagement() {
	targets -> clear ();
	discovered -> clear ();
	range.clear ();
}

int TargetManagement::initialTarget ()
{
	int ylow = 0;
	int skipped = 0;
	for (unsigned int i = 0; i < corners -> size (); i++)
	{
		while (objects -> at (i + skipped) -> object -> shape -> shapeType() != 'r')
		{
			skipped++;
		}

		if (corners -> at (i) -> at (0) -> y < corners -> at (info->at(ylow)) -> at (0) -> y - 0.2)
		{
			ylow = i + skipped;
		}
		else if (corners -> at (i) -> at (0) -> y - 0.2 < corners -> at (info->at(ylow)) -> at (0) -> y
				&&
				corners -> at (i) -> at (0) -> x - 0.2 < corners -> at (info->at(ylow)) -> at (0) -> x)
		{
			ylow = i + skipped;
		}
	}

	// Set initial range value.
	range.push_back (corners -> at (info -> at (ylow)) -> at (0));
	range.push_back (corners -> at (info -> at (ylow)) -> at (1));
	return ylow;
}

int TargetManagement::furtherTarget ()
{
	int ylow = -1;
	int skipped = 0;
	for (unsigned int i = 0; i < corners -> size (); i++)
	{
		while (objects -> at (i + skipped) -> object -> shape -> shapeType() != 'r')
		{
			skipped++;
		}

		if (discovered -> at (i + skipped) == 0 && range[1] -> x < corners -> at (i) -> at (1) -> x)
		{
			if (ylow == -1)
			{
				ylow = i+skipped;
			}

			if (corners -> at (i) -> at (0) -> y < corners -> at (info->at(ylow)) -> at (0) -> y - 0.2)
			{
				ylow = i + skipped;
			}
			else if (corners -> at (i) -> at (0) -> y - 0.2 < corners -> at (info->at(ylow)) -> at (0) -> y
					&&
					corners -> at (i) -> at (0) -> x - 0.2 < corners -> at (info->at(ylow)) -> at (0) -> x)
			{
				ylow = i + skipped;
			}
		}
	}

	return ylow;
}

Point* TargetManagement::findNewCorner (vector<Point*> *recCorners, list<int> *g,
		vector<Point*> *points, Point *corner, Point *nextCorner)
{
	int newCorner = -1;
	Point *newPoint = nextCorner;

	// Distance between two corners
	double dist1 = Geometry::twoPointDistance (corner, nextCorner);
	list<int>::iterator it = g -> begin ();
	for (unsigned int i = 0; i < g -> size (); i++)
	{
		//cout << recCorners -> at (corner) << " " << newPoint << " " << points -> at (i) << " " << (*it);
		//cout << " " << discovered -> at ((*it)) << endl;
		double dist2 = Geometry::twoPointDistance (points->at(i), corner);
		if (Geometry::pointOfLine(points -> at (i), corner, nextCorner) &&
				dist1 + 0.1 >= dist2 && discovered -> at ((*it)) != 2)
		{
			// Check if the end is not reached.
			Point *one = recCorners -> at (1);
			Point *two = recCorners -> at (0);
			Point *three = corners -> at (info -> at ((*it))) -> at (1);
			if ((one -> y - 0.2 > range[1] -> y && two -> y - 0.2 > range[1] -> y)
					|| three -> x + 0.2 > range[1] -> x)
			{
				newPoint = points->at(i);
				newCorner = (*it);
				dist1 = dist2;
			}
		}
		if (discovered -> at ((*it)) == 0)
		{
			discovered -> at ((*it)) = 1;
		}
		it++;
	}

	if (newCorner != -1 && discovered -> at (newCorner) != 2)
	{
		// Extend searched range
		Point *one = corners -> at (info -> at (newCorner)) -> at (1);
		Point *two = corners -> at (info -> at (newCorner)) -> at (0);
		if (one -> y - 0.2 <= range[0] -> y && one -> x > range[1] -> x)
		{
			range[1] = one;
		}
		else if (two -> y - 0.2 <= range [0] -> y && two -> x > range[1] -> x)
		{
			range[1] = two;
		}

		targets -> push_back (newCorner);
		discovered -> at (newCorner) = 2;
		lastCorners.push(vector<int>());
		lastCorners.top().push_back (newCorner);
		lastPoints.push (newPoint);
	}

	return newPoint;
}

void TargetManagement::findTargets ()
{
	int ylow;
	if (discovered -> size () == 0)
	{
		ylow = initialTarget ();

		for (unsigned int j = 0; j < objects -> size (); j++)
		{
			discovered -> push_back (0);
		}
	}
	else
	{
		ylow = furtherTarget ();
	}
	int corner = 0;
	if (ylow != -1)
	{
		targets -> push_back (ylow);
		discovered -> at (ylow) = 2;

		// c1-c2-c3-c4 Atvirksciai
		int count = 0;
		int currentTarget = targets -> back ();
		lastCorners.push(vector<int>());
		lastCorners.top().push_back(currentTarget);
		lastCorners.top().push_back (0);
		lastCorners.top().push_back (0);
		Point *currentPoint = corners -> at (info->at(currentTarget)) -> at (corner);
		lastPoints.push(currentPoint);
		while (count < 4)
		{
			//cout << discovered -> at (ylow) << endl;
			vector<Point*> *recCorners = corners -> at (info->at(currentTarget));
			list<int> *g = &(graph -> graph -> at (currentTarget));
			vector<Point*> *points = &(graph -> connections -> at (currentTarget));
			if (corner == 0) // Goes to 3
			{
				Point *nextCorner = recCorners -> at (3);
				currentPoint = findNewCorner (recCorners, g, points, currentPoint, nextCorner);

				if (foundNewTarget(currentTarget))
				{
					currentTarget = lastCorners.top()[0];
					corner = setCorner (currentPoint);
					count = 0;
					lastCorners.top().push_back (corner);
					lastCorners.top().push_back(count);
				}
				else if (reachedEnd (currentPoint, count))
				{
					corner = 3;
					count++;
					lastCorners.top()[1] = corner;
					lastCorners.top()[2] = count;
					lastPoints.top() = currentPoint;
				}
				else
				{
					corner = -1;
				}
			}
			else if (corner == 1) // Goes to 0
			{
				Point *nextCorner = recCorners -> at (0);
				currentPoint = findNewCorner (recCorners, g, points, currentPoint, nextCorner);


				if (foundNewTarget(currentTarget))
				{
					currentTarget = lastCorners.top()[0];
					corner = setCorner (currentPoint);
					count = 0;
					lastCorners.top().push_back (corner);
					lastCorners.top().push_back(count);
				}
				else if (reachedEnd (currentPoint, count))
				{
					corner = 0;
					count++;
					lastCorners.top()[1] = corner;
					lastCorners.top()[2] = count;
					lastPoints.top() = currentPoint;
				}
				else
				{
					corner = -1;
				}
			}
			else if (corner == 2) // Goes to 1
			{
				Point *nextCorner = recCorners -> at (1);
				currentPoint = findNewCorner (recCorners, g, points, currentPoint, nextCorner);


				if (foundNewTarget(currentTarget))
				{
					currentTarget = lastCorners.top()[0];
					corner = setCorner (currentPoint);
					count = 0;
					lastCorners.top().push_back (corner);
					lastCorners.top().push_back(count);
				}
				else if (reachedEnd (currentPoint, count))
				{
					corner = 1;
					count++;
					lastCorners.top()[1] = corner;
					lastCorners.top()[2] = count;
					lastPoints.top() = currentPoint;
				}
				else
				{
					corner = -1;
				}
			}
			else if (corner == 3)				   // Goes to 2
			{
				Point *nextCorner = recCorners -> at (2);
				currentPoint = findNewCorner (recCorners, g, points, currentPoint, nextCorner);

				if (foundNewTarget(currentTarget))
				{
					currentTarget = lastCorners.top()[0];
					corner = setCorner (currentPoint);
					count = 0;
					lastCorners.top().push_back (corner);
					lastCorners.top().push_back(count);
				}
				else if (reachedEnd (currentPoint, count))
				{
					corner = 2;
					count++;
					lastCorners.top()[1] = corner;
					lastCorners.top()[2] = count;
					lastPoints.top() = currentPoint;
				}
				else
				{
					corner = -1;
				}
			}
			else
			{
				lastPoints.pop ();
				Point *nextCorner = lastPoints.top ();
				lastPoints.push (currentPoint);
				currentPoint = findNewCorner (recCorners, g, points, currentPoint, nextCorner);

				if (foundNewTarget(currentTarget))
				{
					currentTarget = lastCorners.top()[0];
					corner = setCorner (currentPoint);
					count = 0;
					lastCorners.top().push_back (corner);
					lastCorners.top().push_back(count);
				}
				else
				{
					count++;
					lastCorners.top()[2] = count;
					lastPoints.top() = currentPoint;
				}
			}

			if (count == 4 && traceConnection ())
			{
				// Roll back searching.
				if (rollBack ())
				{
					currentTarget = lastCorners.top()[0];
					corner = lastCorners.top()[1];
					count = lastCorners.top()[2];
					currentPoint = lastPoints.top();
					//lastPoints.pop ();
				}
			}
		}
		clearStack ();
		findTargets ();
	}
}

// This function changes focus corner.
int TargetManagement::setCorner (Point *point)
//TODO: This function will set a next corner that may cause to miss some connection before
//connection point and this corner.
{
	for (int i = 0; i < 4; i++)
	{
		Point *check = corners -> at (info -> at (targets -> back())) -> at (i);
		if (check == point)
		{
			return i;
		}
		else
		{
			if (i == 0)
			{
				Point *two = corners -> at (info -> at (targets -> back())) -> at (1);
				if (Geometry::pointOfLine(point, check, two))
				{
					return 1;
				}
				two = corners -> at (info -> at (targets -> back())) -> at (3);
				if (Geometry::pointOfLine(point, check, two))
				{
					return 0;
				}
			}
			else if (i == 1)
			{
				Point *two = corners -> at (info -> at (targets -> back())) -> at (2);
				if (Geometry::pointOfLine(point, check, two))
				{
					return 2;
				}
				two = corners -> at (info -> at (targets -> back())) -> at (0);
				if (Geometry::pointOfLine(point, check, two))
				{
					return 1;
				}
			}
			else if (i == 2)
			{
				Point *two = corners -> at (info -> at (targets -> back())) -> at (3);
				if (Geometry::pointOfLine(point, check, two))
				{
					return 3;
				}
				two = corners -> at (info -> at (targets -> back())) -> at (1);
				if (Geometry::pointOfLine(point, check, two))
				{
					return 2;
				}
			}
			else
			{
				Point *two = corners -> at (info -> at (targets -> back())) -> at (0);
				if (Geometry::pointOfLine(point, check, two))
				{
					return 0;
				}
				two = corners -> at (info -> at (targets -> back())) -> at (2);
				if (Geometry::pointOfLine(point, check, two))
				{
					return 3;
				}
			}
		}
	}
}

// This function declares if a new target was found;
bool TargetManagement::foundNewTarget(int currentTarget)
{
	if (!lastCorners.empty ())
	{
		if (currentTarget != lastCorners.top()[0])
		{
			return true;
		}
	}

	return false;
}


// This function returns true if it's possible to search using older targets.
bool TargetManagement::traceConnection()
{
	if (lastCorners.size() >= 2)
	{
		Point *one = corners -> at (info -> at (lastCorners.top ()[0])) -> at (1);
		Point *two = corners -> at (info -> at (lastCorners.top ()[0])) -> at (0);
		if (one -> y >= two -> y + 0.18)
		{
			one = two;
		}
		if (one != range[1])
		{
			return true;
		}
	}
	return false;
}


// This function rolls back searching
bool TargetManagement::rollBack()
{
	while (lastCorners.size () >= 2 && traceConnection())
	{
		lastCorners.pop();
		lastPoints.pop();
		int currentTarget = lastCorners.top()[0];
		list<int> *g = &(graph -> graph -> at (currentTarget));
		for (list<int>::iterator it = g -> begin(); it != g -> end (); it++)
		{
			if (discovered -> at ((*it)) != 2)
			{
				return true;
			}
		}
	}

	return false;
}


// This function clears the stack of targets for rolling back
void TargetManagement::clearStack()
{
	while (!lastCorners.empty())
	{
		lastCorners.top().clear();
		lastCorners.pop();
		lastPoints.pop();
	}
}


// This function checks if the end of searching has been reached.
bool TargetManagement::reachedEnd (Point *nextCorner, int count)
{
	Point *currentPoint = lastPoints.top();
	lastPoints.pop ();

	//vector<int> currentTarget = lastCorners.top ();
	//lastCorners.pop ();

	if (lastPoints.size () != 0 && count == 3)
	{
		if (nextCorner != lastPoints.top ())
		{
			lastPoints.push (nextCorner);
			return false;
		}
	}

	lastPoints.push (currentPoint);
	return true;
}
