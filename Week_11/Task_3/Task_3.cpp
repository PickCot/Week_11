#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{
    int mas[5][7];

    srand(time(NULL));
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 7; j++)
        {
            mas[i][j] = rand() % 10;
            cout << mas[i][j] << endl;
        }
    }
    int sum = 0;
    for (int i = 0; i < 5; ++i)
    {
        for (int j = 0; j < 7; ++j)
                sum += mas[i][j];
        cout << "У " << i << " рядку" << "сума елементів = " << sum << endl;
        sum = 0;
    }
}