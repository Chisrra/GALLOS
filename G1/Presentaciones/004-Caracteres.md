---
marp: true
title: Caracteres
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
img[alt~="center"] {display: block;margin: 0 auto;}
mark {background-color: rgb(129 161 193 / 0.6)};
</style>
<style scoped>h1, h2, h3 {color: #3b4252;}</style>

![bg opacity:.1](https://upload.wikimedia.org/wikipedia/commons/c/cf/USASCII_code_chart.png)

# <!--fit--> Caracteres y Strings en c++
## Por Ariel Parra.

---

# ¿Qué es un caracter?

---

Es una unidad de información que corresponenden a un símbolo,digito,puntuaciones,signo,grafema,grafo,garabato o los más conocidos que son las <mark>letras</mark>, las cuales forman las palabras que usamos y conocemos

---

# ¿Cómo se traduce esto a C++?

---

En C++ los caracteres no son más que un conjunto de numeros para representar un caracter a travez de algun tipo de codificación, por defecto C++ utiliza la decodificación de ASCII (American Standard Code for Information), aunque también soporta UNICODE/UTF-8 (En Windows tienes que declarar el uso explicitamente con "SetConsoleOutputCP(CP_UTF8)").

Originalmente ASCII fue diseñado pensando en 8 bits con signo dando un total de 128 caracteres (del 0 al 127);


---

![w:1060](https://www.asciitable.com/asciifull.gif)

---

# Declaracion en C

Una variable de caracter se declara con comillas simples:

```cpp
char c;
char c='a';
char c{'a'};
```

---

Al conjunto de caracteres se les llama Strings (también conocidos como cadenas o vectores/arrgelos de char) y se declaran con comillas dobles:
```cpp
char c[50];
char c[] = "valor";
char c[6] = "valor";
char c[] = {'v', 'a', 'l', 'o', 'r', '\0'};
char c[6] = {'v', 'a', 'l', 'o', 'r', '\0'};
```
estos ejemplos son de tamaños estaticos, por lo que siempre hay que declararlos con numeros enteros constantes (const int).

---

# Practica

Utilizando la tabla de ASCII, escribe un programa que lea un caracter en minusculas y lo convierta a mayusculas, (la entrada es estricatamente en minuscula.)

---
# Solucion

```cpp
int main() {
    char minuscula;
    cin >> minuscula;
    char mayuscula = minuscula - 32;
    cout << mayuscula;
    return 0;
}
```

---

# Solución recomendada

```cpp
int main() {
    char minuscula;
    cin >> minuscula;
    char mayuscula = minuscula - ('a' - 'A');
    cout << mayuscula;
    return 0;
}
```

---

# Funciones de Caracteres y Strings en C

\<cctype>      |\<cstdlib>                     |\<cstring>
---------------|-------------------------------|----------
isalpha(char)  |atoi(string)                   |strcpy(string-dest,string-origen)
isdigit(char)  |atof(string)                   |strcat(string-dest,string-origen)
isupper(char)  |atol(string)                   |strncat(string-dest,string-origen,int)
islower(char)  |strtol(string,NULL,0)          |strcmp(string,string-comparar)
tolower(char)  |<del>itoa(int,string,10)</del> |strncmp(string,string-comparar,int)
toupper(char)  |sprintf(string,"%i",int)       |strlen(string)

---

# Problemas

[734A: Anthon and Danik](https://codeforces.com/problemset/problem/734/A)

---

# Referencias
https://theasciicode.com.ar/
https://en.cppreference.com/w/cpp/string/byte
https://en.wikipedia.org/wiki/ASCII
https://learn.microsoft.com/es-es/cpp/cpp/string-and-character-literals-cpp?view=msvc-170
https://en.wikipedia.org/wiki/Character_(computing)
https://en.wikipedia.org/wiki/C_string_handling

