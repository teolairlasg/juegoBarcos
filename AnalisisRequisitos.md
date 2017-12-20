
# Análisis de Requisitos

## Requisitos Funcionales

- RF1: Juego por turnos para 2 jugadores en red
- RF2: Existe un tablero de 10x10 para cada jugador. Cada posición del tablero estará representada por coordenadas:
  - Horizontal: letras mayúsculas de izquierda a derecha
  - Vertical: números en sentido descendente
- RF3: Cada jugador posicionara 5 barcos en horizontal o vertical dentro de su tablero y sin que se solapen. Esta posición se mantendrá hasta el final de la partida.
- RF4: El jugador que tiene el turno enviara unas coordenadas (p.e. : A-3). El programa remoto responderá:
  - Agua, si en esa coordenada no tiene
  - Tocado
  - Tocado y hundido
- RF5: El programa tendrá una interfaz de configuración con las siguientes características:
  - Se deberá mostrar el tablero vacío a la izquierda con las coordenadas visibles.
  - Se deberán mostrar los barcos que hay que colocar a la derecha del tablero.
  - Deberá permitir ir introduciendo los barcos y se actualizará cada vez que introduzcamos un barco.
- RF6: La introducción de barcos seguirá las siguientes reglas:
  - Los barcos deberán situarse dentro de los límites del tablero.
  - No podrán situarse barcos en casillas contiguas.
- RF7: La interfaz de juego deberá cumplir:
  - Mostrar el tablero propio con los barcos colocados a la izquierda.
  - Mostrar el tablero enemigo con las casillas reveladas a la derecha.
  - Cualquier movimiento enemigo deberá ser actualizado en el tablero propio.
  - Cualquier movimiento propio deberá ser actualizado en el tablero enemigo.
- RF8: Normas del juego.
  - Una vez posicionados los barcos de acuerdo a las reglas iniciará el juego el primer jugador que haya terminado de definir los barcos.
  - Los jugadores introducirán unas coordenadas por turnos con los siguientes posibles resultados:
    - Agua: El jugador no ha acertado la posición de un barco enemigo.
    - Tocado: El jugador ha acertado la posición de un barco enemigo.
    - Tocado y Hundido: El jugador ha acertado la posición de un barco enemigo y lo ha destruido.
  - Cuando un jugador consiga un Tocado o un Tocado y Hundido podrá volver a jugar su turno.
  - El juego finaliza cuando un jugador ha Tocado y Hundido todos los barcos enemigos.
