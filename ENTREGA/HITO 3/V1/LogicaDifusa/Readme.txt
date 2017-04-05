Se ha empezado a definir la lógica difusa que usará los enemigos a la hora de tomar decisiones. Se van a usar como parámetros difusos la vida del enemigo y la distancia entre el jugador y el enemigo para la toma de decisiones. En un futuro se añadirán la moral del enemigo que estará ligado a su vida, la munición que tiene disponible, entre otros más parámetros.

Están definidas las relaciones de valores de los parámetros que recibe y su traducción a parámetros difusos, aunque quedan por definir las reglas que tiene que seguir la IA y, por consecuente, cambiar los estados de la IA para que ejecute la parte correspondiente.

Los valores que se han elegido han sido fusificados de maneras distintas. La vida ha sido fusificado con una gráfica de 4 triángulos dónde el primero va del valor, en porcentaje de la vida máxima del enemigo, 10% hasta el 30%, representando el estado de Huir; el segundo va desde 25% hasta 50% siendo el estado Baja; el tercero corresponde a Media representado desde 45% hasta 85%; y por último el estado Alta que se situa desde 75% hasta 100%.

Al igual que la vida, la distanticia también está representada como la distancia máxima que recibe cuando ve al jugador. Los valores de la gráfica están representados en porcentajes: el estado Cerca corresponde al 0% hasta el 35%; estado Media desde el 15% hasta el 80%; y por último el estado Lejos representado desde el 70% hasta el 100%.

Una vez estos valores han sido fusificados se decide cuál de todos esos estados se tiene que ejeuctar en el enemigo. Siguen está tabla:


Los cambios de estado se puede ver como cambia el enemigo de color para su gestión. Son parecidos a los colores de la tabla anterior.