//---------   INFO 2680-061   -------------//
//---------  C++ Programming  -------------//
//---------    Xiandong Peng  -------------//
//-----  Assignment 1 - Date class   ---------//
//---------     2/9/2019    -------------//


#include <iostream>
#include <string>
#include <iomanip> // for setfill and setw
#include <algorithm> // for std::find
#include <iterator> // for std::begin, std::end

using namespace std;

class Date {
public:
	Date(int initMonth = 1, int initDay = 1, int initYear = 2000);
	void print();
	int getDay();
	int getMonth();
	int getYear();
	string getMonthName();
	void printLong();

private:
	int numMonth;
	int numDay;
	int numYear;
};

Date::Date(int initMonth, int initDay, int initYear) {

	numMonth = initMonth;
	numDay = initDay;
	numYear = initYear;

	//valid Month
	if (numMonth < 1 || numMonth > 12) {
		numMonth = 1;
	}

	//valid Day
	int monthRange;
	numDay = initDay;
	int number31Mon[] = { 1,3,5,7,8,10,12 };
	int number30Mon[] = { 2,4,6,9,11 };
	if (std::find(std::begin(number31Mon), std::end(number31Mon), numMonth) 
		!= std::end(number31Mon)) {
		monthRange = 31;
	}
	else if (std::find(std::begin(number30Mon), std::end(number30Mon), numMonth) 
		!= std::end(number30Mon)) {
		monthRange = 30;
	}
	else {
		monthRange = 28;
	}

	if (numDay < 1 || monthRange < numDay) {
		numDay = 1;
	}

	//valid Year
	numYear = initYear;
	if (numYear < 1900) {
		numYear = 1990;
	}
}
void Date::print() {
	if (numMonth < 10 && numDay < 10) {
		cout << setfill('0') << setw(2) << numMonth << "/" << setfill('0') 
			<< setw(2) << numDay << "/" << numYear << endl;
	}
	else if (numMonth < 10 && numDay >= 10) {
		cout << setfill('0') << setw(2) << numMonth << "/" << numDay 
			<< "/" << numYear << endl;
	}
	else if (numMonth >= 10 && numDay < 10) {
		cout << numMonth << "/" << setfill('0') << setw(2) << numDay 
			<< "/" << numYear << endl;
	}
	else {
		cout << numMonth << "/" << numDay << "/" << numYear << endl;
	}
}

int Date::getDay(void) {
	return numDay;
}

int Date::getMonth(void) {
	return numMonth;
}

int Date::getYear(void) {
	return numYear;
}

string Date::getMonthName() {
	string monthName;
	switch (numMonth) {
	case 1: monthName = "January";
		break;
	case 2: monthName = "February";
		break;
	case 3: monthName = "March";
		break;
	case 4: monthName = "April";
		break;
	case 5: monthName = "May";
		break;
	case 6: monthName = "June";
		break;
	case 7: monthName = "July";
		break;
	case 8: monthName = "August";
		break;
	case 9: monthName = "September";
		break;
	case 10: monthName = "October";
		break;
	case 11: monthName = "November";
		break;
	case 12: monthName = "December";
		break;
	}
	return monthName;
}

void Date::printLong() {
	Date d;
	cout << numDay << " " << d.getMonthName() << " " << numYear << endl;
}

// DateDemo.cpp
// Note - you may need to change the definition of the main function to 
// be consistent with what your C++ compiler expects. 
int main()
{
	cout << "DateDemo starting ..." << endl << endl;

	Date d1;             // default ctor
	Date d2(7, 4, 1976); // July 4'th 1976
	Date d3(0, 15, 1880);// Adjusted by ctor to January 15'th 1900

	d1.print();      // prints 01/01/2000
	d1.printLong();  // prints 1 January 2000
	cout << endl;

	d2.print();      // prints 07/04/1976
	d2.printLong();  // prints 4 July 1976
	cout << endl;

	d3.print();      // prints 01/15/1900
	d3.printLong();  // prints 15 January 1900
	cout << endl;

	cout << "object d2's day is " << d2.getDay() << endl;
	cout << "object d2's month is " << d2.getMonth() << " which is " << d2.getMonthName() << endl;
	cout << "object d2's year is " << d2.getYear() << endl;

	cin.get();
	return 0;
	//Date d4(11, 8, 2019);
	//cout << "help me Check:  " << d4.getDay() << endl;
	//d4.print(); 
}
