#include <iostream>
#include "calculator.cpp"


int main() { setlocale(LC_ALL, "Rus");

    Calculator calc1 {};

    do {
        int num1 = 0, num2 = 0;
        std::cout << "Введите num1: ";
        std::cin >> num1;
        std::cout << "Введите num2: ";
        std::cin >> num2;
        if (calc1.set_num1(num1) && calc1.set_num2(num2)){
            std::cout << "num1 + num2 = " << calc1.add() << std::endl;
            std::cout << "num1 - num2 = " << calc1.subtract_1_2() << std::endl;
            std::cout << "num2 - num1 = " << calc1.subtract_2_1() << std::endl;
            std::cout << "num1 * num2 = " << calc1.multiply() << std::endl;
            std::cout << "num1 / num2 = " << calc1.divide_1_2() << std::endl;
            std::cout << "num2 / num1 = " << calc1.divide_2_1() << std::endl;
        } else std::cout << "Неверный ввод!" << std::endl;

    } while (true);
    
    return 0;
}

