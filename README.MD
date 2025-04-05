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


#### Principio de Sustitucion de Liskov (LSP)  
Barbara Liskov sobre el principio de sustitucion de liskov:
***Si S es una subclase de T, entonces los objetos de tipo T pueden ser reemplazados por objetos de tipo S sin alterar el comportamiento de la aplicaicon.***

Que significa esto en la practica?
Si tenes una clase base y una clase hija, la hija debe poder usarse en lugar de la clase base sin romper el programa.
Esto se logra gracias a la herencia de clases.

#### Ejemplo:
Supongamos que tenemos una clase base ***Pajaro***, que implementa el metodo volar.
Despues creamos una clase hija ***Avestruz*** que hereda de ***Pajaro***.
Sabemos que las avestruzes no peuden volar, pero le estamos obligando a implementar el metodo volar.
Esto viola LSP. Porque Avestruz no deberia poder volar. No deberia ser tratada como Pajaro que si puede volar. La jerarquia de clases esta mal pensada.

Lo correcto seria  separa el comportamiento en itnerfaces adecuadas y implementar las clases con esas interfaces.
- Crear la interfaz Pajaro que servira como clase base. Sabemos que todos los pajaros ponen huevos. Pero no todos los pajaros pueden volar.  
- Crear la interfaz PajaroVolador que extenderá la clase Pajaro. Clase base de la que heredaran todos los pajaros que pueden volar. E implementar el metodo volar. 
- Crear la clase Aguila que heredara de PajaroVolador.
- Crear la clase Avestruz que heredara de Pajaro

Asi logramos que cada clase hija respete el contrato de la clase base.

#### Princpio de Segregacion de Interfaces (ISP)
Robert C Martin sobre el principio de segregacion de interfaces:
***Ningun cliente debe verse forzado a depender de interfaces que no utiliza.***
Que significa esto en la practica?
Significa que es mejor tener interfaces pequeñas y especificas que una interfaz grande y generica.
Las clases no deberian tener que implementar todos los metodos que no necesita.

#### Ejemplo:
Supongamos que tenemos que definir tres metodos en una interfaz llamada ***Printer***, ***"Print", "Scan" y "Fax".***
A simple vista parece que son tres metodo que cualquier impresora puede tener.
Si definimos una impresora barata que solamente pueda imprimir. Y heredamos la interfa Printe.
Estariamos violando el principio de segregacion de interfaces. Ya que estariamos obligados a implementar Scan y Fax. Por mas que no lo utilicemos.

Lo correcto seria separar las interfaces en metodos especificos.
- Crear la interfaz Printer.
- Crear la interfaz Scanner.
- Crear la interfaz Fax.
- Crear la clase hija implementando los metodos que necesitamos.
- Crear la clase ImpresoraBasica que hereda de la clase Printer.
- Crear la clase FaxImpresora que hereda de la clase Impresora y la clase Fax.
- Crear la clase ImpresoraMultifuncional que hereda de la clase Impresora, Scanner y Fax.

Asi lograriamos tener clases mas simples y coherentes.
Evitando le codigo innecesario y facilitando la reutilizacion y extension.