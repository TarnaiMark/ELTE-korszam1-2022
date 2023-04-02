// Korszam1.cpp : Defines the entry point for the application.
//

#include "Korszam1.h"

using namespace std;


 template<typename K> K sq(K x){ return x*x; }
 template<typename H> H lin(H x){ return 2*x; }


template< typename T, typename F, typename H>
T integrate(F f, H g ,int n, T x0, T x1)
{
	double dx = (x1 - x0) / n, sum = 0.0;
	for (int i = 1; i <= n - 1; i++)
	{
		sum += f(x0 + i * dx);
	}
	return dx / 2.0 * (f(x0) + g(sum)  + f(x1));
}

int main()
{
	double res = integrate( sq<double>, lin<double> ,1000, 0.0, 1.0);
	cout << res << endl;
}
