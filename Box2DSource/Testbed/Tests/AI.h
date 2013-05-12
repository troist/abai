#ifndef AI_H
#define AI_H

#include <Box2D/Box2D.h>

#include "Level.h"
#include "Graph.h"
#include "Geometry.h"
#include "KRR.h"

class AI
{
public:
	Level* level;

	int useful_end;

	b2Vec2 chooseTarget();

	AI();
	AI(Level* _level);
};

#endif