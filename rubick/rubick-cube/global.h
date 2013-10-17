#pragma once

#include "common.h"

class Cube;
class Face;
class Picker;

extern mat4 camera;//�Ҽ���ת�任
extern mat4 projection;//ͶӰ�任
extern mat4 view;//��ͼ�任
extern mat4 scroll;//�������ű任

extern ivec2 mouseButtonRightLastpos;
extern bool mouseButtonRightReleased;

extern vector<Cube*> cubes;
extern vector<Face*> faces;

extern Picker picker;