#include "Level.h"

class LevelStaticsClass
{
public:
	static Level Level1_1()
	{
		Level level = Level();
		level.addObject( new LevelObject( 53.933, -8.342, 359.812, ObjectStaticsClass::createObject("WOOD_BLOCK_4X1") ) );
		level.addObject( new LevelObject( 57.463, -6.749, 269.86, ObjectStaticsClass::createObject("WOOD_BLOCK_8X1") ) );
		level.addObject( new LevelObject( 15.394, -1.02, 0, ObjectStaticsClass::createObject("BIRD_RED") ) );
		level.addObject( new LevelObject( 12.167, -1.019, 0, ObjectStaticsClass::createObject("BIRD_RED") ) );
		level.addObject( new LevelObject( 53.941, -11.222, 359.986, ObjectStaticsClass::createObject("WOOD_BLOCK_8X1") ) );
		level.addObject( new LevelObject( 0, -0.974, 0, ObjectStaticsClass::createObject("BIRD_RED") ) );
		level.addObject( new LevelObject( 55.996, -15.696, 89.994, ObjectStaticsClass::createObject("WOOD_BLOCK_8X1") ) );
		level.addObject( new LevelObject( 52.182, -15.696, 90.018, ObjectStaticsClass::createObject("WOOD_BLOCK_8X1") ) );
		level.addObject( new LevelObject( 53.921, -3.317, 359.747, ObjectStaticsClass::createObject("WOOD_BLOCK_4X1") ) );
		level.addObject( new LevelObject( 54.158, -20.17, 179.983, ObjectStaticsClass::createObject("WOOD_BLOCK_4X1") ) );
		level.addObject( new LevelObject( 50.304, -6.748, 270.084, ObjectStaticsClass::createObject("WOOD_BLOCK_8X1") ) );
		level.addObject( new LevelObject( 61.852, -3.658, 90, ObjectStaticsClass::createObject("WOOD_BLOCK_2X1") ) );
		level.addObject( new LevelObject( 45.78, -3.658, 90, ObjectStaticsClass::createObject("WOOD_BLOCK_2X1") ) );
		level.addObject( new LevelObject( 54.301, -23.605, 90, ObjectStaticsClass::createObject("WOOD_BLOCK_2X1") ) );
		level.addObject( new LevelObject( 58.208, -1.316, 0, ObjectStaticsClass::createObject("MISC_ESTRADE_9X3") ) );
		level.addObject( new LevelObject( 49.509, -1.3, 0, ObjectStaticsClass::createObject("MISC_ESTRADE_9X3") ) );
		level.addObject( new LevelObject( 54.023, -12.291, 359.985, ObjectStaticsClass::createObject("WOOD_BLOCK_2X1") ) );
		level.addObject( new LevelObject( 54.26, -21.602, 180, ObjectStaticsClass::createObject("STONE_BLOCK_2X2") ) );
		level.addObject( new LevelObject( 54.169, -13.88, 0.827, ObjectStaticsClass::createObject("PIG_BASIC_SMALL") ) );
		level.addObject( new LevelObject( 55.35, -5.83, 90.221, ObjectStaticsClass::createObject("ICE_BLOCK_4X1") ) );
		level.addObject( new LevelObject( 52.58, -5.822, 89.561, ObjectStaticsClass::createObject("ICE_BLOCK_4X1") ) );
		return level;
	}

	static Level Level1_4()
	{
		Level level = Level();

		level.addObject( new LevelObject( 65.54, -9.081, 329.714, ObjectStaticsClass::createObject("WOOD_BLOCK_4X1") ) );
		level.addObject( new LevelObject( 73.544, -13.655, 205.369, ObjectStaticsClass::createObject("ICE_BLOCK_8X1") ) );
		level.addObject( new LevelObject( 76.954, -7.554, 90.679, ObjectStaticsClass::createObject("ICE_BLOCK_8X1") ) );
		level.addObject( new LevelObject( 69.882, -9.632, 180.567, ObjectStaticsClass::createObject("WOOD_BLOCK_4X2") ) );
		level.addObject( new LevelObject( 65.788, -13.603, 335.673, ObjectStaticsClass::createObject("ICE_BLOCK_8X1") ) );
		level.addObject( new LevelObject( 64.193, -5.616, 269.944, ObjectStaticsClass::createObject("WOOD_BLOCK_4X1") ) );
		level.addObject( new LevelObject( 69.79, -12.632, 90.477, ObjectStaticsClass::createObject("ICE_BLOCK_4X1") ) );
		level.addObject( new LevelObject( 73.996, -9.004, 28.898, ObjectStaticsClass::createObject("WOOD_BLOCK_4X1") ) );
		level.addObject( new LevelObject( 75.307, -5.577, 270.045, ObjectStaticsClass::createObject("WOOD_BLOCK_4X1") ) );
		level.addObject( new LevelObject( 5.043, -0.972, 0, ObjectStaticsClass::createObject("BIRD_RED") ) );
		level.addObject( new LevelObject( 2.549, -1.136, 0, ObjectStaticsClass::createObject("BIRD_RED") ) );
		level.addObject( new LevelObject( 8.196, -0.925, 0, ObjectStaticsClass::createObject("BIRD_RED") ) );
		level.addObject( new LevelObject( 0, -1.082, 0, ObjectStaticsClass::createObject("BIRD_RED") ) );
		level.addObject( new LevelObject( 62.402, -7.576, 89.304, ObjectStaticsClass::createObject("ICE_BLOCK_8X1") ) );
		level.addObject( new LevelObject( 70.096, -4.682, 359.986, ObjectStaticsClass::createObject("PIG_BASIC_SMALL") ) );
		level.addObject( new LevelObject( 72.587, 1.363, 89.997, ObjectStaticsClass::createObject("TERRAIN_TEXTURED_HILLS_10X10") ) );
		level.addObject( new LevelObject( 66.672, 1.293, 89.997, ObjectStaticsClass::createObject("TERRAIN_TEXTURED_HILLS_10X10") ) );
		level.addObject( new LevelObject( 77.517, -0.045, 44.998, ObjectStaticsClass::createObject("TERRAIN_TEXTURED_HILLS_5X5") ) );
		level.addObject( new LevelObject( 61.813, -0.045, 44.998, ObjectStaticsClass::createObject("TERRAIN_TEXTURED_HILLS_5X5") ) );
		level.addObject( new LevelObject( 73.183, -5.544, 90.074, ObjectStaticsClass::createObject("STONE_BLOCK_4X1") ) );
		level.addObject( new LevelObject( 69.763, -8.092, 0.583, ObjectStaticsClass::createObject("STONE_BLOCK_8X1") ) );
		level.addObject( new LevelObject( 66.116, -5.615, 90.146, ObjectStaticsClass::createObject("STONE_BLOCK_4X1") ) );


		return level;
	}

