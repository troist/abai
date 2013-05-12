import json

s = ""

levelFile = file("Level1-21.json","r")
levelJson = levelFile.read()
levelParsed = json.loads(levelJson)

world = levelParsed['world']

for obj in world:
    params = world[obj]
    s = s + "        level.addObject( new LevelObject( " + str(params['x']) + ", " + str(params['y']) + ", " + str(params['angle']) + ", ObjectStaticsClass::createObject(\"" + str(params['id']) + "\") ) );\n"

staticOut = file('levelsout.txt','w')
staticOut.write(s)