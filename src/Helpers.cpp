/*
 * Source File: Helpers.cpp.c 
 * Date: 4/25/21 
 * Author: Ahmad Abdalmageed.
 */

#include "../inlcude/Helpers.hpp"

/*
 * Computes the Dot Product of Two Matrices
 *
 * Arguments:
 *     IntMatrix x:
 *
 */
IntMatrix DotProd(const IntMatrix x, const IntMatrix y, int size){
    IntMatrix res(size, std::vector<int>(size, 0));
    for (int i=0; i < size; i++){
        for(int j=0; j < size; j++){
            for(int k = 0; k < size; k++){
                res[i][j] += x[i][k]* y[k][j];
            }
        }
    }
    return res;
}

IntMatrix KaratsubaProd(const IntMatrix x, const IntMatrix y){
    IntMatrix res(x.size(), std::vector<int>(x[0].size(), 0));
    if (x.size() == 1){
        res[0][0] = x[0][0] * y[0][0];
    } else{
    }

    return res;
}

IntMatrix Slice2d(const IntMatrix x, int x_begin, int x_end, int y_begin, int y_end){
    int new_size = x_end - x_begin;
    IntMatrix res(new_size, std::vector<int>(new_size, 0));
    for(int i=x_begin; i<x_end; i++){
        for(int j=y_begin; j<y_end; j++){
            res[i-x_begin][j-y_begin] = x[i][j];
        }
    }
    return res;
}