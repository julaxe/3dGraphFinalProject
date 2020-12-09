#pragma once
#include "Shape.h"

class Elements
{
public:
	Elements(char id, glm::vec2 pos)
	{
		this->id = id;
		Position = pos;
	}
private:
	char id;
	glm::vec2 Position;
};