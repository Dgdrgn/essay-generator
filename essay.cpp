/*
	Jesus Garcia
	jeg1394@gmail.com

	USC CS101 Spring 2013 Final Exam Question
	Write a program that will output every single possible
	"essay" of size n (input by user) with a certain alphabet
	(also input by user)
*/

#include <iostream>
#include <string>
#include <fstream>

/*
	Name: essayCreation
	Function:
		Loops through the alphabet and changes the value of the count element
		in the "essay". Recursively call essayCreation if count hasn't reached the
		end of the essay or print out the essay and output it to a file if so.
	Parameters:
		essay (std::string&)	Referece to the essay being written on
		o (std::ofstream&)		Reference to output stream
		ab (std::string)		Alphabet
		abSize (int)			Size of Alphabet
		count (int)				Current character in "essay"
		tC (int&)				Total number of "essays" created
		eS (int)				Size of "essay"
	Returns: Nothing
*/
void essayCreation(std::string& essay, std::ofstream& o, std::string ab, int abSize, int count, int& tC, int eS) {
	// Loop through alphabet
	for (int i = 0; i < abSize; i++) {
		// Replace character in position count with alphabet character
		essay[count] = ab[i];
		// Print "essay" if at the end of it 
		if (count >= eS-1) {
			o << essay << std::endl;
			std::cout << essay << std::endl;
			// Increment total count of "essays"
			tC++;
		}
		else {
			// Recursive call
			essayCreation(essay, o, ab, abSize, count+1, tC, eS);
		}
	}
}

int main() {
	/* Variables */
	std::string essay = "";			// "Essay" to be generated
	int totalCnt = 0;				// Total number of "essays"
	int essaySize = 0;				// Size of "essays"
	std::string alphabet = "";		// Alphabet

	// Input size of "essays"
	std::cout << "Enter size of \"essay\": ";
	std::cin >> essaySize;

	// Input alphabet
	std::cout << "Enter alphabet: ";
	std::cin >> alphabet;

	// Resize "essay" string with essaySize input in order to rewrite characters
	essay.resize(essaySize);

	// File output
	std::ofstream output;
	output.open("output.txt");
	
	// Call creation function
	essayCreation(essay, output, alphabet, alphabet.length(), 0, totalCnt, essaySize);

	// Output total number of "essays" generated
	std::cout << std::endl << "We have a total of " << totalCnt << " \"essays\"." << std::endl;
	output << std::endl << "We have a total of " << totalCnt << " \"essays\"." << std::endl;

	// Close file and end program
	output.close();
	return 0;
}