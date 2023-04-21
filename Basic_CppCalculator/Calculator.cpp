#include "Calculator.h"


double Calculator::Calculate(double x, char operand, double y)
{
	switch (operand)
	{
	case '+':




		return x + y;





	case '-':
		return x - y;



	case '*':
		return x * y;




	case '/':
		
		return x / y;
	}

}

void Calculator::perform()
{
    double x{ };
    double y{ };
    double result{ };
    char op{ '+' };
    string Exit{ "Exit" };

    cout << "Calculator Console Application" << endl << endl;
    cout << "Please enter the operation to perform. Format: a+b | a-b | a*b | a/b"
        << endl;

    Calculator c;
   
    
        while (true)
        {


            if (!(cin >> x)) // input error invalidation to only accept an integer
            {
                cout << "ERROR: Please enter an integer only " << endl;
                cin.clear();
                cin.ignore();
                cin >> x;

            }






            if (!(cin >> op) || (op != '+' && op != '-' && op != '*' && op != '/')) // input error validation to only accept the basic operands 
            {
                cin.clear();
                cin.ignore();
                cout << "Please enter ONLY one of the following operands + , -, /, * " << endl;
                cin >> op;

            }



            if (!(cin >> y))  // input error invalidation to only accept an integer
            {
                cout << "EROR: Please enter an integer only " << endl;


                cin >> y;
            }



            else  if (op == '/' && y == 0)
            {


                cout << "A Number can't be divided by zero! please try again " << endl;


            }


            result = c.Calculate(x, op, y);
            cout << "Result " << "of " << x << op << y << " is: " << result << endl;


        }
   } 
   



