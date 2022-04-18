#include "factory.h"

Object* Factory::getObject(string type)
{
	Object* returnObject = new Object;

	struct object_has_type
	{
		object_has_type(string const& n) : type(n) {}
		bool operator () (Object& p) { return p.getTipe() == type; }
	private:
		string type;
	};

	vector<Object>::iterator it = find_if(listOf.begin(), listOf.end(), object_has_type(type));

	if (it != listOf.end())
	{
		*returnObject = *it;
	}
	else
	{
		Object* temp;
		temp = new Object();
		temp->setTipe(type);
		listOf.push_back(*temp);
		returnObject = temp;
	}
	return returnObject;
}