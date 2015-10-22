// Name: Michael Sanchez
// 10/20/15
// Program that uses input output from a file.

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
using namespace std;

int main()
{
	ifstream fin;
	ofstream fout;
	ofstream foutB;
	ofstream foutC;
	string  word, allCaps;
	int count = 0, chars = 0;
	int count1 = 0, count2 = 0, count3 = 0, count4 = 0, count5 = 0, count6 = 0, count7 = 0, count8 = 0, count9 = 0, count10 = 0, countMore = 0;

	fin.open("gba.txt");
	fout.open("result.txt");
	foutB.open("capitalize.txt");
	foutC.open("uppercase.txt");

	if(fin.fail())
	{
		cerr << "There has been an error with the input file." << endl;
	}

	if(fout.fail())
	{
		cerr << "There has been an error with the output file." << endl;
	}
	
	if(foutB.fail())
	{
		cerr << "There has been an error with the output file." << endl;
	}

	
	while(fin >> word)
	{
		int length = word.length();
	
		for(int i = 0; i < word.length(); i++ )
		{
			chars++;
		}
		count ++;
		
		char letter;
		letter = word[0];
		letter = toupper(letter);
		word = word.substr(1,word.length());
		word = letter + word;
		foutC << word << " ";
			
	
		for(int i = 0; i < word.length(); i++)
		{
		 string allCaps;
		 char letter;
		 letter = toupper(word[i]);
		 allCaps += letter;
		 foutB << allCaps ;
		}	
		 foutB << " ";		

		switch (length)
		{
			case 1:count1++;
				break;
			case 2: count2++;
				break;
			case 3: count3++;
				break;
			case 4: count4++;
				break;
			case 5: count5++;
				break;
			case 6: count6++;
				break;
			case 7: count7++;
				break;
			case 8: count8++;
				break;
			case 9: count9++;
				break;
			case 10: count10++;
				break;
			case 11: 
			case 12:
			case 13:
			case 14:
			case 15:
			case 16:
			case 17:
			case 18: countMore++;
				break;
			default: break;

		}
	}

	fout << count1 << " Words of length 1\n";
	fout << count2 << " Words of length 2\n";
	fout << count3 << " Words of length 3\n";
	fout << count4 << " Words of length 4\n";
	fout << count5 << " Words of length 5\n";
	fout << count6 << " Words of length 6\n";
	fout << count7 << " Words of length 7\n";
	fout << count8 << " Words of length 8\n";
	fout << count9 << " Words of length 9\n";
	fout << count10 << " Words of length 10\n";
	fout << countMore << " Words of length 11 or more\n\n";
	fout << "Average characters per word: " << chars/count << endl;
	fout << "Total number of words: " << count << endl << endl;

		
	
	fin.close();
	fout.close();
	foutB.close();
	foutC.close();

	return 0;
}


