#pragma once
#include <iostream>
#include "Shape.h"

using namespace std;

class Dot : public Shape
{
public:
	void accept(IVisitor* visitor) const override
	{
		visitor->visitDot(this);
	}

	void exportDot() const
	{
		cout << "The dot shape is exported to XML" << endl;
	}
};

