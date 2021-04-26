#include "inlcude/Helpers.hpp"

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

    IntMatrix res = DotProd(x, y, x.size());
    IntMatrix res2 = KaratsubaProd(x, y);

    PrintMatrix(res);
    PrintMatrix(res2);
    return 0;
}


