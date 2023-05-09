// 숫자 카드 게임
// N = 행, M = 열
#include<iostream>
using namespace std;

int main()
{
	int n, m;
	int result = 0;
	

	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		int min_val = 10001; // 행이 달라질때마다 초기화
		for (int j = 0; j < m; j++)
		{
			int x;
			cin >> x;
			min_val = min(min_val, x); // min_val과 x를 비교해서 작은 수를 출력
		}
		result = max(result, min_val);
	}
	cout << result << endl;
}
