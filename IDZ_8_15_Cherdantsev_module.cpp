#include "IDZ_8_15_Cherdantsev.h"
#include <vector>

using namespace std;

//Скалярное произведение
long long module::DotProduct(vector<long long> a, vector<long long> b) {
	long long ans = 0;
	for (size_t i = 0;i < max(a.size(), b.size());++i) {
		if (i >= a.size()) ans += b[i];
		else if (i >= b.size()) ans += a[i];
		else ans += a[i] * b[i];
	}
	return ans;
}

//Произведение векторов
vector<long long> module::VectorProduct(vector<long long>& a, vector <long long>& b) {
	if (a.size() == b.size() && a.size() == 3)
		return vector<long long>({ a[1] * b[2] - a[2] * b[1],a[2] * b[0] - a[0] * b[2],a[0] * b[1] - a[1] * b[0] });
}

//Смешанное произведение векторов
long long module::MultiVectorProduct(vector<long long>& a, vector<long long>& b, vector<long long>& c) {
	return DotProduct(VectorProduct(a, b), c);
}

//Проверка коллинеарности двух векторов
bool module::IsCollinear(vector<long long>& a, vector<long long>& b) {
	vector<long long> ans = VectorProduct(a, b);
	if (ans[0] == 0 && ans[1] == 0 && ans[2] == 0) return 1;
	else return 0;
}

//Проверка компланарности трёх векторов
bool module::IsComplanar(vector<long long>& a, vector<long long>& b, vector<long long>& c) {
	return MultiVectorProduct(a, b, c) == 0 ? 1 : 0;
}
