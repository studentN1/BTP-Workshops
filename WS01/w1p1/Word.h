#pragma once
/* --------------------------------------------------------
I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
-----------------------------------------------------------
Student Name: Layla Medina Perez
Student ID: 118404219
Student Email: lmedina-perez@myseneca.ca
Date of completion (MM/DD/YY): 01/17/2022
-----------------------------------------------------------*/

#ifndef WORD_H 
#define WORD_H
// Compilation safeguards prevent multiple inclusions of a header in a module. 
// They do not protect against including the header again in a different module 
// (remember that each module is compiled independently from other modules).

// ** important: Never use the using statement in a header file. (for namespace declarations)
namespace sdds {

    // Constant Value Declarations:
    // -----------------------------------------------------------
    #define MAX_WORD_LEN 21  // used in header file

    // Structures:
    // -----------------------------------------------------------
    struct Word {
        char letters[MAX_WORD_LEN];
        int count;
    };

    // Function prototypes
    // -----------------------------------------------------------
    int searchWords(const Word words[], int num, const char word[]);
    int readWord(char* word, FILE* fptr, int maxLen);
    void addWord(Word words[], int* index, const char newWord[]);
    void title(const char* value, int len);
    void endList();
    void totalWordsStat(int totNoWrds, int totalOverAll, int longestWord);
    void print(const Word* w, int gotoNextLine, int len);
    int findMaxLen(const Word words[], int noOfWords);
    void listWords(const Word words[], int noOfWords, const char* theTitle);
    void swap(Word* p1, Word* p2);
    void sort(Word words[], int cnt, int sortType);
    int totalCount(const Word* words, int num);
    void wordStats(const char* filename);
    void programTitle();
}
#endif // !WORD_H