	static Level Level1_5()
	{
		Level level = Level();

		level.addObject( new LevelObject( 81.43, -24.11, 90, ObjectStaticsClass::createObject("ICE_BLOCK_2X1") ) );
        level.addObject( new LevelObject( 78.968, -24.117, 90.3, ObjectStaticsClass::createObject("ICE_BLOCK_2X1") ) );
        level.addObject( new LevelObject( 90.025, -4.021, 89.328, ObjectStaticsClass::createObject("STONE_BLOCK_8X1") ) );
        level.addObject( new LevelObject( 77.997, -13.022, 92.197, ObjectStaticsClass::createObject("STONE_BLOCK_8X1") ) );
        level.addObject( new LevelObject( 74.306, -4.019, 90.384, ObjectStaticsClass::createObject("STONE_BLOCK_8X1") ) );
        level.addObject( new LevelObject( 93.676, -3.207, 224.961, ObjectStaticsClass::createObject("STONE_BLOCK_8X1") ) );
        level.addObject( new LevelObject( 82.29, -19.214, 51.568, ObjectStaticsClass::createObject("STONE_CIRCLE_4X4") ) );
        level.addObject( new LevelObject( 88.955, -4.02, 89.322, ObjectStaticsClass::createObject("STONE_BLOCK_8X1") ) );
        level.addObject( new LevelObject( 84.051, -24.11, 89.989, ObjectStaticsClass::createObject("ICE_BLOCK_2X1") ) );
        level.addObject( new LevelObject( 105.194, 0.818, 315, ObjectStaticsClass::createObject("TERRAIN_TEXTURED_HILLS_10X10") ) );
        level.addObject( new LevelObject( 84.823, -19.975, 87.714, ObjectStaticsClass::createObject("ICE_BLOCK_4X1") ) );
        level.addObject( new LevelObject( 80.142, -12.933, 272.335, ObjectStaticsClass::createObject("WOOD_BLOCK_8X1") ) );
        level.addObject( new LevelObject( 85.026, -4.013, 269.891, ObjectStaticsClass::createObject("WOOD_BLOCK_8X1") ) );
        level.addObject( new LevelObject( 79.07, -12.978, 92.275, ObjectStaticsClass::createObject("WOOD_BLOCK_8X1") ) );
        level.addObject( new LevelObject( 84.791, -17.471, 357.668, ObjectStaticsClass::createObject("WOOD_BLOCK_4X1") ) );
        level.addObject( new LevelObject( 86.033, -20.03, 88.777, ObjectStaticsClass::createObject("ICE_BLOCK_4X1") ) );
        level.addObject( new LevelObject( 78.749, -20.032, 92.094, ObjectStaticsClass::createObject("ICE_BLOCK_4X1") ) );
        level.addObject( new LevelObject( 79.994, -19.948, 94.214, ObjectStaticsClass::createObject("ICE_BLOCK_4X1") ) );
        level.addObject( new LevelObject( 79.623, -17.456, 2.733, ObjectStaticsClass::createObject("WOOD_BLOCK_4X1") ) );
        level.addObject( new LevelObject( 6.113, -1.142, 0, ObjectStaticsClass::createObject("BIRD_RED") ) );
        level.addObject( new LevelObject( 2.878, -1.143, 0, ObjectStaticsClass::createObject("BIRD_RED") ) );
        level.addObject( new LevelObject( 10.153, -0.944, 0, ObjectStaticsClass::createObject("BIRD_RED") ) );
        level.addObject( new LevelObject( 0, -1.139, 0, ObjectStaticsClass::createObject("BIRD_RED") ) );
        level.addObject( new LevelObject( 86.182, -24.11, 90.15, ObjectStaticsClass::createObject("ICE_BLOCK_2X1") ) );
        level.addObject( new LevelObject( 81.741, -13.238, 357.319, ObjectStaticsClass::createObject("PIG_BASIC_SMALL") ) );
        level.addObject( new LevelObject( 82.795, -11.422, 15.93, ObjectStaticsClass::createObject("PIG_BASIC_SMALL") ) );
        level.addObject( new LevelObject( 82.392, -9.361, 350.23, ObjectStaticsClass::createObject("PIG_BASIC_SMALL") ) );
        level.addObject( new LevelObject( 82.518, -22.557, 359.988, ObjectStaticsClass::createObject("ICE_BLOCK_8X1") ) );
        level.addObject( new LevelObject( 77.677, -8.528, 180, ObjectStaticsClass::createObject("ICE_BLOCK_8X1") ) );
        level.addObject( new LevelObject( 87.084, -8.528, 180, ObjectStaticsClass::createObject("ICE_BLOCK_8X1") ) );
        level.addObject( new LevelObject( 79.281, -4.013, 90.214, ObjectStaticsClass::createObject("WOOD_BLOCK_8X1") ) );
        level.addObject( new LevelObject( 85.41, -12.978, 88.384, ObjectStaticsClass::createObject("WOOD_BLOCK_8X1") ) );
        level.addObject( new LevelObject( 84.339, -12.947, 268.355, ObjectStaticsClass::createObject("WOOD_BLOCK_8X1") ) );
        level.addObject( new LevelObject( 70.689, -3.26, 134.081, ObjectStaticsClass::createObject("STONE_BLOCK_8X1") ) );
        level.addObject( new LevelObject( 86.489, -13.002, 88.527, ObjectStaticsClass::createObject("STONE_BLOCK_8X1") ) );
        level.addObject( new LevelObject( 77.21, -2.058, 90.066, ObjectStaticsClass::createObject("STONE_BLOCK_4X2") ) );
        level.addObject( new LevelObject( 87.012, -2.056, 89.825, ObjectStaticsClass::createObject("STONE_BLOCK_4X2") ) );
        level.addObject( new LevelObject( 75.376, -4.019, 90.384, ObjectStaticsClass::createObject("STONE_BLOCK_8X1") ) );
        level.addObject( new LevelObject( 77.185, -6.025, 90.214, ObjectStaticsClass::createObject("STONE_BLOCK_4X2") ) );
        level.addObject( new LevelObject( 82.461, -1.918, 4.513, ObjectStaticsClass::createObject("PIG_BASIC_MEDIUM") ) );
        level.addObject( new LevelObject( 87.05, -6.019, 89.427, ObjectStaticsClass::createObject("STONE_BLOCK_4X2") ) );
        level.addObject( new LevelObject( 81.696, -5.49, 356.74, ObjectStaticsClass::createObject("PIG_BASIC_MEDIUM") ) );


		return level;
	}

	static Level Level1_7()
	{
		Level level = Level();

		level.addObject( new LevelObject( 85.262, -18.004, 359.756, ObjectStaticsClass::createObject("WOOD_BLOCK_8X1") ) );
        level.addObject( new LevelObject( 80.676, -10.908, 180.027, ObjectStaticsClass::createObject("WOOD_BLOCK_8X1") ) );
        level.addObject( new LevelObject( 80.301, -17.979, 180, ObjectStaticsClass::createObject("WOOD_BLOCK_2X1") ) );
        level.addObject( new LevelObject( 78.335, -17.921, 180, ObjectStaticsClass::createObject("WOOD_BLOCK_2X1") ) );
        level.addObject( new LevelObject( 92.565, -17.979, 180, ObjectStaticsClass::createObject("WOOD_BLOCK_2X1") ) );
        level.addObject( new LevelObject( 90.437, -17.979, 180, ObjectStaticsClass::createObject("WOOD_BLOCK_2X1") ) );
        level.addObject( new LevelObject( 82.771, -25.055, 268.453, ObjectStaticsClass::createObject("ICE_BLOCK_1X1") ) );
        level.addObject( new LevelObject( 87.843, -25.033, 269.803, ObjectStaticsClass::createObject("ICE_BLOCK_1X1") ) );
        level.addObject( new LevelObject( 89.137, -10.909, 180.028, ObjectStaticsClass::createObject("WOOD_BLOCK_8X1") ) );
        level.addObject( new LevelObject( 85.404, -25.124, 268.53, ObjectStaticsClass::createObject("ICE_BLOCK_1X1") ) );
        level.addObject( new LevelObject( 80.281, -14.333, 180.611, ObjectStaticsClass::createObject("ICE_BLOCK_2X2") ) );
        level.addObject( new LevelObject( 90.324, -14.468, 359.259, ObjectStaticsClass::createObject("ICE_BLOCK_2X2") ) );
        level.addObject( new LevelObject( 92.53, -15.455, 89.765, ObjectStaticsClass::createObject("ICE_BLOCK_4X2") ) );
        level.addObject( new LevelObject( 86.351, -19.486, 179.683, ObjectStaticsClass::createObject("ICE_BLOCK_4X2") ) );
        level.addObject( new LevelObject( 85.283, -21.506, 359.222, ObjectStaticsClass::createObject("ICE_BLOCK_2X2") ) );
        level.addObject( new LevelObject( 4.227, -1.008, 0, ObjectStaticsClass::createObject("BIRD_RED") ) );
        level.addObject( new LevelObject( 1.976, -1.008, 0, ObjectStaticsClass::createObject("BIRD_RED") ) );
        level.addObject( new LevelObject( 8.358, -0.921, 0, ObjectStaticsClass::createObject("BIRD_RED") ) );
        level.addObject( new LevelObject( 0, -1.04, 0, ObjectStaticsClass::createObject("BIRD_RED") ) );
        level.addObject( new LevelObject( 87.368, -22.49, 269.787, ObjectStaticsClass::createObject("ICE_BLOCK_4X2") ) );
        level.addObject( new LevelObject( 88.251, -13.428, 270.029, ObjectStaticsClass::createObject("ICE_BLOCK_4X2") ) );
        level.addObject( new LevelObject( 78.303, -15.46, 90.216, ObjectStaticsClass::createObject("ICE_BLOCK_4X2") ) );
        level.addObject( new LevelObject( 91.487, -12.448, 179.761, ObjectStaticsClass::createObject("ICE_BLOCK_4X2") ) );
        level.addObject( new LevelObject( 89.268, -16.478, 179.057, ObjectStaticsClass::createObject("ICE_BLOCK_4X2") ) );
        level.addObject( new LevelObject( 83.084, -20.45, 269.747, ObjectStaticsClass::createObject("ICE_BLOCK_4X2") ) );
        level.addObject( new LevelObject( 81.541, -16.434, 177.899, ObjectStaticsClass::createObject("ICE_BLOCK_4X2") ) );
        level.addObject( new LevelObject( 79.243, -12.454, 0.177, ObjectStaticsClass::createObject("ICE_BLOCK_4X2") ) );
        level.addObject( new LevelObject( 82.457, -13.498, 90.144, ObjectStaticsClass::createObject("ICE_BLOCK_4X2") ) );
        level.addObject( new LevelObject( 84.263, -23.518, 358.49, ObjectStaticsClass::createObject("ICE_BLOCK_4X2") ) );
        level.addObject( new LevelObject( 78.795, -19.28, 1.644, ObjectStaticsClass::createObject("PIG_BASIC_SMALL") ) );
        level.addObject( new LevelObject( 92.073, -19.424, 354.935, ObjectStaticsClass::createObject("PIG_BASIC_SMALL") ) );
        level.addObject( new LevelObject( 80.283, -1.488, 90.001, ObjectStaticsClass::createObject("TERRAIN_TEXTURED_HILLS_10X10") ) );
        level.addObject( new LevelObject( 92.348, -8.395, 89.964, ObjectStaticsClass::createObject("STONE_BLOCK_4X2") ) );
        level.addObject( new LevelObject( 84.9, -12.432, 353.884, ObjectStaticsClass::createObject("PIG_BASIC_SMALL") ) );
        level.addObject( new LevelObject( 89.545, -1.488, 90.001, ObjectStaticsClass::createObject("TERRAIN_TEXTURED_HILLS_10X10") ) );
        level.addObject( new LevelObject( 86.187, -8.396, 90.044, ObjectStaticsClass::createObject("STONE_BLOCK_4X2") ) );
        level.addObject( new LevelObject( 77.579, -8.395, 90.032, ObjectStaticsClass::createObject("STONE_BLOCK_4X2") ) );
        level.addObject( new LevelObject( 83.482, -8.395, 89.976, ObjectStaticsClass::createObject("STONE_BLOCK_4X2") ) );


		return level;
	}

