#pragma once
#include <iostream>
#include "Shape.h"

using namespace std;

class Rectangle : public Shape
{
public:
	void accept(IVisitor* visitor) const override
	{
		visitor->visitRectangle(this);
	}

	void exportRectangle() const
	{
		cout << "The rectangle shape is exported to XML" << endl;
	}
};

