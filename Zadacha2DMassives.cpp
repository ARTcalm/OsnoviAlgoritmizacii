
#include <iostream>
#include <string> 
#include <Windows.h>
using namespace std;
int main()
{ 
    SetConsoleCP(1251);
    SetConcoleOutputCP(1251);
   
    int i = 4;
    int j = 3;
    int sum = 0;
    int perem = i*j;
    int srznach = 0;
    
    int array[i][j]={{4,6,7},{-13,22,107},{-1000,900,800},{0,0,0}};
   
    for(int str = 0; str < i; str++)
    {
        for(int col = 0; col < j; col++)
        sum = sum + array[str][col];
        srznach = sum / perem;
        cout << "Сумма значений массива = " << sum << " Среднее значение массива = " << srznach << endl;

    };
 
     for(int str = 0; str < i; str++)
    {
        for(int col = 0; col < j; col++)
        if(array[str][col] > 0)
        {
        cout << "Положительные числа - " << array[str][col] << endl;
        };
           
    };

    for(int str = 0; str < i; str++)
    {
        for(int col = 0; col < j; col++)
        if(array[str][col] < 0)
        {
        сout << "Отрицательные числа - " << array[str][col] << endl;
        };
    };
}