	static Level Level1_9()
	{
		Level level = Level();

		level.addObject( new LevelObject( 97.813, -15.76, 0.152, ObjectStaticsClass::createObject("WOOD_BLOCK_8X1") ) );
        level.addObject( new LevelObject( 82.76, -15.765, 179.847, ObjectStaticsClass::createObject("WOOD_BLOCK_8X1") ) );
        level.addObject( new LevelObject( 81.079, -5.194, 359.619, ObjectStaticsClass::createObject("WOOD_BLOCK_2X2") ) );
        level.addObject( new LevelObject( 85.328, -3.172, 359.896, ObjectStaticsClass::createObject("WOOD_BLOCK_2X2") ) );
        level.addObject( new LevelObject( 98.976, -12.213, 2.02, ObjectStaticsClass::createObject("PIG_BASIC_SMALL") ) );
        level.addObject( new LevelObject( 95.538, -5.202, 359.897, ObjectStaticsClass::createObject("WOOD_BLOCK_2X2") ) );
        level.addObject( new LevelObject( 5.314, 1.375, 297.638, ObjectStaticsClass::createObject("TERRAIN_TEXTURED_HILLS_10X2") ) );
        level.addObject( new LevelObject( 81.818, -12.182, 359.847, ObjectStaticsClass::createObject("PIG_BASIC_SMALL") ) );
        level.addObject( new LevelObject( 90.545, -2.692, 0.015, ObjectStaticsClass::createObject("WOOD_BLOCK_8X1") ) );
        level.addObject( new LevelObject( 12.014, -0.78, 244.582, ObjectStaticsClass::createObject("TERRAIN_TEXTURED_HILLS_5X2") ) );
        level.addObject( new LevelObject( 100.268, -8.198, 270.134, ObjectStaticsClass::createObject("WOOD_BLOCK_4X1") ) );
        level.addObject( new LevelObject( 94.16, -13.246, 90.826, ObjectStaticsClass::createObject("WOOD_BLOCK_4X1") ) );
        level.addObject( new LevelObject( 97.988, -20.312, 270.148, ObjectStaticsClass::createObject("ICE_BLOCK_4X1") ) );
        level.addObject( new LevelObject( 82.689, -20.317, 89.829, ObjectStaticsClass::createObject("ICE_BLOCK_4X1") ) );
        level.addObject( new LevelObject( 101.587, -13.232, 89.999, ObjectStaticsClass::createObject("WOOD_BLOCK_4X1") ) );
        level.addObject( new LevelObject( 80.664, -8.192, 89.63, ObjectStaticsClass::createObject("WOOD_BLOCK_4X1") ) );
        level.addObject( new LevelObject( 85.655, -8.208, 89.845, ObjectStaticsClass::createObject("WOOD_BLOCK_4X1") ) );
        level.addObject( new LevelObject( 95.23, -13.244, 90.825, ObjectStaticsClass::createObject("WOOD_BLOCK_4X1") ) );
        level.addObject( new LevelObject( 100.518, -13.233, 89.994, ObjectStaticsClass::createObject("WOOD_BLOCK_4X1") ) );
        level.addObject( new LevelObject( 95.146, -8.203, 269.942, ObjectStaticsClass::createObject("WOOD_BLOCK_4X1") ) );
        level.addObject( new LevelObject( 4.395, -1.2, 0, ObjectStaticsClass::createObject("BIRD_RED") ) );
        level.addObject( new LevelObject( 2.179, -1.243, 0, ObjectStaticsClass::createObject("BIRD_RED") ) );
        level.addObject( new LevelObject( 9.38, -4.141, 0, ObjectStaticsClass::createObject("BIRD_RED") ) );
        level.addObject( new LevelObject( 0, -1.237, 0, ObjectStaticsClass::createObject("BIRD_RED") ) );
        level.addObject( new LevelObject( 82.823, -10.716, 179.798, ObjectStaticsClass::createObject("WOOD_BLOCK_8X1") ) );
        level.addObject( new LevelObject( 97.838, -10.718, 0.06, ObjectStaticsClass::createObject("WOOD_BLOCK_8X1") ) );
        level.addObject( new LevelObject( 82.773, -17.316, 359.844, ObjectStaticsClass::createObject("ICE_BLOCK_4X2") ) );
        level.addObject( new LevelObject( 97.92, -17.311, 180.151, ObjectStaticsClass::createObject("ICE_BLOCK_4X2") ) );
        level.addObject( new LevelObject( 82.315, -3.168, 359.881, ObjectStaticsClass::createObject("WOOD_BLOCK_4X2") ) );
        level.addObject( new LevelObject( 98.575, -5.2, 0.081, ObjectStaticsClass::createObject("WOOD_BLOCK_4X2") ) );
        level.addObject( new LevelObject( 86.096, -13.317, 90.015, ObjectStaticsClass::createObject("WOOD_BLOCK_4X2") ) );
        level.addObject( new LevelObject( 84.169, -5.204, 359.874, ObjectStaticsClass::createObject("WOOD_BLOCK_4X2") ) );
        level.addObject( new LevelObject( 96.711, -3.169, 0.002, ObjectStaticsClass::createObject("WOOD_BLOCK_4X2") ) );
        level.addObject( new LevelObject( 79.649, -13.275, 90.015, ObjectStaticsClass::createObject("WOOD_BLOCK_4X2") ) );
        level.addObject( new LevelObject( 99.715, -3.167, 359.978, ObjectStaticsClass::createObject("WOOD_BLOCK_2X2") ) );
        level.addObject( new LevelObject( 9.243, -0.913, 0, ObjectStaticsClass::createObject("TERRAIN_TEXTURED_HILLS_5X5") ) );
        level.addObject( new LevelObject( 97.65, -8.201, 270.046, ObjectStaticsClass::createObject("STONE_BLOCK_4X2") ) );
        level.addObject( new LevelObject( 85.395, -1.139, 179.965, ObjectStaticsClass::createObject("STONE_BLOCK_4X2") ) );
        level.addObject( new LevelObject( 95.598, -1.138, 180.019, ObjectStaticsClass::createObject("STONE_BLOCK_4X2") ) );
        level.addObject( new LevelObject( 99.715, -1.136, 179.978, ObjectStaticsClass::createObject("STONE_BLOCK_4X2") ) );
        level.addObject( new LevelObject( 90.727, -5.051, 1.415, ObjectStaticsClass::createObject("PIG_BASIC_MEDIUM") ) );
        level.addObject( new LevelObject( 81.325, -1.138, 180.001, ObjectStaticsClass::createObject("STONE_BLOCK_4X2") ) );
        level.addObject( new LevelObject( 83.194, -8.201, 89.8, ObjectStaticsClass::createObject("STONE_BLOCK_4X2") ) );


		return level;
	}

