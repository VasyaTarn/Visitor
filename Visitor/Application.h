#pragma once
#include <iostream>
#include <array>
#include "XMLExportVisitor.h"

using namespace std;

class Application
{
public:
	void clientCode(array<const Shape*, 3> shapes, IVisitor* visitor)
	{
		for (const Shape* shp : shapes)
		{
			shp->accept(visitor);
		}
	}
};

