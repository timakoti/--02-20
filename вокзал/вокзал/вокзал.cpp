// вокзал.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
    char x, a, b, c, A, B, C;
    cout << "what is your destination?" << endl;
    cin >> x;
    switch (x) {
    case 'a' :
        cout << "your cost is 220r, train is leaving at 18:00"<< endl;
        break;
    case  'A':
        cout << "your cost is 220r, train is leaving at 18:00" << endl;
        break;
    case 'b' :
        cout << "your cost is 150r, train is leaving at 10:30" << endl;
        break;
    case 'B':
        cout << "your cost is 150r, train is leaving at 10:30" << endl;
        break;
    case 'c':
        cout << "your cost is 90r, train is leaving at 19:18" << endl;
        break;
    case 'C':
        cout << "your cost is 90r, train is leaving at 19:18" << endl;
        break;
    }
    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
