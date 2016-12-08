#pragma once
#include <iostream>

using namespace std;

class BaseShape
{
public:
BaseShape() {}

protected:
virtual void DebugPrint()=0;
};

class Point : public BaseShape
{
public:
	Point() {}
	Point(float X, float Y)
	{
		m_X = X;
		m_Y = Y;
	}

	friend std::ostream &operator <<(std::ostream &OS, Point name)
	{
		OS << name.m_X << "," << name.m_Y;
		return OS;
	}

	virtual void DebugPrint();

	float m_X;
	float m_Y;
	
};

class Line : public BaseShape
{
public:
	Line(){}
	virtual void DebugPrint();
	friend std::ostream &operator <<(std::ostream &OS, Line name)
	{
		OS << name.Point_X << "," << name.Point_Y;
		return OS;
	}
	Line(Point *X, Point *Y)
	{
		Point_X = X;
		Point_Y = Y;
	}


	Point *Point_Y;
	Point *Point_X;
};




class Rectangle : public BaseShape
{
public:
	virtual void DebugPrint();
	friend std::ostream &operator <<(std::ostream &OS, Rectangle name)
	{
		OS << name.X_Ret;
		OS << name.Y_Ret;
		OS << name.W_Ret;
		OS << name.Z_Ret;
		return OS;
	}
	Rectangle(Line *X, Line *Y, Line *Z, Line *W)
	{
		X_Ret = X;
		Y_Ret = Y;
		Z_Ret = Z;
		W_Ret = W;
	}

private:
	Line *X_Ret;
	Line *Y_Ret;
	Line *Z_Ret;
	Line *W_Ret;
};

class Circle : public BaseShape
{
public:
	virtual void DebugPrint();
	friend std::ostream &operator <<(std::ostream &OS, Circle name)
	{
		OS << name.m_Center<< "," << name.m_Radius;
		return OS;
	}
	Circle(Point *Center, float Radius) 
	{
		m_Center = Center;
		m_Radius = Radius;
	}
private:
	Point *m_Center;
	float m_Radius;
};

class Triangle : public BaseShape
{
public:
	virtual void DebugPrint();
	friend std::ostream &operator <<(std::ostream &OS, Triangle name)
	{
		OS << name.m_LX;
		OS << name.m_LY;
		OS << name.m_LZ;
		return OS;
	}
	Triangle(Line *X, Line *Y, Line *Z)
	{
		m_LY = X;
		m_LX = Y;
		m_LZ = Z;
	}
protected:
	Line *m_LY;
	Line *m_LX;
	Line *m_LZ;

};
		
		