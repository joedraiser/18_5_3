#include <iostream>

int optionsQntty(int n, int k)
{
    if (n == 1)
        return 1;
    else if (n == 2)
        return 2;
    else if (n == 3)
        return 4;
    else
        return optionsQntty(n - 3) + optionsQntty(n - 2) + optionsQntty(n - 1);

}

int main()
{
    std::cout << "Input: ";
    int n;
    std::cin >> n;

    std::cout << "Output: " << optionsQntty(n);
}