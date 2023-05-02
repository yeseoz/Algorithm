// 가장 좋은 것만 선택하는 그리디
// 거스름돈
#include <iostream>
using namespace std;

int main()
{
	int n = 1260;
	int count = 0;
	int coin_type[4] = { 500, 100, 50, 10 }; // 동전 타입

	for (int i = 0; i < 4; i++)
	{
		count += n / coin_type[i]; // 거슬러줄 동전의 개수
		n %= coin_type[i]; // 나눈뒤 줘야할 거스름돈
	}
	cout << count << endl;
}