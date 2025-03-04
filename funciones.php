<?php

// Función para multiplicar dos números
function multiplicar($a, $b) {
    return $a * $b;
}

// Función para mostrar un mensaje
function mostrar_texto() {
    echo "¡Hola! Esta es una función que muestra un mensaje.\n";
}

// Función que valida un dato
function validar_dato($a) {
    if ($a == 5) {
        return true;
    } else {
        return false;
    }
}

// Función que imprime un resultado
function mostrar_resultado($resultado) {
    echo "El resultado es: $resultado\n";
}

// Llamadas a las funciones

// Multiplicamos 5 y 8 usando la función multiplicar
$resultado_multiplicacion = multiplicar(5, 8);
mostrar_resultado($resultado_multiplicacion);

// Mostrar un mensaje de texto
mostrar_texto();

// Validar si el dato es correcto
$a = 5;
$dato_valido = validar_dato($a);
echo "¿Es el dato válido? " . ($dato_valido ? "Sí" : "No") . "\n";

?>