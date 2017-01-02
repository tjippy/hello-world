// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	struct StudentInfo
	{
		string name;
		double avrage;
		char letterGrade;
	};

	StudentInfo student;
	student.name = "Mike";
	student.avrage = 95;
	student.letterGrade = 'a'; 

	cout << student.name.append("Kalle") << endl;
	return 0;

}