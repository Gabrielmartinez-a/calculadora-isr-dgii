# Gabriel Burgos Martínez - 2026-1768

### Descripción breve del programa
Programa en C++ para el cálculo del ISR según la escala de la DGII. El programa solicita el sueldo mensual, lo convierte a anual y determina el impuesto a pagar. Forma parte de las actividades propuestas del tema de estructuras selectivas.

### Datos de entrada
*   Sueldo mensual en DOP (valor de tipo double).

### Datos que procesa
*   Convierte el sueldo mensual a sueldo anual multiplicando por 12.
*   Evalúa en qué tramo de la escala de la DGII se encuentra el sueldo anual.
*   Calcula el ISR anual según la fórmula del tramo correspondiente: 0% exento, 15%, 20% o 25%.
*   Calcula el ISR mensual dividiendo el ISR anual entre 12.

### Datos de Salida
*   Sueldo mensual y anual ingresado/calculado.
*   Escala o tramo de la DGII aplicado.
*   Monto del ISR mensual y anual a pagar, o 0 (N/A) si está exento.

### Una descripción breve explicando por qué usó x estructura y que función hace
Usé la estructura `if - else if - else` porque es una estructura selectiva que permite evaluar varias condiciones en orden. Es ideal para este caso porque el sueldo solo puede pertenecer a un tramo de la DGII a la vez. La función del `if` es comprobar desde el tramo más alto hacia el más bajo, y cuando encuentra el tramo donde encaja el sueldo anual, aplica la fórmula de cálculo correspondiente y guarda el nombre de la escala para mostrarla.
