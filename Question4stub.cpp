/*
 *  Question4.cpp
 *
 *  Name: OFFONG, NSIKAN OBOT
 *  Department: DEPARTMENT OF COMPUTER SCIENCE
 *  Matric. No: PDS/2013/1993
 *
 *  Program that inputs a five-digit integer,
 *  separates the integer into its digits and prints them separated by three spaces each
 *
 *  Stub file to enable you complete assignment #1 - question #4
 */
	
	#include <iostream>
	#include <string>
	#include <math.h>
	using namespace std;
	

	
	int main()
	{
	// Variable declaration
	int digits;
	
	// display welcome messages to user
	cout << "Welcome - This program reads a five-digit integer\n";
	cout << "separates the integer into its digits and prints them\n";
	cout << "separated by three spaces each\n\n";
	
	// TODO: Read integer using cin
	cout << "Enter five digit integer value - ";
	cin>>digits;
	
	// check if digit is a five digit integer
/*	if (to_string(digits).length() < 5 || to_string(digits).length() > 5)
	{
	cout << "\nERROR - Please enter a five digit integer";
	} else {
 */
	// TODO: Separate the integer into its digits and prints them separated by three spaces each
	int dec_digit=10000;		// dec_digit is number of decimal place
	double myValue2;
	double myValue3;
	int count=1;
	while(count>=1 && count<=5)
	{
		myValue2=digits/dec_digit;
		myValue3=floor(myValue2);
		cout<<myValue3<<"   ";
		digits=digits-myValue3*dec_digit;
		dec_digit=dec_digit/10;
		count=count+1;
	}

	
	cout<< "\nThanks and Goodbye";
	
	system("PAUSE");
	return EXIT_SUCCESS;
	}
	
