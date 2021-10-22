#include <iostream>

int optionsQntty(int n, int k=3)
{
    int result = 0;

    if (n <= k)
    {
        result = 1;
        for (int i = 0; i < n-1; i++)
        {
            result *= 2;
        }
        return result;
    }
    else
    {
        for (int i = k; i > 0; i--)
        {
            result += optionsQntty(n - i, k);
        }
        return result;
    }
}

int main()
{
    std::cout << optionsQntty(6,4);
}