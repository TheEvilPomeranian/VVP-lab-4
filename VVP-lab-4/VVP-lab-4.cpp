#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;


int main() {
	SetConsoleOutputCP(1251);
	cout << "Задача 1: Найдите площадь и периметр прямоугольника" << endl;
		double a, b, S, P;
		cout << "Введите значение стороны прямоугольника a = "; cin >> a;
		cout << "Введите значение стороны прямоугольника b = "; cin >> b;
		if (a > 0 && b > 0){
			S = a * b;
			P = 2 * (a + b);
			cout << "Площадь прямоугольника S = " << S << endl;
			cout << "Периметр прямоугольника P = " << P << endl;
		} 
		else 
		{
			cout << "Противоречит условию задачи. Стороны прямоугольника не могут меньше или равняться нулю!" << endl << endl;
		}
	cout << "\nЗадача 2: Найдите длину окружности" << endl;
		double const Pi = 3.14;
		double d, L;
		cout << "Введите значение диаметр d = "; cin >> d;
		if (d > 0) {
			L = Pi * d;
			cout << "Длина окружности L = " << L << endl << endl;
		}
		else
		{
			cout << "Противоречит условию задачи. Диаметр не может быть меньше или равняться нулю!" << endl << endl;
		}
	cout << "\nЗадача 3: Найдите среднее арифметическое" << endl;
		double u, i, A;
		cout << "Ведите число u = "; cin >> u;
		cout << "Введите число i = "; cin >> i;
		A = (u + i) / 2;
		cout << "Среднее арифметическое A = " << A << endl << endl;
	cout << "\nЗадача 4: Найдите сумму, разность, произведение и частное квадратов двух чисел" << endl;
		double x, y, Sum, Raz, Pr, Ch, Qx, Qy;
		cout << "Введите x не равный нулю: "; cin >> x;
		cout << "Введите y не равный нулю: "; cin >> y;
		if (x != 0 && y != 0)
		{
			Qx = x * x;
			Qy = y * y;
			Sum = Qx + Qy;
			Raz = Qx - Qy;
			Pr = Qx * Qy;
			Ch = Qx / Qy;
			cout << "Сумма квадратов чисел: " << Sum << endl;
			cout << "Разность квадратов чисел: " << Raz << endl;
			cout << "Произведение квадратов чисел: " << Pr << endl;
			cout << "Частное квадратов чисел: " << Ch << endl;
		}
		else
		{
			cout << "Противоречит условию задачи. Числа не должны быть равны нулю!" << endl << endl;
		}
	cout << "\nЗадача 5: Найдите сумму, разность, произведение и частное модулей двух числе" << endl;
		double r, t, Sum1, Raz1, Pr1, Ch1, Qr, Qt;
		cout << "Введите r не равный нулю: "; cin >> r;
		cout << "Введите t не равный нулю: "; cin >> t;
		if (r != 0 && t != 0)
		{
			Qr = abs(r);
			Qt = abs(t);
			Sum1 = Qr + Qt;
			Raz1 = Qr - Qt;
			Pr1 = Qr * Qt;
			Ch1 = Qr / Qt;
			cout << "Сумма модулей чисел: " << Sum1 << endl;
			cout << "Разность модулей чисел: " << Raz1 << endl;
			cout << "Произведение модулей чисел: " << Pr1 << endl;
			cout << "Частное модулей чисел: " << Ch1 << endl;
		}
		else
		{
			cout << "Противоречит условию задачи. Числа не должны быть равны нулю!" << endl;
		}
}