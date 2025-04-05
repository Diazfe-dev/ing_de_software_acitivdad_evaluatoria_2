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

#### Principio de Abierto-Cerrado (OCP)
Bertrand Meyer sobre el principio de abierto-cerrado:
***El software debe estar abierto para la extension pero cerrado para la modificacion.***
Que significa esto?
Significa que deberiamos poder agregar nuevos comportamientos sin tener que modificar el codigo existente.
Esto se logra gracias a la herencia de clases, interfaces y polimorfismo.

#### Ejemplo:
Supongamos que tenemos una clase que calcula el area de figuras.
Por ejemplo el area de un rectangulo.
Si ahora nos pidieran agregar un area de un circulo, tendriamos que modificar el codigo existente.
Esto viola el principio de abierto-cerrado.

Lo correcto seria aplicar polimorfismo para que el area de figuras pueda ser calculado de manera dinamica.
- Crear una interfaz Shape donde definamos la funcion area.
- Crear una clase Area calculator que se encargara de llamar a la funcion area de la clase Shape.
- Crear una clase Rectangle que hereda de Shape que implemente la funcion area con su formula correspondiente.
- Crear una clase Circle que hereda de Shape que implemente la funcion area con su formula correspondiente.

Asi a medida que vamos agregando nuevos tipos de figuras, podemos agregar nuevas clases que hereden de Shape, sin modificar el codigo existente sino extendiendolo.
