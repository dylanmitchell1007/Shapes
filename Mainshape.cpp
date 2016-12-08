#include <iostream>
#include "Shapes.h"

using namespace std;





int main()
{
	char input = ' ';
	bool run = true;
	Point * p_ointONE = new Point(1,1);
	Point * p_ointTWO = new Point(1,1);
	Point * p_ointThree = new Point(2,2);
	Point * p_ointFour = new Point(3,3);



	Line * L_ineOne = new Line(p_ointONE, p_ointTWO);
	Line * L_ineTwo = new Line(p_ointTWO, p_ointThree);
	Line * L_ineThree = new Line(p_ointThree, p_ointFour);
	Line * L_ineFour = new Line(p_ointFour, p_ointONE);


	Rectangle * R_etangle = new Rectangle(L_ineOne, L_ineTwo, L_ineThree, L_ineFour);


	Circle * C_ircle = new Circle(p_ointONE,2);


	Triangle * T_riangle = new Triangle(L_ineOne, L_ineTwo, L_ineThree);

	while (run == true)
	{
		cout << "\n" "\n";
		cout << "Type The Letter Of The Shapes" "\n";
		cout << "P-Point" "\n";
		cout << "R-Retangle""\n";
		cout << "C-Circle""\n";
		cout << "L-Line""\n";
		cout << "T-Triangle""\n";

		cin >> input;
		switch (input)
		{
		case 'P':
		{
			p_ointONE->DebugPrint();
			break;
		};
		case 'R':
		{
			R_etangle->DebugPrint();
			break;
		};
		case 'C':
		{
			C_ircle->DebugPrint();
			break;
		};
		case 'L':
		{
			L_ineOne->DebugPrint();
			break;
		};
		case 'T':
		{
			T_riangle->DebugPrint();
			break;

		};




		}

	}





	system("pause");
	return 0;
}
	