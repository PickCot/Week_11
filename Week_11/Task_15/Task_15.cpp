#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{
    const int length = 3;
    const int height = 3;
    int mas[height][length];

    srand(time(NULL));
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < length; j++)
        {
            mas[i][j] = rand() % 10;
            cout << mas[i][j] << " ";
        }
        cout << endl;
    }
    int sum = 0;
    for (int j = 0; j < length; ++j)
    {
        sum += mas[j][j];
    }
    if (length % 2 == 1)
    {
        sum -= mas[int(height / 2)][int(length / 2)];
    }
    for (int j = height-1, i = 0; j >= 0 ; --j, ++i)
    {
        sum += mas[j][i];
    }
    cout << "Сума елементів по діагоналям = " << sum << endl;
}