#include <math.h>
module student2;

double RBPO::Lab2::Variant4::Task3::f4(double epsilon)
{
	double pred = 0;
	double now = a(0);
	double sum = pred + now;
	int i = 1;
	do
	{
		double pred = 0;
		double now = a(0);
		double sum = pred + now;
		int i = 1;
	} while (fabs(now - pred) > epsilon);
	return sum;
}