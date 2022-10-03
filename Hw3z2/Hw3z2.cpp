#include <iostream>
#include "counter.cpp"

int main() { setlocale(LC_ALL, "Ru");

    std::string ini_choice;
    std::cout << "Вы хотите указать начальное значение счётчика? Введите yes или no: ";
    std::cin >> ini_choice;

    Counter * cnt1;
    if (ini_choice._Equal("yes")) {
        int ini_val = 0;
        std::cout << "Введите начальное значение счётчика: ";
        std::cin >> ini_val;
        cnt1 = new Counter(ini_val);
    } else {
        cnt1 = new Counter();
    }

    std::string command;
    do {
        std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
        std::cin >> command;
        if (command == "+") { cnt1->inc_counter(); }
        if (command == "-") { cnt1->dec_counter(); }
        if (command == "=") { std::cout << cnt1->get_counter() << std::endl; }
        if (command == "x") { break; }
    } while (true);
    
    delete cnt1;

}
