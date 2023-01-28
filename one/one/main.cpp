#include <iostream>
#include <vector>
#include <cstring>
#include <iostream>
using  namespace std;

double Clojenie(double a, double b){
    return (double)a+b;
}

double Minus(int a, int b){
    return a - b;
}

double Umnojenie(int a, int b) {
    return a*b;
}

double Delenie (int a, int b){
    return (double)(a/b);
}
double octatok (int a, int b){
    return (a%b);
}

    int main(int argc, const char * argv[]) {
        while(true){
        cout << "Сложение 1 \nВычетание 2\nУмножение 3\nДление 4\nОстаток от деления 5"<< endl;
        setlocale(LC_ALL, "Ru");
        double a,b;
        cout << "выберите действие";
        int operation;
        while (!(cin >> operation) || operation > 5 || operation < 1) {        //Эта шняга проверяет не введенны ли буквы
            cout << "Такой операции не существует\nВведите номер операции заново:\n";
            cin.clear();
            fflush(stdin);
        }
        
        //cin >> operation;
        cout << "введите 2 числа:" << endl;
        cin >> a;
        cin >> b;
        
        
        if(operation == 1)
        {
            cout << "Ответ: ";
            cout << Clojenie(a,b) << endl;
            
        }
        if(operation == 2)
        {
            cout << "Ответ: ";
            cout << Minus(a,b) << endl;
        }
        if(operation == 3){
            cout << "Ответ: ";
            cout << Umnojenie(a, b) << endl;
        }
        if(operation == 4){
            cout << "Ответ: ";
            cout << Delenie(a, b) << endl;
        }
        if(operation == 5){
            cout << "Остаток: ";
            cout << octatok(a,b) << endl;
        }
        
    }
}

