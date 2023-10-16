#include <math.h>
module student2;

double RBPO::Lab2::Variant4::Task3::a(int i)
{
	return pow(-1, i % 2) * ((pow(i, 2) + 1.) / (pow(i, 3) + 3));
}