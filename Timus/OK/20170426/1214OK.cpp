//1214. Странная процедура
#include <iostream>
#include <math.h>
/*void P(long& x, long& y)
{
	int i, j;
	if (x>0 && y>0)
	{
		for (i = 1; i <= x + y; i++)
		{
			y = x*x + y;
			x = x*x + y;
			y = sqrt(x + (y / labs(y))*(-labs(y)));
			for (j = 1; j <= 2 * y; j++)
				x = x - y;
		}
	}
}*/
int main()
{
	long X = 0, Y = 0;
	std::cin >> X >> Y;
	if (X > 0 && Y > 0 && (X + Y) % 2 == 1) { std::swap(X, Y); }
	std::cout << X << " " << Y << "\n";
	return 0;
}