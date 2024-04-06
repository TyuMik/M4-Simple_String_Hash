#include <iostream>
#include <string>

int simple_string_hash(std::string str) {

    int hash = 0;

    for (int i = 0; i < str.length(); i++) {
        hash += static_cast<int>(str[i]);
    }

    return hash;
}

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");
    std::string str;

    do {
        std::cout << "Введите строку: ";
        std::cin >> str;
        std::cout << "Наивный хэш строки " << str << ": ";
        std::cout << simple_string_hash(str) << std::endl;
        std::cout << std::endl;

    } while (str != "exit");

    return 0;
}