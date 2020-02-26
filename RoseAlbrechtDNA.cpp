//Rose Albrecht CPSC350 2300456 Assignment1
#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
int main()
{	
	bool analyze = true;
	//while were "analyzing" it will allow for more files to be read until the user selects to not analyze a second program 
	ofstream outputfile;
	outputfile.open("rosealbrechtoutput.txt" , ios::out | ios::app);
	outputfile << ""<<endl;
	outputfile<< "RoseAlbrecht 2300456"<<"\n";
	while (analyze)
	{
		//take in the name of the file were reading, open and initiate both input and output files
		string filename;
		cout << "what is the name of the DNA file you would like read"<<"\n";
		cin >> filename;
		//initiate files into the file reading interface
		ifstream inputfile;
		inputfile.open(filename);
		//initialize counting variables
		double lineCount = 0;
		double aCount = 0;
		double cCount = 0;
		double tCount = 0;
		double gCount = 0;
		double totalCount = 0;
		double bigramTotal;
		double aaCount = 0;
		double acCount = 0;
		double atCount = 0;
		double agCount = 0;
		double caCount = 0;
		double ccCount = 0;
		double ctCount = 0;
		double cgCount = 0;
		double taCount = 0;
		double tcCount = 0;
		double ttCount = 0;
		double tgCount = 0;
		double gaCount = 0;
		double gcCount = 0;
		double gtCount = 0;
		double ggCount = 0;
		string str;
		//count the number of each nucleotide as well as number of lines in input file and number of total characters in input file and all the nucleotide bigrams present
		//i know excuses arent your thing but for some reason at 11:40 we stopped being able to enter this for loop and comparing it to the other versions theres nothing above it thats different
		while (std::getline(inputfile, str))
		{
			//cout<<"made it into getline";
			lineCount +=1;
			string previousLetter = "x";
			//iterate through characters in lines
			for (char letter : str)
			{
				totalCount +=1;
				toupper(letter);
				if (letter == 'A')
				{
					aCount+=1;
				}
				if (letter == 'C')
				{
					cCount+=1;
				}
				if (letter == 'T')
				{
					tCount+=1;
				}
				if (letter == 'G')
				{
					gCount+=1;
				}
				//count bigrams
				string letterString(1, letter);
				if (previousLetter + letter == "AA")
				{
					aaCount+=1;
					bigramTotal +=1;
				}
				if (previousLetter + letter == "AC")
				{
					acCount+=1;
					bigramTotal +=1;
				}
				if (previousLetter + letter == "AT")
				{
					atCount+=1;
					bigramTotal +=1;
				}
				if (previousLetter + letter == "AG")
				{
					agCount+=1;
					bigramTotal +=1;
				}
				if (previousLetter + letter == "CA")
				{
					caCount+=1;
					bigramTotal +=1;
				}
				if (previousLetter + letter == "CC")
				{
					ccCount+=1;
					bigramTotal +=1;
				}
				if (previousLetter + letter == "CT")
				{
					ctCount+=1;
					bigramTotal +=1;
				}
				if (previousLetter + letter == "CG")
				{
					cgCount+=1;
					bigramTotal +=1;
				}
				if (previousLetter + letter == "TA")
				{
					taCount+=1;
					bigramTotal +=1;
				}
				if (previousLetter + letter == "TC")
				{
					tcCount+=1;
					bigramTotal +=1;
				}
				if (previousLetter + letter == "TT")
				{
					ttCount+=1;
					bigramTotal +=1;
				}
				if (previousLetter + letter == "TG")
				{
					tgCount+=1;
					bigramTotal +=1;
				}
				if (previousLetter + letter == "GA")
				{
					gaCount+=1;
					bigramTotal +=1;
				}
				if (previousLetter + letter == "GC")
				{
					gcCount+=1;
					bigramTotal +=1;
				}
				if (previousLetter + letter == "GT")
				{
					gtCount+=1;
					bigramTotal +=1;
				}
				if (previousLetter + letter == "GG")
				{
					ggCount+=1;
					bigramTotal +=1;
				}
				previousLetter = letter;
			}
				//need the existence of a previous letter to be deleted every time we go to a new line
			//iterate through characters in lines then concatenate current letter to previous letter to see frequency of bi grams
			for (std::string::size_type i = 0; i < str.size(); i++)
			{
				
			}
		}
		
		double lineMean = (totalCount)/(lineCount);
		double varianceNumerator = 0;
		//calculate the variance and standard deviation
		while (getline(inputfile, str))
		{
			//cout<<"made it into varianceNumerator while loop"<<varianceNumerator;
			//this would have told us that we entered this while loop
			//then it would loop through and find the numerator for the variance
			double varianceNumerator = varianceNumerator + ((str.length()-lineMean)*(str.length()-lineMean));
		}
		//define variables and calculate relative frequency 
		double stdDev = 0;
		double lineVariance = 0;
		lineVariance = varianceNumerator / lineCount;
		stdDev = sqrt(lineVariance);
		double aRelative = 100*aCount/totalCount;
		double cRelative = 100*cCount/totalCount;
		double tRelative = 100*tCount/totalCount;
		double gRelative = 100*gCount/totalCount;
		//calculate the relative probability of each nucleotide bigram 
		double aaRelative = 100*aaCount/bigramTotal;
		double acRelative = 100*acCount/bigramTotal;
		double atRelative = 100*atCount/bigramTotal;
		double agRelative = 100*agCount/bigramTotal;
		double caRelative = 100*caCount/bigramTotal;
		double ccRelative = 100*ccCount/bigramTotal;
		double ctRelative = 100*ctCount/bigramTotal;
		double cgRelative = 100*cgCount/bigramTotal;
		double taRelative = 100*taCount/bigramTotal;
		double tcRelative = 100*tcCount/bigramTotal;
		double ttRelative = 100*ttCount/bigramTotal;
		double tgRelative = 100*tgCount/bigramTotal;
		double gaRelative = 100*gaCount/bigramTotal;
		double gcRelative = 100*gcCount/bigramTotal;
		double gtRelative = 100*gtCount/bigramTotal;
		double ggRelative = 100*ggCount/bigramTotal;
		outputfile << "Input Statistics: "<<"\n"<<endl;
		outputfile << "a count value: "<<aCount<<endl;
		outputfile << "c count value: "<<cCount<<endl;
		outputfile << "t count value: "<<tCount<<endl;
		outputfile << "g count value: "<<gCount<<endl;
		outputfile << "Sum of DNA string lengths: " <<totalCount << "\n"<<endl;
		outputfile << "Mean string length: " << lineMean << " \n"<<endl;
		outputfile << "Variance of string length: " << lineVariance << " \n"<<endl;
		outputfile << "Standard deviation of string length: " << stdDev << " \n"<<endl;
		outputfile << "Relative probability of nucleotide A: " << aRelative << "%" << "\n"<<endl;
		outputfile << "Relative probability of nucleotide C: " << cRelative << "%" << "\n"<<endl;
		outputfile << "Relative probability of nucleotide T: " << tRelative << "%" << "\n"<<endl;
		outputfile << "Relative probability of nucleotide G: " << gRelative << "%" << "\n"<<endl;
		outputfile << "Relative probability of nucleotide bigram AA: " << aaRelative<< "%" << "\n"<<endl;
		outputfile << "Relative probability of nucleotide bigram AC: " << acRelative << "%" << "\n"<<endl;
		outputfile << "Relative probability of nucleotide bigram AT: " << atRelative << "%" << "\n"<<endl;
		outputfile << "Relative probability of nucleotide bigram AG: " << agRelative << "%" << "\n"<<endl;
		outputfile << "Relative probability of nucleotide bigram CA: " << caRelative << "%" << "\n"<<endl;
		outputfile << "Relative probability of nucleotide bigram CC: " << ccRelative << "%" << "\n"<<endl;
		outputfile << "Relative probability of nucleotide bigram CT: " << ctRelative << "%" << "\n"<<endl;
		outputfile << "Relative probability of nucleotide bigram CG: " << cgRelative << "%" << "\n"<<endl;
		outputfile << "Relative probability of nucleotide bigram TA: " << taRelative << "%" << "\n"<<endl;
		outputfile << "Relative probability of nucleotide bigram TC: " << tcRelative << "%" << "\n"<<endl;
		outputfile << "Relative probability of nucleotide bigram TT: " << ttRelative << "%" << "\n"<<endl;
		outputfile << "Relative probability of nucleotide bigram TG: " << tgRelative << "%" << "\n"<<endl;
		outputfile << "Relative probability of nucleotide bigram GA: " << gaRelative << "%" << "\n"<<endl;
		outputfile << "Relative probability of nucleotide bigram GC: " << gcRelative << "%" << "\n"<<endl;
		outputfile << "Relative probability of nucleotide bigram GT: " << gtRelative << "%" << "\n"<<endl;
		outputfile << "Relative probability of nucleotide bigram GG: " << ggRelative << "%" << "\n"<<endl;
		//create 1000 lines of dna
		for(int i=0; i<1000; i++)
		{
			//follow the formula on the assignment sheet
			double A = 1.0*rand()/RAND_MAX;
			double B = 1.0*rand()/RAND_MAX;
			double C = sqrt(-2*log(A))*cos(2*3.14159*B);
			double D = stdDev + C + lineMean;
			//we will use this to randomize a percent number
			double letterDecision;
			if (D<0)//i want to make sure our d value isnt negative because it makes an infinite ammount of T's print...
			{
				D = D*-1;
			}
			for (int charPrint=0; charPrint<D; charPrint++)
			{
				letterDecision = rand() %100;
				//this breaks up the probability that we get a nucleotide into the probability we calculated above
				if (letterDecision < aRelative)
				{
					outputfile<< "A";
				}
				if (aRelative < letterDecision && letterDecision < (aRelative + cRelative))
				{
					outputfile << "C";
				}
				if ((aRelative + cRelative)< letterDecision && letterDecision < (aRelative + cRelative + tRelative))
				{
					outputfile << "T";
				}
				if ((aRelative + cRelative + tRelative)<letterDecision)
				{
					outputfile << "G";
				}
			}
			outputfile<<"\n";
		}
		//gives the option to loop another file through
		cout << "would you like to run another file (y or n)?"<<"\n";
		char continueReading;
		cin >> continueReading;
		if (continueReading == 'n')
		{
			//will break out of analysis while loop if we do not want to run another file
			analyze = false;
		}
	}
}
	
