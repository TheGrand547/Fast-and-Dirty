#include "Point.h"

Point::Point(int x, int y) : x(x), y(y)
{
	
}

Point::~Point()
{
	
}

Point Point::operator=(const Point& point)
{
	this->x = point.x;
	this->y = point.y;
	return *this;
}

Point Point::operator+(const Point& point)
{
	return Point(this->x + point.x, this->y + point.y);
}

Point Point::operator-(const Point& point)
{
	return Point(this->x - point.x, this->y - point.y);
}

Point Point::operator+=(const Point& point)
{
	return Point(this->x + point.x, this->y + point.y);
}

Point Point::operator-=(const Point& point)
{
	*this += point.negate();
	return Point(this->x - point.x, this->y - point.y);
}

Point Point::negate() const 
{
	return Point(-this->x, -this->y);
}
