#include <iostream>
#include <cmath>

class solution {
  public:
    bool isPerfectSquare(int num) {
        int n = 1;
        while (int(pow(n,2)) < num)
            n *= 2;
        // std::cout << "n = " << n << std::endl;
        if ((int)pow(n,2) == num)
            return true;
        else {
            int lower = n/2, upper = n;
            while (lower < upper-1) {
                std::cout << "lower = " << lower << "," << "upper = " << upper << std::endl;
                int mid = (lower+upper)/2;
                int p2 = int(pow(mid,2));
                if (p2 == num)
                    return true;
                else if (p2 < num)
                    lower = mid;
                else if (p2 > num)
                    upper = mid;
            }
            std::cout << "lower = " << lower << "," << "upper = " << upper << std::endl;
            return int(pow(lower,2)) == num || int(pow(upper,2))== num;
        }
    }
};

int main() {
    int num = 121;
    // std::cout << "sqrt(" << num << ") = " << sqrt(num) << std::endl;
    solution soln;
    bool isSquare = soln.isPerfectSquare(num);
    std::cout << num << " is"
              << (isSquare ? " " : " NOT ")
              << "a perfect square." << std::endl;
}
