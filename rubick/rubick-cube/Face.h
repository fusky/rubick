#pragma once

#include "common.h"
class Cube;

class Face
{
public:
	Face(Cube* cube, byte index);

	vec3 center;
	Cube* cube;//��������������
	byte index;
};
