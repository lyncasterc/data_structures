#include <iostream>

int climbStairs(int n)
{
    if(n <= 2)
        return n;

    return climbStairs(n - 1) + climbStairs(n - 2);
}
int main()
{
    std::cout << climbStairs(3) << std::endl;
}