	static Level Level1_12()
	{
		Level level = Level();

		level.addObject( new LevelObject( 94.528, -15.204, 88.61, ObjectStaticsClass::createObject("ICE_BLOCK_4X1") ) );
        level.addObject( new LevelObject( 83.741, -5.12, 90.016, ObjectStaticsClass::createObject("ICE_BLOCK_4X1") ) );
        level.addObject( new LevelObject( 86.17, -10.238, 89.998, ObjectStaticsClass::createObject("ICE_BLOCK_4X2") ) );
        level.addObject( new LevelObject( 94.367, -10.156, 89.998, ObjectStaticsClass::createObject("ICE_BLOCK_4X2") ) );
        level.addObject( new LevelObject( 88.506, -17.703, 0.544, ObjectStaticsClass::createObject("ICE_BLOCK_4X1") ) );
        level.addObject( new LevelObject( 90.444, -22.731, 180.115, ObjectStaticsClass::createObject("ICE_BLOCK_4X1") ) );
        level.addObject( new LevelObject( 92.523, -17.698, 359.514, ObjectStaticsClass::createObject("ICE_BLOCK_4X1") ) );
        level.addObject( new LevelObject( 92.197, -20.212, 269.529, ObjectStaticsClass::createObject("ICE_BLOCK_4X1") ) );
        level.addObject( new LevelObject( 86.704, -15.205, 91.022, ObjectStaticsClass::createObject("ICE_BLOCK_4X1") ) );
        level.addObject( new LevelObject( 90.419, -15.172, 270.327, ObjectStaticsClass::createObject("ICE_BLOCK_4X1") ) );
        level.addObject( new LevelObject( 83.673, -7.527, 180, ObjectStaticsClass::createObject("ICE_BLOCK_4X1") ) );
        level.addObject( new LevelObject( 87.75, -7.527, 180, ObjectStaticsClass::createObject("ICE_BLOCK_4X1") ) );
        level.addObject( new LevelObject( 91.775, -7.58, 180, ObjectStaticsClass::createObject("ICE_BLOCK_4X1") ) );
        level.addObject( new LevelObject( 89.788, -5.071, 90.016, ObjectStaticsClass::createObject("ICE_BLOCK_4X1") ) );
        level.addObject( new LevelObject( 88.467, -14.227, 0.714, ObjectStaticsClass::createObject("ICE_BLOCK_2X2") ) );
        level.addObject( new LevelObject( 92.418, -14.225, 359.836, ObjectStaticsClass::createObject("ICE_BLOCK_2X2") ) );
        level.addObject( new LevelObject( 93.852, -5.219, 90.016, ObjectStaticsClass::createObject("WOOD_BLOCK_4X1") ) );
        level.addObject( new LevelObject( 85.518, -5.096, 90.016, ObjectStaticsClass::createObject("WOOD_BLOCK_4X1") ) );
        level.addObject( new LevelObject( 90.473, -19.241, 0.173, ObjectStaticsClass::createObject("ICE_BLOCK_2X2") ) );
        level.addObject( new LevelObject( 3.404, -1.044, 0, ObjectStaticsClass::createObject("BIRD_BLUE") ) );
        level.addObject( new LevelObject( 1.859, -1.027, 0, ObjectStaticsClass::createObject("BIRD_BLUE") ) );
        level.addObject( new LevelObject( 5.21, -0.622, 0, ObjectStaticsClass::createObject("BIRD_BLUE") ) );
        level.addObject( new LevelObject( 0, -1.225, 0, ObjectStaticsClass::createObject("BIRD_RED") ) );
        level.addObject( new LevelObject( 95.821, -5.17, 90.016, ObjectStaticsClass::createObject("ICE_BLOCK_4X1") ) );
        level.addObject( new LevelObject( 88.638, -20.219, 270.641, ObjectStaticsClass::createObject("ICE_BLOCK_4X1") ) );
        level.addObject( new LevelObject( 86.123, -12.743, 180, ObjectStaticsClass::createObject("ICE_BLOCK_4X1") ) );
        level.addObject( new LevelObject( 90.207, -12.704, 180, ObjectStaticsClass::createObject("ICE_BLOCK_4X1") ) );
        level.addObject( new LevelObject( 94.329, -12.666, 180, ObjectStaticsClass::createObject("ICE_BLOCK_4X1") ) );
        level.addObject( new LevelObject( 88.07, -10.147, 270, ObjectStaticsClass::createObject("ICE_BLOCK_4X1") ) );
        level.addObject( new LevelObject( 84.291, -10.147, 270, ObjectStaticsClass::createObject("ICE_BLOCK_4X1") ) );
        level.addObject( new LevelObject( 92.192, -10.109, 270, ObjectStaticsClass::createObject("ICE_BLOCK_4X1") ) );
        level.addObject( new LevelObject( 96.123, -10.147, 270, ObjectStaticsClass::createObject("ICE_BLOCK_4X1") ) );
        level.addObject( new LevelObject( 95.904, -7.632, 180, ObjectStaticsClass::createObject("ICE_BLOCK_4X1") ) );
        level.addObject( new LevelObject( 90.099, -9.263, 359.824, ObjectStaticsClass::createObject("PIG_BASIC_SMALL") ) );
        level.addObject( new LevelObject( 91.685, -4.189, 359.997, ObjectStaticsClass::createObject("PIG_BASIC_SMALL") ) );
        level.addObject( new LevelObject( 80.889, 0.38, 224.999, ObjectStaticsClass::createObject("TERRAIN_TEXTURED_HILLS_5X5") ) );
        level.addObject( new LevelObject( 95.007, 1.807, 179.998, ObjectStaticsClass::createObject("TERRAIN_TEXTURED_HILLS_10X10") ) );
        level.addObject( new LevelObject( 87.505, -4.189, 359.999, ObjectStaticsClass::createObject("PIG_BASIC_SMALL") ) );
        level.addObject( new LevelObject( 99.614, 0.282, 224.999, ObjectStaticsClass::createObject("TERRAIN_TEXTURED_HILLS_5X5") ) );
        level.addObject( new LevelObject( 97.747, -5.142, 89.365, ObjectStaticsClass::createObject("STONE_BLOCK_4X1") ) );
        level.addObject( new LevelObject( 85.693, 1.85, 179.998, ObjectStaticsClass::createObject("TERRAIN_TEXTURED_HILLS_10X10") ) );
        level.addObject( new LevelObject( 81.761, -5.108, 90.775, ObjectStaticsClass::createObject("STONE_BLOCK_4X1") ) );


		return level;
	}

	static Level Level1_13()
	{
		Level level = Level();

		level.addObject( new LevelObject( 84.863, -1.713, 0, ObjectStaticsClass::createObject("TERRAIN_TEXTURED_HILLS_10X10") ) );
        level.addObject( new LevelObject( 75.942, -1.713, 0, ObjectStaticsClass::createObject("TERRAIN_TEXTURED_HILLS_10X10") ) );
        level.addObject( new LevelObject( 79.545, -21.31, 0.122, ObjectStaticsClass::createObject("STONE_BLOCK_8X1") ) );
        level.addObject( new LevelObject( 75.999, -9.135, 0.02, ObjectStaticsClass::createObject("STONE_BLOCK_8X1") ) );
        level.addObject( new LevelObject( 86.225, -16.188, 359.997, ObjectStaticsClass::createObject("STONE_BLOCK_1X1") ) );
        level.addObject( new LevelObject( 73.396, -16.188, 359.997, ObjectStaticsClass::createObject("STONE_BLOCK_1X1") ) );
        level.addObject( new LevelObject( 83.059, -22.859, 89.581, ObjectStaticsClass::createObject("STONE_BLOCK_2X1") ) );
        level.addObject( new LevelObject( 70.728, -9.644, 90.333, ObjectStaticsClass::createObject("STONE_BLOCK_2X1") ) );
        level.addObject( new LevelObject( 89.486, -9.65, 89.499, ObjectStaticsClass::createObject("STONE_BLOCK_2X1") ) );
        level.addObject( new LevelObject( 75.831, -22.878, 87.66, ObjectStaticsClass::createObject("STONE_BLOCK_2X1") ) );
        level.addObject( new LevelObject( 82.764, -18.786, 90.122, ObjectStaticsClass::createObject("ICE_BLOCK_4X2") ) );
        level.addObject( new LevelObject( 79.616, -16.275, 180.112, ObjectStaticsClass::createObject("ICE_BLOCK_8X1") ) );
        level.addObject( new LevelObject( 81.392, -22.89, 2.811, ObjectStaticsClass::createObject("PIG_BASIC_SMALL") ) );
        level.addObject( new LevelObject( 80.426, -18.923, 0.446, ObjectStaticsClass::createObject("PIG_BASIC_SMALL") ) );
        level.addObject( new LevelObject( 79.948, -10.215, 0.485, ObjectStaticsClass::createObject("WOOD_BLOCK_4X1") ) );
        level.addObject( new LevelObject( 77.561, -11.856, 90, ObjectStaticsClass::createObject("WOOD_BLOCK_4X1") ) );
        level.addObject( new LevelObject( 79.627, -17.341, 0.133, ObjectStaticsClass::createObject("WOOD_BLOCK_4X1") ) );
        level.addObject( new LevelObject( 76.519, -18.798, 90.103, ObjectStaticsClass::createObject("ICE_BLOCK_4X2") ) );
        level.addObject( new LevelObject( 82.479, -11.774, 90, ObjectStaticsClass::createObject("WOOD_BLOCK_4X1") ) );
        level.addObject( new LevelObject( 3.723, -0.798, 0, ObjectStaticsClass::createObject("BIRD_BLUE") ) );
        level.addObject( new LevelObject( 2.04, -1.024, 0, ObjectStaticsClass::createObject("BIRD_RED") ) );
        level.addObject( new LevelObject( 6.068, -0.643, 0, ObjectStaticsClass::createObject("BIRD_BLUE") ) );
        level.addObject( new LevelObject( 0, -1.091, 0, ObjectStaticsClass::createObject("BIRD_RED") ) );
        level.addObject( new LevelObject( 71.302, 0.116, 225.001, ObjectStaticsClass::createObject("TERRAIN_TEXTURED_HILLS_10X10") ) );
        level.addObject( new LevelObject( 89.774, 0.81, 315, ObjectStaticsClass::createObject("TERRAIN_TEXTURED_HILLS_10X10") ) );
        level.addObject( new LevelObject( 76.391, -12.788, 90, ObjectStaticsClass::createObject("ICE_BLOCK_2X1") ) );
        level.addObject( new LevelObject( 74.358, -12.788, 90, ObjectStaticsClass::createObject("ICE_BLOCK_2X1") ) );
        level.addObject( new LevelObject( 86.26, -12.722, 90, ObjectStaticsClass::createObject("ICE_BLOCK_2X1") ) );
        level.addObject( new LevelObject( 75.402, -12.788, 90, ObjectStaticsClass::createObject("ICE_BLOCK_2X1") ) );
        level.addObject( new LevelObject( 83.488, -12.673, 90, ObjectStaticsClass::createObject("ICE_BLOCK_2X1") ) );
        level.addObject( new LevelObject( 73.423, -12.788, 90, ObjectStaticsClass::createObject("ICE_BLOCK_2X1") ) );
        level.addObject( new LevelObject( 85.32, -12.623, 90, ObjectStaticsClass::createObject("ICE_BLOCK_2X1") ) );
        level.addObject( new LevelObject( 84.379, -12.623, 90, ObjectStaticsClass::createObject("ICE_BLOCK_2X1") ) );
        level.addObject( new LevelObject( 84.314, -9.133, 359.972, ObjectStaticsClass::createObject("STONE_BLOCK_8X1") ) );
        level.addObject( new LevelObject( 84.932, -10.678, 359.85, ObjectStaticsClass::createObject("STONE_BLOCK_4X2") ) );
        level.addObject( new LevelObject( 84.653, -14.731, 359.591, ObjectStaticsClass::createObject("STONE_BLOCK_4X2") ) );
        level.addObject( new LevelObject( 74.943, -10.682, 0.056, ObjectStaticsClass::createObject("STONE_BLOCK_4X2") ) );
        level.addObject( new LevelObject( 87.959, -7.586, 359.97, ObjectStaticsClass::createObject("STONE_BLOCK_4X2") ) );
        level.addObject( new LevelObject( 80.175, -7.583, 0.017, ObjectStaticsClass::createObject("STONE_BLOCK_4X2") ) );
        level.addObject( new LevelObject( 80.18, -12.565, 3.402, ObjectStaticsClass::createObject("PIG_BASIC_MEDIUM") ) );
        level.addObject( new LevelObject( 74.879, -14.739, 0.254, ObjectStaticsClass::createObject("STONE_BLOCK_4X2") ) );
        level.addObject( new LevelObject( 72.182, -7.586, 0.026, ObjectStaticsClass::createObject("STONE_BLOCK_4X2") ) );


		return level;
	}

