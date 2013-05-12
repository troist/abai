#include "AI.h"

AI::AI()
	: useful_end(-1)
{

}

AI::AI(Level* _level)
	: level(_level), useful_end(-1)
{
	//std::cout << "AI constructed with level pointer" << std::endl;
}

b2Vec2 AI::chooseTarget()
{
	int i = level->objects.size () - 1;
	while (i != useful_end)
	{
		useful_end++;
		//cout << level->objects[j] -> object -> editorGroup << endl;

		if (level->objects[useful_end] -> object -> editorGroup != "WOOD_GROUP" &&
				level->objects[useful_end] -> object -> editorGroup != "ICE_GROUP" &&
				level->objects[useful_end] -> object -> editorGroup != "PIG_GROUP" &&
				level->objects[useful_end] -> object -> editorGroup != "STONE_GROUP")
		{
			LevelObject *t = level->objects[useful_end];
			while (level->objects[i] -> object -> editorGroup != "WOOD_GROUP" &&
					level->objects[i] -> object -> editorGroup != "ICE_GROUP" &&
					level->objects[i] -> object -> editorGroup != "PIG_GROUP" &&
					level->objects[i] -> object -> editorGroup != "STONE_GROUP")
			{
				i--;
			}
			level->objects[useful_end] = level->objects[i];
			level->objects[i] = t;
			i--;
		}
	}
	useful_end++;

	// Create KRR object.
	KRR krr = KRR (&level->objects);

	// Find corners.
	Geometry *g = new Geometry (useful_end);
	g -> findCorners (&level->objects);

	// Produce a simple graph.
	Graph *graph = new Graph (useful_end, true);

	krr.produceSimpleGraph (g -> corners, graph);
	krr.findTargets ();

	//std::cout << graph << std::endl;

	int target = *(krr.tm->targets->begin());

	return b2Vec2( level->objects.at(target)->x, level->objects.at(target)->y * -1 );
}