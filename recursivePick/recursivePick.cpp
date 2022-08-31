#include <iostream>
#include <vector>
using namespace std;

int repeatSum(int n)   //�̳��� �Էµ� ���ڿ� ���� ��� ����� ���� �� ���ϴ� �ڽ� !
{
	for (int i = 0; i < n; ++i)
		for (int j = i + 1; j < n; ++j)
			for (int k = j + 1 ; k < n; ++k)
				for (int l = k + 1; l < n; ++l)

					cout << i << "" << j << "" << k << "" << l << endl;
	return 0;
}

// n : ��ü ������ �� 
// picked : ���ݱ��� �� ���ҵ��� ��ȣ
// toPick : �� �� ������ �� 
// �� ��, ������ toPick���� ���Ҹ� ���� ����� ����Ѵ�.
void pick(int n, vector<int>& picked, int toPick)
{
	if (toPick == 0)
	{
		printPicked(picked); return;
	}
	int smallest = picked.empty() ? 0 : picked.back() + 1;

	for (int next = smallest; next < n; ++next)
	{
		picked.push_back(next);
		pick(n, picked, toPick - 1);
		picked.pop_back();
	}
}

int printPicked(vector<int>& c)
{
	cout << & c << endl;
	return 0;
}

int main()
{
	int a, b, c;
	// vector<int>& d = nullptr;  << �� �� ����;; vector container �����Ϸ��� ����

	cout << "insert one NUM :" << endl;
	cin >> a;

	cout << repeatSum(a) << endl;

	pick(b, &d, c);

	return 0;
}