---
marp: true
title: Ordenamiento y Clasificación + Libreria STD y sus estructuras de datos basicas 
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

![bg opacity:.1](https://i.redd.it/34rgyu7ms0941.jpg)

# <!--fit--> Ordenamiento y Clasificación +
# <!--fit--> Libreria STD y sus estructuras de datos basicas 
## Por Ariel Parra. 

---

# ¿Qué es el ordenamiento en C++?

![bg opacity:.1](https://poiritem.files.wordpress.com/2009/12/agentes-basados-en-busqueda.png?w=266&h=177)

---

El ordenamiento o en ingles sorting, es el proceso de 

---

# ¿Qué es la clasificación en C++?
![bg opacity:.1](https://step2.mx/cdn/shop/products/10582-SQ.jpg?v=1574195041)

---

a

---

# ¿Qué es la libreria STD de C++?

---

Standard Library es una colección de clases y funciones, que crean la base del lenguaje C++, estas se basan en la Standard Template Library (STL).

librerias más usadas:
\<iostream>: Proporciona funciones de entrada y salida estándar.
\<vector>: Implementa arreglos dinámicos.
\<string>: Ofrece funcionalidades para manipular cadenas de caracteres.
\<algorithm>: Contiene algoritmos genéricos, como clasificación y búsqueda.
\<fstream>: Permite el manejo de archivos.


---

# ¿Qué son las estructuras de datos?

---

# STD::string

---

# STD::vector

función | Descripción
-----|---
vector <_tipo_> _nombre_;                          |a
vector <_tipo_> _nombre_(_tamaño_,_valorInicial_); |    
_nombre_.resize(_tamaño_,_valorInicial_);          |a
_nombre_.shrink_to_fit();                          |
_nombre_.assign(_primIterador_,_ultmIterador);     |a
_nombre_.at(indice);                               |a

---

# STD::set


función | Descripción
-----|---
set <_tipo_> _nombre_;                          |a
set.contains(_valor_); |    
_nombre_.find(_tamaño_,_valorInicial_);          |a
_nombre_.insert();                          |
_nombre_.lower
_nombre_.upper

---

# STD::pair

función | Descripción
-----|---
set <_tipo_> _nombre_;                          |a
set.contains(_valor_); |    
_nombre_.find(_tamaño_,_valorInicial_);          |a
_nombre_.insert();                          |
_nombre_.lower
_nombre_.upper
---

# Referencias
https://en.wikipedia.org/wiki/C%2B%2B_Standard_Library
https://en.wikipedia.org/wiki/Standard_Template_Library
https://cplusplus.com/reference/string/string/
https://cplusplus.com/reference/vector/vector/
https://cplusplus.com/reference/set/set/
https://cplusplus.com/reference/utility/pair/
https://en.wikipedia.org/wiki/Data_structure