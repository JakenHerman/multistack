// MultiStack.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stack.h"
#include <stdio.h>
#include <string>
#include <iostream>

int main()
{

	//std::string comma_delimeter = ",";
	//std::string space_delimeter = " ";

	/* Code to be used eventually within the "A" option 

	enum Month { January, February, March, April, May, June, July, 
					August, September, October, November, December};
	struct Date {
		Month month;
		int day;
		int year;
	};
	
	*/
	int stack_size; //m value
	int L0Value; //L0 value
	std::cout << "Enter stack size: ";
	std::cin >> stack_size; //get m value from user

	std::cout << "Enter L0 value: ";
	std::cin >> L0Value; //get L0 value from user

	std::cout << "Enter commands: \n I for insert, \n D for delete, \n Q for quit. \n \n";
	std::cout << "The stack number should follow your command as such:\nI3 for 'insert in stack 3'";
	std::cout << "\nD3 for 'delete from stack 3'\n \n";
	
	stack<int> us = stack<int>(100);


	us.push(1);
	std::cout << us.pop();

}

