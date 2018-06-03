/*
Name:
Student number:
Email:
Workshop:
Section:
Date:
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define SIZE 2			// Number of Employees

// Structure Declaration for Employee Data
struct Employee {
	int empID;			// Employee ID
	int age;			// Employee Age
	double salary;		// Employee Yearly Salary 
};

/* main program */
int main(void) {

	int option = 0;
	int empNo = 0, tempEmpID;
   int i;
   struct Employee emp[SIZE] = { {0} };

	printf("---=== EMPLOYEE DATA ===---\n\n");

	do {
		// Print the option list
		printf("1. Display Employee Information\n");
		printf("2. Add Employee\n");
		printf("0. Exit\n\n");
		printf("Please select from the above options: ");
		scanf("%d",&option);
		printf("\n");

		switch (option) {
		case 0:	// Exit the program
			printf("Exiting Employee Data Program. Good Bye!!!\n");
			break;

		case 1: // Display Employee Data
				// @IN-LAB
			printf("EMP ID  EMP AGE EMP SALARY\n");
			printf("======  ======= ==========\n");
			for (i = 0; i < SIZE; i++) {
				if(emp[i].empID > 0 )
					printf("%6d%9d%11.2lf\n", emp[i].empID, emp[i].age, emp[i].salary);
			}
			printf("\n");
			break;

		case 2:	// Adding Employee
				// @IN-LAB
			printf("Adding Employee\n");
			printf("===============\n");

			if (empNo >= SIZE) {
				printf("ERROR!!! Maximum Number of Employees Reached\n");

			}
			else 
			{
				printf("Enter Employee ID: ");
				scanf("%d", &tempEmpID);
				emp[empNo].empID = tempEmpID;
				printf("Enter Employee Age: ");
				scanf("%d", &emp[empNo].age);
				printf("Enter Employee Salary: ");
				scanf("%lf", &emp[empNo].salary);
				empNo++;
				
			}
		
			printf("\n");

			break;

		default:
			printf("ERROR: Incorrect Option: Try Again\n\n");
		}

	} while (option != 0);


	return 0; 
}




//PROGRAM OUTPUT IS SHOW BELOW

/*
---=== EMPLOYEE DATA ===---

1. Display Employee Information
2. Add Employee
0. Exit

Please select from the above options: 2

Adding Employee
===============
Enter Employee ID: 111
Enter Employee Age: 34
Enter Employee Salary: 78980.88

1. Display Employee Information
2. Add Employee
0. Exit

Please select from the above options: 2

Adding Employee
===============
Enter Employee ID: 112
Enter Employee Age: 41
Enter Employee Salary: 65000

1. Display Employee Information
2. Add Employee
0. Exit

Please select from the above options: 2

Adding Employee
===============
ERROR!!! Maximum Number of Employees Reached

1. Display Employee Information
2. Add Employee
0. Exit

Please select from the above options: 1

EMP ID  EMP AGE EMP SALARY
======  ======= ==========
   111     	 34   78980.88
   112       41   65000.00

1. Display Employee Information
2. Add Employee
0. Exit

Please select from the above options: 0

Exiting Employee Data Program. Good Bye!!!

*/
