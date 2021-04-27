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

    (void)printf("The Naive Solution Output: O(n^3): \n");
    PrintMatrix(res);

    (void)printf("1st Divide and Conquer Output: O(n^3): \n");
    PrintMatrix(res2);


    // Stress testing
    int iters = 10;
    std::random_device rnd_device;
    std::default_random_engine rnd_engine{rnd_device()};
    std::uniform_int_distribution<int> dist{0, 4};
    auto gen = [&dist, &rnd_engine](){
        return dist(rnd_engine);
    };

    int sizes[] = {2, 4, 8, 16, 32};

    while (iters >0){
        int size = gen();
        IntMatrix RandX = GenSquareMat(sizes[size]);
        IntMatrix RandY = GenSquareMat(sizes[size]);

        IntMatrix KOut = KaratsubaProd(RandX, RandY);
        IntMatrix DOut = DotProd(RandX, RandY, sizes[size]);

        bool equal = std::equal(KOut.begin(), KOut.end(), DOut.begin(), DOut.end());
        if (!equal){
            printf("1st Mat: \n");
            PrintMatrix(RandX);

            printf("2nd Mat: \n");
            PrintMatrix(RandY);
        }
        iters--;
    }
    printf("Works Great !!");

    return 0;
}


