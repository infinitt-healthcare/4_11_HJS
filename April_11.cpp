#include <iostream>
using namespace std;

void Sum(const int a, const int b) {
	cout << (double)a / b << endl << endl;
}

int main() {
	int a, b;
	int stop = 1;

	while (stop) {
		cout << "두 정수를 입력하세요.(종료 : 0 0) : ";
		cin >> a >> b;

		cin.ignore();

		if (cin.fail()) {
			cout << "정수만 입력 가능합니다." << endl << endl;
			cin.clear();
			cin.ignore(5, '\n');
		}

		else if (a == 0)
			stop = 0;

		else if (b == 0)
			cout << "두번째 숫자는 0이 될 수 없습니다." << endl << endl;

		else
			Sum(a, b);

	}

	return 0;
}
