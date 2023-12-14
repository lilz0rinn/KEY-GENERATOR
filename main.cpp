#include "main.h"
#include "colors.h"
#include <Windows.h>

int main() {
    system("chcp 65001");

    Colors color;



    int num1, num2;

    color.set_color(CL_RED);
    std::cout
            << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ \n";
    std::cout
            << "+                                            МАССИВ СОЗДАН                                               + \n";
    std::cout
            << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ \n";

    for (int i = 0; i < ryad; i++) {
        for (int j = 0; j < colonka; ++j) {
            arr[i][j] = rand() % (10000 - 1000 + 1) + 1000;
        }
    }

    for (int i = 0; i < ryad; i++) {
        color.set_color(CL_WHITE);
        std::cout
                << "--------------------------------------------------------------------------------------------------------- "
                << "\n ";
        color.set_color(CL_RED);
        std::cout << "                                                Ряд " << i + 1 << "\n ";
        color.set_color(CL_WHITE);
        std::cout
                << "--------------------------------------------------------------------------------------------------------- "
                << "\n ";
        for (int j = 0; j < colonka; ++j) {
            color.set_color(CL_CYAN);
            std::cout << "*" << arr[i][j] << "*" << "\t";
        }
        std::cout << std::endl;
    }

    color.set_color(CL_RED);
    std::cout << " ВВЕДИТЕ ДВА ВИБРАНИХ ВАМИ РЯДА:\n";
    std::cin >> num1 >> num2;

    if (num1 , num2 < 16) {
        // Добавьте код для обработки введенных рядов
    } else {
        color.set_color(CL_RED);
        std::cout << "ИДИ НАХУЙ !!!!!!!! ";
        return 1; // Возврат из программы с ошибкой
    }


    if (num1 > 0 && num1 <= ryad) {
        color.set_color(CL_RED);
        std::cout << "Ряд " << num1  << ": \n";


        for (int j = 0; j < colonka; ++j) {
            color.set_color(CL_CYAN);
            std::cout << arr[num1 - 1][j] << " ";  // Уменьшаем индекс на 1
        }
        std::cout << std::endl;
    }

    if (num2 > 0 && num2 <= ryad) {
        color.set_color(CL_RED);
        std::cout << "Ряд " << num2 <<  ": \n";


        for (int j = 0; j < colonka; ++j) {
            color.set_color(CL_CYAN);
            std::cout << arr[num2 - 1][j] << " ";
        }
        std::cout << std::endl;


    }

    return 0;
}
