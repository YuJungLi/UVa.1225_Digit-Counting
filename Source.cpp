#include <iostream>
#include <iomanip>
#pragma warning( disable : 4996 )
using namespace std;

int main()
{
	freopen("Input.txt", "rt", stdin);
	freopen("Output.txt", "w+t", stdout);
	int n;
	cin >> n;
	while (n--)
	{
		int num, cnt[10] = { 0 };
		cin >> num;
		for (int i = 1; i <= num; i++)
		{
			if (i < 10)
				cnt[i]++;
			else if (i < 100)
			{
				cnt[i % 10]++;
				cnt[i / 10]++;
			}
			else if (i < 1000)
			{
				cnt[i % 10]++;
				cnt[i / 10 % 10]++;
				cnt[i / 100]++;
			}
			else
			{
				cnt[i % 10]++;
				cnt[i / 10 % 10]++;
				cnt[i / 100 % 10]++;
				cnt[i / 1000]++;
			}
		}
		for (int i = 0; i < 9; i++)
			cout << cnt[i] << " ";
		cout << cnt[9] << endl;
	}
	return 0;
}
