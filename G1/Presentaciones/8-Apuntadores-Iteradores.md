---
marp: true
title: Apuntadores e Iteradores
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


# <!--fit--> Apuntadores e Iteradores

## Por Ariel Parra. 
![bg opacity:.3](https://img.ifunny.co/images/c58f724ddb27bcf6156716c6eee5f9a6a7e90f9a676355cb71fd275499553588_1.jpg)

---

# ¿Qué son los apuntadores?

![bg h:700 opacity:.1](https://media.geeksforgeeks.org/wp-content/uploads/20221013162237/PointersinC.png) 


---

Un apuntador también conocido como punteros, son la representación de una dirección, estos son sirven para ahorrar memoria, crear vectores y matrices con memoria dinamica y como paso de parametros.

Este se declara con el operador "*", y se le asignan direcciones de memoria con el operador "&".

---

# Ejemplo:

```cpp
int main(){ 
    int var = 20;
    int* ptr; //ó int *ptr=NULL;
    ptr = &var; // el tipo de dato tiene que ser igual
  
    cout<<endl<< ptr; 
    cout<<endl<< var; 
    cout<<endl<<*ptr; //operador de desreferencia
    *ptr=5;  
    cout<<endl<<*ptr;
  return 0;
}
```

---

# Paso de parametros

---

Con punteros
```cpp
void squarePtr(int* n){
    *n *= *n;
}
```

Con Referencias
```cpp
void squareRef(int& n){
    n *= n;
}
```

---

# Vectores

---

los vectores apuntan a una dirección de memoria que es el inicio de este.

```cpp
int main(){
    int vec[3] = { 10, 20, 30 };
    int* ptr;
    ptr = vec; // ó ptr=&vec[0]; 
    for(int i=0;i<3;i++){
        cout<<endl<<*(ptr+i); //logica de punteros
      //cout<<endl<<  ptr[i];
    }
return 0;
}
```

---

# Matrices

--- 

Las matrices no son más que vectores donde cada valor indica la dirección de memoria de otro vector.


```cpp
int main(){
    const int REN=3, COL=3;
    int mat[REN][COL]={{ 10, 20, 30 },
                       { 40, 50, 60 },
                       { 70, 80, 90 }};
    int* ptr; 
    ptr = &mat[0][0]; 
    for(int i=0;i<REN;i++){
        for(int j=0;j<COL;j++){
            cout<<endl<<*(ptr+i * COL+j) ;
        }
    }
return 0;
}
```
---

# Memoria Dinamica

---

Es la cantidad de memoria que se va usar por tipo de datos y su longitud se define en tiempo de ejecución.


```cpp
int main(){
    int n; cin>>n;
    int* vec = new int[n]; 
    for(int i=0;i<n;i++){
        cin>>*(vec+i);//cin>>vec[i];
    }
    for(int i=0;i<n;i++){
        cout<<endl<<*(vec+i);
    }
    delete[] vec;// ó  delete []vec;
return 0;
}
```
---

# Funciones de tipo puntero

```cpp
int *crearVec(int tam){
    int* aux = new int[n]; 
    for(int i=0;i<tam;i++){
        *(aux+i)=i;
    }
    return aux;
}

int main(){
    int n; cin>>n;
    int* vec = crearVec(n); 
    for(int i=0;i<n;i++){
        cout<<endl<<*(vec+i);
    }
    delete[] vec;
return 0;
}
```

---

# Matrices con memoria dinamica

---

```cpp
int main() {
    int REN,COL; cin>>REN>>COL;
    int** mat = new int*[REN];
    for (int i=0;i<REN;i++){
        mat[i] = new int[COL];
    }
    for (int i=0;i<REN;i++){
        for (int j= 0;j<COL;j++){
            cin>>*(*(mat+i)+j); //cin>>mat[i][j];
        }
    }
    for (int i=0;i<REN;i++){
        for (int j= 0;j<COL;j++){
            cout<<mat[i][j]<<" ";
        };cout<<endl;
    }
    for (int i=0;i<REN;i++){
        delete[] mat[i]; 
    }
    delete[] mat; 
    return 0;
}

```
---

# Matrices con vectores STD

---

```cpp
int main() {
    int REN, COL; cin>>REN>>COL;
    vector <vector<int>> mat (REN,vector<int>(COL));
    for (int i = 0; i < REN; i++) {
        for (int j = 0; j < COL; j++) {
            cin >> mat[i][j];
        }
    }
    for (int i = 0; i < REN; i++) {
        for (int j = 0; j < COL; j++) {
            cout << mat[i][j] << " ";
        };cout << endl;
    }
    return 0;
}
```

---


# ¿Qué es un iterador?
![bg opacity:.1](https://refactoring.guru/images/patterns/cards/iterator-mini-3x.png)

---

Los iteradores son un objeto de c++ que generalizan punteros de manera que permite acceder y trabajar con diferentes estructuras de datos y rangos de estos, hay cinco principales tipos de iteradores: Forward,Bidirectional,Output,Input y Random access. Los primeros dos se usan como una alternativa a los indices de los ciclos for.

Ejemplo de un ciclo for regular:
```cpp
int main() {
    vector<int> numeros = {1, 2, 3, 4, 5};
    for(size_t i=0; i<numeros.size(); i++){
        cout<<i<<" ";
    }
    return 0;
}
```

---

# Iterador implicito de rango (Forward)

```cpp
int main() {
    vector<int> numeros = {1, 2, 3, 4, 5};
    for(int numero : numeros){// usando rangos de iteradores
        cout<<numero<<" ";
    }
    return 0;
}
```

---

# Iteradores explicitos de vectores STD (Bidirectional)

```cpp
int main() {
    vector<int> numeros = {1, 2, 3, 4, 5};
    for(vector<int>::iterator it=numeros.begin(); it!=numeros.end(); it++){
        cout<<*it<<" ";
    }
    return 0;
}

```

---

#  Iterador de tipo automatico (Forward)

```cpp
int main() {
    vector<int> numeros = {1, 2, 3, 4, 5};
    for(auto it=numeros.begin(); it!=numeros.end(); it++){
        cout<<*it<<" ";
    }
    return 0;
}
```
---

# Problemas

Resolver los siguientes problemas usando memoria dinamica, punteros y logica de punteros para la impresion de datos.

[344A: Magnets](https://codeforces.com/problemset/problem/344/A)

[263A: Beutiful Matrix ](https://codeforces.com/problemset/problem/263/A)

---

# Referencias

https://yewtu.be/watch?v=2ybLD6_2gKM
https://www.w3schools.com/cpp/cpp_pointers.asp
https://www.geeksforgeeks.org/cpp-pointers/
https://www.geeksforgeeks.org/new-and-delete-operators-in-cpp-for-dynamic-memory/
https://www.geeksforgeeks.org/introduction-iterators-c/.
https://en.cppreference.com/w/cpp/iterator  
