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
		inputfile.open("filename.txt");
		//initialize counting variables
		int lineCount;
		int aCount;
		int cCount;
		int tCount;
		int gCount;
		int totalCount;
		string str;
		//count the number of each nucleotide as well as number of lines in input file and number of total characters in input file
		while (getline(inputfile, str))
		{
			lineCount +=1;
			//iterate through characters in lines
			cout<<"made it into while loop";
			for (char letter : str)
			{
				cout<<"made it into for loop";
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
			}
		}
		cout << lineCount<<"\n";
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
		cout << "line70"<<"\n";
		int aRelative = 100*aCount/totalCount;
		int cRelative = 100*cCount/totalCount;
		int tRelative = 100*tCount/totalCount;
		int gRelative = 100*gCount/totalCount;
		//count nucleotide bi grams
		// because we have to be able to compare a string with
		cout << "line77"<<"\n";		
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
		cout << "line100"<<"\n";
		while (std::getline(inputfile, str))
		{
			//need the existence of a previous letter to be deleted every time we go to a new line
			string previousLetter = "";
			string currentLetter = "";
			//iterate through characters in lines then concatenate current letter to previous letter to see frequency of bi grams
			for (std::string::size_type i = 0; i < str.size(); i++)
			{
				currentLetter = str[i];
				bigramTotal +=1;
				if (previousLetter + currentLetter == "AA")
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
				previousLetter = currentLetter;
			}
		}
		cout << "line170"<<"\n";
		//calculate the relative probability of each nucleotide bigram 
		int aaRelative = 100*aaCount/bigramTotal;
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
		cout << "line190"<<"\n";
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
		outputfile << "Relative probability of nucleotide bigram AA: " << aaRelative << "%" << "\n"<<endl;
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
		cout << "line215"<<"\n";
		//need to add all the information that needs to be printed
		//create 1000 lines of dna
		for(int i=0; i<1000; i++)
		{
			double A = 1.0*rand()/RAND_MAX;
			double B = 1.0*rand()/RAND_MAX;
			double C = sqrt(-2*log(A))*cos(2*3.14159*B);
			double D = stdDev + C + lineMean;
			double letterDecision;
			if (D<0)//i want to make sure our d value isnt negative because it makes an infinite ammount of T's print...
			{
				D = D*-1;
			}
			for (int charPrint=0; charPrint<D; charPrint++)
			{
				if (letterDecision < aRelative)
				{
					outputfile<< "A";
				}
				else if (letterDecision < aRelative + cRelative)
				{
					outputfile << "C";
				}
				else if (letterDecision < aRelative + cRelative + tRelative)
				{
					outputfile << "T";
				}
				else
				{
					outputfile << "G";
				}
			}
		}
		cout << "line250"<<"\n";
		cout << "would you like to run another file (y or n)?"<<"\n";
		char continueReading;
		cin >> continueReading;
		if (continueReading == 'n')
		{
			analyze = false;
		}
		
	}
}
	
