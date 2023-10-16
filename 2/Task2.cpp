#include <math.h>

import student1;
double RBPO::Lab2::Variant4::Task2::f1(double x)
{
	double res;
	res = (sin(2 * x) + sin(5 * x) - sin(3 * x)) / (cos(x) - cos(3 * x) + cos(5 * x));
	return res;
}
double RBPO::Lab2::Variant4::Task2::f2(double x)
{
	double res;
	if (x >= 0)
	{
		res = log(x) + 9;
	}
	else
	{
		if (x == -sqrt(7))
			res = 0;
		else
			res = (-x) / (pow(x, 2) - 7);
	}
	return res;
}
double a(int i)
{
	return pow(-1, i % 2) * ((pow(i, 2) + 1.) / (pow(i, 3) + 3));
}
double RBPO::Lab2::Variant4::Task2::f3(int n)
{
	double sum = 0;
	int i = 0;
	while (i <= n) {
		sum += a(i);
		i++;
	}
	return sum;
}
double RBPO::Lab2::Variant4::Task2::f4(double epsilon)
{
	double pred = 0;
	double now = a(0);
	double sum = pred + now;
	int i = 1;
	while (fabs(now - pred) > epsilon)
	{
		pred = now;
		now = a(i);
		sum += now;
		i++;
	}
	return sum;
}