	static Level Level1_16()
	{
		Level level = Level();

		level.addObject( new LevelObject( 97.693, -17.72, 0.207, ObjectStaticsClass::createObject("WOOD_BLOCK_2X2") ) );
        level.addObject( new LevelObject( 105.24, -13.497, 180.955, ObjectStaticsClass::createObject("WOOD_BLOCK_2X2") ) );
        level.addObject( new LevelObject( 90.518, -13.562, 179.451, ObjectStaticsClass::createObject("WOOD_BLOCK_2X2") ) );
        level.addObject( new LevelObject( 100.664, -4.405, 0.033, ObjectStaticsClass::createObject("PIG_BASIC_SMALL") ) );
        level.addObject( new LevelObject( 90.572, -11.529, 179.333, ObjectStaticsClass::createObject("WOOD_BLOCK_2X2") ) );
        level.addObject( new LevelObject( 94.004, -17.731, 0.168, ObjectStaticsClass::createObject("WOOD_BLOCK_2X2") ) );
        level.addObject( new LevelObject( 101.511, -17.697, 0.366, ObjectStaticsClass::createObject("WOOD_BLOCK_2X2") ) );
        level.addObject( new LevelObject( 105.061, -17.674, 0.379, ObjectStaticsClass::createObject("WOOD_BLOCK_2X2") ) );
        level.addObject( new LevelObject( 90.36, -17.741, 0.151, ObjectStaticsClass::createObject("WOOD_BLOCK_2X2") ) );
        level.addObject( new LevelObject( 105.304, -11.462, 181.114, ObjectStaticsClass::createObject("WOOD_BLOCK_2X2") ) );
        level.addObject( new LevelObject( 105.613, -5.302, 89.956, ObjectStaticsClass::createObject("WOOD_BLOCK_4X2") ) );
        level.addObject( new LevelObject( 104.614, -8.306, 179.978, ObjectStaticsClass::createObject("WOOD_BLOCK_4X2") ) );
        level.addObject( new LevelObject( 103.464, -5.302, 90.05, ObjectStaticsClass::createObject("WOOD_BLOCK_4X2") ) );
        level.addObject( new LevelObject( 98.064, -5.395, 90.13, ObjectStaticsClass::createObject("WOOD_BLOCK_4X2") ) );
        level.addObject( new LevelObject( 98.481, -12.581, 270.547, ObjectStaticsClass::createObject("WOOD_BLOCK_4X1") ) );
        level.addObject( new LevelObject( 97.385, -12.587, 269.756, ObjectStaticsClass::createObject("WOOD_BLOCK_4X1") ) );
        level.addObject( new LevelObject( 91.332, -8.403, 0.001, ObjectStaticsClass::createObject("WOOD_BLOCK_4X2") ) );
        level.addObject( new LevelObject( 90.229, -5.401, 270.017, ObjectStaticsClass::createObject("WOOD_BLOCK_4X2") ) );
        level.addObject( new LevelObject( 7.502, -4.102, 0, ObjectStaticsClass::createObject("BIRD_YELLOW") ) );
        level.addObject( new LevelObject( 5.073, -4.04, 0, ObjectStaticsClass::createObject("BIRD_YELLOW") ) );
        level.addObject( new LevelObject( 11.847, -4.074, 0, ObjectStaticsClass::createObject("BIRD_YELLOW") ) );
        level.addObject( new LevelObject( 2.564, -3.993, 0, ObjectStaticsClass::createObject("BIRD_YELLOW") ) );
        level.addObject( new LevelObject( 0, -4.02, 0, ObjectStaticsClass::createObject("BIRD_YELLOW") ) );
        level.addObject( new LevelObject( 116.864, -47.384, 0, ObjectStaticsClass::createObject("TERRAIN_TEXTURED_HILLS_5X2") ) );
        level.addObject( new LevelObject( 97.978, -7.907, 0.244, ObjectStaticsClass::createObject("WOOD_BLOCK_8X1") ) );
        level.addObject( new LevelObject( 93.792, -10.022, 179.233, ObjectStaticsClass::createObject("WOOD_BLOCK_8X1") ) );
        level.addObject( new LevelObject( 102.066, -16.141, 0.37, ObjectStaticsClass::createObject("WOOD_BLOCK_8X1") ) );
        level.addObject( new LevelObject( 102.012, -15.076, 0.371, ObjectStaticsClass::createObject("WOOD_BLOCK_8X1") ) );
        level.addObject( new LevelObject( 93.756, -15.114, 0.157, ObjectStaticsClass::createObject("WOOD_BLOCK_8X1") ) );
        level.addObject( new LevelObject( 98.042, -8.952, 0.267, ObjectStaticsClass::createObject("WOOD_BLOCK_8X1") ) );
        level.addObject( new LevelObject( 102.13, -9.983, 181.294, ObjectStaticsClass::createObject("WOOD_BLOCK_8X1") ) );
        level.addObject( new LevelObject( 93.708, -16.179, 0.162, ObjectStaticsClass::createObject("WOOD_BLOCK_8X1") ) );
        level.addObject( new LevelObject( 92.357, -5.4, 270.027, ObjectStaticsClass::createObject("WOOD_BLOCK_4X2") ) );
        level.addObject( new LevelObject( 95.164, -4.465, 0.029, ObjectStaticsClass::createObject("PIG_BASIC_SMALL") ) );
        level.addObject( new LevelObject( 14.975, 0.265, 135, ObjectStaticsClass::createObject("TERRAIN_TEXTURED_HILLS_5X5") ) );
        level.addObject( new LevelObject( 93.785, 1.559, 0.017, ObjectStaticsClass::createObject("TERRAIN_TEXTURED_HILLS_10X10") ) );
        level.addObject( new LevelObject( 0.629, 1.755, 0.017, ObjectStaticsClass::createObject("TERRAIN_TEXTURED_HILLS_10X10") ) );
        level.addObject( new LevelObject( 102.805, 1.657, 0.017, ObjectStaticsClass::createObject("TERRAIN_TEXTURED_HILLS_10X10") ) );
        level.addObject( new LevelObject( 102.347, -12.338, 2.63, ObjectStaticsClass::createObject("PIG_BASIC_MEDIUM") ) );
        level.addObject( new LevelObject( 10.093, 1.717, 0.017, ObjectStaticsClass::createObject("TERRAIN_TEXTURED_HILLS_10X10") ) );
        level.addObject( new LevelObject( 93.454, -12.376, 354.06, ObjectStaticsClass::createObject("PIG_BASIC_MEDIUM") ) );


		return level;
	}

