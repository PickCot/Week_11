#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{
    int mas[4][7];

    srand(time(NULL));
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 7; j++)
        {
            mas[i][j] = rand() % 10;
            cout << mas[i][j] << " ";
        }
        cout << endl;
    }
    int min = mas[0][0];
    int index1 = 0;
    int index2 = 0;
    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 7; ++j)
            if (mas[i][j] < min)
            {
                min = mas[i][j];
                index1 = j;
                index2 = i;
            }
    }
    cout << "Максимальний елемент знаходиться в " << index2 + 1 << " рядку і "
         << index1 + 1 << " стовбчику." << " Дорювнює він " << min;
}