#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    cout << fixed << setprecision(2);
    double sueldoMensual, sueldoAnual, isrAnual = 0.0;
    string escala = "Exento (Hasta RD$416,220.00 anuales)";

    cout << "=== CALCULADORA ISR DGII ===\nIngrese el sueldo mensual (DOP): ";
    cin >> sueldoMensual;

    if (sueldoMensual < 0) {
        cout << "[Error]: El sueldo no puede ser negativo.\n";
        return 1;
    }

    sueldoAnual = sueldoMensual * 12;

    
    if (sueldoAnual > 867123.00) {
        isrAnual = 79776.00 + (sueldoAnual - 867123.00) * 0.25;
        escala = "RD$79,776.00 + 25% del exceso sobre RD$867,123.01";
    }
    else if (sueldoAnual > 624329.00) {
        isrAnual = 31216.00 + (sueldoAnual - 624329.00) * 0.20;
        escala = "RD$31,216.00 + 20% del exceso sobre RD$624,329.00";
    }
    else if (sueldoAnual > 416220.00) {
        isrAnual = (sueldoAnual - 416220.00) * 0.15;
        escala = "15% del exceso sobre RD$416,220.00";
    }

    double isrMensual = isrAnual / 12.0;

   
    cout << "\n----------------------------------------\n";
    cout << " Sueldo Mensual : RD$ " << sueldoMensual << endl;
    cout << " Sueldo Anual   : RD$ " << sueldoAnual << endl;
    cout << " Escala         : " << escala << endl;
    cout << "----------------------------------------\n";

    cout << " ISR Mensual    : ";
    if (isrMensual == 0) {
        cout << "0 (N/A)" << endl;
    }
    else {
        cout << "RD$ " << isrMensual << endl;
        cout << " ISR Anual      : RD$ " << isrAnual << endl;
    }
    cout << "========================================\n";

    return 0;
}
