#include <iostream>
#include <cstring>

using namespace std;
const int SIZE = 100;

int main() {

	char str[SIZE];
	cin.getline(str, 100);

	char temp = 'b';

	NewFunction(str, temp);
	return 0;
}

void NewFunction(char  str[100], char temp)
{
	int e = 0;
	char* newstr = new char[strlen(str)];
	for (int i = 0;i < strlen(str);i++) {
		
		if (str[i] == temp) continue;
		newstr[e++] = str[i];
	}
		
	newstr[e] = '\0';
	cout << newstr << endl;
	delete[] newstr;
}
