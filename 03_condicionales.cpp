/*
 * Ejercicio 3: Estructuras Condicionales
 * 
 * Objetivos:
 * - Aprender a usar if, else if, else
 * - Entender la estructura switch
 * - Practicar operadores ternarios
 * - Aprender a anidar condiciones
 */

#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "=== EJERCICIO 3: ESTRUCTURAS CONDICIONALES ===\n\n";
    
    // ===== PARTE 1: IF SIMPLE =====
    cout << "1. IF SIMPLE:\n";
    
    int edad = 18;
    
    if (edad >= 18) {
        cout << "   Eres mayor de edad\n";
    }
    
    cout << "   Continuando con el programa...\n\n";
    
    // ===== PARTE 2: IF-ELSE =====
    cout << "2. IF-ELSE:\n";
    
    int numero = 7;
    
    if (numero % 2 == 0) {
        cout << "   " << numero << " es un número par\n";
    } else {
        cout << "   " << numero << " es un número impar\n";
    }
    
    // Verificar si es positivo, negativo o cero
    if (numero > 0) {
        cout << "   " << numero << " es un número positivo\n";
    } else if (numero < 0) {
        cout << "   " << numero << " es un número negativo\n";
    } else {
        cout << "   " << numero << " es cero\n";
    }
    cout << "\n";
    
    // ===== PARTE 3: IF-ELSE IF-ELSE =====
    cout << "3. IF-ELSE IF-ELSE:\n";
    
    int calificacion = 85;
    
    cout << "   Calificación: " << calificacion << "\n";
    
    if (calificacion >= 90) {
        cout << "   Excelente (A)\n";
    } else if (calificacion >= 80) {
        cout << "   Muy bien (B)\n";
    } else if (calificacion >= 70) {
        cout << "   Bien (C)\n";
    } else if (calificacion >= 60) {
        cout << "   Aprobado (D)\n";
    } else {
        cout << "   Reprobado (F)\n";
    }
    cout << "\n";
    
    // ===== PARTE 4: OPERADOR TERNARIO =====
    cout << "4. OPERADOR TERNARIO:\n";
    
    int a = 10;
    int b = 20;
    
    string resultado = (a > b) ? "a es mayor que b" : "b es mayor o igual que a";
    cout << "   " << resultado << "\n";
    
    int maximo = (a > b) ? a : b;
    cout << "   El máximo entre " << a << " y " << b << " es: " << maximo << "\n\n";
    
    // ===== PARTE 5: CONDICIONES ANIDADAS =====
    cout << "5. CONDICIONES ANIDADAS:\n";
    
    bool esEstudiante = true;
    bool tieneBeca = false;
    int promedio = 85;
    
    if (esEstudiante) {
        cout << "   Es estudiante\n";
        
        if (tieneBeca) {
            cout << "   Tiene beca\n";
            
            if (promedio >= 90) {
                cout << "   Beca completa\n";
            } else if (promedio >= 80) {
                cout << "   Beca parcial\n";
            } else {
                cout << "   Beca en revisión\n";
            }
        } else {
            cout << "   No tiene beca\n";
        }
    } else {
        cout << "   No es estudiante\n";
    }
    cout << "\n";
    
    // ===== PARTE 6: SWITCH STATEMENT =====
    cout << "6. SWITCH STATEMENT:\n";
    
    int diaSemana = 3;
    
    cout << "   Día de la semana (1-7): " << diaSemana << "\n";
    
    switch (diaSemana) {
        case 1:
            cout << "   Lunes\n";
            break;
        case 2:
            cout << "   Martes\n";
            break;
        case 3:
            cout << "   Miércoles\n";
            break;
        case 4:
            cout << "   Jueves\n";
            break;
        case 5:
            cout << "   Viernes\n";
            break;
        case 6:
        case 7:
            cout << "   Fin de semana\n";
            break;
        default:
            cout << "   Día no válido\n";
    }
    cout << "\n";
    
    // ===== PARTE 7: EJERCICIO INTERACTIVO =====
    cout << "7. EJERCICIO INTERACTIVO - CALCULADORA DE DESCUENTOS:\n";
    
    double precio;
    int tipoCliente;
    
    cout << "   Ingresa el precio del producto: $";
    cin >> precio;
    
    cout << "   Tipo de cliente:\n";
    cout << "   1 - Cliente regular\n";
    cout << "   2 - Cliente VIP\n";
    cout << "   3 - Cliente premium\n";
    cout << "   Selecciona (1-3): ";
    cin >> tipoCliente;
    
    double descuento = 0.0;
    string tipoClienteStr;
    
    switch (tipoCliente) {
        case 1:
            descuento = 0.05;  // 5%
            tipoClienteStr = "regular";
            break;
        case 2:
            descuento = 0.15;  // 15%
            tipoClienteStr = "VIP";
            break;
        case 3:
            descuento = 0.25;  // 25%
            tipoClienteStr = "premium";
            break;
        default:
            cout << "   Tipo de cliente no válido\n";
            return 1;
    }
    
    double precioFinal = precio * (1 - descuento);
    
    cout << "\n   Resumen de la compra:\n";
    cout << "   - Precio original: $" << precio << "\n";
    cout << "   - Tipo de cliente: " << tipoClienteStr << "\n";
    cout << "   - Descuento: " << (descuento * 100) << "%\n";
    cout << "   - Precio final: $" << precioFinal << "\n\n";
    
    // ===== PARTE 8: EJERCICIOS PARA PRACTICAR =====
    cout << "=== EJERCICIOS PARA PRACTICAR ===\n";
    cout << "1. Crea un programa que determine si un año es bisiesto\n";
    cout << "2. Desarrolla un sistema de calificaciones más detallado\n";
    cout << "3. Crea un menú de opciones usando switch\n";
    cout << "4. Implementa un validador de contraseñas\n";
    cout << "5. Desarrolla un sistema de puntos para un juego\n\n";
    
    cout << "¡Programa ejecutado exitosamente!\n";
    
    return 0;
}
