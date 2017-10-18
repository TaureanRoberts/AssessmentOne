#include "Point2D.h"
#include <iostream>

Point2D::Point2D()
{
	mX = 0;
	mY = 0;
}

Point2D::~Point2D()
{
}

Point2D::Point2D(float y, float x)
{
	mX = x;
	mY = y;
}

Point2D Point2D::operator+(const Point2D & other)
{
	Point2D newPoint;
	newPoint.mX = mX + other.mX;
	newPoint.mY = mY + other.mY;
	return newPoint;
}

Point2D Point2D::operator-(const Point2D & other)
{
	Point2D subPoint;
	subPoint.mX = mX - other.mX;
	subPoint.mY = mY - other.mY;
	return subPoint;
}

bool Point2D::operator==(const Point2D &other)
{
	return (mX == mX && mY == mY) ? true : false;
}

bool Point2D::operator!=(const Point2D & other)
{
	return false;
}


float Point2D::GetX()
{

	return mX;
}

float Point2D::GetY()
{
	return mY;
}

void Point2D::showPoint()
{
	std::cout << "<" << mX << "," << ">\n";
}