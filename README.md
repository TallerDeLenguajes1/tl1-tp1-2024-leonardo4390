# tl1-tp1-2024-leonardo4390djks
1 - .gitignore te ayuda a mantener un repositorio limpio, evitar errores y mejorar la colaboración.

2 - cuando querramos omitir archivos inecesario en nuestro repositorio

3 - Puede crear un archivo .gitignore en el directorio raíz del repositorio para indicarle a Git qué archivos y directorios ignorar cuando se realiza una confirmación. Para compartir las reglas de ignore con otros usuarios que clonan el repositorio, confirme el archivo .gitignore en el repositorio.

Puede indicar a Git que siempre omita determinados archivos o directorios al realizar una confirmación en cualquier repositorio de Git del equipo. Por ejemplo, puede usar esta característica para omitir los archivos de copia de seguridad temporales que cree el editor de texto.

Para omitir siempre un determinado archivo o directorio, agréguelo a un archivo denominado ignore que se encuentra dentro del directorio ~/.config/git. De forma predeterminada, Git omitirá los archivos y directorios que aparecen en el archivo de configuración global ~/.config/git/ignore. Si el directorio git y el archivo ignore aún no existen, es posible que tenga que crearlos.

4 - *: este caracter es en sí un comodín. Con este podemos usarlo como una “propiedad” dentro de las omisiones. Por ejemplo, si queremos omitir todos los archivos tipo texto (txt) dentro del programa, usamos *.txt en la configuración.


Si resolvió correctamente los apartados 2 y 3 del punto anterior notará
que el resultado es el mismo. ¿a qué se debe? ¿Qué obtiene en el
punto 4? ¿Es igual a los anteriores? ¿Por qué? Responder en el archivo
readme.md

se debe que la direccion de memoria almacenada por el puntero hace referencia a la direcion de memoria a quien apunta que es la direccion de la variable 
y en el punto 3 nos da la direccin de la variable
en el punto 4 se obtiene la direccin de memoria de la variable puntero
