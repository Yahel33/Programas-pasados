#include <iostream>
using namespace std;
//cambio para hacer commit

// ---------- STRUCT ----------
struct Persona {
    int edad;
};

// ---------- FUNCIONES ----------
void mostrarMenu() {
    cout << "\nMENU PRINCIPAL\n";
    cout << "1. Validar mayoria de edad\n";
    cout << "2. Calculadora basica\n";
    cout << "3. Tablas de multiplicar (2-5)\n";
    cout << "4. Salir\n";
    cout << "Seleccione una opcion: ";
}

bool esMayorEdad(Persona p) {
    return p.edad >= 18;
}

float calcular(float a, float b, int op) {
    switch (op) {
        case 1: return a + b;
        case 2: return a - b;
        case 3: return a * b;
        case 4:
            if (b != 0) return a / b;
            else {
                cout << "ERROR: division entre 0\n";
                return 0;
            }
        default:
            cout << "Opcion invalida\n";
            return 0;
    }
}

void mostrarTabla(int n) {
    cout << "\nTabla del " << n << endl;
    for (int i = 1; i <= 10; i++) {
        cout << n << " x " << i << " = " << n * i << endl;
    }
}

// ---------- MAIN ----------
int main() {
    int opcion;

    do {
        mostrarMenu();
        cin >> opcion;

        switch (opcion) {

        case 1: {
            Persona p;
            cout << "Ingresa tu edad: ";
            cin >> p.edad;

            if (esMayorEdad(p))
                cout << "Eres mayor de edad\n";
            else
                cout << "No eres mayor de edad\n";
            break;
        }

        case 2: {
            int op;
            float a, b;
            char cont;

            do {
                cout << "\n1.Suma  2.Resta  3.Multiplicacion  4.Division\n";
                cin >> op;

                cout << "Numero 1: ";
                cin >> a;
                cout << "Numero 2: ";
                cin >> b;

                cout << "Resultado: " << calcular(a, b, op) << endl;

                cout << "Otra operacion? (s/n): ";
                cin >> cont;

            } while (cont == 's' || cont == 'S');

            break;
        }

        case 3: {
            int tablas[] = {2, 3, 4, 5};
            for (int t : tablas) {
                mostrarTabla(t);
            }
            break;
        }

        case 4:
            cout << "Saliendo...\n";
            break;

        default:
            cout << "Opcion invalida\n";
        }

    } while (opcion != 4);

    return 0;
}
