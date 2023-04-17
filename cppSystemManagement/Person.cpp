#include "Person.h"

Person::Person(string firstName, string lastName, string address, string email, int phoneNumber)
{
	setFirstName(firstName);
	setLastName(lastName);
	setAddress(address);
	setEmail(email);
	setPhoneNumnber(phoneNumber);
}

string Person::getFirstName()
{
	return this->firstName;
}

void Person::setFirstName(const string& firstName)
{
	this->firstName = firstName;
}

string Person::getLastName()
{
	return this->lastName;
}

void Person::setLastName(const string& lastName)
{
	this->lastName = lastName;
}

string Person::getAddress()
{
	return this->address;
}

void Person::setAddress(const string& address)
{
	this->address = address;
}

string Person::getEmail()
{
	return this->email;
}

void Person::setEmail(const string& email)
{
	this->email = email;
}

int Person::getPhoneNumnber()
{
	return this->phoneNumber; 
}

void Person::setPhoneNumnber(const int& phoneNumber)
{
	this->phoneNumber = phoneNumber;
}

std::string Person::toString()
{
	return this->firstName + ", " + this->lastName + ", " + this->address + ", " + this->email + ", " + to_string(phoneNumber);
}


