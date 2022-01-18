#pragma once
/* --------------------------------------------------------
I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
-----------------------------------------------------------
Student Name: Layla Medina Perez
Student ID: 118404219
Student Email: lmedina-perez@myseneca.ca
Date of completion (MM/DD/YY): 01/17/2022
-----------------------------------------------------------*/

#ifndef CSTRTOOLS_H 
#define CSTRTOOLS_H
// Compilation safeguards prevent multiple inclusions of a header in a module. 
// They do not protect against including the header again in a different module 
// (remember that each module is compiled independently from other modules).

// ** important: Never use the using statement in a header file. (for namespace declarations)
namespace sdds {

	// Function prototypes
	// -----------------------------------------------------------
	char toLower(char ch);
	int strCmp(const char* s1, const char* s2);
	int strnCmp(const char* s1, const char* s2, int len);
	void strCpy(char* des, const char* src);
	int strLen(const char* str);
	const char* strStr(const char* str, const char* find);
	int isAlpha(char ch);
	int isSpace(char ch);
	void trim(char word[]);
	void toLowerCaseAndCopy(char des[], const char source[]);
}
#endif // !CSTRTOOLS_H