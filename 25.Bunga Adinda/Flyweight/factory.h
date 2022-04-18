#pragma once
#include <iostream>
#include "Object.h"
#include <vector>

class Factory
{
public:
	vector<Object> listOf;
	Object* getObject(string type);
};