#pragma once
#include <iostream>

using namespace std;

class BaseShape
{

protected:
virtual void DebugPrint();

};

class Point : public BaseShape
{
public:
	virtual void DebugPrint();
	
	friend std::ostream &operator <<(std::ostream &OS, Point name)
	{
		OS << name.X_Point;
		OS << name.Y_Point;
		return OS;
	}
	Point(float X, float Y)
	{
		X_Point = X;
		Y_Point = Y;
	

	}
	


	
private:	
	float X_Point;
	float Y_Point;
	
};

class Line : public BaseShape
{
public:
	virtual void DebugPrint();
	Line(Point *X, Point *Y)
	{
		Point_X = X;
		Point_Y = Y;
	}

private:
	Point *Point_Y;
	Point *Point_X;
};




class Retangle : public BaseShape
{
public:
	virtual void DebugPrint();
	friend std::ostream &operator <<(std::ostream &OS, Retangle name)
	{
		OS << name.X_Ret;
		OS << name.Y_Ret;
		OS << name.Z_Ret;
		OS << name.W_Ret;
		return OS;
	}
	Retangle(Line *X, Line *Y, Line *Z, Line *W)
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
	Circle(float X, float Y) 
	{

	}
	

};

//class Line : public BaseShape
//{
//public:
//	virtual void DebugPrint();
//	Line(Point *X, Point *Y) 
//	{
//		Point_X = X;
//		Point_Y = Y;
//	}
////	
//private:
//		Point *Point_Y;
//		Point *Point_X;
//};

class Triangle : public BaseShape
{
public:
	virtual void DebugPrint();
	//Triangle(Line X, Line Y, Line Z);


};
		
		