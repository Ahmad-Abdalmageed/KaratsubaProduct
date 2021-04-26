#include <iostream>
#include <vector>
#include "inlcude/Helpers.hpp"

typedef std::vector<std::vector<int>> IntMatrix;

int main() {
    IntMatrix x = {
            {2, 5, 6, 20},
            {3, 7, 5, 30},
            {20, 7, 15, 70},
            {70, 7, 15, 70}

    };

    IntMatrix y = {
            {5, 8, 9, 20},
            {2, 7, 6, 3},
            {3, 16, 8, 7},
            {3, 16, 8, 7}
    };

/*
    IntMatrix res = DotProd(x, y, 1);

    for(auto &i :res){
        for (auto j: i){
            (void)printf("%d ", j);
        }
        (void)printf("\n");
    }
*/

    (void)printf("\n");

    IntMatrix x2 = Slice2d(x, 0, x.size()/2, 0, x.size()/2);
    for(auto &i :x2){
        for (auto j: i){
            (void)printf("%d ", j);
        }
        (void)printf("\n");
    }


    return 0;
}
