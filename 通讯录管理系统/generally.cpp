#include<iostream>
#include "Point.h"
#include "Circle.h"
using namespace std;
//class Point {
//	int m_X;
//	int m_Y;
//public:
//	void setX(int m_X) {
//		this->m_X = m_X;
//	}
//	int getX() {
//		return m_X;
//	}
//	void setY(int m_Y) {
//		this->m_Y = m_Y;
//	}
//	int getY() {
//		return m_Y;
//	}
//};
//class Circle {
//	int m_R;
//	Point m_Center;
//public:
//	void setR(int m_R) {
//		this->m_R = m_R;
//	}
//	int getR() {
//		return m_R;
//	}
//	void setCenter(Point m_Center) {
//		this->m_Center = m_Center;
//	}
//	Point getCenter() {
//		return m_Center;
//	}
//};
//void relation(Circle &c,Point &p) {
//	int cpDistance =
//		(c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) +
//		(c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());
//	int rDistance = c.getR() * c.getR();
//	if (cpDistance == rDistance) {
//		cout << "Ô²ÉÏ" << endl;
//	}
//	else if(cpDistance > rDistance){
//		cout << "Ô²Íâ" << endl;
//	}
//	else {
//		cout << "Ô²ÄÚ" << endl;
//	}
//}
//int main() {
//	Circle c{};
//	c.setR(10);
//	Point center{};
//	center.setX(10);
//	center.setY(10);
//	c.setCenter(center);
//	Point p{};
//	p.setX(10);
//	p.setY(0);
//	relation(c,p);
//}