#include <iostream>
#include "Shapes.h"

using namespace std;





int main()
{
	char input = ' ';
	bool run = true;
	Point * p_ointONE = new Point(0.0 , 0.0 );
	Point * p_ointTWO = new Point(1.1, 1.1);
	Point * p_ointThree = new Point(2.2, 2.2);
	Point * p_ointFour = new Point(3.3, 3.3);
	Line * L_ineOne = new Line(p_ointONE, p_ointTWO);
	Line * L_ineTwo = new Line(p_ointTWO, p_ointThree);
	Line * L_ineThree = new Line(p_ointThree, p_ointFour);
	Line * L_ineFour = new Line(p_ointFour, p_ointONE);
	Retangle * R_etangle = new Retangle(L_ineOne, L_ineTwo, L_ineThree, L_ineFour);
	Circle * C_ircle = new Circle(4,5);
	

	while (run == true)
	{
		//cout "/n
		cin >> input;
		switch (input)
		{
		case 'P':
		{
			p_ointONE->DebugPrint();
		}
		case 'R':
		{
			R_etangle->DebugPrint();
		}
		case 'C':
		{
			//C_ircle->DebugPrint();
		}
		case 'L':
		{
			//L_ine->DebugPrint();
		}







		}

	}





	system("pause");
	return 0;
}
	