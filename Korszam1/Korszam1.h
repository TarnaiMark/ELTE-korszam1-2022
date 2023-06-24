// Korszam1.h : Include file for standard system include files,
// or project specific include files.

#pragma once

#include <iostream>
#include <cmath>
#include <vector>
#include <stdexcept>
#include "vector2.h"
#include "matrix.h"
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

// TODO: Reference additional headers your program requires here.
