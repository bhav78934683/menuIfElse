// Math Tutor
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	int num1,          // The first random number
		num2,          // The second random number
		choice,        // The user's choice of problem
		studentAnswer, // The student's answer
		correctAnswer; // The correct answer

					   // Seed the random number generator.
	srand(time(0));

	// Display the menu and get a choice.
	cout << "\tMath Tutor Menu\n";
	cout << "------------------------------\n";
	cout << "1. Addition problem\n";
	cout << "2. Subtraction problem\n";
	cout << "3. Multiplication problem\n";
	cout << "4. Quit this program\n";
	cout << "------------------------------\n";
	cout << "Enter your choice (1-4): ";
	cin >> choice;

	// Produce a problem.
	if (choice == 1)
	{
		// Addition problem Generate two random numbers in
		// the range 1 - 500.
		num1 = 1 + rand() % 500;
		num2 = 1 + rand() % 500;

		// Calculate the correct answer.
		correctAnswer = num1 + num2;

		// Display the problem.
		cout << "\n\n";
		cout << "  " << setw(4) << num1 << endl;
		cout << " +" << setw(4) << num2 << endl;
		cout << "  " << "----" << endl;
		cout << "   ";
	}
	else if (choice == 2)
	{
		// Subtraction problem generate two random numbers in
		// the range 1 - 999.
		num1 = 1 + rand() % 999;
		num2 = 1 + rand() % 999;

		//  If number1 < number2, swap number1 with number2
		if (num1 < num2)
		{
			int temp = num1;
			num1 = num2;
			num2 = temp;
		}


		// Get the correct answer.
		correctAnswer = num1 - num2;

		// Display the problem.
		cout << "\n\n";
		cout << "  " << setw(4) << num1 << endl;
		cout << " -" << setw(4) << num2 << endl;
		cout << "  " << "----" << endl;
		cout << "   ";
	}

	else if (choice == 3)
	{
		// Multiplication problem generate two random numbers. The first in
		// the range 1 - 100, the second in the range 1 - 9.
		num1 = 1 + rand() % 100;
		num2 = 1 + rand() % 9;

		// Calculate the correct answer.
		correctAnswer = num1 * num2;

		// Display the problem.
		cout << "\n\n";
		cout << "  " << setw(4) << num1 << endl;
		cout << " *" << setw(4) << num2 << endl;
		cout << "  " << "----" << endl;
		cout << "   ";
	}

	else if (choice == 4)  // The user chose to quit the program.
		cout << "\nThank you for using Math Tutor.\n\n";

	else
		cout << "\nThe valid choices are 1, 2, 3, "
		<< " and 4.  " << endl;


	// If student selected a problem, get and evaluate the answer. 
	if (choice >= 1 && choice <= 3)
	{
		cin >> studentAnswer;
		if (studentAnswer == correctAnswer)
			cout << "\n\nCongratulations! That's right.\n\n";
		else
			cout << "\n\nSorry, the correct answer is " << correctAnswer
			<< ".\n\n";
	}

	return 0;
}