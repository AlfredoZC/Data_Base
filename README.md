<!-- ⚠️ This README has been generated from the file(s) "blueprint.md" ⚠️--><p align="center">
    
  <img src="https://raw.githubusercontent.com/andreasbm/readme/master/assets/logo-shadow.png" alt="Logo" width="150" height="150" />
  
  


<p align="center">
  <b>MODELO DE BASE DE DATOS SIMPLE </b></br>
  <sub>En este pequeño proyecto nos piden el desarrollo de una base de datos simple, donde el usuario tiene acceso a una limitada cantidad de funciones. Se busca almacenar datos exitosamente y hacer uso de ellos a traves de comandos. Pero antes de ir al programa, debemos ver que es una base de datos  <sub>

[![-----------------------------------------------------](https://raw.githubusercontent.com/andreasbm/readme/master/assets/lines/colored.png)](#installation)

## ➤  Base de Datos

Que es una base de datos? 

En resumen es un conjunto de informacion almacenada y consultada (Sistematicamente). La Base de Datos nos garantiza seguridad de almacenamiento de datos. Incluso puede ayudarnos a ser mas escalables y eficientes.  


[![-----------------------------------------------------](https://raw.githubusercontent.com/andreasbm/readme/master/assets/lines/colored.png)](#getting-started-quick)

## ➤ Tipos de Base de datos 

## Base de datos SQL

* **Base de datos relacionable:** Es mas estructurado, le da prioridad a la integridad de los datos. Sin embargo es mucho mas lenta a gran escala. Esta puede ser operada con SQL.

![-----------------------------------------------------](https://raw.githubusercontent.com/andreasbm/readme/master/assets/lines/dark.png)

## Base de datos NoSQL

* **Base de datos no relacionable o NOSQL:** Es mucho menos estructurado, estructura los datos a gran escala. Esto en consecuencia nos brinda mas velocidad al momento de acceder a los datos. 

* **Base de datos de objetos:** Que almacena datos como objetos. Diseñada para trabajar con lenguajes de programacion orientada a objetos como java y python. 


* **Base de datos de grafos:** Diseñada para trabajar con datos relacionables complejos, como las relaciones sociales o las redes de transporte. Utilizan modelos de datos basados en nodos y relaciones.

* **Base de datos en memoria:** Almacena datos directamente en la memoria y permite ofrecer un rendimiento excepcionalment rapido para las aplicacciones que requieren de acceso instantaneo a los datos.


SQL puede ser tedioso pero a su vez bastante robusto con el tema de datos, brindando una mayor integridad e importancia a este. Si embargo como lo mencionamos es lento y esto puede causar muchas complicaciones. Pero, gracias a este problema con la velocidad en los datos tenemos NoSQL que nos brinda mayor velocidad de datos y es mas flexible en cuanto al almacenamiento de los mismos.  
[![-----------------------------------------------------](https://raw.githubusercontent.com/andreasbm/readme/master/assets/lines/colored.png)](#getting-started-slower)

## ➤ Funcionamiento de la base de datos


En esta BD el usuario puede ingresar fechas a la consola 1-2-3 seguidas de un evento, ejemplo ¨Visitar a mamá¨. El formato de entrada es el siguiente:    


[![-----------------------------------------------------](https://raw.githubusercontent.com/andreasbm/readme/master/assets/lines/colored.png)](#advanced)
![-----------------------------------------------------](https://raw.githubusercontent.com/andreasbm/readme/master/assets/lines/dark.png)




| Comando  | Formato             | Descripcion                           |
|------------|-------------------|--------------------------------------|
| **Add**   |Add fecha evento | Este nos permite agregar un evento en una fecha especifica. Requiere del comando la fecha y el evento a añadir.
| **Print** | Print       | Este comando nos imprime todas las fechas y sus eventos. Este solo require del comando Print. |
|**Del**| Del fecha evento            | Este comando nos permite eliminar un evento especifico dentro de una fecha determinada, si la fecha no existe, la consola mostrara "event not found". Este requiere el comando, la fecha y el evento a eliminar.  |
|**Del**| Del fecha                | Este comando a diferencia del otro, no tiene evento como entrada es decir (vacio). Por lo que elimina todos los elementos de la fecha dada. Este requiere el comando y la fecha.  |
|**Find**| Find fecha               |Este comando nos permite acceder a una fecha en especifico y mostrar los eventos en tal fecha. Este comando solo requiere de los datos comando find y la fecha. |

![-----------------------------------------------------](https://raw.githubusercontent.com/andreasbm/readme/master/assets/lines/dark.png)

Ejemplo : Add 1-2-3 event1


Pero como debemos ingresar la fecha?. Bueno la fecha esta en formato años, meses, dias (1-2-3) Donde 1 es el año 2 es el mes y 3 el dia. Sin embargo nuestro programa tiene que almacenar la fecha de la siguiente manera 0001-02-03 y chequear si los meses no exceden del rango de 1 a 12, de la misma forma con los dias, estos no pueden exceder de 31. Tambien pueden haber años negativos como -1-2-3 y estos tienen que ser almacenados de la siguiente manera (-1-02-03).
  
Finalmente el evento puede ser ingresado a gusto!. Con estas instrucciones puede hacer uso de nuestra Base de Datos.

![-----------------------------------------------------](https://raw.githubusercontent.com/andreasbm/readme/master/assets/lines/dark.png)


[![-----------------------------------------------------](https://raw.githubusercontent.com/andreasbm/readme/master/assets/lines/colored.png)](#contributors)
## ➤ DIAGRAMA DE FLUJO DEL PROGRAMA

![Base de datos diagrama](Documentation/Diagrama%20de%20flujo%20.drawio.png)

[![-----------------------------------------------------](https://raw.githubusercontent.com/andreasbm/readme/master/assets/lines/colored.png)](#contributors)

## ➤ Contributors
	

| <img alt="Jose Alfredo" src="foto.png " width="100">| [<img alt="You?" src="https://joeschmoe.io/api/v1/random" width="100">](https://github.com/andreasbm/readme/blob/master/CONTRIBUTING.md) |
|:--------------------------------------------------:|:--------------------------------------------------:|
| Jose Alfredo (https://github.com/AlfredoZC) | [Yo](https://github.com/andreasbm/readme/blob/master/CONTRIBUTING.md) |
| 🔥                                               |                                                  |


[![-----------------------------------------------------](https://raw.githubusercontent.com/andreasbm/readme/master/assets/lines/colored.png)](#license)

## ➤ License
	
Licensed under [MIT](https://opensource.org/licenses/MIT).