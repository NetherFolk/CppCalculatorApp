/****************************************************************
 * 	CppCalculatorApp v0.1
 * 	Made by Nazrin Baharudin (@NetherFolk)
 ***************************************************************/

#include <iostream>
#include <../include/calcFunctions.hpp>

int main()
{
	// variable declarations
	int num1;
	int num2;
	std::string operation;
	int result;

	// getting the inputs
	std::cout << "ENTER THE FIRST NUMBER: ";
	std::cin >> num1;
	std::cout << "ENTER THE SECOND NUMBER: ";
	std::cin >> num2;
	std::cout << "ENTER THE OPERATION(add, sub, mul, div): ";
	std::cin >> operation;
	std::cout << std::endl;

	// changing the output based on the operation inputted
	if ( operation == "add" )
	{
		result = add( num1, num2);
		std::cout << "THE RESULT OF " << num1 << " + " << num2 << " = " << result << std::endl;
	} else if ( operation == "sub" )
	{
		result = sub( num1, num2 );
		std::cout << "THE RESULT OF " << num1 << " - " << num2 << " = " << result << std::endl;
	} else if ( operation == "mul" )
	{
		result = mul( num1, num2 );
		std::cout << "THE RESULT OF " << num1 << " x " << num2 << " = " << result << std::endl;
	} else if ( operation == "div" )
	{
		result = divide( num1, num2 );
		std::cout << "THE RESULT OF " << num1 << " ÷ " << num2 << " = " << result << std::endl;
	} else {
		// if wrong operation is entered
		std::cout << "This operation is not supported." << std::endl;
		system("pause");
	}

	system("pause");
	return 0;
}
