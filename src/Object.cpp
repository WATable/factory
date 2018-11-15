#include "Object.h"

Object::Object()
{
}

Object::~Object()
{
}

string Object::ToString()
{
	if (this == NULL)
	{
		throw "Object is null";
	}
	return "Object";
}