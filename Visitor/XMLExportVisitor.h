#pragma once
#include "IVisitor.h"
#include "Rectangle.h"
#include "Dot.h"
#include "Circle.h"

using namespace std;

class XMLExportVisitor : public IVisitor
{
	void visitRectangle(const Rectangle* rect) const override
	{
		rect->exportRectangle();
	}
	void visitDot(const Dot* dot) const override
	{
		dot->exportDot();
	}
	void visitCircle(const Circle* circle) const override
	{
		circle->exportCircle();
	}
};

