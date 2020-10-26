#include <iostream>

using namespace std;

void dump(int array[], int array_2D[][5])
{
    for (int x = 1; x <= 25; x++)
    {
        cout << "array[" << x << "]" << "=" << array[x - 1] << endl;
    }
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            cout << "array_2D[" << i << "][" << j << "]" << "=" << array_2D[i - 1][j - 1] << endl;
        }
    }
}
int main(int argc, char** argv)
{
    int array[25];
    int array_2D[5][5];
    int n = 1;
    for (int x = 1; x <= 25; x++)
    {
        array[x - 1] = x;
    }
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            array_2D[i - 1][j - 1] = array[n - 1];
            n++;
        }
    }
    dump(array, array_2D);
    return 0;
}
