#pragma once
/* --------------------------------------------------------
I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
-----------------------------------------------------------
Student Name: Layla Medina Perez
Student ID: 118404219
Student Email: lmedina-perez@myseneca.ca
Date of completion (MM/DD/YY): 01/17/2022
-----------------------------------------------------------*/
// libraries:
// -----------------------------------------------------------
#include <cstdio> //stdio.h but specifically for c++ 
#include <iostream> // library w cout function and endl keyword

namespace sdds {

	int loadTickets(struct Ticket* ticket, int arrSize)
		// loads account data from a text file into Ticket Structure (Details in ticket.h)
		// returns number of tickets read from file
	{
		char name[51];	// the maximum length for a name is 50 characters. +1 for null terminator
		int area[3];
		char prefix[10];
		int number[7];

		int i = 0;
		FILE* fptr;
		fptr = fopen("tickets.txt", "r");

		if (fptr == NULL)
		{
			printf("Error! Could not open file\n");
		}
		else
		{
			while ((fscanf(fptr, "%[^\t]\t%s\t%s\t%s\n", name, area, prefix, number)!= EOF))
			{
				i++;
			}
		}
		return i;	// to return number of lines read utill EOF (AKA number of tickets read)
	}
}