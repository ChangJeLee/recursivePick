#include <iostream>
#include <vector>
using namespace std;

int repeatSum(int n)   //이놈은 입력된 숫자에 대한 모든 경우의 수를 다 구하는 자식 !
{
	for (int i = 0; i < n; ++i)
		for (int j = i + 1; j < n; ++j)
			for (int k = j + 1 ; k < n; ++k)
				for (int l = k + 1; l < n; ++l)

					cout << i << "" << j << "" << k << "" << l << endl;
	return 0;
}

// n : 전체 원소의 수 
// picked : 지금까지 고른 원소들의 번호
// toPick : 더 고를 원소의 수 
// 일 때, 앞으로 toPick개의 원소를 고르는 방법을 출력한다.
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
	// vector<int>& d = nullptr;  << 얘 왜 오류;; vector container 공부하러감 ㅅㄱ

	cout << "insert one NUM :" << endl;
	cin >> a;

	cout << repeatSum(a) << endl;

	pick(b, &d, c);

	return 0;
}