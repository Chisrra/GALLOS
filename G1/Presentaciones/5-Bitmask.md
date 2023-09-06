---
marp: true
title: Bit Masking
theme: default
paginate: true
---
<!-- tema -->
<style>
h1 {color: #4c566a;}
h2 {color: #81a1c1;}
a[href]{color: #5e81ac;}
section {background: #d8dee9;text-align: justify;color: #3b4252;}
img {background-color: transparent!important;}
table {text-align: center; margin-left: auto; margin-right: auto;} 
img[alt~="center"] {display: block;margin: 0 auto;}
mark {background-color: rgb(129 161 193 / 0.6)};

</style>
<style scoped>h1, h2, h3 {color: #3b4252;}</style>


# <!--fit--> Bit Masking
![bg opacity:.1](https://i.ytimg.com/vi/H9BNQBlIncQ/maxresdefault.jpg)
## Por Ariel Parra. 

---

# ¿Qué son los bits?

Un bit es un valor booleano que puede tener dos valores, 0 y 1. Estos se usan para representar numeros con la base 2, por ejemplo un número en notacion decimal es el 5 y en notación binaria seria el 101, esto se debe que este numero es la representación de 2^2 + 2^0, donde se cuenta de derecha a izquiera.


---

# Números Binarios

---

A la convinación de 8 bits se le conoce como Byte.

El termino de hasta la derecha se le conoce como el  bit menos significativo (Least Significant Bit, "LSB") y el de hasta la izquierda es el bit más significativo (Most Significant Bit, "MSB").

También existen números negativos donde el MSF dicta el signo 1 para negativo y 0 para positivo, aunque esto solo significa que el MSF sera un némero negativo al que se le suman los demas números, por ejemplo en el byte 10000000 el 1 significa que esta negativo y esta en la octava posición por lo que este seria 2^8 = -128, con un byte con signo se puede ir desde -128 a 127 ya que pasamos por el cero. la forma de tener un valor sin signo en c es usando el tipo de dato unsigned el cual quita el bit de signo.

---

# Asignación de binarios en C++

---

hay cuatro maneras de asignar un valor binario en C++:

- Con la notación hexadecimal "0x".
- Con la notación octal "0".
- usando strol() .
- Con la función de C99 (no estándar) con la notacion "0b".

```
int main() {
    unsigned int a = 0xE5;  // Binary: 11100101
    
    
    return 0;
}
```


---

# ¿Qué es el Bit Masking?

---

Es ell proceso de modificación y utilización de representaciones binarias de números o cualquier otro dato se conoce como bitmasking. Usando una máscara, múltiples bits en un byte, word, etc. pueden ser estar encendidos o apagado, o también puede ser invertido de encendido a apagado en un solo bit.

---

# Bitwise operations

---

estos son operadores de manipulación de bits, muy similares a los operadores booleanos, pero no se deben confundir con los operadores logicos o relacionales. 

| Bitwise   | Logico     |
|-----------|------------|
| a & b     | a && b     |
| a \| b    | a \|\| b   |
| a ^ b     | a != b     |
| ~a        | !a         |

---

# Operadores de manipulación

|Símbolo | Operador                               |
|--------|----------------------------------------|
|   &    | bitwise AND                            |
|   \|   | bitwise inclusive OR                   |
|   ^    | bitwise XOR (exclusive OR)             |
|   <<   | left shift                             |
|   >>   | right shift                            |
|   ~    | bitwise NOT (unario)                   |

---

# "tabla de verdad de bits"

| bit a | bit b | a & b (a AND b) | a \| b (a OR b)|a ^ b (a XOR b) 
|-------|-------|-----------------|----------------|---------------
|   0   |   0   |       0         | 0              | 0
|   0   |   1   |       0         | 1              | 1
|   1   |   0   |       0         | 1              | 1
|   1   |   1   |       1         | 1              | 0

---

# Bitshifting

---

# Right shift (>>)

Si la variable ch contiene el patrón de bits 11100101, entonces ch >> 1 producirá el resultado 01110010, y ch >> 2 producirá 00111001.

```
int main() {
    unsigned char int = 0xE5;  // binario: 11100101
    
    // Right shift por 1 posición
    ch = ch >> 1; // binario: 01110010
    
    cout<<"After right shift by 1: "<< ch; // Output: 72 (hexadecimal)
    
    // Right shift por 2 posiciones
    ch = ch >> 2; // binario: 00111001
    
    cout<<"After right shift by 2: "<< ch; // Output: 39 (hexadecimal)
    
    return 0;
}
```

---

# Left shift (<<)



---

# Operadores de asignación

| Symbol | Operator                            |
|--------|-------------------------------------|
| &=     | bitwise AND assignment              |
| \|=    | bitwise inclusive OR assignment     |
| ^=     | bitwise exclusive OR assignment     |
| <<=    | left shift assignment               |
| >>=    | right shift assignment              |


---

# Problemas

[1805A: We Need the Zero](https://codeforces.com/problemset/problem/1805/A)

[1527A: And Then There Were K](https://codeforces.com/problemset/problem/1527/A)

---

# Referencias

- https://yewtu.be/watch?v=qq64FrA2UXQ
- https://www.scaler.com/topics/data-structures/bit-masking/
- https://www.learn-c.org/en/Bitmasks
- https://www.geeksforgeeks.org/what-is-bitmasking/
- https://en.wikipedia.org/wiki/Mask_(computing)
- https://en.wikipedia.org/wiki/Bitwise_operation
- https://en.wikipedia.org/wiki/Bitwise_operations_in_C
- https://en.wikipedia.org/wiki/Binary_number
- https://www.includehelp.com/c/how-to-assign-binary-value-in-a-variable-directly.aspx