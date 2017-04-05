Se han hecho que las distintas entidades sin IA del juego: Puerta, Terminal de acceso y objetos consumables) tengan su propia lógica dentro del juego.

La puerta se abre y se cierra cuando nos acercamos a su sensor de visión, lo que hace que cambie de un estado Bloqueada a un estado de Abriendose hasta su límite. La puerta no se cerrará hasta que detecte que el jugador o enemigo haya salido de su rango de visión, cuando eso pase, cambiará al estado de Cerrandose y cuando vuelva a su posición inicial cambiará al estado de Bloqueda. Las puertas que no están cerradas con llave son de color verde, para diferenciarlas de las puertas que están cerradas con llaves que son rojas. Estás puertas cerradas necesitan su propia llave que está asociada a ellas, estas llaves están en los distintos lugares del mapa. Si no se tiene esta llave no se podrá seguir avanzando. Cuando se abre la puerta con su llave, esta pasará del estado Bloqllave al estado de Abriendose para abrirse para que el jugador pase. También cambiará de color para que ya no sea una puerta cerrada con llave.

El terminal de acceso es el que nos permite cambiar al siguiente nivel del juego. Cuando nos acercamos a él y pulsamos la tecla E, cambiaremos de nivel.

Los objetos consumables hay de distintos tipos:

    Municiones: Las municiones están repartidas por el mapa y no se guardan en el inventario como objeto independiende, sino que, se asignan al arma correspondiente que le toca cuando el jugador pasa por encima de la munición. Están repesentadas con distintos colores.

    Llaves: Las llaves están repartidas por el mapa y cada una de ellas se guarda en el inventario para usarlas luego. Cuando se recoge la llave esta desaparece y solo se puede usar con su puerta correspondiente.

    Botiquines: Los botiquines se encuentran por el mapa y son de color rojo. Estos sirven para curarnos vida cuando perdemos salud. Se usan con la Q y nos curan 50 de vida. Si tenemos la vida máxima no nos podremos curar y el botiquin no desaparecerá del inventario, si nos podemos curar, el botiquin desaparecerá del inventario.
