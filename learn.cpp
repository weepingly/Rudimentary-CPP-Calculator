#include <iostream>
#include <stdlib.h>
#include <string>

int Add(int x,int y)
{
	using namespace std;
	return x + y;
}

int Subtract(int x, int y)
{
	using namespace std;
	return x - y;
}

int Multiply(int x, int y)
{
	using namespace std;
	return x * y;
}

int Divide(int x, int y)
{
	using namespace std;
	if (y == 0)
	{
		cout << "Division by 0 is not possible." << endl;
			return 0;
	}
	return x / y;
}

std::string Incorrect(std::string function)
{
	using namespace std;
		string finale;
		cout << "It seems that you did not type an operation. Please type it correctly." << endl;
		cout << "What Function do you want to do?" << endl;
		cout << "Add, Subtract, Multiply, Divide" << endl;
		cin >> finale;
		return finale;
}

int Calculate(int Input1, int Input2, std::string function)
{
	int Final = 0;
	using namespace std;
	if (function == "Add")
	{
		Final = Add(Input1, Input2);
	}
	else if (function == "Subtract")
	{
		Final = Subtract(Input1, Input2);
	}
	else if (function == "Multiply")
	{
		Final = Multiply(Input1, Input2);
	}
	else
	{
		Final = Divide(Input1, Input2);
	}
	return Final;
}

int main()
{
	using namespace std;
	int Input1;
	int Input2;
	int Output = 2;
	string function;
	string compare;
	cout << "Type Your First Number" << endl;
	cin >> Input1;
	cout << "Type Your Second Number" << endl;
	cin >> Input2;
	cout << "What Function do you want to do?" << endl;
	cout << "Add, Subtract, Multiply, Divide" << endl;
	cin >> function;
	while (function != "Add" && function != "Subtract" && function != "Multiply" && function != "Divide")
	{
		function.assign(Incorrect(function));
	}
	Output = Calculate(Input1, Input2, function);
	cout << "Your output is : ";
	cout << Output;
	return 0;
}
	

