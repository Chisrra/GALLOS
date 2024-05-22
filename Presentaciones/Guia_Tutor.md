1 Introduction 
    1.1 Que es la programacion competitiva? 
        https://gpcunmsm.github.io/index.html
    1.2 Que es la algoritmia?
    1.3 Concursos
        1.3.1 Facebook Hacker Cup
        1.3.2 RPC
        1.3.3 ICPC
        ¿Cómo son los Concursos? (ICPC)
    1.4 Plataformas 
    Codeforces
    Codechef
    AtCoder
    topcoder
    HackerEarth
    HackerRank
    csacademy
    LeetCode 
            https://www.youtube.com/watch?v=J267bz_G7xE
  
    1.5 Comunidades activas
        1.5.1 UNAM PU++
        1.5.2 ICPC Mexico ITESO
    1.6 futuro laboral

2. Bases de C++
    2.1 Que es C++ y porque no python,java, rust?
        2.1.1 comparacion de velocidad
        2.2 STL
        2.3 
    2.2 Entorno de desarrollo
        2.1 Cuenta codeforces y cuenta vdjudge
        2.2 Git y cuenta en Github
        2.3 Vscode y extensiones
    2.3 Datos primordiales
        2.3.1 int, long long
        2.3.2 unsigned int, unsigned long long  (mencionar que se puede 10e7)
        2.3.3 float, double
        2.3.4 bool
        2.3.5 char 
        2.3.6 Grafica cuando usar que tipo de dato
    2.4 numeros flotantes y librerias cmath 
    2.5 operadores aritmeticos (modulo %), (const,vars, global vars), I/O
    2.6 control de flujo
        2.6.1 Condiciones, operadores ternarios, switch cases (con rango)
        2.6.2 ciclos whiles, do whiles, for, condiciones de paro (continue,break)
        2.6.3 progresiones, sumatorias y multiplicatorias
        2.6.4 funciones y funciones lambda
        2.6.5 Habilidades duras,(escritura rapida)
    2.7 Junior Training sheet
    https://docs.google.com/spreadsheets/d/1iJZWP2nS_OB3kCTjq8L6TrJJ4o-5lhxDOyTaocSYc-k/edit#gid=84654839
        2.7.1 tiempos esperados de lectura-escritura-solucion
    2.8 STL containers (Estructuras de Datos Lineales)
        2.8.1 Vectores
            2.8.1.1 arrays circulares
            2.8.1.2 matrices (vectores multidimensionales)
            2.8.1.3 bitsets
        2.8.2 Strings y streamstrings
            2.8.2.1 To lower, to upper, to digit to char
            2.8.2.2 Palindromos y anagramas
            2.8.2.3 ciruclares
        2.8.3 pairs y tuplas
        2.8.4 Algoritmos STL (max, min,etc)
        2.8.5 Grafico de que estructura elegir 
    2.9 Apuntadores-Iteradores + STL que devuelven iteradores
    2.10 Errores comunes y debugeo 
        pendejario? 
        visual debug online
        vscode
        #define dbg(...) cerr << "LINE(" << __LINE__ << ") -> [" << #__VA_ARGS__ << "]: [", DBG(__VA_ARGS__) 
