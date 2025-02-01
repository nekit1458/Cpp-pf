#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void print(string word);
void print(int word);
int sum(int a, int b);
void minimal(int* arr, int len);


int main() {
	setlocale(LC_ALL, "RU");
	/*srand(time(NULL));
	int i = 1 + rand() % 10;*/

	int a,b,i=0;


	cout << "Enter 1st num: " << endl;
	cin >> a;

	cout << "Enter 2nd num: " << endl;
	cin >> b;

	do {
		cout << "Ur deapason is: " << i;
	}



	return 0;
}








void minimal(int* arr, int len) {
	int min = *arr;
	for (int i = 0;i < len;i++) {
		if (min > *(arr + i))
			min = *(arr + i);
	}
	cout << "min: " << min << endl;
}

void print(string word) {
	cout << word << endl;
}

void print(int word) {
	cout << word << endl;
}

int sum(int a, int b) {
	return a + b;
}


