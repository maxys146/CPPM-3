// netology_5.03.02.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

class Counter
{
private:
    int number;
public:
    void increase()
    {
        number = number++;
    }
    void decrease()
    {
        number = number--;
    }
    int result()
    {
        return number;
    }
    Counter(int startCount)
    {
        number = startCount;
    }
    Counter()
    {
        number = 1;
    }
};

int main()
{
    setlocale(LC_ALL, "Russian");

    std::string questionAnswer, input;
    int startCount;
    bool isActive = true;
    bool needValue = false;

    std::cout << "Вы хотите указать начальное значение счётчика? (y/n):";
    std::cin >> questionAnswer;
    if (questionAnswer == "yes" || questionAnswer == "Yes" || questionAnswer == "y") {
        std::cout << "Введите начальное значение счётчика:";
        std::cin >> startCount;
        needValue = true;
    }
    Counter counter = needValue ? Counter(startCount) : Counter();

    while (isActive) {
        std::cout << "Введите команду ('+', '-', '=' или 'x'):";
        std::cin >> input;
        if (input == "+") {
            counter.increase();
        }
        else if (input == "-") {
            counter.decrease();
        }
        else if (input == "=") {
            std::cout << counter.result() << std::endl;
        }
        else if (input == "x") {
            isActive = false;
            std::cout << "До свиданья!\n";
        }
    }
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
