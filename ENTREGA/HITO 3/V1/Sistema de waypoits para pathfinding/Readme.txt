El sistema de waypoints que sigue el enemigo usando el pathfinding sus posiciones están creadas en Unity para su exportación. Cuando se lee el fichero exportado de Unity se crean esos waypoints y se completa el grafo de pesos que va a seguir el pathfinding.

Los enemigos tienen waypoints distintos porque hay distintas zonas de waypoints creadas en el mapa, así logramos que los enemigos sean más dependientes de su zona asignada y que patrullen esas zonas.

Aquí podemos ver un ejemplo de como hay waypoints definidos en distintas zonas para luego ser asignados a los distintos enemigos.