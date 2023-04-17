#pragma once

#include <iostream>
#include <string>

using namespace std;

class Person
{

public:
	Person() = default;

	Person(string firstName, string lastName, string address, string email, int phoneNumber);

	string getFirstName();
	void setFirstName(const string & firstName);

	string getLastName();
	void setLastName(const string & lastName);

	string getAddress();
	void setAddress(const string & address);

	string getEmail();
	void setEmail(const string & email);

	int getPhoneNumnber();
	void setPhoneNumnber(const int& phoneNumber);

	std::string toString();

private:

	string firstName;
	string lastName;
	string address;
	string email;
	int phoneNumber;

};

