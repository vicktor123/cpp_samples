#include <iostream>
#include <cstring>
/*
Зашифровать введенную с клавиатуры строку, поменяв местами первый символ 
со вторым, третий с четвертым и т. д.
*/
using namespace std;
const int SIZE = 100;

int main() {

	char str[SIZE];
	cin.getline(str, 100);
	int i = 0;
	char temp;
	while (i < strlen(str)-1) {
		temp = str[i];
		str[i] = str[i + 1];
		str[i + 1] = temp;
		i += 2;
	}
	cout << str << endl;
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
