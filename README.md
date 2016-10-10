## Memoria Cache

Este proyecto consiste en una simulación de una memoria cache con política de reemplazo aleatoria con el fin de obtener su miss rate al variar los parámetros: asociatividad, tamaño del caché y tamaño del bloque.

## Compilación

Para compilar se utlizó el complidador de GNU para C++ (GNU Compiler Collection).

Solo es necesario clonar el repositorio, y luego utlizar el comando **make**.

## Ejecución del código
Es necesario tener el archivo **aligned.trace** en el mismo directorio que el archivo compilado **mi_cache**.

- Si se desea ejecutar las 48 simulaciones solicitadas en la tarea, se realizó un script que ejecuta todas las simulaciones. Para esto se debe ejecutar el comando **source ./script** y esto automáticamente ejecuta todas las simulaciones.

- Si solo se quiere ejecutar alguna simulación en particular se debe ejecutar el comando **./mi_cache.o <asociatividad> <tamaño del caché> <tamaño del bloque>** en la consola. Se aclara que la asociatividad solo puede tener tres posibles valores (1,2,4), el tamaño del cache está en Kb, y el tamaño del bloque está en bytes.

Todo lo anterior se basa en el sistema operativo Ubuntu 14.04 (o posterior).

## Contribuidores
- Boris Altamirano Chinchilla
- Alonso Espinoza Barboza

## Licencia

Este código puede ser distribuido utilizando GPL v3 o superior.
