// netology_3.02.02.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

struct bankAccount {
    int accountNumber;
    std::string accountOwner;
    int accountBalance;
};

void changeCount(bankAccount* account, int newCount) {
    account->accountBalance = newCount;

}
void printCount(bankAccount account) {
    std::cout << account.accountOwner << ", ваш номер счета " 
        << account.accountNumber << ", баланс " 
        << account.accountBalance << "\n";
}

int main()
{
    setlocale(LC_ALL, "Russian");


    int newCount;
    bankAccount account;

    std::cout << "Введите номер счета: ";
    std::cin >> account.accountNumber;
    std::cout << "Введите имя владельца: ";
    std::cin >> account.accountOwner;
    std::cout << "Введите текущий баланс: ";
    std::cin >> account.accountBalance;
    printCount(account);

    std::cout << "Введите новый баланс: ";
    std::cin >> newCount;
    changeCount(&account, newCount);
    printCount(account);
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
