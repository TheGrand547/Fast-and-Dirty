#pragma once
#ifndef POINT_H
#define POINT_H

struct Point
{
	public:
		int x, y;
		Point(int x = 0, int y = 0);
		~Point();
		Point operator=(const Point& point);
		Point operator+(const Point& point);
		Point operator-(const Point& point);
		Point operator+=(const Point& point);
		Point operator-=(const Point& point);
		Point negate() const;
};

#endif
