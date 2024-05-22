---
marp: true
title: Estructuras de Datos en la Biblioteca Estándar de C++ (STL)
theme: default
paginate: true
---

![bg opacity:.3](https://i.kym-cdn.com/photos/images/original/001/900/244/fb7.jpg)

#  Estructuras de Datos en la Biblioteca Estándar de C++ (STL) para Programación Competitiva

---
<style>
    /* Define el color del texto */
body {
  color: black;
}

/* Define el fondo de la diapositiva */
section {
  background-color: #FFFAF0;
}

/* Estilos para los encabezados h1 */
h1 {
  text-align: center;
  font-size: 1.5rem;
  color: #030303;
}

/* Estilos para los encabezados h2 */
h2 {
  text-align: left;
  font-size: 2rem;
  color: #0E0C0A;
}

/* Estilos para el texto */
p {
  font-size: 50px;
}

/* Agrega margen de 2 unidades */
section {
  margin: 2rem;
}
</style>

## Vector
Es una secuencia dinámica de elementos contiguos en la memoria.

---

Fácil de usar, acceso rápido a elementos, inserción y eliminación en tiempo constante en el extremo posterior. Útil para implementar listas, pilas y colas.

---

## Set y Multiset
Almacenan elementos únicos ordenados.

---

Rápida inserción, eliminación y búsqueda de elementos. Útil para mantener un conjunto de elementos únicos y realizar operaciones de conjuntos eficientes.

---

## Map y Multimap
Almacenan pares clave-valor únicos ordenados por la clave.

---

Asociación rápida de valores a claves, búsqueda y modificación eficientes. Útil para resolver problemas que requieren mapeo de valores a claves.

---

## Stack
Estructura de datos LIFO (último en entrar, primero en salir).

---

Realización de operaciones de pila, como verificar el balanceo de paréntesis, evaluación de expresiones, seguimiento de estados, entre otros.

---

## Queue y Priority Queue
Estructura de datos FIFO (primero en entrar, primero en salir) para la cola, y cola con prioridad basada en un comparador para la cola con prioridad.

---

Implementación de colas, administración de eventos en orden de prioridad, búsqueda de k-ésimo elemento más grande/más pequeño, entre otros.

---

## Deque
Secuencia dinámica que admite inserción y eliminación en ambos extremos.

---

Combinación de las propiedades de vector y queue. Útil cuando se necesitan operaciones de inserción/eliminación eficientes en ambos extremos.

---

## Bitset
Almacena secuencias de bits compactamente y permite operaciones a nivel de bit.

---

Eficiente para resolver problemas que involucran manipulación de bits, como operaciones de máscaras, evaluación de condiciones y operaciones aritméticas.

---

## Unordered Set/Map
Almacenan elementos únicos sin orden específico utilizando tablas hash.

---

Rápida inserción, eliminación y búsqueda de elementos en promedio. Ideal para casos donde el orden no es importante.
