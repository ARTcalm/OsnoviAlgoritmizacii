#include <iostream>
#include <string>
#include <window.h>
using namespace std;

    void proverka(int a){    //Проверка на положительное/отрицательное
        if(a<0){
            cout << a <<" - число отрицательное" << endl;
        }
        else if(a>0){
            cout << a <<" - положительное" << endl;
        }
    }
    
    void srznach(int a, int b){ //Поиск среднего между двумя числами
        int srznach = (a+b)/2;
        cout << "Среднее значение = "<< srznach << endl;
    }
    
    void chet_nechet(int a){ //Определение четности
        if(a%2==0){
            cout << "Число чётное" << endl;
        }
        else if(a%2!=0){
            cout << "Число нечётное" << endl;
        }
    }

int main(){
    
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int a;
    cout << "Введите число на проверку -" <<endl;  
    cin >> a;           
    proverka(a);        
    
    int b,c;
    cout << "Введите два числа для поиска среднего -" <<endl;
    cin >> b >> c;
    srznach(b,c);
    
    int d;
    cout << "Введите число на проверку чётности -" <<endl; 
    cin >> d;
    chet_nechet(d);
}