3. Algoritmos
    3.1 Complejidad de tiempo y espacio de un algoritmo, big O, notacion asintotica, solo mencionar general de lo demas
    3.2 Identify Problem Types
        3.2.1 ,16 problem types
        3.2.2 ,4 paradigms
        3.2.3 table 
        https://docs.google.com/spreadsheets/d/1-n9Fnvhsnvsqh-IerE_yyIshw5RUNer_7EjwF_GW-TA/edit#gid=745110425
    3.3 Sorting algoritmos
        3.4 divide and conquer  quick sort 
    3.4 busquedas
        3.4.1 busqueda linear 
        3.4.2 divide and conquer, busqueda binaria y busqueda ternaria 
    3.4 Paradigma Greedy Dos punteros
    3.5 binarios
        3.6.1 bitmasking (algoritmos geek for geeks ) 
        3.6.2 ciclos de procesador para multiplicar (ifs anidados es O(1) pero no en cpu, num%2==0 es O(1) pero menos rapido que num & 1 )
        3.6.3 
        3.6.4 Exponenciación binaria
        3.6.5 factorizacion de sumandos binaria, los numeros ya estan factorizados ejem: 10 = 00001010 = 8 + 2
    3.6 Habilidades blandas, teamwork
        https://drive.google.com/drive/folders/1dQyK3OTgdh_HJ7WdZGKrURcMBmeXKDL1
    3.9  estructuras de datos lineales restantes
        3.8.2 pilas
        3.8.1 listas 
        3.8.3 Colas,dequeue,prioriy queue
    3.10 estructuras de datos no lineales
        3.9.1 sets , unordered - multisets
        3.9.2 maps  , unordered - multimaps
    3.11 Logarithms, powers
    3.12 algebra modular
        3.12.1 Modular multiplicative inverse
        3.12.2 Exponenciación modula
    3.13 mCM, MCD, fibonacci
        3.13.1 euclidian algfrithm
  
4 Avanzados
    4.2 Recursion y Programacion dinamica (memoización, tabulación)
    4.3	algebra matricial
    4.4 arboles binarios
        4.4.1 Fenwick
        4.4.2 segment trees 
    4.5 grafos y nodos
        4.5.1 DFS y BFS
        4.5.2 bipartitas
        4.5.3 Ajedrez
        4.5.4  Flood Fill
        4.5.5 backtracking 
    4.6 Binary heap
    4.8 permutaciones
    4.9 combinatoria
        4.9.1 Pascal’s identity
        4.9.2 Binomial theorem
    4.10 Game theory 
        4.10.1 Minimax Algorithm
    4.11 Geometría computacional


Kidlin's law

Algorithmic paradigms
    Complete Search
    Divide and Conquer
    Greedy
    Dynamic Programming



Algorithmic paradigms
    Complete Search
    Divide and Conquer
    Greedy
    Dynamic Programming


Hal Burch conducted an analysis over spring break of 1999 and made an amazing discovery: there are only 16 types of programming contest problems! Furthermore, the top several comprise almost 80% of the problems seen at the IOI. Here they are: 

