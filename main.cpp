#include<iostream>
#include<iomanip>
#include<fstream>
#include <string.h> 
#include <stdio.h>
using std::cout;
using std::ifstream;
using std::ofstream;
using std::endl;
using std::cin;
using std::getline;

void uniquewordCount(ifstream&, ofstream&, char);


void uniquewordCount(ifstream &inputFile, ofstream &outputFile, char words[100][16])
{
	int counter[100]; // Holds the associated counts.
	char *tok;
	int uniqueCount = 0; // Counts the total number of unique words
	// Read every unique word in the file.
	while(!inputFile.eof())
	{
		inputFile >> words[99];
		// If there is a match, increment the associated count.
		if(strcmp(words[99], tok) == 0)
		{
			counter[99]++;
		}
	}
	// Display each unique word and its associated count.
	for(int i = 0; i < 100; i++)
	{
		cout << words[i] << ":" << counter[i] << endl;
	}
}

// Call every function.
int main(int argc, char *argv[])
{
	ifstream inputFile;
	ofstream outputFile;
	char words[100][16];
	char inFile[12] = "lorem.txt";
	char outFile[16] = "word result.txt";
		
	// Get the name of the file from the user.
	cout << "Enter the name of the file: ";
	cin >> inFile;
	
	// Open the input file.
	inputFile.open(inFile);
	
	// Open the output file.
	outputFile.open(outFile);
	
	// If successfully opened, process the data.
	if(inputFile)
	{
		// Loop through each function.
		while(!inputFile.eof())
		{	
			uniquewordCount(inputFile, outputFile, words);
		}
		// Close the input file.
		inputFile.close();
		// Close the output file.
		outputFile.close();
		return 0;
	}
	else
	{
		// Display the error message.
		cout << "There was an error opening the input file.\n";
	}
}
