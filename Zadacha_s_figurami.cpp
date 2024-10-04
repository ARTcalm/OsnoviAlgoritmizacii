#include<iostream>
#include<string>
#include<windows.h>
using namespace std;
int main(){
    SetConsoleCp(1251) ;
SetConsoleOutputCp(1251);
    
    int a, b, c, d;

    
    cout << "Задание 1" << endl;
    cout << "Введите значения сторон фигуры" << endl; 
    cout << "Введите значения стороны 1:" << endl; cin >> a; 
    cout << "Введите значения стороны 2:" << endl; cin >> b; 
    cout << "Введите значения стороны 3:" << endl; cin >> c; 
    cout << "Введите значения стороны 4:" << endl; cin >> d;

   std::string Figure= (a==b && b==c && c==d)? "Ваша фигура - квадрат":
                    ((a==b && c==d) || (a==c && b==d) || (a==d && c==b)) ? "Ваша фигура - прямоугольник":
                    ((a <= 0) || (b<=0) || (c<=0) || (d<=0)) ? "Ваша фигура - треугольник":
                   "Я пока не знаю таких фигур";
                    
    cout << "Ваша фигура -" << Figure << endl;


    int side1, side2, side3;
    
    cout << "Задание 2" << endl;
    
    cout << "Введите первую сторону треугольника: "; cin >> side1;
    cout << "Введите вторую сторону треугольника: "; cin >> side2;
    cout << "Введите третью сторону треугольника: "; cin >> side3;
    
   std::string shape =  ((side1 + side2 < side3)||(side1+side3<side2)||(side2+side3<side1))?"Такой треугольник не существует":
                        (side1 == side2 && side2 == side3) ? "равносторонний" : 
                        (side1 == side2 || side2 == side3 || side1 == side3) ? "равнобедренный" : 
                        (side1*side1 + side2*side2 == side3*side3 || side1*side1 + side3*side3 == side2*side2 || side2*side2 + side3*side3 == side1*side1) ? "Прямоугольный треугольник":"";
    
    cout << "Ваш треугольник - " << shape << endl;

}
