/*
 * Ejercicio 2: Operadores en C++
 * 
 * Objetivos:
 * - Aprender a usar operadores aritméticos
 * - Entender operadores de comparación
 * - Practicar operadores lógicos
 * - Aprender precedencia de operadores
 */

#include <iostream>
using namespace std;

int main() {
    cout << "=== EJERCICIO 2: OPERADORES EN C++ ===\n\n";
    
    // ===== PARTE 1: OPERADORES ARITMÉTICOS =====
    cout << "1. OPERADORES ARITMÉTICOS:\n";
    
    int a = 15;
    int b = 4;
    
    cout << "   Valores iniciales: a = " << a << ", b = " << b << "\n\n";
    
    // Suma
    int suma = a + b;
    cout << "   Suma: " << a << " + " << b << " = " << suma << "\n";
    
    // Resta
    int resta = a - b;
    cout << "   Resta: " << a << " - " << b << " = " << resta << "\n";
    
    // Multiplicación
    int multiplicacion = a * b;
    cout << "   Multiplicación: " << a << " * " << b << " = " << multiplicacion << "\n";
    
    // División entera
    int division = a / b;
    cout << "   División entera: " << a << " / " << b << " = " << division << "\n";
    
    // Módulo (resto de la división)
    int modulo = a % b;
    cout << "   Módulo: " << a << " % " << b << " = " << modulo << "\n\n";
    
    // ===== PARTE 2: OPERADORES DE INCREMENTO Y DECREMENTO =====
    cout << "2. OPERADORES DE INCREMENTO Y DECREMENTO:\n";
    
    int x = 5;
    cout << "   Valor inicial de x: " << x << "\n";
    
    // Pre-incremento
    cout << "   ++x (pre-incremento): " << ++x << "\n";
    cout << "   Valor después: " << x << "\n";
    
    // Post-incremento
    cout << "   x++ (post-incremento): " << x++ << "\n";
    cout << "   Valor después: " << x << "\n";
    
    // Pre-decremento
    cout << "   --x (pre-decremento): " << --x << "\n";
    cout << "   Valor después: " << x << "\n";
    
    // Post-decremento
    cout << "   x-- (post-decremento): " << x-- << "\n";
    cout << "   Valor después: " << x << "\n\n";
    
    // ===== PARTE 3: OPERADORES DE ASIGNACIÓN =====
    cout << "3. OPERADORES DE ASIGNACIÓN:\n";
    
    int numero = 10;
    cout << "   Valor inicial: " << numero << "\n";
    
    numero += 5;  // Equivale a: numero = numero + 5
    cout << "   += 5: " << numero << "\n";
    
    numero -= 3;  // Equivale a: numero = numero - 3
    cout << "   -= 3: " << numero << "\n";
    
    numero *= 2;  // Equivale a: numero = numero * 2
    cout << "   *= 2: " << numero << "\n";
    
    numero /= 4;  // Equivale a: numero = numero / 4
    cout << "   /= 4: " << numero << "\n";
    
    numero %= 3;  // Equivale a: numero = numero % 3
    cout << "   %= 3: " << numero << "\n\n";
    
    // ===== PARTE 4: OPERADORES DE COMPARACIÓN =====
    cout << "4. OPERADORES DE COMPARACIÓN:\n";
    
    int num1 = 10;
    int num2 = 20;
    
    cout << "   Comparando " << num1 << " y " << num2 << ":\n";
    cout << "   " << num1 << " == " << num2 << " es " << (num1 == num2) << "\n";
    cout << "   " << num1 << " != " << num2 << " es " << (num1 != num2) << "\n";
    cout << "   " << num1 << " < " << num2 << " es " << (num1 < num2) << "\n";
    cout << "   " << num1 << " > " << num2 << " es " << (num1 > num2) << "\n";
    cout << "   " << num1 << " <= " << num2 << " es " << (num1 <= num2) << "\n";
    cout << "   " << num1 << " >= " << num2 << " es " << (num1 >= num2) << "\n\n";
    
    // ===== PARTE 5: OPERADORES LÓGICOS =====
    cout << "5. OPERADORES LÓGICOS:\n";
    
    bool condicion1 = true;
    bool condicion2 = false;
    
    cout << "   condicion1 = " << condicion1 << ", condicion2 = " << condicion2 << "\n";
    cout << "   AND (&&): " << condicion1 << " && " << condicion2 << " = " << (condicion1 && condicion2) << "\n";
    cout << "   OR (||): " << condicion1 << " || " << condicion2 << " = " << (condicion1 || condicion2) << "\n";
    cout << "   NOT (!): !" << condicion1 << " = " << (!condicion1) << "\n";
    cout << "   NOT (!): !" << condicion2 << " = " << (!condicion2) << "\n\n";
    
    // ===== PARTE 6: PRECEDENCIA DE OPERADORES =====
    cout << "6. PRECEDENCIA DE OPERADORES:\n";
    
    int resultado1 = 2 + 3 * 4;
    int resultado2 = (2 + 3) * 4;
    
    cout << "   2 + 3 * 4 = " << resultado1 << " (multiplicación primero)\n";
    cout << "   (2 + 3) * 4 = " << resultado2 << " (paréntesis primero)\n\n";
    
    // ===== PARTE 7: EJERCICIOS PARA PRACTICAR =====
    cout << "=== EJERCICIOS PARA PRACTICAR ===\n";
    cout << "1. Calcula el área de un círculo (π * r²)\n";
    cout << "2. Convierte grados Celsius a Fahrenheit (F = C * 9/5 + 32)\n";
    cout << "3. Calcula el tiempo total en segundos dado horas, minutos y segundos\n";
    cout << "4. Determina si un número es par o impar usando el operador módulo\n";
    cout << "5. Calcula el promedio de 3 números\n\n";
    
    // ===== PARTE 8: CALCULADORA SIMPLE =====
    cout << "7. CALCULADORA SIMPLE:\n";
    
    double numA, numB;
    char operacion;
    
    cout << "   Ingresa el primer número: ";
    cin >> numA;
    
    cout << "   Ingresa la operación (+, -, *, /): ";
    cin >> operacion;
    
    cout << "   Ingresa el segundo número: ";
    cin >> numB;
    
    cout << "   Resultado: ";
    
    switch(operacion) {
        case '+':
            cout << numA << " + " << numB << " = " << numA + numB << "\n";
            break;
        case '-':
            cout << numA << " - " << numB << " = " << numA - numB << "\n";
            break;
        case '*':
            cout << numA << " * " << numB << " = " << numA * numB << "\n";
            break;
        case '/':
            if(numB != 0) {
                cout << numA << " / " << numB << " = " << numA / numB << "\n";
            } else {
                cout << "Error: División por cero\n";
            }
            break;
        default:
            cout << "Operación no válida\n";
    }
    
    cout << "\n¡Programa ejecutado exitosamente!\n";
    
    return 0;
}
