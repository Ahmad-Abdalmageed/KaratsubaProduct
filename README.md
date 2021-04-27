# KaratsubaProduct
Implementation of the Karatsuba Polynomial Product

## Algorithm
![img.png](img.png)
**The First Attempt Straightforward from the formulas above (assuming that n is a power of 2)**

**Analysis**: The Splitting operations take constant time. The combining cost (Calculating C Quarters) is
Θ(n^2) (adding two $\frac{n}{2}x\frac{n}{2}$ matrices takes time $\frac{n^2}{4} = Θ(n^2))$. There are 8 recursive calls
So let T(n) be the total number of mathematical operations performed, then
T(n) = 8T(n^2) + Θ(n^2)
T(n) = Θ(n^log2(8)) = Θ(n^3)
Which is not an obvious improvement on the Naive Approach which has the same time complexity.