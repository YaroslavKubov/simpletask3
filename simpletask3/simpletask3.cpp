
#include <iostream>

int main()
{
    int a, b;
    
    std::cout << "enter a:";
    std::cin >> a;

    std::cout << "enter b:";
    std::cin >> b;

    int sum = a + b;

    int diff = a - b; 

    int pr = a * b;

    std::cout << "sum = " << sum << std::endl;
    std::cout << "difference = " << diff << std::endl;
    std::cout << "product = " << pr;


    return 0;
}