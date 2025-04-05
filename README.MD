#### Compilacion: 
```
g++ src/main.cpp -o bin/program
```

#### Principio de responsabilidad unica. (SRP)
Robert C Martin sobre el principio de responsabilidad unica:
***Una clase debe tener una, y solo una razon para cambiar.***

Que significa esto en la practica?
Significa que una clase debe estar enfocada en una unica tarea o responsabilidad.
No debe encargarse de multiples cosas como logica de negocio, persistencia, presentacion, etc.
Esto genera acoplamiento y dificulta el mantenimiento.

#### Ejemplo: 
Supongamos que tenemos una clase Report.
- Esta clase nos permite generar el contenido de un reporte.
- Imprime el reporte en pantalla.
- Guarda el reporte en un archivo.

Esto viola el principio de responsabilidad unica.
Lo correcto seria dividir esta clase en tres clases:
- Report: Clase que genera el reporte.
- ReportPrinter: Clase que imprime el reporte en pantalla.
- ReportSaver: Clase que guarda el reporte en un archivo.