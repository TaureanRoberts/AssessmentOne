#pragma once
using namespace std;
class Point2D
{
private:
	float mX;
	float mY;
public:
	Point2D();
	Point2D(float x, float y);
	float GetX();
	float GetY();
	void PrintPoint();
	friend istream &operator >> (istream &input, Point2D &other);
};