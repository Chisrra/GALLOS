---
marp: true
title: Encontrando Factores Primos con Divisiones de Prueba Optimizadas
theme: gaia
class:
    - invert
paginate: true
author: Cristian Israel Donato Flores
---

# <!--fit--> Divide y Vencerás


---

## Paradigma de Divide y Vencerás

- **Definición:** 
  - Un enfoque para diseñar algoritmos eficientes.
  - Divide un problema en subproblemas más pequeños.
  - Resuelve estos subproblemas y combina sus soluciones para obtener la solución del problema original.

---

## Diseño de Algoritmos

- **Pensar y Diseñar Algoritmos:**
  - Buscar soluciones eficientes y claras para problemas específicos.
  - Pensar en la mejor representación posible para la solución

---

## Ejemplo Práctico: Resumen de una Saga de Libros

- **Problema Original: Resumen de una Saga de Libros**
- **División y Conquista:**
  1. Resumen de la saga -> Resumen de cada libro.
  2. Resumen de cada libro -> Resumen de cada parte del libro.
  3. Resumen de cada parte del libro -> Resumen de cada capítulo.

---

## Ejemplo Práctico

- **Recursividad:**
  - Cada nivel de división es una instancia del problema original, pero más manejable.
  - La recursión resuelve cada instancia, retrocediendo luego para combinar soluciones.

---

## Las Tres Etapas del Paradigma

1. **Dividir:**
   - Dividir el problema en instancias más pequeñas del problema original.
   
2. **Conquistar:**
   - Resolver cada uno de los subproblemas de forma recursiva.
   - Llegar al caso base, lo suficientemente pequeño para resolverlo de forma sencilla.

3. **Combinar:**
   - Combinar las soluciones de los subproblemas para obtener la solución del problema original.

---

## Aplicación en Programación Competitiva

- **Ventajas de Divide y Vencerás:**
  - Diseño eficiente de algoritmos.
  - Claridad en la estructura del código.
  
- **Ejemplos Clásicos:**
  - Algoritmo de búsqueda binaria.
  - Algoritmo de exponenciación rápida.

---

## Ventajas y Desafíos

- **Ventajas:**
  - Eficiencia en la resolución de problemas complejos.
  - Modularidad en el diseño de algoritmos.

- **Desafíos:**
  - Identificar correctamente las divisiones y conquistas.
  - Mantener un seguimiento adecuado de las instancias y subproblemas.

---

## Entonces...

- **Divide y Vencerás:** Un paradigma fundamental en programación competitiva.
- Diseño eficiente de algoritmos para problemas específicos.
- Enfrenta desafíos, pero ofrece ventajas significativas.
- Un enfoque poderoso para resolver problemas complejos.

