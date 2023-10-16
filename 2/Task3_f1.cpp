#include <math.h>
module student2;
double RBPO::Lab2::Variant4::Task3::f1(double x)
{
	double res;
	res = (sin(2 * x) + sin(5 * x) - sin(3 * x)) / (cos(x) - cos(3 * x) + cos(5 * x));
	return res;
}