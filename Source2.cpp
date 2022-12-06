#include <iostream>
#include <cstring>
#include "Source.h"
using namespace std;
const int SIZE = 100;

int main() {

	char str[SIZE];
	cin.getline(str, 100);

	char temp = '#';

	NewFunction(str, temp);
	return 0;
}

void NewFunction(char  str[100], char temp)
{
	char* pos = strchr(str, temp);
	int start = pos - str;
	int c = 1;
	while (c<2) {
		pos = strchr(pos + 1, temp);
		if (pos == NULL) return;
		if (*pos == temp) c++;
	}
	int end = pos - str;
	char* newstr = new char[end - start];
	int k = 0;
	for (int i = start + 1;i < end;i++)
		newstr[k++] = str[i];
	newstr[end - start - 1] = '\0';
	cout << newstr << endl;
	delete[] newstr;
}
