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

int chet(int a) {
    if (a % 2 == 0) {
        return a;
    }
    else if (a % 2 != 0) {
        return 0;
    }
}

int nechet(int a) { 
    if (a % 2 != 0) {
        return a;
    }
    else if (a % 2 == 0) {
        return 0;
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
    if (b > 0) {
        return a / b;
    }
    else {
        return 0;
    }
}

int _min(int a, int b) {
    if (a < b) {
        return a; 
    }
    else {
        return 0;
    }
}

int _max(int a, int b) {
    if (a > b) {
        return a;
    }
    else {
        return 0;
    }
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
    cout << chet(d) << endl;
    
    int abc;
    cout << "Введите число на проверку нечётности -" << endl;
    cin >> abc;
    cout << nechet(abc) << endl;


    int f,e;
    cout << "Введите числа для арифметических операций -" << endl;
    cin >> f >> e;
    cout << sum(f, e) << endl;
    cout << raznost(f, e) << endl;
    cout << proizvedenie(f, e) << endl;
    cout << delenie(f, e) << endl;

    int g, h;
    cout << "Введите два числа для проверки на минимальную" << endl;
    cin >> g >> h;
    cout << _min(g, h) << endl;

    int x, z;
    cout << "Введите два числа для проверки на максимальную" << endl;
    cin >> x >> z;
    cout << _max(x, z) << endl;

}
