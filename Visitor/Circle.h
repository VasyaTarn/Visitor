#pragma once
#include <iostream>
#include "Shape.h"

using namespace std;

class Circle : public Shape
{
public:
	void accept(IVisitor* visitor) const override
	{
		visitor->visitCircle(this);
	}

	void exportCircle() const
	{
		cout << "The circle shape is exported to XML" << endl;
	}
};

