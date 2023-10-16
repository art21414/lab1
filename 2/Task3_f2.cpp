#include <math.h>
import student2;
double RBPO::Lab2::Variant4::Task3::f2(double x)
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