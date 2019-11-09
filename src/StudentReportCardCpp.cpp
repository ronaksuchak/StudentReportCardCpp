//============================================================================
// Name        : StudentReportCardCpp.cpp
// Author      : RonakSuchak
// Version     :
// Copyright   : setvbuf(stdout, NULL, _IONBF, 0);
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class Result {
public:
	float maths, english, sci, outOf, per = 0;

	Result(float outOf) {
		this->outOf = outOf;
	}
	float getMaths() {
		return maths;
	}
	float getEnglish() {
		return english;
	}
	float getSci() {
		return sci;
	}

	void setMaths(float maths) {
		this->maths = maths;
	}
	void setEnglish(float english) {
		this->english = english;
	}
	void setSci(float sci) {
		this->sci = sci;
	}

	float getTotal() {
		return maths + english + sci;
	}
	float getPer() {
		return (((maths + english + sci) / (outOf * 3)) * 100);
	}
	bool isPass() {
		return (getPer() > 40) ? true : false;
	}

};

class Student {
public:
	int rollNo;
	char name[10];
	Result result = Result(100.0f);
	Student() {
		cout << "Enter Name of Student" << endl;
		cin >> name;

		cout << "Enter Roll Number of Student" << endl;
		cin >> rollNo;

		cout << "Enter marks......." << endl;

		cout << "Enter Math marks" << endl;
		cin >> result.maths;

		cout << "Enter English marks" << endl;
		cin >> result.english;

		cout << "Enter science  marks" << endl;
		cin >> result.sci;
	}
public:
	void getReportCard() {

		cout<<endl<<endl<<endl;
		cout << "Roll NO. :        " << rollNo << endl;
		cout << "Name:             " << name << endl;
		cout << "======================================" << endl;
		cout << "Math:             " << result.getMaths() << endl;
		cout << "Science:          " << result.getSci() << endl;
		cout << "English:          " << result.getEnglish() << endl;
		cout << "Total:            " << result.getTotal() << endl;
		cout << "Percentage:       " << result.getPer() << endl;
		//cout << "Result : " << result.isPass() << endl;
		(result.isPass()) ?
				cout << "          PASS          "<<endl :
				cout << "          FAIL          "<<endl;
		cout << "======================================" << endl;
	}

};

int main() {
	Student s1 = Student();
	s1.getReportCard();
	return 0;
}
