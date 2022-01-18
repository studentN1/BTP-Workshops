/* --------------------------------------------------------
I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
-----------------------------------------------------------
Student Name: Layla Medina Perez
Student ID: 118404219
Student Email: lmedina-perez@myseneca.ca
Date of completion (MM/DD/YY): 01/17/2022
-----------------------------------------------------------*/
//```C+ +	// ?? in the copy/paste but errror??
#include <iostream>
#include "Word.h"
using namespace sdds;
using namespace std;
int main() {
	char filename[256];
	programTitle();
	cout << "Enter filename: ";
	cin >> filename;
	wordStats(filename);
	return 0;
}

/*
prof version 
----------------------------------------------

#include <iostream>
#include "Word.h"
#include "Word.h" // This is intentional
using namespace sdds;
using namespace std;
int main() {
   char filename[256];
   cout << "Enter the following file name" << endl
	  << "> FoxInSocks.txt" << endl << "---------------------" << endl;
   programTitle();
   cout << "Enter filename: ";
   cin >> filename;
   wordStats(filename);
   return 0;
}
*/