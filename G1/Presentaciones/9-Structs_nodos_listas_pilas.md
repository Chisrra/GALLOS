---
marp: true
title: Structs_nodos_listas_pilas
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


# <!--fit--> Structs, nodos, listas y pilas

## Por Ariel Parra. 
![bg opacity:.3](https://cdn.pixabay.com/photo/2016/05/31/15/34/nodes-1427176_1280.png)

---

# ¿Qué son los structs?

![bg h:540 opacity:.3](https://i.pinimg.com/originals/7b/9c/1c/7b9c1c48461433d6b78fbaeb984ac99b.jpg)

---

Son tipos de datos definidos por el usuario que se utilizan para almacenar o agrupar diferentes tipos de datos ordenados. Estos se declaran fuera del main y se pueden asignar valores a las variables del struct desde C++11, pero no se recomienda; las variables creadas a partir de un struct se pueden acceder a travez de punto "." y si se trabaja con punteros de estructuras con el operador flecha "->".

```
struct identificacion{
    string nombre; 
    int celular; 
} usuario1;

int main(){
    usuario1.nombre="ariel"; usuario1.celular=449;
    identificacion usuario2; 
    usuario2.nombre="chisrra"; usuario2.celular=449;
    cout<<usuario1.nombre<<" "<<usuario1.celular<<endl;
    cout<<usuario2.nombre<<" "<<usuario2.celular<<endl;
return 0;
}
 
```

---

# structs anidados

```
struct carro {
    struct m {
       int modelo;
       int cilindros;
    } motor;
    string color;
};

int main() {
    carro ferrari;
    ferrari.motor.modelo=1;
    ferrari.motor.cilindros=6;
    ferrari.color="rojo";
    cout<<ferrari.motor.modelo<<
    " " <<ferrari.motor.cilindros<<
    " " <<ferrari.color<<endl;
return 0;
}
```

---

# punteros de structs


```
struct Sptr {
    int x, y;
};
 
int main(){
    Sptr p1 = { 1, 2 };

    Sptr* p2 = &p1;
    
    cout<< p2->x <<" "<< p2->y;
return 0;
}
```

---

# structs con memoria dinamica 

```
struct id{
    string nombre; 
};
int main(){
    id *escuela=new id[2];
    vector <id> vec (2);
    escuela[0].nombre="ariel";
    vec[0].nombre=escuela[0].nombre;
    escuela[1].nombre="chisrra";
    vec[1].nombre=escuela[1].nombre;
    delete []escuela;
return 0;
```
---

# ¿Qué son los nodos?

![bg opacity:.3](https://www.softwaretestinghelp.com/wp-content/qa/uploads/2019/08/1-tree-and-its-various-parts.png)

---

# ¿Qué son las listas?

![bg opacity:.3](https://www.w3resource.com/w3r_images/linked-list-single-in-c.png)

---

# ¿Qué son las pilas?
![bg h:750 opacity:.1](https://mlstaticquic-a.akamaihd.net/pilas-duracell-alcalinas-aa-pack-x-6-unidades-super-oferta-D_NQ_NP_603355-MLU31379461783_072019-F.jpg)


---


# Referencias

https://www.geeksforgeeks.org/structures-in-cpp/
https://www.w3schools.com/cpp/cpp_structs.asp
https://www.geeksforgeeks.org/list-cpp-stl/
https://www.geeksforgeeks.org/stack-in-cpp-stl/
https://www.geeksforgeeks.org/introduction-to-stack-data-structure-and-algorithm-tutorials/
https://www.geeksforgeeks.org/list-of-stacks-in-c-stl/
https://www.geeksforgeeks.org/data-structures/linked-list/
