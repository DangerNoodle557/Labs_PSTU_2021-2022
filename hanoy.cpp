#include <iostream>
using namespace std;
int hanoy(int n, int a, int b, int c)
{
    if (n > 0)
    {
        hanoy(n - 1, a, c, b);
        cout << a << " >> " << b << endl;
        hanoy(n - 1, c, b, a);
    }
    return 0;
}
int main()
{
    setlocale(LC_ALL, "Russian");
    int n;
    cout << "Введите количество дисков: ";
    cin >> n;
    hanoy(n, 1, 3, 2);
    return 0;
}
