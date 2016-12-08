#include <iostream>
#include "Shapes.h"

using namespace std;



void BaseShape::DebugPrint()
{

}
void Point::DebugPrint() 
{
	cout << "{";
	cout << this->m_X << ","<< this->m_Y;
	cout << "}\n";
	
};

void Line::DebugPrint()
{
	this->Point_X->DebugPrint();
	this->Point_Y->DebugPrint();
}

void Rectangle::DebugPrint()
{	
	cout << this->X_Ret << this->Y_Ret << "," << this->W_Ret << this->Z_Ret;
};
void Circle::DebugPrint()
{
	cout << *this->m_Center << this->m_Radius;
};

void Triangle::DebugPrint()
{
	cout << *this->m_LX << *this->m_LY << *this->m_LZ;
};

