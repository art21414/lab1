module;
#include <math.h>
export module student3:f2;

namespace RBPO
{
	namespace Lab2
	{
		namespace Variant4
		{
			namespace Task4
			{
				export double f2(double x)
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
			}
		}
	}
}