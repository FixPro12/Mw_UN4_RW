
#include <iostream>

int math(int Par, int N)
{
    switch (Par)
    {
    case 1:
        for (int i = 0; i < N; i += 2)
        {
            std::cout << i << '\n';
        }
        break;
    case 0:
        for (int i = 0; i < N; ++i)
        {
            if (i % 2 == 1)
                std::cout << i << '\n';
        }
        break;
    default:
        std::cout << "incorrect value" << '\n';
    }
    return 0;
}


int main()
{
    int N, Parity;

    std::cout << "Set the value to N" << '\n';
    std::cin >> N;

    //Вывод чётных значений
    for (int i = 0; i < N; i += 2)
    {
        std::cout << i << '\n';
    }

    std::cout << "Enter the number" << '\n';
    std::cout << "Even numbers 1 " << '\n' << "odd numbers 0 " << '\n';
    std::cin >> Parity;
    math (Parity,N);
}
