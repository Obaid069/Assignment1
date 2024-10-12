// This program has the user input a number n and then finds the
// mean of the first n positive integers
// PLACE YOUR NAME HERE
#include <iostream>
using namespace std;

int main()
{
	int value; // value is some positive number n
	int total = 0; // total holds the sum of the first n positive numbers
	int numbr; // the amount of numbers
	int mean; // the average of the first n positive numbers
	int number,number2;
	cout << "Please enter two  positive integer in a sequence" << endl;
	cin >> number>>number2;
	
	if (number>0&&number2>0)
	{
		for (numbr = number; number<=number2; numbr++)
		{
			total = total + numbr;
		
			
		} // curly braces are optional since there is only one statement
		// operator here
		
        mean = static_cast<float>(total) / numbr; 
        
		cout << "The mean average of the first " << numbr
		<< " positive integers is " << mean << endl;
		
	 // note the use of the typecast
		
	}
	else
		cout << "Invalid input - integer must be positive" << endl;
	
	return 0;
}
	
