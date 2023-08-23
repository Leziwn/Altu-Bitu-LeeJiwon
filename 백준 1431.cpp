//���� 1431
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

bool compare(string A, string B) {
	if (A.size() != B.size())
		return A.size() < B.size(); //���̰� �ٸ��� ª�� �ͺ��� ����

	else {
		int A_sum = 0, B_sum = 0;
		for (int i = 0; i < A.size(); i++) {
			if (A[i] - '0' <= 9 && A[i] - '0' >= 0)
				A_sum += A[i] - '0';
		}
		for (int i = 0; i < B.size(); i++) {
			if (B[i] - '0' <= 9 && B[i] - '0' >= 0)
				B_sum += B[i] - '0';
		}

		if (A_sum != B_sum) 
			return A_sum < B_sum; //���� �ٸ���, ���� ���� ������� ����
		else 
			return A < B; //���� ������, ���ĺ� ������� ����
	}
}

int main() {
	int N;
	cin >> N;

	vector<string> vec;

	for (int i = 0; i < N; i++) {
		string s;
		cin >> s;
		vec.push_back(s);
	}
	sort(vec.begin(), vec.end(), compare);

	for (int i = 0; i < vec.size(); i++)
		cout << vec[i] << endl;

	return 0;
}