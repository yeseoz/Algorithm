// ���� ī�� ����
// N = ��, M = ��
#include<iostream>
using namespace std;

int main()
{
	int n, m;
	int result = 0;
	

	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		int min_val = 10001; // ���� �޶��������� �ʱ�ȭ
		for (int j = 0; j < m; j++)
		{
			int x;
			cin >> x;
			min_val = min(min_val, x); // min_val�� x�� ���ؼ� ���� ���� ���
		}
		result = max(result, min_val);
	}
	cout << result << endl;
}
