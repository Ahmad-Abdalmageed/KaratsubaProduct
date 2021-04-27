//
/*
 * Source File: Helpers.hpp.h 
 * Date: 4/25/21 
 * Author: Ahmad Abdalmageed.
 */

//

#ifndef ALGORITHMS_HELPERS_HPP
#define ALGORITHMS_HELPERS_HPP

#include <iostream>
#include <vector>
typedef std::vector<std::vector<int>> IntMatrix;

IntMatrix DotProd(const IntMatrix& x, const IntMatrix& y, int size);
IntMatrix KaratsubaProd(const IntMatrix& x, const IntMatrix& y);
IntMatrix Slice2d(const IntMatrix& x, int x_begin, int x_end, int y_begin, int y_end);
IntMatrix AddMat(IntMatrix x, IntMatrix y);
IntMatrix HConcatenate(IntMatrix x, IntMatrix y);
IntMatrix VConcatenate(IntMatrix x, IntMatrix y);
void PrintMatrix(const IntMatrix& src);

#endif //ALGORITHMS_HELPERS_HPP
