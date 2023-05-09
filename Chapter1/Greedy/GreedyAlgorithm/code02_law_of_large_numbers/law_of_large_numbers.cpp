// N = �迭�� ũ��
// M = ���ڰ� �������� Ƚ��
// K = �����ؼ� ������ �� �ִ� Ƚ��

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
		v.push_back(x); // ���Ϳ� x�� ����
	}

	sort(v.begin(), v.end()); // ���� ���� �� ���� �ϱ�
	int first = v[n - 1]; // ���� ū ��
	int second = v[n - 2]; // �ι�°�� ū ��

	// ���� ū ���� �������� �ִ� Ƚ��
	int cnt = (m / (k + 1)) * k;
	cnt += m % (k + 1);

	int result = 0;
	result += cnt * first;

	result += (m - cnt) * second;

	cout << result << '\n';
}
