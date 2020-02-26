#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
int main()
{	
	bool analyze = true;
	//while were "analyzing" it will allow for more files to be read until the user selects to not analyze a second program 
	while (analyze)
	{
		//take in the name of the file were reading, open and initiate both input and output files
		string filename;
		cout << "what is the name of the DNA file you would like read";
		cin >> filename;
		//initiate files into the file reading interface
		ifstream inputfile;
		ofstream outputfile;
		inputfile.open("filename.txt");
		outputfile.open("rosealbrechtoutput.txt" , ios::out | ios::app);
		//initialize counting variables
		int lineCount;
		int aCount;
		int cCount;
		int tCount;
		int gCount;
		int totalCount;
		string str;
		//count the number of each nucleotide as well as number of lines in input file and number of total characters in input file
		while (std::getline(inputfile, str))
		{
			lineCount +=1;
			//iterate through characters in lines
			for (std::string::size_type i = 0; i < str.size(); i++)
			{
				totalCount +=1;
				toupper(str[i]);
				if (str[i] == 'A')
				{
					aCount+=1;
				}
				if (str[i] == 'C')
				{
					aCount+=1;
				}
				if (str[i] == 'T')
				{
					aCount+=1;
				}
				if (str[i] == 'G')
				{
					aCount+=1;
				}
			}
		}
		int lineMean = (totalCount)/(lineCount);
		int varianceNumerator;
		double lineVariance;
		double stdDev;
		//calculate the variance and standard deviation
		while (std::getline(inputfile, str))
		{
			varianceNumerator += ((str.length()-lineMean)^2);
		}
		lineVariance = varianceNumerator / lineCount;
		stdDev = sqrt(lineVariance);
		//calculate the relative occurrence of each nucleotide
		int aRelative = 100*aCount/totalCount;
		int cRelative = 100*cCount/totalCount;
		int tRelative = 100*tCount/totalCount;
		int gRelative = 100*gCount/totalCount;
		//count nucleotide bi grams
		// because we have to be able to compare a string with 
		int bigramTotal;
		int aaCount = 0;
		int acCount = 0;
		int atCount = 0;
		int agCount = 0;
		int caCount = 0;
		int ccCount = 0;
		int ctCount = 0;
		int cgCount = 0;
		int taCount = 0;
		int tcCount = 0;
		int ttCount = 0;
		int tgCount = 0;
		int gaCount = 0;
		int gcCount = 0;
		int gtCount = 0;
		int ggCount = 0;
		while (std::getline(inputfile, str))
		{
			//need the existence of a previous letter to be deleted every time we go to a new line
			char previousLetter = 'O';
			//iterate through characters in lines then concatenate current letter to previous letter to see frequency of bi grams
			for (std::string::size_type i = 0; i < str.size(); i++)
			{
				if (previousLetter != 'O');
				{
					bigramTotal +=1;
					if (previousLetter + str[i] == "AA")
					{
						aaCount+=1;
					}
					if (previousLetter + str[i] == "AC")
					{
						acCount+=1;
					}
					if (previousLetter + str[i] == "AT")
					{
						atCount+=1;
					}
					if (previousLetter + str[i] == "AG")
					{
						agCount+=1;
					}
					if (previousLetter + str[i] == "CA")
					{
						caCount+=1;
					}
					if (previousLetter + str[i] == "CC")
					{
						ccCount+=1;
					}
					if (previousLetter + str[i] == "CT")
					{
						ctCount+=1;
					}
					if (previousLetter + str[i] == "CG")
					{
						cgCount+=1;
					}
					if (previousLetter + str[i] == "TA")
					{
						taCount+=1;
					}
					if (previousLetter + str[i] == "TC")
					{
						tcCount+=1;
					}
					if (previousLetter + str[i] == "TT")
					{
						ttCount+=1;
					}
					if (previousLetter + str[i] == "TG")
					{
						tgCount+=1;
					}
					if (previousLetter + str[i] == "GA")
					{
						gaCount+=1;
					}
					if (previousLetter + str[i] == "GC")
					{
						gcCount+=1;
					}
					if (previousLetter + str[i] == "GT")
					{
						gtCount+=1;
					}
					if (previousLetter + str[i] == "GG")
					{
						ggCount+=1;
					}
				}
					
					
				}
			}
		//calculate the relative probability of each nucleotide bigram 
		int aaRelative = 100*aaCount / bigramTotal;
		int acRelative = 100*acCount/bigramTotal;
		int atRelative = 100*atCount/bigramTotal;
		int agRelative = 100*agCount/bigramTotal;
		int caRelative = 100*caCount/bigramTotal;
		int ccRelative = 100*ccCount/bigramTotal;
		int ctRelative = 100*ctCount/bigramTotal;
		int cgRelative = 100*cgCount/bigramTotal;
		int taRelative = 100*taCount/bigramTotal;
		int tcRelative = 100*tcCount/bigramTotal;
		int ttRelative = 100*ttCount/bigramTotal;
		int tgRelative = 100*tgCount/bigramTotal;
		int gaRelative = 100*gaCount/bigramTotal;
		int gcRelative = 100*gcCount/bigramTotal;
		int gtRelative = 100*gtCount/bigramTotal;
		int ggRelative = 100*ggCount/bigramTotal;
		outputfile << "printthis";
		//need to add all the information that needs to be printed
		//create 1000 lines of dna
		randnum = (double)rand() / ((double)100 + 1);
		double c = sqrt(-2 ln(a))*cos(2*3.14159*b);
		
		double letterDecision;
		//make letterDecision = a number between 0 and 100 0 inclusize 100 exclusive
		while (i</*length of line*/)
		{
			if (letterDecision < aRelative)
			{
				//print A
			}
			else if (letterDecision < aRelative + cRelative)
			{
				//print C
			}
			else if (letterDecision < aRelative + cRelative + tRelative)
			{
				//print T
			}
			else
			{
				//print G
			}
			i++;
		}
	}
}
	
