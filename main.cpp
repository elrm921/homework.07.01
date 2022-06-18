#include <iostream>

#define MODE 1

int main() {
    #ifdef MODE
        #if MODE == 0
            std::cout << "Работаю в режиме тренировки" << "\n";
        #elif MODE == 1
            std::cout << "Работаю в боевом режиме" << "\n";
            #include "add.h"
            int num1, num2;
            std::cout << "Введите число 1: ";
            std::cin >> num1;
            std::cout << "Введите число 2: ";
            std::cin >> num2;
            std::cout << "Результат сложения: " << add(num1, num2) << "\n";
        #else
            std::cout << "Неизвестный режим. Завершение работы" << "\n";
        #endif
    #else
        #error mode not defined
    #endif

    return 0;
}