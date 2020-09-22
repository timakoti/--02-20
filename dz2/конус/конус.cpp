#include <iostream>
#include <math.h>
using namespace std;
//конус

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
	cout << "enter x " << endl;
	cin >> x;
	cout << "enter a " << endl;
	cin >> a;
	if (abs(x) < 1) {
		w = a * log(abs(x));
		cout << "w equals: " << w << endl;
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
	cout << "enter x" << endl;
	cin >> x;
	cout << "enter y" << endl;
	cin >> y;
	cout << "enter b" << endl;
	cin >> b;
	if ((b - y) > 0 && (b - x) >= 0) {
		z = log((b - y)*(sqrt(b - x)));
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
	int n,i;
	cout << "enter starting number" << endl;
	cin >> n;
	for (i = 0; i < 10; i++) {
		cout << n << " ";
		n=n+1;
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