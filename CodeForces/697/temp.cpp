#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

class Exam {
	string name;
	string rollNo;
	char grade; 

public:
	void read_info(int i) {
		cout << "Enter the student's name:";
		cin>>name;
		cout << "Enter the student's roll number:";
		cin >> rollNo;
		cout << "Enter the student's grade";
		cin >> grade;
	}

	void display_info(int i) {
		cout << "The name of student " << i+1 << " is:" << name << endl;
		cout << "The roll number of student " << i+1 << " is:" << rollNo << endl;
		cout << "The grade of student " << i+1 << " is:" << grade << endl;
	}
};

int main() {
	Exam student[3];
	
	for (int i = 0; i < 3; i++) {
		student[i].read_info(i);
	}
	for (int i = 0; i < 3; i++) {
		student[i].display_info(i);
	}

	return 0;
}