competitive programming problem types:
1. Ad-Hoc
     `Ad hoc' problems are those whose algorithms do not fall into standard categories with well-studied solutions. Each ad hoc problem is different; no specific or general techniques exist to solve them. 
2. Greedy
3. Computational Geometry
4. Dynamic Programming
5. BigNums
6. Two-Dimensional
7. Eulerian Path
8. Minimum Spanning Tree
9. Knapsack
10. Network Flow
11. Flood Fill
12. Shortest Path
13. Approximate Search
14. Complete Search
15. Recursive Search Techniques
16. Heuristic Search


Here is a table showing the relationship between algorithmic paradigms and competitive programming problem types:

| Problem Type               | Complete Search | Divide and Conquer | Greedy | Dynamic Programming |
|----------------------------|-----------------|--------------------|--------|----------------------|
| Ad-Hoc                     | ✓               | ✓                  | ✓      | ✓                    |
| Greedy                     |                 |                    | ✓      |                      |
| Computational Geometry     | ✓               | ✓                  |        |                      |
| Dynamic Programming        |                 |                    |        | ✓                    |
| BigNums                    |                 |                    |        | ✓                    |
| Two-Dimensional            | ✓               | ✓                  |        | ✓                    |
| Eulerian Path              |                 |                    | ✓      | ✓                    |
| Minimum Spanning Tree      |                 |                    | ✓      |                      |
| Knapsack                   |                 |                    | ✓      | ✓                    |
| Network Flow               |                 |                    | ✓      | ✓                    |
| Flood Fill                 | ✓               |                    |        |                      |
| Shortest Path              | ✓               | ✓                  | ✓      | ✓                    |
| Approximate Search         |                 |                    | ✓      |                      |
| Complete Search            | ✓               |                    |        |                      |
| Recursive Search Techniques| ✓               | ✓                  |        |                      |
| Heuristic Search           | ✓               |                    | ✓      |                      |

### Key:
- **Complete Search**: Methods that involve exhaustive searching through all possibilities, such as backtracking and brute force.
- **Divide and Conquer**: Techniques that break down problems into smaller subproblems, solve them independently, and combine their solutions.
- **Greedy**: Algorithms that make locally optimal choices at each step with the hope of finding a global optimum.
- **Dynamic Programming**: Approaches that solve problems by breaking them into simpler subproblems and storing the results to avoid redundant calculations.



# Problemas por temas 

# Faciles: 
https://codeforces.com/contest/791/problem/A
https://codeforces.com/contest/734/problem/A 
https://codeforces.com/contest/1030/problem/A 
# Truquillos simples (def cases):
https://codeforces.com/contest/263/problem/A 
https://codeforces.com/contest/1919/problem/A 
https://codeforces.com/contest/1921/problem/A 
https://codeforces.com/contest/4/problem/A 
https://codeforces.com/contest/1968/problem/A 
https://codeforces.com/contest/1566/problem/A
# Vector:
https://codeforces.com/contest/344/problem/A 
Array circulares:
https://codeforces.com/contest/731/problem/A  
https://codeforces.com/contest/1971/problem/C
## String ciruclar, permutaciones: https://codeforces.com/problemset/gymProblem/102890/L
## Strings capitalization:
https://codeforces.com/contest/59/problem/A 
https://codeforces.com/contest/281/problem/A 
# strings
https://codeforces.com/contest/1971/problem/B
https://codeforces.com/contest/71/problem/A 
https://codeforces.com/gym/102890/problem/D 
# Substrings: 
Defcase facil https://codeforces.com/contest/766/problem/A
https://codeforces.com/contest/1968/problem/B
# Float:  
https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/U 
Answer = ceil(m/a) * ceil(n/a),https://codeforces.com/contest/1/problem/A 
# Simulacion, juegos, brute force, implementation:
https://codeforces.com/contest/1598/problem/A 
https://codeforces.com/contest/268/problem/A 
https://codeforces.com/contest/294/problem/A 
https://codeforces.com/contest/799/problem/A 

# Two pointer:
https://codeforces.com/contest/448/submission/228960388
Bitmasking: 
https://codeforces.com/contest/1527/problem/A 
Mapas:
https://codeforces.com/contest/1730/problem/A 


# Intro to competitive

## Intro to c++
https://www.geeksforgeeks.org/c-plus-plus/ 
Que es C++:
Es un lenguaje compilado de alto nivel basado en C, que incorpora el paradigma de la programación orientada a objetos a través de clases. Su ventaja sobre otros lenguajes radica en su velocidad y en la amplia funcionalidad gracias a funciones y algoritmos integrados al lenguaje.
Esta en los 3 lenguajes de https://www.tiobe.com/tiobe-index/ 
Datos primordiales 
https://learn.microsoft.com/en-us/cpp/cpp/data-type-ranges?view=msvc-170 
Int     numero= +32;//bits
Long long numero = +64;//bits
Unsigned int =32;//bits 
Unsigned long long numero=64//bits  
Float fraccion= 0.32;//32 bits
Double fraccion = 0.64;//64 bits
Char caracter = ‘C’;
Bool booleano  = true;//false

Entrada salida
Cin cout
template

Flujo de programa, branching
https://rea.ceibal.edu.uy/elp/logica-para-informatica/TablasFinales.png

If(programo == true){
Cout<<”procrastino”;
}else{
Cout<<”Aprendo”;
}
If(programo && estudio){
Cout<<”tendre exito en competencias”;
}else if (programo || estudio){
Cout<<”quiza tenga exito”;
} else {
Cout<<”pues no tendre exito”
} 

   switch(a) 
    { 
 Case’A’:
 Case’1’:
  Cout<<”solo caso A y caso ‘1‘”
 Break;
        case ‘a’ ... ‘z’: 
            cout<<"letras minusculas"<<endl; 
            break; 
 Default:
  Cout<<”lo demas”;
    } 

Ciclos