	static Level Level1_17()
	{
		Level level = Level();

		level.addObject( new LevelObject( 70.335, -5.07, 0.138, ObjectStaticsClass::createObject("STONE_BLOCK_4X2") ) );
        level.addObject( new LevelObject( 84.925, -2.07, 90.07, ObjectStaticsClass::createObject("STONE_BLOCK_4X2") ) );
        level.addObject( new LevelObject( 80.959, -26.037, 180.116, ObjectStaticsClass::createObject("WOOD_BLOCK_2X2") ) );
        level.addObject( new LevelObject( 80.998, -28.066, 180.052, ObjectStaticsClass::createObject("WOOD_BLOCK_2X2") ) );
        level.addObject( new LevelObject( 81.978, -10.213, 356.687, ObjectStaticsClass::createObject("PIG_BASIC_SMALL") ) );
        level.addObject( new LevelObject( 80.887, -17.08, 179.808, ObjectStaticsClass::createObject("WOOD_BLOCK_2X2") ) );
        level.addObject( new LevelObject( 78.55, -26.053, 6.714, ObjectStaticsClass::createObject("PIG_BASIC_SMALL") ) );
        level.addObject( new LevelObject( 75.502, -10.223, 6.241, ObjectStaticsClass::createObject("PIG_BASIC_SMALL") ) );
        level.addObject( new LevelObject( 76.898, -2.068, 270.141, ObjectStaticsClass::createObject("STONE_BLOCK_4X2") ) );
        level.addObject( new LevelObject( 68.623, -2.073, 270.046, ObjectStaticsClass::createObject("STONE_BLOCK_4X2") ) );
        level.addObject( new LevelObject( 71.427, -11.075, 270.076, ObjectStaticsClass::createObject("WOOD_BLOCK_8X1") ) );
        level.addObject( new LevelObject( 73.84, -20.009, 90.127, ObjectStaticsClass::createObject("WOOD_BLOCK_8X1") ) );
        level.addObject( new LevelObject( 79.277, -11.054, 89.963, ObjectStaticsClass::createObject("WOOD_BLOCK_8X1") ) );
        level.addObject( new LevelObject( 86.043, -11.072, 270.199, ObjectStaticsClass::createObject("WOOD_BLOCK_8X1") ) );
        level.addObject( new LevelObject( 72.761, -20.011, 89.993, ObjectStaticsClass::createObject("WOOD_BLOCK_8X1") ) );
        level.addObject( new LevelObject( 82.755, -20.009, 90.135, ObjectStaticsClass::createObject("WOOD_BLOCK_8X1") ) );
        level.addObject( new LevelObject( 84.952, -11.072, 269.903, ObjectStaticsClass::createObject("WOOD_BLOCK_8X1") ) );
        level.addObject( new LevelObject( 82.356, -15.532, 359.783, ObjectStaticsClass::createObject("WOOD_BLOCK_8X1") ) );
        level.addObject( new LevelObject( 70.281, -11.073, 269.15, ObjectStaticsClass::createObject("WOOD_BLOCK_8X1") ) );
        level.addObject( new LevelObject( 77.136, -11.059, 90.008, ObjectStaticsClass::createObject("WOOD_BLOCK_8X1") ) );
        level.addObject( new LevelObject( 2.428, -0.988, 0, ObjectStaticsClass::createObject("BIRD_YELLOW") ) );
        level.addObject( new LevelObject( 0, -0.972, 0, ObjectStaticsClass::createObject("BIRD_YELLOW") ) );
        level.addObject( new LevelObject( 5.366, -1.12, 0, ObjectStaticsClass::createObject("BIRD_YELLOW") ) );
        level.addObject( new LevelObject( 78.205, -11.056, 90.005, ObjectStaticsClass::createObject("WOOD_BLOCK_8X1") ) );
        level.addObject( new LevelObject( 78.461, -21.989, 90.107, ObjectStaticsClass::createObject("WOOD_BLOCK_4X2") ) );
        level.addObject( new LevelObject( 82.699, -24.485, 180.262, ObjectStaticsClass::createObject("WOOD_BLOCK_8X1") ) );
        level.addObject( new LevelObject( 78.347, -29.615, 180.013, ObjectStaticsClass::createObject("WOOD_BLOCK_8X1") ) );
        level.addObject( new LevelObject( 81.835, -8.146, 359.878, ObjectStaticsClass::createObject("WOOD_BLOCK_4X2") ) );
        level.addObject( new LevelObject( 78.382, -18.031, 90.16, ObjectStaticsClass::createObject("WOOD_BLOCK_4X2") ) );
        level.addObject( new LevelObject( 74.615, -8.152, 0.121, ObjectStaticsClass::createObject("WOOD_BLOCK_4X2") ) );
        level.addObject( new LevelObject( 78.547, -5.058, 359.994, ObjectStaticsClass::createObject("STONE_BLOCK_4X2") ) );
        level.addObject( new LevelObject( 80.008, -2.068, 269.867, ObjectStaticsClass::createObject("STONE_BLOCK_4X2") ) );
        level.addObject( new LevelObject( 86.672, -5.069, 179.788, ObjectStaticsClass::createObject("STONE_BLOCK_4X2") ) );
        level.addObject( new LevelObject( 71.967, -2.073, 269.962, ObjectStaticsClass::createObject("STONE_BLOCK_4X2") ) );
        level.addObject( new LevelObject( 88.255, -2.073, 89.934, ObjectStaticsClass::createObject("STONE_BLOCK_4X2") ) );
        level.addObject( new LevelObject( 82.327, -6.596, 179.845, ObjectStaticsClass::createObject("STONE_BLOCK_8X1") ) );
        level.addObject( new LevelObject( 74.135, -6.6, 180.1, ObjectStaticsClass::createObject("STONE_BLOCK_8X1") ) );
        level.addObject( new LevelObject( 73.933, -15.536, 0.233, ObjectStaticsClass::createObject("WOOD_BLOCK_8X1") ) );
        level.addObject( new LevelObject( 83.825, -20.008, 90.136, ObjectStaticsClass::createObject("WOOD_BLOCK_8X1") ) );
        level.addObject( new LevelObject( 74.432, -24.488, 179.802, ObjectStaticsClass::createObject("WOOD_BLOCK_8X1") ) );
        level.addObject( new LevelObject( 75.903, -28.067, 179.994, ObjectStaticsClass::createObject("WOOD_BLOCK_2X2") ) );
        level.addObject( new LevelObject( 75.929, -26.038, 179.93, ObjectStaticsClass::createObject("WOOD_BLOCK_2X2") ) );
        level.addObject( new LevelObject( 86.001, -26.021, 180.291, ObjectStaticsClass::createObject("WOOD_BLOCK_2X2") ) );
        level.addObject( new LevelObject( 75.4, -31.165, 179.967, ObjectStaticsClass::createObject("WOOD_BLOCK_2X2") ) );
        level.addObject( new LevelObject( 85.375, -17.096, 179.839, ObjectStaticsClass::createObject("WOOD_BLOCK_2X2") ) );
        level.addObject( new LevelObject( 70.888, -17.096, 180.143, ObjectStaticsClass::createObject("WOOD_BLOCK_2X2") ) );
        level.addObject( new LevelObject( 71.179, -26.03, 179.684, ObjectStaticsClass::createObject("WOOD_BLOCK_2X2") ) );
        level.addObject( new LevelObject( 75.823, -17.082, 180.184, ObjectStaticsClass::createObject("WOOD_BLOCK_2X2") ) );
        level.addObject( new LevelObject( 81.591, -31.164, 180.083, ObjectStaticsClass::createObject("WOOD_BLOCK_2X2") ) );


		return level;
	}

