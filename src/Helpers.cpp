/*
 * Source File: Helpers.cpp.c 
 * Date: 4/25/21 
 * Author: Ahmad Abdalmageed.
 */

#include "../inlcude/Helpers.hpp"

/*
 * Computes the Dot Product of Two Matrices
 */
IntMatrix DotProd(const IntMatrix& x, const IntMatrix& y, int size){
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


/*
 * Karatsuba Product Implementation
 *
 * Algorithm:
 * Using Divide And Conquer techniques to Calculate the Multiplication
 * of Two Square Matrices:
 * if :
 * A = ( A11 A12     and B = ( B11 B12
 *       A21 A22 )             B21 B22)
 * C is the Result of Multiplication of the Two Matrices
 * Then C:
 * C11 = A11.B11 + A12.B21
 * C12 = A11.B12 + A12.B22
 * C21 = A21.B11 + A22.B21
 * C22 = A21.B12 + A22.B22
 *
 * Resulting in 8 Multiplications and 4 Summation Operations.
 */
IntMatrix KaratsubaProd(const IntMatrix& x, const IntMatrix& y){
    IntMatrix res(x.size(), std::vector<int>(x[0].size(), 0));
    if (x.size() == 1){
        res[0][0] = x[0][0] * y[0][0];
    } else{
        int half_size = ((int)x.size()/2);

        // Extracting Sub quarters of each array
        // A ==>> A11, A12, A21, A22
        // Dividing each array into four Sub-quarters
        IntMatrix x11 = Slice2d(x, 0, half_size, 0, half_size);
        IntMatrix x12 = Slice2d(x, 0, half_size, half_size, x.size());
        IntMatrix x21 = Slice2d(x, half_size, x.size(), 0, half_size);
        IntMatrix x22 = Slice2d(x, half_size, x.size(), half_size, x.size());

        IntMatrix y11 = Slice2d(y, 0, half_size, 0, half_size);
        IntMatrix y12 = Slice2d(y, 0, half_size, half_size, x.size());
        IntMatrix y21 = Slice2d(y, half_size, x.size(), 0, half_size);
        IntMatrix y22 = Slice2d(y, half_size, x.size(), half_size, x.size());

        IntMatrix res11 = Slice2d(res, 0, half_size, 0, half_size);
        IntMatrix res12 = Slice2d(res, 0, half_size, half_size, x.size());
        IntMatrix res21 = Slice2d(res, half_size, x.size(), 0, half_size);
        IntMatrix res22 = Slice2d(res, half_size, x.size(), half_size, x.size());

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
IntMatrix Slice2d(const IntMatrix& x, int x_begin, int x_end, int y_begin, int y_end){
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
void PrintMatrix(const IntMatrix& src){
    for(auto &i :src){
        printf("[");
        for (auto j: i){
            (void)printf("%-10d ", j);

        }
        (void)printf("]\n");
    }
    printf("\n");
}

/*
 * Concatenate Two Matrices on the Horizontal Axis
 */
IntMatrix HConcatenate(IntMatrix x, IntMatrix y){
    IntMatrix res = std::move(x);
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
    IntMatrix res = std::move(x);
    (void)res.insert(res.end(), y.begin(), y.end());
    return res;
}

/*
 * Generate a Random Square Matrix
 */
IntMatrix GenSquareMat(int size){
    std::random_device rnd_device;
    std::default_random_engine rand_engine{rnd_device()};
    std::uniform_int_distribution<int> dist{1, 100};
    auto gen = [&dist, &rand_engine](){
        return dist(rand_engine);
    };

    IntMatrix RandX(size, std::vector<int>(size));
    for(auto & ix: RandX){
        std::generate(ix.begin(), ix.end(), gen);
    }

    return RandX;
}