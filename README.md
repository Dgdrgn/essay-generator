# Essay Generator
USC CS101 Spring 2013 Final Exam Question

## Creator
Jesus Garcia (jeg1394@gmail.com)

## Instructions
Write a program that will output every single possible "essay" of size n (input by user) with a certain alphabet (also input by user)

## Input
* Size of the "essays"
* Alphabet (ex: "abcdef")

## Output
* All essays generated
* Number of essays generated

**NOTE: Output is through the console. If you would like to output through a file, uncomment and comment out the appropriate lines. The file is by default titled "output.txt", but can obviously be changed.**

## Function: essayCreation
Loops through the alphabet and changes the value of the count element
in the "essay". Recursively call essayCreation if count hasn't reached the
end of the essay or print out the essay and output it to a file if so.

### Parameters
* essay (std::string&)	Referece to the essay being written on
* o (std::ofstream&)	Reference to output stream
* ab (std::string)	Alphabet
* abSize (int)		Size of Alphabet
* count (int)		Current character in "essay"
* tC (int&)		Total number of "essays" created
* eS (int)		Size of "essay"

### Returns
* Nothing

## Special Thanks for Algorithm
* Professor Michael Shindler
* Stephen Sher
* Colin Cammarano