	static Level Level1_20()
	{
		Level level = Level();

		level.addObject( new LevelObject( 80.885, -13.916, 358.928, ObjectStaticsClass::createObject("WOOD_BLOCK_2X1") ) );
        level.addObject( new LevelObject( 87.15, -4.592, 359.67, ObjectStaticsClass::createObject("WOOD_BLOCK_2X1") ) );
        level.addObject( new LevelObject( 73.443, -5.003, 0.137, ObjectStaticsClass::createObject("WOOD_BLOCK_2X2") ) );
        level.addObject( new LevelObject( 88.143, -9.314, 179.053, ObjectStaticsClass::createObject("WOOD_BLOCK_2X2") ) );
        level.addObject( new LevelObject( 82.267, -9.196, 178.831, ObjectStaticsClass::createObject("WOOD_BLOCK_2X2") ) );
        level.addObject( new LevelObject( 90.628, -11.331, 179.01, ObjectStaticsClass::createObject("WOOD_BLOCK_2X2") ) );
        level.addObject( new LevelObject( 84.546, -1.189, 0.015, ObjectStaticsClass::createObject("PIG_BASIC_SMALL") ) );
        level.addObject( new LevelObject( 76.129, -9.073, 180.059, ObjectStaticsClass::createObject("WOOD_BLOCK_2X2") ) );
        level.addObject( new LevelObject( 93.486, -4.672, 359.985, ObjectStaticsClass::createObject("WOOD_BLOCK_2X1") ) );
        level.addObject( new LevelObject( 90.36, -1.147, 0.013, ObjectStaticsClass::createObject("PIG_BASIC_SMALL") ) );
        level.addObject( new LevelObject( 88.419, -16.488, 90.707, ObjectStaticsClass::createObject("WOOD_BLOCK_4X2") ) );
        level.addObject( new LevelObject( 89.991, -13.467, 0.759, ObjectStaticsClass::createObject("WOOD_BLOCK_4X2") ) );
        level.addObject( new LevelObject( 76.124, -7.036, 180.021, ObjectStaticsClass::createObject("WOOD_BLOCK_4X2") ) );
        level.addObject( new LevelObject( 76.615, -5, 180.014, ObjectStaticsClass::createObject("WOOD_BLOCK_4X2") ) );
        level.addObject( new LevelObject( 87.083, -2.078, 89.917, ObjectStaticsClass::createObject("WOOD_BLOCK_4X1") ) );
        level.addObject( new LevelObject( 83.887, -13.971, 358.939, ObjectStaticsClass::createObject("WOOD_BLOCK_4X1") ) );
        level.addObject( new LevelObject( 8.152, -1.326, 0, ObjectStaticsClass::createObject("BIRD_YELLOW") ) );
        level.addObject( new LevelObject( 5.429, -1.299, 0, ObjectStaticsClass::createObject("BIRD_YELLOW") ) );
        level.addObject( new LevelObject( 10.553, -1.044, 0, ObjectStaticsClass::createObject("BIRD_YELLOW") ) );
        level.addObject( new LevelObject( 2.686, -1.337, 0, ObjectStaticsClass::createObject("BIRD_YELLOW") ) );
        level.addObject( new LevelObject( 0, -1.299, 0, ObjectStaticsClass::createObject("BIRD_YELLOW") ) );
        level.addObject( new LevelObject( 46.31, -81.814, 0, ObjectStaticsClass::createObject("TERRAIN_TEXTURED_HILLS_5X2") ) );
        level.addObject( new LevelObject( 84.163, -7.686, 178.762, ObjectStaticsClass::createObject("WOOD_BLOCK_8X1") ) );
        level.addObject( new LevelObject( 85.26, -11.861, 358.943, ObjectStaticsClass::createObject("WOOD_BLOCK_8X1") ) );
        level.addObject( new LevelObject( 81.685, -12.862, 178.927, ObjectStaticsClass::createObject("WOOD_BLOCK_8X1") ) );
        level.addObject( new LevelObject( 90.542, -5.706, 179.054, ObjectStaticsClass::createObject("WOOD_BLOCK_8X1") ) );
        level.addObject( new LevelObject( 85.042, -10.801, 178.893, ObjectStaticsClass::createObject("WOOD_BLOCK_8X1") ) );
        level.addObject( new LevelObject( 84.306, -6.639, 358.637, ObjectStaticsClass::createObject("WOOD_BLOCK_8X1") ) );
        level.addObject( new LevelObject( 83.572, -16.484, 88.924, ObjectStaticsClass::createObject("WOOD_BLOCK_4X2") ) );
        level.addObject( new LevelObject( 80.782, -4.998, 180.004, ObjectStaticsClass::createObject("WOOD_BLOCK_4X2") ) );
        level.addObject( new LevelObject( 91.154, -9.304, 359.013, ObjectStaticsClass::createObject("WOOD_BLOCK_4X2") ) );
        level.addObject( new LevelObject( 86.96, -13.445, 358.955, ObjectStaticsClass::createObject("WOOD_BLOCK_2X2") ) );
        level.addObject( new LevelObject( 77.627, -11.126, 178.942, ObjectStaticsClass::createObject("WOOD_BLOCK_2X2") ) );
        level.addObject( new LevelObject( 77.417, 0.993, 0.013, ObjectStaticsClass::createObject("TERRAIN_TEXTURED_HILLS_10X10") ) );
        level.addObject( new LevelObject( 97.241, 0.839, 0.013, ObjectStaticsClass::createObject("TERRAIN_TEXTURED_HILLS_10X10") ) );
        level.addObject( new LevelObject( 79.811, -11.179, 178.386, ObjectStaticsClass::createObject("STONE_BLOCK_2X2") ) );
        level.addObject( new LevelObject( 79.224, -9.125, 178.381, ObjectStaticsClass::createObject("STONE_BLOCK_4X2") ) );
        level.addObject( new LevelObject( 85.99, -19.384, 352.745, ObjectStaticsClass::createObject("STONE_CIRCLE_4X4") ) );
        level.addObject( new LevelObject( 91.112, -7.268, 359.016, ObjectStaticsClass::createObject("STONE_BLOCK_4X2") ) );


		return level;
	}

