#include <iostream>
#include "Shapes.h"

using namespace std;



void BaseShape::DebugPrint()
{

}
void Point::DebugPrint() 
{
	cout << this->X_Point << this->Y_Point;
	
};
void Retangle::DebugPrint()
{
	cout << this->X_Ret << this->Y_Ret << this->W_Ret << this->Z_Ret;
};
void Circle::DebugPrint()
{

};
void Line::DebugPrint()
{

}

;
void Triangle::DebugPrint()
{

};

