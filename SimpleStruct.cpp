// Struct1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#define NumofStudents 2


using namespace std;

int main()
{
	int i, NumOfCourses = 3;

	struct Student
	{
		int ID;
		int Eng;
		int Math;
		int CS;
		float Avg;

	};



	struct Student st1, st2;

	for (i = 0; i < NumofStudents; i++) {

		if (i == 0) {
			cout << "Enter ID: " << endl;
			cin >> st1.ID;
			cout << "Enter English: " << endl;
			cin >> st1.Eng;
			cout << "Enter Math: " << endl;
			cin >> st1.Math;
			cout << "Enter CS: " << endl;
			cin >> st1.CS;
			st1.Avg = float(st1.CS + st1.Eng + st1.Math) / float(NumOfCourses);

		}

		if (i == 0) {
			cout << "Enter ID: " << endl;
			cin >> st2.ID;
			cout << "Enter English: " << endl;
			cin >> st2.Eng;
			cout << "Enter Math: " << endl;
			cin >> st2.Math;
			cout << "Enter CS: " << endl;
			cin >> st2.CS;
			st2.Avg = float(st2.CS + st2.Eng + st2.Math) / float(NumOfCourses);

		}

		cout << "ID\tEnglish\tMath\tCS\tAvg" << endl;
		cout << "==========================" << endl;
		cout << st1.ID << "\t" << st1.Eng << "\t" << st1.Math << "\t" << st1.CS << "\t" << st1.Avg << endl;
		cout << st2.ID << "\t" << st2.Eng << "\t" << st2.Math << "\t" << st2.CS << "\t" << st2.Avg << endl;
	}




	return(0);
}
