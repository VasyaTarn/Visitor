#pragma once

class Rectangle;
class Dot;
class Circle;

class IVisitor
{
public:
	virtual void visitRectangle(const Rectangle* rect) const = 0;
	virtual void visitDot(const Dot* dot) const = 0;
	virtual void visitCircle(const Circle* circle) const = 0;
};

