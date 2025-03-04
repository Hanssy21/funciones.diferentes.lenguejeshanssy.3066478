// Multiplicación de Elementos de Dos Arreglos
let a = [1, 2, 3, 4, 5];
let b = [6, 7, 8, 9, 10];
let c = [];

for (let i = 0; i < a.length; i++) {
    c.push(a[i] * b[i]);
}
console.log(c);

// Funciones

// Definición y llamada de función para mostrar un texto
function mostrarTexto() {
    console.log('hola');
}
mostrarTexto();

// Función que multiplica dos valores dentro de la función
function multiplicar() {
    let a = 5;
    let b = 8;
    console.log(a * b);
}
multiplicar();

// Acceso a variables globales dentro de una función
let aGlobal = 5;
let bGlobal = 8;

function multiplicarConGlobales() {
    console.log(aGlobal * bGlobal);
}
multiplicarConGlobales();

// Función que devuelve un valor y luego lo usa fuera de la función
function multiplicarYDevolver() {
    let a = 5;
    let b = 8;
    return a * b;
}

let resultado = multiplicarYDevolver();
console.log(resultado + 5); // Imprimir el resultado sumado a 5

// Función con una validación que devuelve un valor booleano
function validarDato() {
    if (aGlobal === 5) {
        return true;
    } else {
        return false;
    }
}

let dato = validarDato();
console.log(dato); // true