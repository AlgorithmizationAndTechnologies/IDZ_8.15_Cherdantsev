#include <iostream>
#include <vector>
#include <string>
#include "IDZ_8_15_Cherdantsev.h"
using namespace std;
int main() {
	setlocale(0, "RU");
	vector<long long> a, b, c;
	int cmd;
	cout << "Введите команду, которую хотите выполнить!\n";
	cout << "1. Скалярное произведение векторов a и b\n";
	cout << "2. Произведение векторов a и b\n";
	cout << "3. Cмешанное произведение векторов a, b и c\n";
	cout << "4. Проверка на коллинеарность двух векторов a и b\n";
	cout << "5. Проверка компланарности трех векторов a, b и c\n";
	cin >> cmd;
	long long ch;
	vector<long long> ans;
	string str;
	switch (cmd)
	{
	case(1):
		cout << "a: ";
		for (int i = 0;i < 3;++i) {
			cin >> str;
			ch = atoll(str.c_str());
			if (ch == 0 && str != "0") { cout << "ERROR";return 0; }
			a.push_back(ch);
		}
		cout << "b: ";
		for (int i = 0;i < 3;++i) {
			cin >> str;
			ch = atoll(str.c_str());
			if (ch == 0 && str != "0") { cout << "ERROR";return 0; }
			b.push_back(ch);
		}
		cout << module::DotProduct(a, b) << '\n';
		break;

	case(2):
		cout << "a: ";
		for (int i = 0;i < 3;++i) {
			cin >> str;
			ch = atoll(str.c_str());
			if (ch == 0 && str != "0") { cout << "ERROR";return 0; }
			a.push_back(ch);
		}
		cout << "b: ";
		for (int i = 0;i < 3;++i) {
			cin >> str;
			ch = atoll(str.c_str());
			if (ch == 0 && str != "0") { cout << "ERROR";return 0; }
			b.push_back(ch);
		}
		ans = module::VectorProduct(a, b);
		for (int i = 0;i < 3;++i) cout << ans[i] << ' ';
		cout << '\n';
		break;
	case(3):
		cout << "a: ";
		for (int i = 0;i < 3;++i) {
			cin >> str;
			ch = atoll(str.c_str());
			if (ch == 0 && str != "0") { cout << "ERROR";return 0; }
			a.push_back(ch);
		}
		cout << "b: ";
		for (int i = 0;i < 3;++i) {
			cin >> str;
			ch = atoll(str.c_str());
			if (ch == 0 && str != "0") { cout << "ERROR";return 0; }
			b.push_back(ch);
		}
		cout << "c: ";
		for (int i = 0;i < 3;++i) {
			cin >> str;
			ch = atoll(str.c_str());
			if (ch == 0 && str != "0") { cout << "ERROR";return 0; }
			c.push_back(ch);
		}
		cout << module::MultiVectorProduct(a, b, c);
		cout << '\n';
		break;
	case(4):
		cout << "a: ";
		for (int i = 0;i < 3;++i) {
			cin >> str;
			ch = atoll(str.c_str());
			if (ch == 0 && str != "0") { cout << "ERROR";return 0; }
			a.push_back(ch);
		}
		cout << "b: ";
		for (int i = 0;i < 3;++i) {
			cin >> str;
			ch = atoll(str.c_str());
			if (ch == 0 && str != "0") { cout << "ERROR";return 0; }
			b.push_back(ch);
		}
		if (module::IsCollinear(a, b))cout << "Вектора коллинеарны\n";
		else cout << "Вектора не коллинеарны\n";
		break;
	case(5):
		cout << "a: ";
		for (int i = 0;i < 3;++i) {
			cin >> str;
			ch = atoll(str.c_str());
			if (ch == 0 && str != "0") { cout << "ERROR";return 0; }
			a.push_back(ch);
		}
		cout << "b: ";
		for (int i = 0;i < 3;++i) {
			cin >> str;
			ch = atoll(str.c_str());
			if (ch == 0 && str != "0") { cout << "ERROR";return 0; }
			b.push_back(ch);
		}
		cout << "c: ";
		for (int i = 0;i < 3;++i) {
			cin >> str;
			ch = atoll(str.c_str());
			if (ch == 0 && str != "0") { cout << "ERROR";return 0; }
			c.push_back(ch);
		}
		if (module::IsComplanar(a, b, c)) cout << "Вектора компланарны\n";
		else cout << "Вектора не компланарны\n";
		break;
	default:
		cout << "ERROR\n";
		break;
	}
}
/*TESTS
1. INPUT
1
1 2 3
4 5 6
OUTPUT
32

2. INPUT
2
1 2 3
4 5 6
OUTPUT
-3 6 -3

3. INPUT
3
1 2 3
4 5 6
7 8 9
OUTPUT
0

4. INPUT
4
3 -6 9
-1 2 -3
OUTPUT
Вектора коллинеарны

5.INPUT
5
1 2 3
4 5 6
7 8 9
OUTPUT
Вектора компланарны
*/