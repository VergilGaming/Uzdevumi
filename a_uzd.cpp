#include <iostream>
using namespace std;

int main()
{
    cout << "Ievadi divus naturalus skaitlus: ";
    int x, y;
    cin >> x >> y;

    cout << "Visi kopigie dalitaji ir ";
    for (int i = 1; i <= x && i <= y; i++)
    {
        if (x % i == 0 && y % i == 0)
        {
            cout << i << " ";
        }

    }
    cout << endl;

    cout << "Uzspied enter, lai liktu programmai atkal iet." << endl;
        system("pause");
        return main();
}
