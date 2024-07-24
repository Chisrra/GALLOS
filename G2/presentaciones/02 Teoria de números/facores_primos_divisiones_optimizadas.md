---
marp: true
title: Encontrando Factores Primos con Divisiones de Prueba Optimizadas
theme: uncover
class:
    - invert
paginate: true
author: Cristian Israel Donato Flores
style: |
    :root{
        font-size: 2.3em;
    }
    p{
      text-align: justify;
    }
    h2,h3, h4, h5, h6{
        text-align: start;
    }
    .cenT {
        text-align: center;
    }
    .list-h {
        display: flex;
        padding: 0;
    }
    .list-h li{
         margin-right:60px;
    }
    .center {
        display: flex;
        justify-content: center;
        align-items: center;
    }
math: mathjax
---

# Encontrando Factores Primos con Divisiones de Prueba Optimizadas
![bg opacity:0.1 Número primos](https://i.ytimg.com/vi/c11n-QDzTGk/hqdefault.jpg)

---
## Introducción
En la teoría de números, sabemos que un número primo N solo tiene como factores 1 y a sí mismo, pero un número compuesto N, es decir, los no primos, pueden expresarse de manera única como un producto de sus factores primos. Los números primos son los bloques de construcción multiplicativos de los enteros (el teorema fundamental de la aritmética). 

---

<h3 class="cenT">Ejemplo</h3>

$$
N = 1200 = 2 \cdot 2 \cdot 2 \cdot 2 \cdot 3 \cdot 5 \cdot 5 = 2^4 \cdot 3 \cdot 5^2 
$$
(la última forma se llama factorización en forma de potencia de primos).

---

## Algoritmo Inicial Naïve
Un algoritmo ingenuo genera una lista de números primos (por ejemplo, con la criba) y verifica qué número(s) primo(s) pueden dividir realmente el entero N, sin cambiar N. 
<br>
<p class="cenT">
    <b>¡Esto puede mejorarse!</b>
</p>

---

## Algoritmo Mejorado: Divide y Conquista
Un mejor algoritmo utiliza una especie de espíritu de _"Divide y Conquista"_. 

Un número entero $N$ se puede expresar como: $N = p \cdot N'$, donde $p$ es un factor primo y $N'$ es otro número que es $\frac{N}{p}$, es decir, podemos reducir el tamaño de $N$ sacando su factor primo $p$.

Podemos seguir haciendo esto hasta que finalmente $N' = 1$. 

---

### Para acelerar aún más el proceso
Utilizamos la propiedad de divisibilidad de que no puede haber más de un divisor primo mayor que la raíz cuadrada de $N$, por lo que solo repetimos el proceso de encontrar factores primos hasta que $p \gt \sqrt{N}$. 

---

### Detenerse en $\sqrt{N}$ conlleva un caso especial: 
Si $(p_{actual})^2 > N$ y $N$ todavía no es 1, **entonces $N$ es el último factor primo**.

El código a continuación toma un número entero N y devuelve la lista de factores primos.

---



#### Código

```cpp
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
vector<ll> p; // Lista de números primos

vector<ll> primeFactors(ll N) {
    vector<ll> factors;
    for (int i = 0; (i < (int)p.size()) && (p[i]*p[i] <= N); ++i) {
        while (N % p[i] == 0) {
            N /= p[i];
            factors.push_back(p[i]);
        }
    }
    if (N != 1) factors.push_back(N);
    return factors;
}
```

---

## Funciones Involucrando Factores Primos
<div class="center">
    <ul class="list-h">
        <li><a href="#numPF">numPF(N)</a></li>
        <li><a href="#numDiv">numDiv(N)</a></li>
        <li><a href="#sumDiv">sumDiv(N)</a></li>
    </ul>
</div>

---

<h3 id = "numPF">numPF(N): Contar el número de factores primos de un entero N.</h3>

Por ejemplo, para $N = 60$, que tiene 4 factores primos: {2, 2, 3, 5}. La solución es una modificación simple del algoritmo de división de prueba para encontrar factores primos mostrado anteriormente.

---

#### Código
```cpp
int numPF(ll N) {
    int ans = 0;
    for (int i = 0; (i < (int)p.size()) && (p[i]*p[i] <= N); ++i) {
        while (N % p[i] == 0) {
            N /= p[i];
            ++ans;
        }
    }
    return ans + (N != 1);
}

```

---
<h3 id="numDiv">numDiv(N): Contar el número de divisores de un entero N.</h3>

Un divisor de $N$ se define como un entero que divide $N$ sin dejar residuo. Si un número 
$$
N = a^i * b^j * . . . * c^k
$$
, entonces $N$ tiene 
$$
(i + 1) * (j + 1) * . . . * (k + 1)
$$
divisores. 

---

Esto se debe a que hay $i + 1$ formas de elegir el factor primo a (0, 1, . . . , i-1, i veces), $j + 1$ formas de elegir el factor primo $b$, . . ., y $k + 1$ formas de elegir el factor primo $c$. El número total de formas es el producto de estos números.

---

#### Por ejemplo
Para $N = 60 = 2^2 * 3^1 * 5^1$, tiene...
$$
(2 + 1) * (1 + 1) * (1 + 1) = 3 * 2 * 2 = 12
$$ 
...divisores. 

Los 12 divisores son: {1, 2, 3, 4, 5, 6, 10, 12, 15, 20, 30, 60}. Los factores primos de 60 están resaltados. Observa que $N$ tiene más divisores que factores primos.

---

#### Código
```cpp
int numDiv(ll N) {
    int ans = 1;
    for (int i = 0; (i < (int)p.size()) && (p[i]*p[i] <= N); ++i) {
        int power = 0;
        while (N % p[i] == 0) {
            N /= p[i];
            ++power;
        }
        ans *= power + 1;
    }
    return (N != 1) ? 2 * ans : ans;
}

```

---

<h3 id ="sumDiv">sumDiv(N): Sumar los divisores de un entero N.</h3>

En el ejemplo anterior, $N = 60$ tenía 12 divisores. La suma de estos divisores es 168. Esto también puede calcularse a través de factores primos. Si un número 
$$
N = a^i * b^j * . . . * c^k
$$

---

, entonces la suma de los divisores de N es 
$$
\frac{a^{i+1}-1}{a-1} \cdot \frac{b^{j+1}-1}{b-1} * ... * \frac{c^{k+1}-1}{c-1}
$$
Esta fórmula se deriva de la suma de una serie de progresiones geométricas. $\frac{a^{i+1}-1}{a-1}$ es la suma de $a^0, a^1, . . . , a^{i-1}, a^i$. La suma total de los divisores es la multiplicación de estas sumas de series geométricas de cada factor primo.

---

#### Por ejemplo
Para $N = 60 = 2^2 * 3^1 * 5^1$, 
$$
sumDiv(60) = \frac{2^{2+1}-1}{2-1} \cdot  \frac{3^{1+1}-1}{3-1} \cdot  \frac{5^{1+1}-1}{5-1} = \frac{7\cdot 8\cdot 24}{1\cdot 2\cdot 4} = 168
$$

---

#### Código
```cpp
ll sumDiv(ll N) {
    ll ans = 1;
    for (int i = 0; (i < (int)p.size()) && (p[i]*p[i] <= N); ++i) {
        ll multiplier = p[i], total = 1;
        while (N % p[i] == 0) {
            N /= p[i];
            total += multiplier;
            multiplier *= p[i];
        }
        ans *= total;
    }
    if (N != 1) ans *= (N + 1);
    return ans;
}

```