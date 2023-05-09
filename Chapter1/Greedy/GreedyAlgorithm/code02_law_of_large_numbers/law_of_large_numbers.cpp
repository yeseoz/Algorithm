// N = 배열의 크기
// M = 숫자가 더해지는 횟수
// K = 연속해서 더해질 수 있는 횟수

#include <iostream>
#include<algorithm>
#include<vector>

using namespace std;
vector<int>v;

int main()
{
	int n, m, k;
	cin >> n >> m >> k;

	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		v.push_back(x); // 백터에 x값 삽입
	}

	sort(v.begin(), v.end()); // 백터 안의 값 정렬 하기
	int first = v[n - 1]; // 제일 큰 수
	int second = v[n - 2]; // 두번째로 큰 수

	// 가장 큰 수가 더해지는 최대 횟수
	int cnt = (m / (k + 1)) * k;
	cnt += m % (k + 1);

	int result = 0;
	result += cnt * first;

	result += (m - cnt) * second;

	cout << result << '\n';
}
