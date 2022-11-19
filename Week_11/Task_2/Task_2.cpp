#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{
	int mas[6][4] = { {1, 2, 3},{4, 4, 4}, {6, 7, 8} };

	srand(time(NULL));
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 4; j++)
		{
			mas[i][j] = rand() % 10;
		}
	}

	int k = 0;
	for (int j = 0; j < 4; ++j)
	{
		k = 0;
		for (int i = 0; i < 6; ++i)
			if (mas[i][j] % 2 == 0)
				k++;
		cout << "for " << j << " k = " << k << endl;
	}
}