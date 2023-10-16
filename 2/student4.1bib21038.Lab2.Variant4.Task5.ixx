module;
#include <math.h>
export module student4;
namespace RBPO
{
	namespace Lab2
	{
		namespace Variant4
		{
			namespace Task5
			{
				export double f1(double x);
				export double f2(double x);
				export double a(int i);
				export double f3(int n);
				export double f4(double epsilon);
			}
		}
	}
}
module :private;
double RBPO::Lab2::Variant4::Task5::f1(double x)
{
	double res;
	res = (sin(2 * x) + sin(5 * x) - sin(3 * x)) / (cos(x) - cos(3 * x) + cos(5 * x));
	return res;
}
double RBPO::Lab2::Variant4::Task5::f2(double x)
{
	double res;
	x == -sqrt(7) ? res = 0 : x >= 0 ? res = log(x) + 9 : res = (-x) / (pow(x, 2) - 7);
	return res;
}
double RBPO::Lab2::Variant4::Task5::a(int i)
{
	return pow(-1, i % 2) * ((pow(i, 2) + 1.) / (pow(i, 3) + 3));
}
double RBPO::Lab2::Variant4::Task5::f3(int n)
{
	double sum = 0;
	for (int i = 0; i <= n; i++)
	{
		sum += a(i);
	}
	return sum;
}
double RBPO::Lab2::Variant4::Task5::f4(double epsilon)
{
	double pred = 0;
	double now = a(0);
	double sum = pred + now;
	for (int i = 1; ; i++)
	{
		if (fabs(now - pred) <= epsilon)
		{
			return sum;
		}
		now = a(i);
		sum += now;

		pred = now;
	}
}