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

        // Slicing Both Arrays
        IntMatrix x11 = Slice2d(x, 0, x.size()/2, 0, x.size()/2);
        IntMatrix x12 = Slice2d(x, 0, x.size()/2, x.size()/2, x.size());
        IntMatrix x21 = Slice2d(x, x.size()/2, x.size(), 0, x.size());
        IntMatrix x22 = Slice2d(x, x.size()/2, x.size(), x.size()/2, x.size());

        IntMatrix y11 = Slice2d(y, 0, x.size()/2, 0, x.size()/2);
        IntMatrix y12 = Slice2d(y, 0, x.size()/2, x.size()/2, x.size());
        IntMatrix y21 = Slice2d(y, x.size()/2, x.size(), 0, x.size());
        IntMatrix y22 = Slice2d(y, x.size()/2, x.size(), x.size()/2, x.size());

        IntMatrix res11 = Slice2d(res, 0, x.size()/2, 0, x.size()/2);
        IntMatrix res12 = Slice2d(res, 0, x.size()/2, x.size()/2, x.size());
        IntMatrix res21 = Slice2d(res, x.size()/2, x.size(), 0, x.size());
        IntMatrix res22 = Slice2d(res, x.size()/2, x.size(), x.size()/2, x.size());

        // Calculating C11
        res11 = AddMat(KaratsubaProd(x11, y11), KaratsubaProd(x12, y21));

        // Calculating C12
        res12 = AddMat(KaratsubaProd(x11, y12), KaratsubaProd(x12, y22));

        // Calculating C21
        res21 = AddMat(KaratsubaProd(x21, y11), KaratsubaProd(x22, y21));

        // Calculating C22
        res22 = AddMat(KaratsubaProd(x21, y12), KaratsubaProd(x22, y22));

        res = VConcatenate(HConcatenate(res11, res12), HConcatenate(res21, res22));
    }

    return res;
}

/*
 * Slice Given Matrix int Sub Matrix with given dimensions
 */
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


/*
 * Add 2 Square Matrices
 */
IntMatrix AddMat(IntMatrix x, IntMatrix y){
    IntMatrix res(x.size(), std::vector<int>(x.size(), 0));
    for(int i=0; i<x.size(); i++){
        for(int j=0; j<x.size(); j++){
            res[i][j] = x[i][j] + y[i][j];
        }
    }

    return res;
}

/*
 * Print Given Matrix
 */
void PrintMatrix(IntMatrix src){
    for(auto &i :src){
        for (auto j: i){
            (void)printf("%d ", j);
        }
        (void)printf("\n");
    }

}

/*
 * Concatenate Two Matrices on the Horizontal Axis
 */
IntMatrix HConcatenate(IntMatrix x, IntMatrix y){
    IntMatrix res = x;
    int count = 0;
    for (auto &i: res) {
        (void) i.insert(i.end(), y[count].begin(), y[count].end());
        count++;
    }
    return res;
}

/*
 * Concatenate Two Matrices on the Vertical Axis
 */
IntMatrix VConcatenate(IntMatrix x, IntMatrix y){
    IntMatrix res = x;
    (void)res.insert(res.end(), y.begin(), y.end());
    return res;
}