/*
* Created by Francis Mingomba on 04/16/2023
*/

#include <iostream>
#include "Person.h"
#include "Utility.h"

int main()
{

	Person person;

	cout << "Enter first name: ";
	string firstName;
	getline(cin, firstName);
	person.setFirstName(firstName);

	cout << "Enter last name: ";
	string lastName;
	getline(cin, lastName);
	person.setLastName(lastName);

	cout << "Enter address: ";
	string address;
	getline(cin, address);
	person.setAddress(address);

	cout << "Enter email address: ";
	string email;
	getline(cin, email);
	person.setEmail(email);

	cout << "Enter phone number: ";
	int phoneNumber;
	cin >> phoneNumber;
	person.setPhoneNumnber(phoneNumber);
	cin.ignore();


	cout << person.getFirstName() << endl;
	cout << person.getLastName() << endl;
	cout << person.getAddress() << endl;
	cout << person.getPhoneNumnber() << endl;
	cout << person.getEmail() << endl;

	Utility utility;
	utility.FileWriter(person.toString());


	system("pause");
	return 0;
}
