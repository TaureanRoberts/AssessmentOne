#include <iostream>
#include "Point2D.h"

Point2D::Point2D()
{
	mX = 0;
	mY = 0;
}

Point2D::Point2D(float x, float y)
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

Point2D Point2D::operator*(const Point2D & other)
{
	Point2D multiPoint;
	multiPoint.mX = mX * other.mX;
	multiPoint.mY = mY * other.mY;
	return multiPoint;
}

Point2D Point2D::operator*(float other)
{
	Point2D pointScale;
	pointScale.mX * (mX, mY);
	pointScale.mY * (mX, mY);
	return pointScale;
}

float Point2D::GetX()
{
	return mX;
}

float Point2D::GetY()
{
	return mY;
}

void Point2D::PrintPoint()
{

	Point2D showPlace;
	std::cout << showPlace.mX << std::endl;
	std::cout << showPlace.mY << std::endl;

}

bool Point2D::operator==(const Point2D & other)
{
	return (mX == mX && mY == mY) ? true : false;
}


