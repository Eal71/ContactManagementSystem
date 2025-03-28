#pragma once
#include "Point.h"
class Circle
{
	int m_R;
	Point m_Center;
public:
	void setR(int m_R);
	int getR();
	void setCenter(Point m_Center);
	Point getCenter();
};

