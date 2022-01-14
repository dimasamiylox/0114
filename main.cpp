#include <QCoreApplication>
#include <iostream>

// описание структуры
struct Date {
    int day;
    int month;
    int year;
};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // создаем объект
    Date x;
    // инициализирпуем поля
    x.day = 14;
    x.month = 1;
    x.year = 2022;
    // выводим на экран
    std::cout << x.day << "." << x.month << "." << x.year << std::endl;

    return a.exec();
}