	static Level Level1_21()
	{
		Level level = Level();

		level.addObject( new LevelObject( 90.264, -13.339, 89.966, ObjectStaticsClass::createObject("WOOD_BLOCK_2X1") ) );
        level.addObject( new LevelObject( 95.707, -11.274, 179.205, ObjectStaticsClass::createObject("WOOD_BLOCK_2X2") ) );
        level.addObject( new LevelObject( 87.482, -10.738, 180.807, ObjectStaticsClass::createObject("WOOD_BLOCK_2X1") ) );
        level.addObject( new LevelObject( 93.667, -10.746, 178.87, ObjectStaticsClass::createObject("WOOD_BLOCK_2X1") ) );
        level.addObject( new LevelObject( 109.687, 0.838, 314.998, ObjectStaticsClass::createObject("TERRAIN_TEXTURED_HILLS_10X10") ) );
        level.addObject( new LevelObject( 70.351, 0.724, 314.998, ObjectStaticsClass::createObject("TERRAIN_TEXTURED_HILLS_10X10") ) );
        level.addObject( new LevelObject( 85.142, -11.273, 180.926, ObjectStaticsClass::createObject("WOOD_BLOCK_2X2") ) );
        level.addObject( new LevelObject( 0, 0.588, 135, ObjectStaticsClass::createObject("TERRAIN_TEXTURED_HILLS_10X10") ) );
        level.addObject( new LevelObject( 101.543, -15.634, 179.972, ObjectStaticsClass::createObject("WOOD_BLOCK_8X1") ) );
        level.addObject( new LevelObject( 107.449, -5.174, 180, ObjectStaticsClass::createObject("TERRAIN_TEXTURED_HILLS_5X2") ) );
        level.addObject( new LevelObject( 85.544, -16.329, 269.833, ObjectStaticsClass::createObject("ICE_BLOCK_4X2") ) );
        level.addObject( new LevelObject( 95.571, -16.339, 90.14, ObjectStaticsClass::createObject("ICE_BLOCK_4X2") ) );
        level.addObject( new LevelObject( 87.83, -18.362, 269.877, ObjectStaticsClass::createObject("ICE_BLOCK_4X2") ) );
        level.addObject( new LevelObject( 93.151, -18.372, 89.881, ObjectStaticsClass::createObject("ICE_BLOCK_4X2") ) );
        level.addObject( new LevelObject( 90.532, -8.139, 359.859, ObjectStaticsClass::createObject("PIG_HELMET") ) );
        level.addObject( new LevelObject( 75.938, -26.193, 269.97, ObjectStaticsClass::createObject("ICE_BLOCK_2X2") ) );
        level.addObject( new LevelObject( 79.148, -26.193, 270.022, ObjectStaticsClass::createObject("ICE_BLOCK_2X2") ) );
        level.addObject( new LevelObject( 82.397, -26.192, 270.036, ObjectStaticsClass::createObject("ICE_BLOCK_2X2") ) );
        level.addObject( new LevelObject( 98.046, -26.144, 269.903, ObjectStaticsClass::createObject("ICE_BLOCK_2X2") ) );
        level.addObject( new LevelObject( 101.131, -26.145, 269.978, ObjectStaticsClass::createObject("ICE_BLOCK_2X2") ) );
        level.addObject( new LevelObject( 93.41, -31.55, 359.231, ObjectStaticsClass::createObject("ICE_BLOCK_2X2") ) );
        level.addObject( new LevelObject( 90.173, -31.505, 359.196, ObjectStaticsClass::createObject("ICE_BLOCK_2X2") ) );
        level.addObject( new LevelObject( 86.866, -31.458, 359.117, ObjectStaticsClass::createObject("ICE_BLOCK_2X2") ) );
        level.addObject( new LevelObject( 104.386, -26.145, 270.045, ObjectStaticsClass::createObject("ICE_BLOCK_2X2") ) );
        level.addObject( new LevelObject( 102.586, -17.182, 89.976, ObjectStaticsClass::createObject("STONE_BLOCK_2X2") ) );
        level.addObject( new LevelObject( 101.553, -19.217, 89.986, ObjectStaticsClass::createObject("STONE_BLOCK_2X2") ) );
        level.addObject( new LevelObject( 101.772, -8.039, 359.996, ObjectStaticsClass::createObject("PIG_BASIC_MEDIUM") ) );
        level.addObject( new LevelObject( 78.784, -8.038, 359.272, ObjectStaticsClass::createObject("PIG_BASIC_MEDIUM") ) );
        level.addObject( new LevelObject( 77.852, -17.226, 90.035, ObjectStaticsClass::createObject("STONE_BLOCK_2X2") ) );
        level.addObject( new LevelObject( 100.471, -17.182, 90.013, ObjectStaticsClass::createObject("STONE_BLOCK_2X2") ) );
        level.addObject( new LevelObject( 92.994, -8.199, 89.996, ObjectStaticsClass::createObject("WOOD_BLOCK_4X1") ) );
        level.addObject( new LevelObject( 106.553, -14.205, 90.155, ObjectStaticsClass::createObject("ICE_BLOCK_4X2") ) );
        level.addObject( new LevelObject( 107.652, -11.2, 0.18, ObjectStaticsClass::createObject("ICE_BLOCK_4X2") ) );
        level.addObject( new LevelObject( 75.763, -10.152, 270.006, ObjectStaticsClass::createObject("ICE_BLOCK_8X1") ) );
        level.addObject( new LevelObject( 90.229, -29.954, 359.19, ObjectStaticsClass::createObject("ICE_BLOCK_8X1") ) );
        level.addObject( new LevelObject( 71.591, -8.194, 90.007, ObjectStaticsClass::createObject("ICE_BLOCK_4X2") ) );
        level.addObject( new LevelObject( 73.797, -8.196, 89.907, ObjectStaticsClass::createObject("ICE_BLOCK_4X2") ) );
        level.addObject( new LevelObject( 73.442, -14.189, 269.958, ObjectStaticsClass::createObject("ICE_BLOCK_4X2") ) );
        level.addObject( new LevelObject( 72.575, -11.188, 179.766, ObjectStaticsClass::createObject("ICE_BLOCK_4X2") ) );
        level.addObject( new LevelObject( 108.643, -8.196, 270.22, ObjectStaticsClass::createObject("ICE_BLOCK_4X2") ) );
        level.addObject( new LevelObject( 106.583, -8.199, 270.035, ObjectStaticsClass::createObject("ICE_BLOCK_4X2") ) );
        level.addObject( new LevelObject( 92.563, -15.371, 179.889, ObjectStaticsClass::createObject("WOOD_BLOCK_4X2") ) );
        level.addObject( new LevelObject( 94.895, -13.339, 180.164, ObjectStaticsClass::createObject("WOOD_BLOCK_4X2") ) );
        level.addObject( new LevelObject( 81.671, -10.153, 89.951, ObjectStaticsClass::createObject("WOOD_BLOCK_8X1") ) );
        level.addObject( new LevelObject( 82.036, -20.144, 90.064, ObjectStaticsClass::createObject("WOOD_BLOCK_8X1") ) );
        level.addObject( new LevelObject( 98.769, -20.102, 89.997, ObjectStaticsClass::createObject("WOOD_BLOCK_8X1") ) );
        level.addObject( new LevelObject( 90.259, -11.792, 179.861, ObjectStaticsClass::createObject("WOOD_BLOCK_8X1") ) );
        level.addObject( new LevelObject( 98.645, -10.153, 90.024, ObjectStaticsClass::createObject("WOOD_BLOCK_8X1") ) );
        level.addObject( new LevelObject( 78.595, -15.673, 180.026, ObjectStaticsClass::createObject("WOOD_BLOCK_8X1") ) );
        level.addObject( new LevelObject( 78.543, -14.622, 179.994, ObjectStaticsClass::createObject("WOOD_BLOCK_8X1") ) );
        level.addObject( new LevelObject( 101.474, -14.616, 180.016, ObjectStaticsClass::createObject("WOOD_BLOCK_8X1") ) );
        level.addObject( new LevelObject( 93.86, -25.364, 269.844, ObjectStaticsClass::createObject("ICE_BLOCK_8X1") ) );
        level.addObject( new LevelObject( 86.808, -25.347, 269.68, ObjectStaticsClass::createObject("ICE_BLOCK_8X1") ) );
        level.addObject( new LevelObject( 79.243, -24.617, 0.017, ObjectStaticsClass::createObject("ICE_BLOCK_8X1") ) );
        level.addObject( new LevelObject( 104.204, -20.103, 270.075, ObjectStaticsClass::createObject("ICE_BLOCK_8X1") ) );
        level.addObject( new LevelObject( 90.436, -20.883, 359.876, ObjectStaticsClass::createObject("ICE_BLOCK_8X1") ) );
        level.addObject( new LevelObject( 101.301, -24.572, 359.98, ObjectStaticsClass::createObject("ICE_BLOCK_8X1") ) );
        level.addObject( new LevelObject( 20.83, -3.947, 90, ObjectStaticsClass::createObject("TERRAIN_TEXTURED_HILLS_5X5") ) );
        level.addObject( new LevelObject( 76.25, -20.146, 270.028, ObjectStaticsClass::createObject("ICE_BLOCK_8X1") ) );
        level.addObject( new LevelObject( 104.448, -10.151, 89.935, ObjectStaticsClass::createObject("ICE_BLOCK_8X1") ) );
        level.addObject( new LevelObject( 88.066, -8.198, 90.008, ObjectStaticsClass::createObject("WOOD_BLOCK_4X1") ) );
        level.addObject( new LevelObject( 90.509, -18.367, 269.907, ObjectStaticsClass::createObject("WOOD_BLOCK_4X2") ) );
        level.addObject( new LevelObject( 90.492, -25.416, 89.621, ObjectStaticsClass::createObject("WOOD_BLOCK_4X2") ) );
        level.addObject( new LevelObject( 90.379, -22.42, 359.806, ObjectStaticsClass::createObject("WOOD_BLOCK_4X2") ) );
        level.addObject( new LevelObject( 84.966, -7.221, 180.272, ObjectStaticsClass::createObject("WOOD_BLOCK_4X2") ) );
        level.addObject( new LevelObject( 85.494, -9.231, 180.925, ObjectStaticsClass::createObject("WOOD_BLOCK_4X2") ) );
        level.addObject( new LevelObject( 88.589, -15.366, 179.857, ObjectStaticsClass::createObject("WOOD_BLOCK_4X2") ) );
        level.addObject( new LevelObject( 95.946, -7.222, 179.766, ObjectStaticsClass::createObject("WOOD_BLOCK_4X2") ) );
        level.addObject( new LevelObject( 86.405, -13.33, 179.841, ObjectStaticsClass::createObject("WOOD_BLOCK_4X2") ) );
        level.addObject( new LevelObject( 95.56, -9.236, 179.21, ObjectStaticsClass::createObject("WOOD_BLOCK_4X2") ) );
        level.addObject( new LevelObject( 5.167, -7.204, 0, ObjectStaticsClass::createObject("BIRD_YELLOW") ) );
        level.addObject( new LevelObject( 19.604, -7.296, 0, ObjectStaticsClass::createObject("BIRD_RED") ) );
        level.addObject( new LevelObject( 17.26, -7.251, 0, ObjectStaticsClass::createObject("BIRD_YELLOW") ) );
        level.addObject( new LevelObject( 21.638, -7.021, 0, ObjectStaticsClass::createObject("BIRD_BLUE") ) );
        level.addObject( new LevelObject( 10.795, -7.213, 0, ObjectStaticsClass::createObject("BIRD_YELLOW") ) );
        level.addObject( new LevelObject( 8.007, -7.179, 0, ObjectStaticsClass::createObject("BIRD_YELLOW") ) );
        level.addObject( new LevelObject( 15.275, -7.046, 0, ObjectStaticsClass::createObject("BIRD_BLUE") ) );
        level.addObject( new LevelObject( 13.586, -7.296, 0, ObjectStaticsClass::createObject("BIRD_RED") ) );
        level.addObject( new LevelObject( 90.441, -28.409, 89.373, ObjectStaticsClass::createObject("STONE_BLOCK_2X2") ) );
        level.addObject( new LevelObject( 23.075, 0.557, 225, ObjectStaticsClass::createObject("TERRAIN_TEXTURED_HILLS_10X10") ) );
        level.addObject( new LevelObject( 79.089, -19.261, 90.041, ObjectStaticsClass::createObject("STONE_BLOCK_2X2") ) );
        level.addObject( new LevelObject( 80.046, -17.225, 90.03, ObjectStaticsClass::createObject("STONE_BLOCK_2X2") ) );
        level.addObject( new LevelObject( 103.367, -1.232, 89.999, ObjectStaticsClass::createObject("TERRAIN_TEXTURED_HILLS_10X10") ) );
        level.addObject( new LevelObject( 93.84, -1.289, 89.999, ObjectStaticsClass::createObject("TERRAIN_TEXTURED_HILLS_10X10") ) );
        level.addObject( new LevelObject( 13.731, -1.547, 90, ObjectStaticsClass::createObject("TERRAIN_TEXTURED_HILLS_10X10") ) );
        level.addObject( new LevelObject( 4.754, -1.43, 179.999, ObjectStaticsClass::createObject("TERRAIN_TEXTURED_HILLS_10X10") ) );
        level.addObject( new LevelObject( 84.466, -1.289, 89.999, ObjectStaticsClass::createObject("TERRAIN_TEXTURED_HILLS_10X10") ) );
        level.addObject( new LevelObject( 75.092, -1.289, 89.999, ObjectStaticsClass::createObject("TERRAIN_TEXTURED_HILLS_10X10") ) );


		return level;
	}

	static std::vector< Level > LevelVector()
	{
		std::vector< Level > lv(11);
		lv.push_back(Level1_1());
		lv.push_back(Level1_4());
		lv.push_back(Level1_5());
		lv.push_back(Level1_7());
		lv.push_back(Level1_9());
		lv.push_back(Level1_12());
		lv.push_back(Level1_13());
		lv.push_back(Level1_16());
		lv.push_back(Level1_17());
		lv.push_back(Level1_20());
		lv.push_back(Level1_21());
		return lv;
	}
};