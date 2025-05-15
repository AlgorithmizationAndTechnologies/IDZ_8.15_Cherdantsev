#pragma once
#include <vector>
using namespace std;
namespace module {
	//��������� ������������
	long long DotProduct(vector<long long> a, vector<long long> b);
	//������������ ��������
	vector<long long> VectorProduct(vector<long long>& a, vector<long long>& b);
	//��������� ������������ ��������
	long long MultiVectorProduct(vector<long long>& a, vector<long long>& b, vector<long long>& c);
	//�������� �������������� ���� ��������
	bool IsCollinear(vector<long long>& a, vector<long long>& b);
	//�������� �������������� ��� ��������
	bool IsComplanar(vector<long long>& a, vector<long long>& b, vector<long long>& c);
}