#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int proverka(int a) {    //Проверка на положительное/отрицательное
    if (a < 0) {
        return 0;
    }
    else if (a > 0) {
        return a;
    }
}

int srznach(int a, int b) { //Поиск среднего между двумя числами
    int srznach = (a + b) / 2;
    return srznach;
}

int chet_nechet(int a) { //Определение четности
    if (a % 2 == 0) {
        return 0;
    }
    else if (a % 2 != 0) {
        return 1;
    }
}

int sum(int a, int b) {
    return a + b;
}

int raznost(int a, int b) {
    return a - b;
}

int proizvedenie(int a, int b) {
    return a * b;
}

float delenie(float a, float b) {
    return a / b;
}


int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int a;
    cout << "Введите число на проверку -" << endl;
    cin >> a;
    cout << proverka(a) << endl;

    int b, c;
    cout << "Введите два числа для поиска среднего -" << endl;
    cin >> b >> c;
    cout << srznach(b, c) << endl;

    int d;
    cout << "Введите число на проверку чётности -" << endl;
    cin >> d;
    cout << chet_nechet(d) << endl;

    int f,e;
    cout << "Введите числа для арифметических операций -" << endl;
    cin >> f >> e;
    cout << sum(f, e) << endl;
    cout << raznost(f, e) << endl;
    cout << proizvedenie(f, e) << endl;
    cout << delenie(f, e) << endl;

}
