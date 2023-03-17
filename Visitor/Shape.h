#pragma once
#include "IVisitor.h"

class Shape
{
public:
	virtual ~Shape() {};
	virtual void accept(IVisitor* visitor) const = 0;
};

