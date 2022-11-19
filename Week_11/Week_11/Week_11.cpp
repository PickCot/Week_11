#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{
    int mas[4][3];

    srand(time(NULL));
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++)
        {
            mas[i][j] = rand() % 10;
        }
    }
    int k = 0;
    for (int i = 0; i < 4; ++i)
    {
        k = 0;
        for (int j = 0; j < 3; ++j)
            if (mas[i][j] % 2 == 0)
                k++;
        cout << "У " << i << " рядку" << k << " стовбчиків" << endl;
    }
}