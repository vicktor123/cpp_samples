#include <iostream>
#include <iomanip>

using namespace std;
const int SIZE = 100;
int column_zero(int col[],int sz) {
	int res = 1;
	for (auto it = col; it != col + sz; ++it) {
		cout << *it << " ";
			if (*it != 0) {
				res = 0;
				break;
			}
	}
	return res;
}

int column_zero_all(int** m,int col, int sz) {
	int res = 1;
	for (auto it = 0; it < sz; ++it) {
		
		if (m[it][col] != 0) {
			res = 0;
			break;
		}
	}
	return res;
}

int column_plus_all(int** m, int col, int sz) {
	int res = 1;
	for (auto it = 0; it < sz; ++it) {

		if (m[it][col] <= 0) {
			res = 0;
			break;
		}
	}
	return res;
}
int main() {
	int sz = 5;
	int** m = new int*[sz];
	
	for (int i = 0;i < sz;i++) {
		m[i] = new int[sz];
		for (int j = 0;j < sz;j++)
			 m[i][j] = 2 * j ;
	}

	

	for (int col = 0;col < sz;col++) {
		int res = column_plus_all(m,col, sz);
		if (res) {
			cout << "index col=" << col << endl;
			break;

		}
	}

	
	for (int i = 0;i < sz;i++) {
		for (int j = 0;j < sz;j++)
			cout<<setw(5)<<m[i][j];
		cout << endl;
	}

	for (int i = 0;i < sz;i++) {
		delete[] m[i];
	}
	delete[] m;





	
	return 0;
}


