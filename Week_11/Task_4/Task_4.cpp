#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{
    int mas[4][6];

    srand(time(NULL));
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 6; j++)
        {
            mas[i][j] = rand() % 10;
            cout << mas[i][j] << " ";
        }
        cout << endl;
    }
    int sum = 0;
    for (int j = 0; j < 6; ++j)
    {
        for (int i = 0; i < 4; ++i)
            sum += mas[i][j];
        cout << "У " << j << " стобчику сума елементів = " << sum << endl;
        sum = 0;
    }
}