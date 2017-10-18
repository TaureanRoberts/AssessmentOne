#pragma once
using namespace std;

class Point2D
{
private:
	float mX;
	float mY;
public:
	Point2D();
	~Point2D();
	Point2D(float y, float x);
	Point2D operator +(const Point2D &other);
	Point2D operator -(const Point2D &other);
	bool operator ==(const Point2D &other);
	bool operator != (const Point2D &other);
	float GetX();
	float GetY();
	void showPoint();
	
	
};