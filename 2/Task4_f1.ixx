module;
#include <math.h>
export module student3:f1;

namespace RBPO
{
	namespace Lab2
	{
		namespace Variant4
		{
			namespace Task4
			{
				export double f1(double x)
				{
					double res;
					res = (sin(2 * x) + sin(5 * x) - sin(3 * x)) / (cos(x) - cos(3 * x) + cos(5 * x));
					return res;
				}
			}
		}
	}
}