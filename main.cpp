#include <QCoreApplication>
#include <iostream>

// описание структуры
struct Date {
    int day;
    int month;
    int year;
};

// функция для вывода даты
void print(Date d) {
    std::cout << d.day << "." << d.month << "." << d.year << std::endl;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // создаем объект
    Date x;
    Date tommorow;

    // инициализирпуем поля
    x.day = 14;
    x.month = 1;
    x.year = 2022;

    tommorow.day = x.day + 1;
    tommorow.month = 1;
    tommorow.year = 2022;

    // выводим на экран
    print(x);
    print(tommorow);

    return a.exec();


}
