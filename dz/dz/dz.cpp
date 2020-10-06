// dz.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>
using namespace std;
/*int main()
{
	setlocale(LC_ALL, "Russian");
	const double pi = 3.14159265; double r, R, h, l, V, S,x,a,b;
	cout << "Введите радиус меньшей окружности" << endl;
	cin >> r;
	cout << "Введите радиус большей окружности" << endl;
	cin >> R;
	cout << "Введите высоту" << endl;
	cin >> h;
	l = sqrt((h * h) + ((R - r) * (R - r)));
	a = 1;
	b = 3;
	x = a / b;
	if (r <= 0 || R <= 0 || h <= 0 || l <= 0) {
		cout << "Конус не существует";
	}
	else {
		V = x * pi * h * ((R * R) + (R * r) + (r * r));
		cout << "Объем равен: " << V << endl;
		S = pi * ((R * R) + ((R + r) * l) + (r * r));
		cout << "Площадь равна: " << S << endl;
	}
	return 0;
}*/

//разветвление

/*int main()
{
	double a, x,w;
	cout << "enter a " << endl;
	cin >> a;
	cout << "enter x " << endl;
	cin >> x;
	if (abs(x) < 1) {
		if (abs(x) != 0) {
			w = a * log(abs(x));
			cout << "w equals: " << w << endl;
		}
		else {
			cout << "function not defined";
		}
	}
	else {
		if ((a - (x*x)) >= 0) {
			w = sqrt(a - (x*x));
			cout << "w equals: " << w << endl;
		}
		else {
			cout << "equasion not posiible" << endl;
		}
	}
}*/

//функция

/*int main()
{
	double x, y, z, b;
	cout << "equasion type z = ln(b-y)*sqrt(b-x)"<< endl;
	cout << "enter b" << endl;
	cin >> b;
	cout << "enter x" << endl;
	cin >> x;
	cout << "enter y" << endl;
	cin >> y;
	if ((b - y) > 0 && (b - x) >= 0) {
		z = log(b - y)*(sqrt(b - x));
		cout << "z equals: " << z;
	}
	else {
		cout << "equasion not possible" ;
	}
	return 0;
}*/

//порядок

/*int main()
{
	double n; int i,y;
	cout << "enter starting number" << endl;
	cin >> n;
	y = floor(n);
	if (y==0 && y>0){
		for (i = 0; i < 10; i++) {
			cout << y << " ";
			y = y + 1;
		}
	}
	if (y != n && n > 0) {
		for (i = 0; i < 10; i++) {
			y = y + 1;
			cout << y << " ";
		}
	}
	if (y == 0) {
		for (i = 0; i < 10; i++) {
			y = y + 1;
			cout << y << " ";
		}
	}
	if (y < 0) {
		y = 1;
		for (i = 0; i < 10; i++) {
			cout << y << " ";
			y = y + 1;
		}
	}
}*/

//табуляция

/*int main()
{
	setlocale(0, "");
	double x = -4, dx = 0.5, y;
	cout << "x: " << "\ty: " << endl;
	while (x <= 4) {
		y = ((x*x)-(2*x)+2)/(x-1);
		if (x == 1) {
			cout << x << "\t" << "делить на ноль нельзя " << endl;
		}
		else {
			cout << x << "\t" << y << endl;
		}
		x = x + dx;
	}
	return 0;
}*/

/*int main()
{
	double a; double b; double c; double D; double x;
	cout << "Equasion type: ax^2+bx+c=0" << endl;
	cout << "Enter a" << endl;
	cin >> a;
	cout << "Enter b" << endl;
	cin >> b;
	cout << "Enter c" << endl;
	cin >> c;
	if (a == 0 and b != 0) {
		x = (-c) / b;
		cout << "x equals: " << x << endl;
	}
	else {
		if (a == 0 and b == 0) {
			if (c == 0) {
				cout << "x equals any number" << endl;
			}
			else {
				cout << "Equasion not possible" << endl;
			}
		}
		else if (b == 0 and a != 0) {
			if (((-c) / a) < 0) {
				cout << "Equasion not possible" << endl;
			}
			else {
				x = sqrt(((-c) / a));
				if (x != 0) {
					cout << "x1 equals: " << x << endl;
					cout << "x2 equals: " << -x << endl;
				}
				else {
					x = 0;
					cout << "x equals: " << x << endl;
				}
			}
		}
		else if (a == 0 and c == 0) {
			x = 0;
			cout << "x equals: " << x << endl;
		}
		D = (b * b) - (4 * a * c);
		if (D > 0 and b != 0 and a != 0) {
			x = ((-b) + sqrt(D)) / (2 * a);
			cout << "x1 equals: " << x << endl;
			x = ((-b) - sqrt(D)) / (2 * a);
			cout << "x2 equals: " << x << endl;
			return 0;
		}
		if (D == 0 and b != 0 and a != 0) {
			x = (-b) / (2 * a);
			cout << "x equals: " << x << endl;
		}
		if (D < 0 and b != 0 and a != 0) {
			cout << "Equasion not possible" << endl;
		}
	}

}*/
/*long int gcd(int a, int b) {
	if (b == 0)
		return a;
	else
		return gcd(b, a % b);
}
int main()
{
	long int a, b, c;
	cin >> a >> b;
	if (gcd(a, b) != 0) {
		if (gcd(a, b) > 0) {
			cout << gcd(a, b);
		}
		if (gcd(a, b) < 0) {
			c = (-1) * gcd(a, b);
			cout << c;
		}
	}
	else {
		cout << "cannot divide by 0";
	}
}*/

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
