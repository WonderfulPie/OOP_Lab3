#pragma once
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

class Triangles
{
private:
    double sideA, sideB, sideC;
    double angleA, angleB, angleC;
    double M_PI = 3.14;

public:
    // Конструктор класу
    Triangles() {
        sideA = sideB = sideC = 0.0;
        angleA = angleB = angleC = 0.0;
    }

    Triangles(double s1, double s2, double s3) {
        sideA = s1;
        sideB = s2;
        sideC = s3;
        // Визначаємо кути трикутника
        CalculateAngles();
    }
    // Конструктор класу з параметрами
    Triangles(double s1, double s2, double s3, double a1, double a2, double a3) {
        sideA = s1;
        sideB = s2;
        sideC = s3;
        angleA = a1;
        angleB = a2;
        angleC = a3;
    }

    void Init(double s1, double s2, double s3, double a1, double a2, double a3); // Метод ініціалізації
    void Read(); // Метод введення із клавіатури
    void Display(); // Метод виведення на екран
    string toString(); // Перетворення в рядок
    double CalculateArea(); // Обчислення площі трикутника за формулою Герона
    double CalculatePerimeter(); // Обчислення периметра трикутника
    double CalculateHeight(int sideIndex); //Обчислення висоти
    string DetermineType(); // Визначення виду трикутника
private:
    void CalculateAngles(); //Обчислення кутів
};

