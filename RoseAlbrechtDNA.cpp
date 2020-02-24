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
		outputfile.open("rosealbrechtoutput.txt");
		//initialize counting variables
		int lineCount;
		int aCount;
		int cCount;
		int tCount;
		int gCount;
		int totalCount;
		//count the number of each nucleotide as well as number of lines in input file and number of total characters in input file
		while (std::getline(inputfile, str))
		{
			lineCount +=1;
			//iterate through characters in lines
			for (std::string::size_type i = 0; i < str.size(); i++)
			{
				totalCount +=1;
				toupper(str[i]);
				if (str[i] == "A")
				{
					aCount+=1;
				}
				if (str[i] == "C")
				{
					aCount+=1;
				}
				if (str[i] == "T")
				{
					aCount+=1;
				}
				if (str[i] == "G")
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
		int aRelative = aCount/totalCount;
		int cRelative = cCount/totalCount;
		int tRelative = tCount/totalCount;
		int gRelative = gCount/totalCount;
		//count nucleotide bi grams
		// because we have to be able to compare a string with 
		int bigramTotal;
		int aaCount;
		int acCount;
		int atCount;
		int agCount;
		int caCount;
		int ccCount;
		int ctCount;
		int cgCount;
		int taCount;
		int tcCount;
		int ttCount;
		int tgCount;
		int gaCount;
		int gcCount;
		int gtCount;
		int ggCount;
		while (std::getline(inputfile, str))
		{
			//need the existence of a previous letter to be deleted every time we go to a new line
			string previousLetter = "";
			//iterate through characters in lines then concatenate current letter to previous letter to see frequency of bi grams
			for (std::string::size_type i = 0; i < str.size(); i++)
			{
				if (previousLetter != "";
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
	}
}
	
