#include "global.h"
#include "Picker.h"

mat4 camera;//�Ҽ���ת�任
mat4 projection;//ͶӰ�任
mat4 view;//��ͼ�任
mat4 scroll;//�������ű任

ivec2 mouseButtonRightLastpos;
bool mouseButtonRightReleased = true;

vector<Cube*> cubes;
vector<Face*> faces;

Picker picker;