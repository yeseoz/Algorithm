// ���� ���� �͸� �����ϴ� �׸���
// �Ž�����
#include <iostream>
using namespace std;

int main()
{
	int n = 1260;
	int count = 0;
	int coin_type[4] = { 500, 100, 50, 10 }; // ���� Ÿ��

	for (int i = 0; i < 4; i++)
	{
		count += n / coin_type[i]; // �Ž����� ������ ����
		n %= coin_type[i]; // ������ ����� �Ž�����
	}
	cout << count << endl;
}