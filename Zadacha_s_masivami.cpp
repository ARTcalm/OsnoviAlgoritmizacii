#include<iostream>
#include<string>
#include<windows.h>
using namespace std;
int main(){
    SetConsoleCp(1251) ;
SetConsoleOutputCp(1251);
    int n=9;
    int array[n]={-3,-24,-12,1,3,5,6,7,8};
    int sum = 0;
    int srznach = 0;
    for(int i=0; i<n; i++){
        sum += array[i];
        srznach = sum/n;
        cout <<"Сумма значений массива - "<< sum << " Среднее значение массива - " << srznach << endl;
    };
    
    for(int g=0; g<n; g++){    
        if(array[g] < 0){
            cout << "Отрицательные значения массива - " << array[g] <<endl;
        };
    };
    
    for(int g=0; g<n; g++){    
        if(array[g] > 0){
            cout << "Положительные значения массива - " << array[g] <<endl;
        };
    };
    
    for(int g=0; g<n; g++){    
        if(array[g]%2 == 0){
            cout << "Четное значения массива - " << array[g] <<endl;
        };
    };
    
    for(int g=0; g<n; g++){    
        if(array[g]%2 != 0){
            cout << "Нечетные значения массива - " << array[g] <<endl;
        };
    };


    
}
