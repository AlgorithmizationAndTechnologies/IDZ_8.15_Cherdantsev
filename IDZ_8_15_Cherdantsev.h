#pragma once
#include <vector>
using namespace std;
namespace module {
	//Скалярное произведение
	long long DotProduct(vector<long long> a, vector<long long> b);
	//Произведение векторов
	vector<long long> VectorProduct(vector<long long>& a, vector<long long>& b);
	//Смешанное произведение векторов
	long long MultiVectorProduct(vector<long long>& a, vector<long long>& b, vector<long long>& c);
	//Проверка коллинеарности двух векторов
	bool IsCollinear(vector<long long>& a, vector<long long>& b);
	//Проверка компланарности трёх векторов
	bool IsComplanar(vector<long long>& a, vector<long long>& b, vector<long long>& c);
}