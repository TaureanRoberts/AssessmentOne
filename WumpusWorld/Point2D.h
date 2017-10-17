#pragma once

class Point2D
{
private:
	float mX;
	float mY;
public:
	Point2D();
	Point2D(float y, float x);
	int getGrid();
	float FindX();
	float FindY();
	void showPoint();
	

};