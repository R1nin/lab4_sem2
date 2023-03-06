// lab4_sem2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
typedef char* P;
P S1, S2, S3;


int main()
{
    setlocale(LC_ALL, "Russian");

    char* p1, * p2, * p3, * p4, * p5, * p6, * p7, * p8, * p9, * p10, * p11;
    cout << "Получаем формулу: A*(C+B)*C+A " << endl;
    cout << "Введите 7 символов: ABC+*() " << endl;
    
    p1 = new char; // A
    p2 = new char; // B
    p3 = new char; // C
    p4 = new char; // +
    p5 = new char; // *
    p6 = new char; // (
    p7 = new char; // )
    // Ввод 
    cin >> *p1 >> *p2 >> *p3 >> *p4 >> *p5 >> *p6 >> *p7;
    // Контрольный вывод
    cout << "Вы ввели: " << *p1 << *p2 << *p3 << *p4 << *p5 << *p6 << *p7 << endl;

    p11 = p1; // A
    p10 = p4; // +
    p9 = p3; // C
    p8 = p5; // *
    p1 = p6; // (
    p6 = p2; // B
    p5 = p10; // +
    p4 = p3; // C
    p3 = p7; // )
    p2 = p8; // *
    p3 = p1; // (
    p1 = p11; // A

    cout << "Получили: " << *p1 << *p2 << *p3 << *p4 << *p5 << *p6 << *p7 << *p8 << *p9 << *p10 << *p11;

    //Инструкция точки останова(оператор __debugbreak() или аналогичный вызов) выполнена в lab4_sem2.exe.
    
    //delete p5;
    delete p6;
    delete p7;
    delete p8;
    delete p9;
    delete p10;
    delete p11;

    //S1 = new char;
    //S2 = new char;
    //cout << " Введите два символа [*A]: ";
    //cin >> *S1 >> *S2; // *S1='*', *S2='A'
    //S3 = S2; // S3 указывает на 'A'
    //cout << S3 << ' ' << *S2 << endl;
    //S2 = S1; // S2 указывает на '*'
    //cout << *S2 << ' ' << * S1 << endl;
    //S1 = S3; // S1 указывает на 'A', источник – S3,
    //// так как S2 уже изменен и указывает на '*'!
    //cout << *S1 << ' ' << * S3 << endl;

    //cout << " Результат = " << *S1 << *S2 << *S3;
    //delete S2; // *
    //delete S3; // A, или delete S1


    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

