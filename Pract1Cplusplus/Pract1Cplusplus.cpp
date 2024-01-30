#include <iostream>
#include <cmath>


int main()
{
    setlocale(LC_ALL, "RUS");
    int user_point, number_fact;
    float a, b;
    int CountFact = 1;
    do
    {
        std::cout << "Введите номер одного из данных пунктов, чтобы получить результат \n";
        std::cout << "1. Сложение \n";
        std::cout << "2. Вычитание \n";
        std::cout << "3. Частное \n";
        std::cout << "4. Произведение \n";
        std::cout << "5. Возведение в степень \n";
        std::cout << "6. Нахождение квадратного корня \n";
        std::cout << "7. Нахождение 1 процента от числа \n";
        std::cout << "8. Найти факториал от числа \n";
        std::cout << "0. Выйти из программы \n";
        std::cin >> user_point;
        switch (user_point)
        {
        case 1:
            std::cout << "Введите 1 число - \n";
            std::cin >> a;
            std::cout << "Введите 2 число - \n";
            std::cin >> b;
            std::cout << "Ответ - ";
            std::cout << a + b;
            std::cout << " \n ";
            break;
        case 2:
            std::cout << "Введите 1 число - \n";
            std::cin >> a;
            std::cout << "Введите 2 число - \n";
            std::cin >> b;
            std::cout << "Ответ - ";
            std::cout << a - b;
            std::cout << " \n ";
            break;
        case 3:
            std::cout << "Введите 1 число - \n";
            std::cin >> a;
            std::cout << "Введите 2 число - \n";
            std::cin >> b;
            if (b != 0)
            {
                std::cout << "Ответ - ";
                std::cout << a / b;
                std::cout << " \n ";
            }
            else
            {
                std::cout << "На ноль делить нельзя!\n";
                std::cout << " \n ";
            }
            break;
        case 4:
            std::cout << "Введите 1 число - \n";
            std::cin >> a;
            std::cout << "Введите 2 число - \n";
            std::cin >> b;
            std::cout << "Ответ - ";
            std::cout << a * b;
            std::cout << " \n ";
            break;
        case 5:
            std::cout << "Введите 1 число - \n";
            std::cin >> a;
            std::cout << "Введите 2 число - \n";
            std::cin >> b;
            std::cout << "Ответ - ";
            std::cout << pow(a, b);
            std::cout << " \n ";
            break;
        case 6:
            std::cout << "Введите 1 число - ";
            std::cin >> a;
            if (a < 0)
            {
                std::cout << "Невозможно найти корень отрицательного числа!";
                std::cout << " \n ";
            }
            else
            {
                std::cout << "Ответ - ";
                std::cout << pow(a, 0.5);
                std::cout << " \n ";
            }
            break;
        case 7:
            std::cout << "Введите 1  число - \n";
            std::cin >> a;
            if (a == 0)
            {
                std::cout << "Ответ - 0\n";
                std::cout << " \n ";
            }
            else
            {
                std::cout << "Ответ - ";
                std::cout << a / 100;
                std::cout << " \n ";
            }
            break;
        case 8:
            std::cout << "Введите 1 число\n";
            std::cin >> number_fact;
            if ((number_fact == 0) || (number_fact == 1))
            {
                std::cout << "Ответ - 1\n";
            }
            else if (number_fact < 0)
            {
                std::cout << "Нельзя найти факториал от отрицательного числа\n";
            }
            else
            {
                for (int i = 1; i <= number_fact; i++)
                {
                    CountFact = CountFact * i;
                }
                std::cout << "Ответ - ";
                std::cout << CountFact;
                std::cout << " \n ";
            }
            break;
        case 0:
            break;
        }
    } while (user_point != 0);
}