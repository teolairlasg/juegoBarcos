#Análisis de Requisitos
##Requisitos Funcionales

-RF1: Juego por turnos para 2 jugadores en red
-RF2: Existe un tablero de 10x10 para cada jugador. Cada posición del tablero estará representada por coordenadas:
 -Horizontal: letras mayúsculas de izquierda a derecha
 -Vertical: números en sentido descendente
-RF3: Cada jugador posicionara 5 barcos en horizontal o vertical dentro de su tablero y sin que se solapen. Esta posición se mantendrá hasta el final de la partida.
-RF4: El jugador que tiene el turno enviara unas coordenadas (p.e. : A-3). El programa remoto responderá:
 -Agua, si en esa coordenada no tiene
 -Tocado
 -Tocado y hundido
 El programa actualizara la interfaz
