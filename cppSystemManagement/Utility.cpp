#include "Utility.h"

void Utility::FileWriter(string person)
{
	ofstream file;
	file.open("userData.csv");
	if (file.is_open()) {
		file << person;
	}
	file.close();
}
