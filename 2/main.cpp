#include <iostream>
import student;
import student1;
import student2;
import student3;
import student4;

using namespace std;
void print(double x, double f1, double x2, double f2, int i2, double f3, double epsilon, double f4);
int main()
{
	int choice, i2;
	double x, x2, epsilon;
	int choice2 = 0;
	setlocale(LC_ALL, "ru");
	while (1)
	{
		if (choice2 == 0)
		{
			cout << "Введите значение для функций f1 f2 f3 f4" << endl;
			cout << "Введите значение x для функции ф1" << endl;
			cin >> x;
			cout << "Введите зачение х для функции ф2" << endl;
			cin >> x2;
			cout << "Введите значение а" << endl;
			cin >> i2;
			cout << "Введите точность для функции ф4" << endl;
			cin >> epsilon;
		}
		cout << "Менюшка" << endl;
		cout << "Нажмите 1 для выполнения 1 задания" << endl;
		cout << "Нажмите 2 для выполнения 2 задания" << endl;
		cout << "Нажмите 3 для выполнения 3 задания" << endl;
		cout << "Нажмите 4 для выполнения 4 задания" << endl;
		cout << "Нажмите 5 для выполнения 5 задания" << endl;
		cout << "Нажмите 0 для выхода из программы" << endl;
		cin >> choice;
		switch (choice)
		{
		case 1:
			cout << "Вывод первого задания" << endl;
			print(x, RBPO::Lab2::Variant4::Task1::f1(x), x2, RBPO::Lab2::Variant4::Task1::f2(x2), i2, RBPO::Lab2::Variant4::Task1::f3(i2), epsilon, RBPO::Lab2::Variant4::Task1::f4(epsilon));
			break;
		case 2:
			cout << "Вывод второго задания" << endl;
			print(x, RBPO::Lab2::Variant4::Task2::f1(x), x2, RBPO::Lab2::Variant4::Task2::f2(x2), i2, RBPO::Lab2::Variant4::Task2::f3(i2), epsilon, RBPO::Lab2::Variant4::Task2::f4(epsilon));
			break;
		case 3:
			cout << "Вывод третьего задания" << endl;
			print(x, RBPO::Lab2::Variant4::Task3::f1(x), x2, RBPO::Lab2::Variant4::Task3::f2(x2), i2, RBPO::Lab2::Variant4::Task3::f3(i2), epsilon, RBPO::Lab2::Variant4::Task3::f4(epsilon));
			break;
		case 4:
			cout << "Вывод четвертого задания" << endl;
			print(x, RBPO::Lab2::Variant4::Task4::f1(x), x2, RBPO::Lab2::Variant4::Task4::f2(x2), i2, RBPO::Lab2::Variant4::Task4::f3(i2), epsilon, RBPO::Lab2::Variant4::Task4::f4(epsilon));
			break;
		case 5:
			cout << "Вывод пятого задания" << endl;
			print(x, RBPO::Lab2::Variant4::Task5::f1(x), x2, RBPO::Lab2::Variant4::Task5::f2(x2), i2, RBPO::Lab2::Variant4::Task5::f3(i2), epsilon, RBPO::Lab2::Variant4::Task5::f4(epsilon));
			break;
		case 0:
			return 0;
		default:
			cout << "Ошибка" << endl;
			break;
		}
		cout << "Сохрнаить переменные?" << endl;
		cout << "Нажмите 1 чтобы оставить" << endl;
		cout << "Нажмите 0 чтобы ввести новые" << endl;
		cin >> choice2;
	}
	return 0;
}

void print(double x, double f1, double x2, double f2, int i2, double f3, double epsilon, double f4)
{
	printf("f1(%f, %f) = %f\n", x, f1);
	printf("f2(%f) = %f\n", x2, f2);
	printf("f3(%d) = %f\n", i2, f3);
	printf("f4(%f) = %f\n", epsilon, f4);
}