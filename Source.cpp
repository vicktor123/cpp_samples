#include <iostream>
#include <cstring>
using namespace std;
const int SIZE = 100;

int main() {

	char str[SIZE];
	cin.getline(str, 100);

	char temp = '#';

	char* pos = strchr(str, temp);
	int start= pos-str;
	int c = 1;
	while (*(pos)!='\0' && c<2) {
		pos = strchr(pos + 1, temp);
		if (*pos == temp) c++;
	}
	int end = pos - str;
	char* newstr = new char[end - start];
	int k = 0;
	for (int i = start + 1;i < end;i++)
		newstr[k++]=str[i];
	newstr[end - start-1] = '\0';
	cout << newstr << endl;
	delete[] newstr;
	return 0;
}