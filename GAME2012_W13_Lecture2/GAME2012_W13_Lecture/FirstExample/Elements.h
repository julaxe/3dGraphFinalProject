#pragma once
#include "Shape.h"

class Elements
{
public:
	Elements()
	{
		id = 'n';
		Position = {0,0};
	}
	Elements(char id, glm::vec2 pos)
	{
		this->id = id;
		Position = pos;
	}
	char id;
	glm::vec2 Position;
};