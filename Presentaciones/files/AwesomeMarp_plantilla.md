---
marp: true
size: 16:9
theme: am_nord
paginate: true
headingDivider: [2,3]
footer: \ *Chuhong (Villa Honghu)* *Awesome Marp Reemplace fácilmente  LaTeX Beamer！13 de enero de 2024(1.3）*
---


<!-- _class: cover_a 
<!-- _header: "" --> 
<!-- _footer: "" --> 
<!-- _paginate: "" --> 

# Awesome LaTeX Beamer！

###### Una plantilla PPT personalizada que es fácil de usar y tiene funciones completas

@primer arcoiris
Nombre : Nijijo Sansho
Fecha : 13 de enero de 2024 (v1.3)
<ch2099058972@163.com>
Awesome-Marp：[GitHub](https://github.com/favourhong/Awesome-Marp)/[Gitee](https://gitee.com/favourhong/Awesome-Marp)

## Awesome Marp contenidos

<!-- _class: cols2_ol_ci fglass toc_a  -->
<!-- _footer: "" -->
<!-- _header: "CONTENTS" -->
<!-- _paginate: "" -->

- [Acerca de las plantillas](#3)
- [portada](#10) 
- [Página de contenido](#16)
- [Columnas y listas de páginas](#20)
- [citas, enlaces y cuadros de citas](#38)
- [Barra de navegación](#45)
- [Otros estilos personalizados](#48)
- [Conceptos básicos ](#56)
- [la ultima pagina](#59)

## 1. Acerca de las plantillas

<!-- _class: trans -->
<!-- _footer: "" -->
<!-- _paginate: "" -->

## 1. Acerca de las plantillas

- **Antes de comenzar:** Necesitas conocer varias herramientas, Markdown, editor de Markdown (VS Code u Obsidian) y Marp. No daré una introducción detallada sobre cuáles son estos tres, pero habrá contenido conciso para su referencia en [Página 55](#55)-[Página 58](#58). proporcionado Hay muchos enlaces.
- **¿Por qué desarrollar Awesome Marp?**
  - Marp solo proporciona 3 temas de forma nativa (`default` / `gaia` / `uncover`), y el efecto de renderizado es promedio. Así que lo modifiqué mientras lo usaba según mi propio uso.
  - **La versión 1.3 lanzada actualmente tiene 38 estilos personalizados y 6 colores de temas** (los efectos de renderizado se mostrarán más adelante)
- **Algunas características de Awesome Marp:**
  - Admite presentación de columnas, admite llamadas (similares a los cuadros de teoremas en Beamer), proporciona múltiples tipos de portada y página de contenido, puede implementar barras de progreso de navegación y admite alineación personalizada centro/izquierda/derecha de imágenes, etc.
- [GitHub](https://github.com/favourhong/Awesome-Marp) y [Gitee](https://gitee .com/favourhong/Awesome-Marp)
- Herramientas utilizadas: software [Visual Studio Code](https://code.visualstudio.com) u [Obsidian](https://obsidian.md/), [Marp for VScode (plug-in)](https://marketplace.visualstudio.com/items?itemName=marp-team.marp-vscode)
## 1. Acerca de las plantillas


- Awesome Marp admite 38 estilos personalizados, (por ejemplo, `<!-- _class: trans -->`):

| Portada   | contenido  | Lista       | citas | Otro 1                        | Otro 2                                                           |
| --------- | -------------------- | ----------- | ------------- | ---------------------------- | ---------------------------------------------------------------- |
| `cover_a` | `toc_a`              | `cols-2`    | `bq-black`    | Página de transición `trans` | Título de gráficos, etc. `caption`                               |
| `cover_b` | `toc_b`              | `cols-2-64` | `bq-purple`   | La última página `lastpage`  | Efecto de vidriolistas no anidadas `fglass`       |
| `cover_c` |                      | `cols-2-73` | `bq-red`      | Barra de navegación `navbar` | Nota al pie: `footnote`                                          |
| `cover_d` |                      | `cols-3`    | `bq-blue`     | Título fijo sin fondo `fixedtitleA` | Ajuste tam fuente: `tinytext`/`smalltext`/<br>`largetext`/`hugetext` |
| `cover_e` |                      | `cols-2-46` | `bq-green`    | Título fijo con fondo `fixedtitleB` |                                                                  |
|           |                      | `cols-2-37` |               | Lista order 2 col `cols2_ol_sq/ci`                  |                                                                  |
|           |                      | `rows-2`    |               | List no order 2 col `cols_ul_sq/ci`                |                                                                  |
|           |                      | `pin-3`     |               | Lista order 1 col `col1_ul_sq/ci`                    |                                                                  |

## 1. Acerca de las plantillas

- cómo usar:
  - **Con VS Code**: use VS Code directamente para abrir la carpeta `Awesome-Marp`
    - Si desea "usarlo de inmediato", simplemente realice modificaciones basadas en el archivo de código fuente de Markdown que compartí ~
    - Si no está satisfecho con algunos de los efectos y desea realizar ajustes simples, actualmente hay 6 archivos CSS en `Awesome-Marp/themes`. Estos archivos CSS determinan el efecto de renderizado final del código fuente de Markdown. para cambiarlo ~
    - Si puedes personalizar tu propio archivo CSS personalizado, no olvides agregar la ruta del archivo CSS en `Awesome-Marp/.vscode/settings.json` antes de renderizar~
  - **Con Obsidian**: Instale [complemento Marp Slides](https://github.com/samuele-cozzi/obsidian-marp-slides) y configure la ruta CSS correspondiente

- Fuentes: debido a preocupaciones sobre problemas de derechos de autor, debe descargar e instalar las fuentes usted mismo. Las fuentes utilizadas por Awesome Marp son:

## 1. Acerca de las plantillas： registro de cambios

- [Awesome  He desarrollado un conjunto completo de temas de Marp, ¡y el PPT convertido de Markdown también puede verse genial](https://mp.weixin.qq.com/s?__biz=MzkwOTE3NDExOQ==&mid=2247486787&idx=1&sn=2652ddae81f50240844cb652780912e1&chksm=c13ff94bf648705da1ba986b91265e3ff018acaffcfa60d7807a81be22176005e7a2b4483627&scene=178&cur_album_id=3132459596339757070#rd)
- [Awesome Marp v1.1 La línea de título no flota con el texto, esta vez se parece más Beamer！](https://mp.weixin.qq.com/s?__biz=MzkwOTE3NDExOQ==&mid=2247486800&idx=1&sn=527348e242576079e4bd6cd1823c823a&chksm=c13ff958f648704e40a202db6ad5fa215ef4c189d66403e161d6ace9828406a8747ac755684f&scene=178&cur_album_id=3132459596339757070#rd)
- [Awesome Marp v1.2：Agregue notas al pie, ajuste el tamaño de fuente y otros estilos](https://mp.weixin.qq.com/s?__biz=MzkwOTE3NDExOQ==&mid=2247486825&idx=1&sn=56d632ce164831438ec87c1b20ed4c4c&chksm=c13ff961f64870774f069ab816340783d8f54fd6b89363b8d9412c593efc640851ce9edd8833&scene=178&cur_album_id=3132459596339757070#rd) 


## Veamos el efecto a continuación.  

<!-- _class: trans -->
<!-- _footer: "" -->
<!-- _paginate: "" -->

## 2. portada

<!-- _class: trans -->
<!-- _footer: "" -->
<!-- _paginate: "" -->

---

- Título grande: utilice el título de primer nivel `# ` (por ejemplo: `# Awesome Marp: Custom Marp theme`)
- Subtítulo: utilice un título de seis niveles `###### ` 
- Este conjunto de plantillas proporciona 5 estilos de portada. Al usarlos, debe configurar instrucciones locales en la página, como: `<!-- _class: cover_a -->`.
  - `cover_a`:[Tipo 1](#1)
  - `cover_b`: [Tipo 2](#12)
  - `cover_c`: encabezado reservado para configurar el logotipo de la escuela, pie de página para configurar el lema de la escuela [Tipo 3](#13)
  - `cover_d`: solo se reserva el lema de la escuela para la configuración del pie de página [Tipo 4](#14)
  - `cover_e`: reserve el encabezado para configurar el logotipo de la escuela y el pie de página para configurar el logotipo y el nombre de la escuela [Tipo 5](#15)
- Si ha establecido un pie de página global, encabezado o número de página, pero no desea que aparezca en la portada, puede `<!-- _footer: "" -->` / `<!-- _header: "" - ->` / `<!-- _paginate: "" -->` ocultarlos parcialmente respectivamente
- Cuando el texto del título excede el ancho de la página, se desbordará y se ajustará. Aquí puede usar `<!-- fit -->` para ajustar automáticamente el tamaño del texto de acuerdo con el ancho de la página.
---

<!-- _class: cover_b -->
<!-- _header: "" -->
<!-- _footer: "" -->
<!-- _paginate: "" -->

# Awesome marp LaTeX Beamer！

###### "Una plantilla PPT personalizada, funciones completas"

@primer arcoiris
Nombre : Nijijo Sansho
Fecha : 13 de enero de 2024 (v1.3)
<ch2099058972@163.com>
Awesome-Marp 地址：[GitHub 库](https://github.com/favourhong/Awesome-Marp)/[Gitee 库](https://gitee.com/favourhong/Awesome-Marp)

---

<!-- _class: cover_c -->
<!-- _paginate: "" -->
<!-- _footer: Ser sabio y virtuoso-->
<!-- _header: ![](https://mytuchuang-1303248785.cos.ap-beijing.myqcloud.com/picgo/202309231557236.png) -->

# <!-- fit -->Awesome marp  LaTeX Beamer！

###### "Una plantilla PPT personalizada que es fácil de usar y tiene funciones completas"

@primer arcoiris
Nombre : Nijijo Sansho
Fecha : 13 de enero de 2024 (v1.3)
<ch2099058972@163.com>


---

<!-- _class: cover_d -->
<!-- _paginate: "" -->
<!-- _footer: "Ser sabio y virtuoso, estudiar" -->

# <!-- fit -->Awesome Marp: LaTeX Beamer！

###### "Una plantilla PPT personalizada que es fácil de usar y tiene funciones completas"

@primer arcoiris
Nombre : Nijijo Sansho
Fecha : 13 de enero de 2024 (v1.3)
<ch2099058972@163.com>
Awesome-Marp 地址：[GitHub 库](https://github.com/favourhong/Awesome-Marp)/[Gitee 库](https://gitee.com/favourhong/Awesome-Marp)

---

<!-- _class: cover_e -->
<!-- _paginate: "" -->
<!-- _footer: ![](https://mytuchuang-1303248785.cos.ap-beijing.myqcloud.com/picgo/202309231557236.png) -->
<!-- _header: ![](https://mytuchuang-1303248785.cos.ap-beijing.myqcloud.com/picgo/202309231558983.png) -->


# <!-- fit -->Awesome Marp: LaTeX Beamer！

###### "Una plantilla PPT personalizada que es fácil de usar y tiene funciones completas"

@primer arcoiris
Nombre : Nijijo Sansho
Fecha : 13 de enero de 2024 (v1.3)
<ch2099058972@163.com>
Awesome-Marp 地址：[GitHub 库](https://github.com/favourhong/Awesome-Marp)/[Gitee 库](https://gitee.com/favourhong/Awesome-Marp)

## 3. Página de contenido

<!-- _class: trans -->
<!-- _footer: "" -->
<!-- _paginate: "" -->

## 3. Página de contenido 
- Awesome Marp proporciona al menos 2 estilos de página de contenido, y también debes configurar estilos locales al usarlos.
  - `toc_a`: el contenido del encabezado debe establecerse en `CONTENTS`, es decir, `<!-- _header: "CONTENTS" -->`
  - `toc_b`: Debes establecer el contenido del encabezado en `Tabla de contenido<br>CONTENTS<br>tu dirección de LOGO`, es decir, `<!-- _header: Tabla de contenido<br>CONTENTS<br>![ ](./logo.png)-->`
  - Varios estilos de lista de columnas proporcionados también se pueden usar como Página de contenido, como `<!-- _class: cols2_ol_ci fglass -->` (consulte [aquí](#32) para ver el efecto)

-De manera similar, si se ha definido un pie de página global o un número de página, puede usar `<!-- _footer: "" -->` / `<!-- _paginate: "" -->` para ocultarlo localmente respectivamente.
- Estilos de página de contenido: [Tipo 1](#2), [Tipo 2](#18) y [Tipo 3](#19)

---

<!-- _class: toc_a -->
<!-- _header: "CONTENTS" -->
<!-- _footer: "" -->
<!-- _paginate: "" -->

- [Acerca de las plantillas](#3)
- [portada](#10) 
- [Página de contenido](#16)
- [Columnas y listas de páginas](#20)
- [citas, enlaces y cuadros de citas](#38)
- [Barra de navegación](#45)
- [Otros estilos personalizados](#48)
- [Conceptos básicos ](#56)
- [la ultima pagina](#59)

---

<!-- _header: Tabla de contenido<br>CONTENTS<br>![](https://mytuchuang-1303248785.cos.ap-beijing.myqcloud.com/picgo/202309231558983.png)-->
<!-- _class: toc_b -->
<!-- _footer: "" -->
<!-- _paginate: "" -->

- [Acerca de las plantillas](#3)
- [portada](#10) 
- [Página de contenido](#16)
- [Columnas y listas de páginas](#20)
- [citas, enlaces y cuadros de citas](#38)
- [Barra de navegación](#45)
- [Otros estilos personalizados](#48)
- [Conceptos básicos ](#56)
- [la ultima pagina](#59)


## 4. Columnas y listas de páginas

<!-- _class: trans -->
<!-- _footer: "" -->
<!-- _paginate: "" -->

## 4.1 Columnas y listas de páginas：columnas de página
- Awesome Marp proporciona 8 columnas de páginas, que son:
  - `cols-2`: [dos columnas divididas en columnas, divididas en partes iguales](#23)
  - `cols-2-64`: [dos columnas, seis y cuatro puntos](#24)
  - `cols-2-73`: [dos columnas divididas en siete y tres puntos](#25)
  - `cols-2-46`: [dos columnas, de cuatro a seis puntos](#26)
  - `cols-2-37`: [dos columnas divididas en columnas, de tres a siete puntos] (#27)
  - `cols-3`: [Tres columnas divididas en partes iguales](#28)
  - `filas-2`: [Dos filas y columnas](#29)
  - `pin-3`: [columna de fuente de pin] (#30)

- Si una determinada columna es una imagen, puede reemplazar `class=ldiv` con `class=limg`, lo que puede lograr la alineación central vertical de la imagen (`class=ldiv` es la alineación superior)

## 4.1 Columnas y listas de páginas：columnas de página

- Tomando `<!-- _class: cols-2 -->` como ejemplo, el código fuente de Markdown es:

```markdown
<!-- _class: cols-2 -->  
<div class=ldiv>
El contenido de la primera columna (columna izquierda) va aquí

El contenido puede ser texto sin formato, una lista o un bloque de citas, un enlace, una imagen, etc.
</div>

<div class=rdiv>
El contenido de la segunda columna (columna derecha) va aquí
</div>

```

- Si está dividido en tres columnas (`<!-- _class: cols-3 -->`), necesita agregar otra etiqueta `<div class="mdiv"></div>`


## "Luz de luna sobre el estanque de lotos" (55/2 columnas)

<!-- _class: cols-2 -->

<div class=ldiv>
Las hojas estaban densamente apiñadas una al lado de la otra, y parecía haber una onda de azul sólido. Debajo de las hojas hay venas de agua corriente, que están cubiertas y no se ven algunos colores pero las hojas son aún más hermosas

——Zhu Ziqing "Luz de luna sobre el estanque de lotos" [regresar](#21)
</div>

<div class=rimg>

<!-- ![#c](https://mytuchuang-1303248785.cos.ap-beijing.myqcloud.com/picgo/202309221014499.png) -->
![#c](https://mytuchuang-1303248785.cos.ap-beijing.myqcloud.com/picgo/202309221630151.png)
</div>

## "Primavera" (dos columnas, sesenta y cuatro puntos)

<!-- _class: cols-2-64 -->

<div class=limg>

![#c](https://mytuchuang-1303248785.cos.ap-beijing.myqcloud.com/picgo/202309201217248.png)
</div>

<div class=rdiv>

Esperando con ansias, con ansias, llega el viento del este, se acercan los pasos de la primavera.Todo parecía como si acabara de despertar y Xinxinran abrió los ojos. Las montañas están húmedas, el agua sube y el sol se sonroja.La hierba emergió secretamente del suelo, tierna y verde. En el jardín y en el campo se puede observar que hay grandes zonas llenas de ellos. Siéntate, acuéstate, rueda unas cuantas veces, patea unas cuantas pelotas. El viento está tranquilo y la hierba está suave. 
—— "Primavera" de Zhu Ziqing [regresar](#21)
</div>

## Poemas clásicos en prosa (dos columnas y 63 puntos)

<!-- _class: cols-2-73 -->

<div class=limg>

![#c](https://mytuchuang-1303248785.cos.ap-beijing.myqcloud.com/picgo/202309221010523.png)

</div>

<div class=rdiv>

Los poemas en prosa clásicos incluyen:

- Zhu Ziqing: "Luz de luna sobre el estanque de lotos"
- Lin Qingxuan: "La luna llega al corazón del cielo"
- Yu Dafu: "Otoño en la antigua capital"
- Zhang Ailing: "El sonido de las flores que caen"
- Yu Guangzhong: "Escucha la lluvia fría"
[regresar](#21)
</div>

## "Primavera" (dos columnas, 46 puntos)

<!-- _class: cols-2-46 -->

<div class=ldiv>


Esperando con ansias, con ansias, llega el viento del este, se acercan los pasos de la primavera.

Todo parecía como si acabara de despertar y Xinxinran abrió los ojos. Las montañas están húmedas, el agua sube y el sol se sonroja.

La hierba emergió secretamente del suelo, tierna y verde. En el jardín y en el campo se puede observar que hay grandes zonas llenas de ellos. Siéntate, acuéstate...
—— "Primavera" de Zhu Ziqing

[regresar](#21)
</div>

<div class=rimg>

![#c](https://mytuchuang-1303248785.cos.ap-beijing.myqcloud.com/picgo/202309201217248.png)
</div>

## Poemas clásicos en prosa (dos columnas y 37 puntos)

<!-- _class: cols-2-37 -->

<div class=ldiv>
Los poemas en prosa clásicos incluyen:

- Zhu Ziqing: "Luz de luna sobre el estanque de lotos"
- Lin Qingxuan: "La luna llega al corazón del cielo"
- Yu Dafu: "Otoño en la antigua capital"
- Zhang Ailing: "El sonido de las flores que caen"
- Yu Guangzhong: "Escucha la lluvia fría"
- Liang Shiqiu: "Casa elegante"
[regresar](#21)
</div>

<div class=rimg>

![#c](https://mytuchuang-1303248785.cos.ap-beijing.myqcloud.com/picgo/202309221010523.png)
</div>

## Verano y Otoño (tres columnas y tres partes iguales)

<!-- _class: cols-3 -->

<div class=ldiv>

![#center](https://mytuchuang-1303248785.cos.ap-beijing.myqcloud.com/picgo/202309201206630.png)

</div>

<div class=mdiv>

![#center](https://mytuchuang-1303248785.cos.ap-beijing.myqcloud.com/picgo/202309201151809.png)

![#center](https://mytuchuang-1303248785.cos.ap-beijing.myqcloud.com/picgo/202309201158036.png)
</div>

<div class=rdiv>

![#center](https://mytuchuang-1303248785.cos.ap-beijing.myqcloud.com/picgo/202309201154535.png)

[regresar](#21)
</div>


## Montañas y desiertos (dos filas y columnas)

<!-- _class: rows-2 -->

<div class="timg">

![#c h:250](https://mytuchuang-1303248785.cos.ap-beijing.myqcloud.com/picgo/202401131736186.png)
</div>

<div class="bimg">

![#c h:260](https://mytuchuang-1303248785.cos.ap-beijing.myqcloud.com/picgo/202401131737821.png)
</div>

## "El Misterio del Universo" (columnas con forma de personajes)

<!-- _class: pin-3 -->

<div class="tdiv">

> Hace cuatrocientos años, dos científicos muy diferentes traspasaron los límites de lo que entonces se conocía. En Venecia, en 1609, Galileo Galilei observó las estrellas a través de un telescopio, fabricó instrumentos y realizó experimentos. En Praga, el teólogo Johannes Kepler, que era licenciado, descubrió las leyes del movimiento planetario, sentó las bases de la astrofísica moderna y reflexionó sobre la gran estructura del universo. Basándose en una fascinante correspondencia que ha recibido poca atención hasta ahora, Thomas de Padua cuenta la historia... 
—"El misterio del universo"
 </div>

<div class="limg">

![#c](https://mytuchuang-1303248785.cos.ap-beijing.myqcloud.com/picgo/202401131712626.png)
</div>

<div class="rimg">

![#c h:260](https://mytuchuang-1303248785.cos.ap-beijing.myqcloud.com/picgo/202401131713779.png)
</div>


## 4.2 Columnas y listas de páginas: clasificación de listas

Awesome Marp v1.3 proporciona 6 formas de ordenar listas, a saber:

- `cols2_ol_sq`: El efecto de renderizado es [lista ordenada + número de serie cuadrado](#32)
- `cols2_ol_ci`: El efecto de renderizado es [lista ordenada + número de serie circular](#33)
- `cols2_ul_sq`: El efecto de renderizado es [lista desordenada + número de serie cuadrado](#34)
- `cols2_ul_ci`: El efecto de renderizado es [lista desordenada + número de serie circular](#35)
- `col1_ul_sq`: El efecto de renderizado es [lista ordenada + número de serie cuadrado](#36)
- `col1_ul_ci`: el efecto de renderizado es [lista ordenada + número circular](#37)


## Microeconomía: una perspectiva moderna

<!-- _class: cols2_ol_sq fglass -->

El efecto de renderizado es **lista ordenada+número de serie cuadrado**
El estilo personalizado es: `<!-- _class: cols2_ol_sq fglass -->`

- Economía del bienestar: modelos unipersonales y multipersonales
- Teoría de la empresa: modelos de un solo insumo y de múltiples insumos
- mercado competitivo perfecto
- Monopolio perfecto, competencia monopolística y duopolio.
- teoría de juego
- Economía de intercambio y economía de producción.
- Externalidades y bienes públicos
- Incertidumbre, utilidad esperada e información asimétrica

[regresar](#28)


## Microeconomía: una perspectiva moderna

<!-- _class: cols2_ol_ci fglass -->

El efecto de renderizado es **lista ordenada + número de serie circular** es:`<!-- _class: cols2_ol_ci fglass -->`

- Preferencias y utilidad
- Restricciones presupuestarias y opciones óptimas de los consumidores.
- función de demanda
- Funciones de oferta de trabajo y ahorro.
- Economía del bienestar: modelos unipersonales y multipersonales
- Teoría de la empresa: modelos de un solo insumo y de múltiples insumos
- Economía de intercambio y economía de producción.
- Externalidades y bienes públicos
- Incertidumbre, utilidad esperada e información asimétrica

[regresar](#28)

## "Dentro del asunto"

<!-- _class: cols2_ul_sq fglass -->
El efecto de renderizado es **lista desordenada + número de serie cuadrado**
El estilo personalizado es: `<!-- _class: cols2_ul_sq fglass -->`

- Capítulo 1: Facultades y Asuntos del Gobierno Local
- Capítulo 2: Finanzas, Impuestos y Comportamiento Gubernamental
- Capítulo 3: Inversión, Financiamiento y Deuda del Gobierno
- Capítulo 4: El papel del gobierno en la industrialización
- Capítulo 5: Urbanización y Desequilibrio
- Capítulo 6: Deuda y Riesgo
- Capítulo 7: Desequilibrios nacionales e internacionales
- Capítulo 8: Gobierno y desarrollo económico
[regresar](#28)

## "Dentro del asunto"

<!-- _class: cols2_ul_ci fglass -->

El efecto de renderizado es **lista desordenada + número de serie circular**
El estilo personalizado es: `<!-- _class: cols2_ul_ci fglass -->`

- Capítulo 1: Facultades y Asuntos del Gobierno Local
- Capítulo 2: Finanzas, Impuestos y Comportamiento Gubernamental
- Capítulo 3: Inversión, Financiamiento y Deuda del Gobierno
- Capítulo 4: El papel del gobierno en la industrialización
- Capítulo 5: Urbanización y Desequilibrio
- Capítulo 6: Deuda y Riesgo
- Capítulo 7: Desequilibrios nacionales e internacionales
- Capítulo 8: Gobierno y desarrollo económico

[regresar](#28)

## Microeconomía: una perspectiva moderna

<!-- _class: col1_ol_sq fglass -->
El efecto de representación es **columna única+lista ordenada+número de serie cuadrado**
El estilo personalizado es: `<!-- _class: col1_ul_sq fglass -->`

- Restricciones presupuestarias y opciones óptimas de los consumidores.
- Funciones de oferta de trabajo y ahorro.
- Economía del bienestar: modelos unipersonales y multipersonales
- Teoría de la empresa: modelos de un solo insumo y de múltiples insumos
- mercado competitivo perfecto
- Monopolio perfecto, competencia monopolística y duopolio.
- Economía de intercambio y economía de producción.
- Incertidumbre, utilidad esperada e información asimétrica

## Microeconomía: una perspectiva moderna

<!-- _class: col1_ol_ci fglass -->

El efecto de representación es **columna única + lista ordenada + número de serie circular**
El estilo personalizado es: `<!-- _class: col1_ul_ci fglass -->`

- Restricciones presupuestarias y opciones óptimas de los consumidores.
- Funciones de oferta de trabajo y ahorro.
- Economía del bienestar: modelos unipersonales y multipersonales
- Teoría de la empresa: modelos de un solo insumo y de múltiples insumos
- mercado competitivo perfecto
- Monopolio perfecto, competencia monopolística y duopolio.
- Economía de intercambio y economía de producción.
- Incertidumbre, utilidad esperada e información asimétrica

## 5. Citas, enlaces y notas


<!-- _class: trans -->
<!-- _footer: "" -->
<!-- _paginate: "" -->

## 5. Citas, enlaces y notas


- El efecto de representación de la referencia es:

> El Método de Control Sintético fue propuesto por primera vez por Abadie y Gardeazabal (2003) para estudiar los costos económicos de las actividades terroristas en el País Vasco, España, y cae dentro de la categoría de Estudio de Caso.

- Efecto de presentación de enlace:
  - [Limpieza de datos económicos y práctica de Stata: tres bases de datos de ciudades importantes a nivel de prefectura y datos de empresas que cotizan en CSMAR](https://mp.weixin.qq.com/s/D0cYVPJJsNiu61GcYwV6cg)
  - [Conceptos básicos de Stata: a partir del establecimiento del sistema de carpetas de papel](https://mp.weixin.qq.com/s?__biz=MzkwOTE3NDExOQ==&mid=2247486489&idx=1&sn=2eb51e85a01541c7a552a9434e087512&scene=21#wechat_redirect)
- Las leyendas son estilos personalizados proporcionados por Awesome Marp, disponibles en 5 colores:
  - [Púrpura](#40): `bq-púrpura`
  - [Azul](#41): `bq-azul`
  - [Verde](#42): `bq-verde`
  - [Rojo](#43): `bq-rojo`
  - [Negro](#44): `bq-negro`

## 5. citas, enlaces y cuadros de citas

<!-- _class:  bq-purple -->

- El estilo personalizado es:`<!-- _class:  bq-purple -->`

>Método de control sintético
>
> El SCM fue propuesto por primera vez por Abadie y Gardeazabal (2003) para estudiar los costos económicos de las actividades terroristas en el País Vasco de España, lo que entra dentro de la categoría de Estudio de Caso. Athey & Imbens (2017) la consideran la innovación más importante en métodos de medición de los últimos 15 años. <br>
> La idea básica del método de control sintético es: aunque es imposible encontrar la mejor zona de control en el País Vasco, se pueden hacer combinaciones lineales adecuadas (dados diferentes pesos) de varias grandes ciudades de España para construir una zona más adecuada. "área de control sintético" Región de Control "(Región de Control Sintético), y luego comparar el País Vasco real con el "País Vasco Sintético" para obtener el impacto del ataque terrorista.

[regresar](#39)

## 5. citas, enlaces y cuadros de citas

<!-- _class:  bq-blue -->

- El estilo personalizado es:`<!-- _class:  bq-blue -->`

>Método de control sintético
>
> El SCM fue propuesto por primera vez por Abadie y Gardeazabal (2003) para estudiar los costos económicos de las actividades terroristas en el País Vasco de España, lo que entra dentro de la categoría de Estudio de Caso. Athey & Imbens (2017) la consideran la innovación más importante en métodos de medición de los últimos 15 años. <br>
> La idea básica del método de control sintético es: aunque es imposible encontrar la mejor zona de control en el País Vasco, se pueden hacer combinaciones lineales adecuadas (dados diferentes pesos) de varias grandes ciudades de España para construir una zona más adecuada. "área de control sintético" Región de Control "(Región de Control Sintético), y luego comparar el País Vasco real con el "País Vasco Sintético" para obtener el impacto del ataque terrorista.

[regresar](#39)

## 5. citas, enlaces y cuadros de citas

<!-- _class:  bq-green -->

- El estilo personalizado es:`<!-- _class:  bq-green -->`

>Método de control sintético
>
> El SCM fue propuesto por primera vez por Abadie y Gardeazabal (2003) para estudiar los costos económicos de las actividades terroristas en el País Vasco de España, lo que entra dentro de la categoría de Estudio de Caso. Athey & Imbens (2017) la consideran la innovación más importante en métodos de medición de los últimos 15 años. <br>
> La idea básica del método de control sintético es: aunque es imposible encontrar la mejor zona de control en el País Vasco, se pueden hacer combinaciones lineales adecuadas (dados diferentes pesos) de varias grandes ciudades de España para construir una zona más adecuada. "área de control sintético" Región de Control "(Región de Control Sintético), y luego comparar el País Vasco real con el "País Vasco Sintético" para obtener el impacto del ataque terrorista.

[regresar](#39)

## 5. citas, enlaces y cuadros de citas

<!-- _class:  bq-red -->

- El estilo personalizado es:`<!-- _class:  bq-red -->`

>Método de control sintético
>
> El SCM fue propuesto por primera vez por Abadie y Gardeazabal (2003) para estudiar los costos económicos de las actividades terroristas en el País Vasco de España, lo que entra dentro de la categoría de Estudio de Caso. Athey & Imbens (2017) la consideran la innovación más importante en métodos de medición de los últimos 15 años. <br>
> La idea básica del método de control sintético es: aunque es imposible encontrar la mejor zona de control en el País Vasco, se pueden hacer combinaciones lineales adecuadas (dados diferentes pesos) de varias grandes ciudades de España para construir una zona más adecuada. "área de control sintético" Región de Control "(Región de Control Sintético), y luego comparar el País Vasco real con el "País Vasco Sintético" para obtener el impacto del ataque terrorista.

[regresar](#39)

## 5. citas, enlaces y cuadros de citas

<!-- _class:  bq-black -->

- El estilo personalizado es:`<!-- _class:  bq-black -->`

>Método de control sintético
>
> El SCM fue propuesto por primera vez por Abadie y Gardeazabal (2003) para estudiar los costos económicos de las actividades terroristas en el País Vasco de España, lo que entra dentro de la categoría de Estudio de Caso. Athey & Imbens (2017) la consideran la innovación más importante en métodos de medición de los últimos 15 años. <br>
> La idea básica del método de control sintético es: aunque es imposible encontrar la mejor zona de control en el País Vasco, se pueden hacer combinaciones lineales adecuadas (dados diferentes pesos) de varias grandes ciudades de España para construir una zona más adecuada. "área de control sintético" Región de Control "(Región de Control Sintético), y luego comparar el País Vasco real con el "País Vasco Sintético" para obtener el impacto del ataque terrorista.

[regresar](#39)


## 6. Barra de navegación

<!-- _class: trans -->
<!-- _footer: "" -->
<!-- _paginate: "" -->

## 6. Barra de navegación

<!-- _class: navbar -->
<!-- _header: \ ***@Awesome Marp*** *Acerca de las plantillas* *portada* *Página de contenido* **Barra de navegación** -->

- Una digresión: la intención original de crear la plantilla Awesome Marp fue la pregunta de varios amigos y fanáticos de cuentas públicas: "¿Puede Marp también lograr la Barra de navegación superior como Beamer? Para lograr el efecto de Barra de navegación, yo". He hecho mucho Después de aprender algunos conocimientos de CSS, este conjunto de plantillas tomó forma.

- El estilo personalizado es `navbar`: `<!-- _class: navbar -->`
- Se modifica la barra de navegación del encabezado, se debe agregar `\` al frente
- Título activo actual, use negrita `**negrita**`
- Para títulos restantes inactivos, utilice cursiva `*italic*`
- Si hay texto en el lado izquierdo, debe usar cursiva y negrita `***bold italic***`
- De forma predeterminada, el espacio se asigna automáticamente según el contenido. Si desea alinear a la derecha, puede agregar espacios manualmente para promover la alineación a la derecha.

## 6. Barra de navegación

<!-- _header: \ ***@Awesome Marp*** *Acerca de las plantillas* *portada* *Página de contenido* **Barra de navegación**-->
<!-- _class: navbar -->

Parte del código fuente de Markdown de esta página:

```markdown
<!-- _class: navbar -->
<!-- _header: \ ***Villa Honghu***      

- 自定义样式为 `navbar`：`<!-- _class: navbar -->` 
- Se modifica la barra de navegación del encabezado, se debe agregar `\` al frente
- Título de la actividad actual: utilice negrita `**negrita**`
- Títulos inactivos restantes: use cursiva `*italic*`
- Si hay texto a la izquierda: use cursiva negrita `***bold cursiva***`
De forma predeterminada,el espacio se asigna automáticamente según el contenido. 
Si desea alinear a la derecha, puede agregar espacios manualmente para promover la alineación a la derecha.
``` 

## 7. Otros estilos personalizados

<!-- _class: trans -->
<!-- _footer: "" -->
<!-- _paginate: "" -->



## 7.1Fila de encabezado fija:como Beamer（`fixedtitleA`）

<!-- _class: fixedtitleA -->
- Estilo personalizado: `<!-- _class: fixtitleA -->`
  
  - Hacer que la barra de título de la página actual esté fija en la parte superior en lugar de flotar con la cantidad de contenido
  
  - Al mismo tiempo, el contenido de la página también se escribirá desde la parte superior en lugar de centrado verticalmente.

## 7.1Fila de encabezado fija: com Beamer （`fixedtitleB`）

<!-- _class: fixedtitleB -->


<div class="div">
- Estilo personalizado: `<!-- _class: fixtitleB -->`
  
  - `fixedtitleB` comparado con `fixedtitleA`, el título tiene un bloque de color de fondo y el tamaño del título se reduce.
  
  - El resto de los efectos son los mismos que `fixedtitleA`
  
  - Pero el contenido del cuerpo de la página debe incluirse en la etiqueta `<div class="div'></div>`".
</div>

---

<!-- _class: footnote -->

<div class="tdiv">

#### 7.2 Estilos personalizados para notas al pie：`footnote`

Instrucciones:

- Estilo personalizado: `<!-- _class: nota al pie -->`
- El resto del contenido de la página, excepto las notas a pie de página, debe escribirse en `<div class = "tdiv"></div>`
- El contenido del pie de página de la página está escrito en `<div class = "bdiv"></div>`

Por ejemplo, muestre el efecto de visualización:

- Por un lado, otros sectores basándose en la asignación intertemporal de capital, ampliando así la brecha de ingresos externos $^1$ entre los sectores financieros y no financierosinterno $^2$.
</div>

<div class="bdiv">

1 Zhang Tiandi. El impacto de la financiarización en la brecha de ingresos entre las industrias financieras y no financieras de China [J].
2 Hein E. Finance-dominated capitalism and re-distribution of income: a Kaleckian perspective[J]. Cambridge Journal of Economics, 2015, 39(3): 907-934.
</div>

## 7.3 Estilos personalizados para ajustar el tamaño del texto

<!-- _class: largetext -->
Para ajustar el tamaño de fuente, debería ser muy conveniente modificar directamente el archivo CSS. Sin embargo, algunos amigos sugirieron que "esperamos agregar estilos personalizados para el ajuste de fuente", por lo que actualmente se proporcionan cuatro estilos de ajuste:
- Estilo personalizado 1: `<!-- _class: tinytext -->` (0,8 veces el tamaño de fuente predeterminado)
- Estilo personalizado 2: `<!-- _class: texto pequeño -->` (0,9 veces el tamaño de fuente predeterminado)
- Estilo personalizado 3: `<!-- _class: texto grande -->` (1,15 veces el tamaño de fuente predeterminado)
- Estilo personalizado 4: `<!-- _class: hugetext -->` (1,3 veces el tamaño de fuente predeterminado)

Por ejemplo, el estilo personalizado utilizado en esta página es "texto grande".

## 7.4 Estilo personalizado para el título del gráfico:`caption`

<!-- _class: caption -->

- Defina el título del gráfico mediante `<div class="caption">El misterio del universo</div>`
![#c h:380](https://mytuchuang-1303248785.cos.ap-beijing.myqcloud.com/picgo/202401131712626.png)

<div class="caption">
El misterio del universo.
</div>


## Conceptos básicos ……

<!-- _class: trans -->
<!-- _footer: "" -->
<!-- _paginate: "" -->


## Markdown Descripción general

<!-- _header: \ ***@Awesome Marp*** *Acerca de las plantillas* *portada* *Página de contenido* **MARKDOWN** -->

<!-- _class: navbar -->

-Markdown es un lenguaje de marcado de texto **extremadamente liviano** que permite a las personas escribir documentos en un formato de texto plano **fácil de leer y escribir** y tiene buen soporte para tablas, códigos, imágenes, fórmulas, etc.
- Amplia gama de aplicaciones: sitios web, notas/folletos de cursos, presentaciones, redacción de artículos académicos, etc.
- Sintaxis básica de Markdown:
  - Consulte: [Documento chino de Markdown](https://markdown-zh.readthedocs.io/en/latest/), [Guía de Markdown](https://www.markdown.xyz/), [Tutorial para principiantes de Markdown]( https://www.runoob.com/markdown/md-tutorial.html)
  - Título `#`, negrita `** **`, cursiva `* *`, tachado `~~ ~~`, línea divisoria `---`, hipervínculo `[]()`
  - Referencia `>`, lista `-` / `1.`, bloque de código
  - Notas al pie `[^1]` / `[^1]:`, Elementos de tareas pendientes `[ ]` / `[x]`
- Sintaxis avanzada de Markdown:
  - Imagen `![]()`: ruta local, ruta de red (ver: [Picture Bed y PicGo: te enamorarás de grabar y compartir](https://sspai.com/post/65716))
  - Fórmulas matemáticas: fórmula en línea `$...$`, fórmula entre líneas `$$...$$`
  - Admite elementos HTML: `<br>`/`<hr>`/`<b></b>`/`<i></i>`/`<kbd></kbd>`, etc.

## Editor de markdown recomendado

<!-- _class: cols-2-64 navbar -->
<!-- _header: \ ***@Awesome Marp*** *Acerca de las plantillas* *portada* *Página de contenido* **MARKDOWN** -->

<div class=ldiv>

**VS Code**
- Visual Studio Code[enlace de descarga](https://code.visualstudio.com/Download)
- VS Code 插件：
  - 配合 Markdown：[Markdown Preview Enhanced](https://marketplace.visualstudio.com/items?itemName=shd101wyy.markdown-preview-enhanced)、[Markdown All in One](https://marketplace.visualstudio.com/items?itemName=yzhang.markdown-all-in-one)
 - Imagen de cama: [PicGo](https://marketplace.visualstudio.com/items?itemName=Spades.vs-picgo)
  - Formato del documento: [Pangu-Markdown](https://marketplace.visualstudio.com/items?itemName=xlthu.Pangu-Markdown)
  - Rebajas en PPT: [Marp para VScode](https://marketplace.visualstudio.com/items?itemName=marp-team.marp-vscode)
  - Rebajas en mapa mental: [Markmap para VScode](https://marketplace.visualstudio.com/items?itemName=gera2ld.markmap-vscode)
  - Coopere con Zotero: [Selector de citas para Zotero](https://marketplace.visualstudio.com/items?itemName=mblode.zotero), [Pandoc Citer](https://marketplace.visualstudio.com/items?itemName= notZaki .pandocciter)

</div>

<div class=rdiv>

**Obsidian**
- [Página de inicio de Obsidiana](https://obsidian.md/)
- Software de gestión del conocimiento local basado en Markdown
- Excepto las funciones oficiales de sincronización y publicación, es completamente gratuito para usuarios individuales.
- Funciones ricas, numerosos complementos y comunidad de desarrollo activa

</div>


## Marp Uso básico

<!-- _header: \ ***@Awesome Marp*** *Acerca de las plantillas* *portada* *Página de contenido* -->
<!-- _class: navbar fixedtitleB -->

<div class="div">

- Resumen de algunas palabras [Marp](https://marp.app/): use Markdown para crear presentaciones
  - Un pasaje de la página web oficial de Marp: Marp (también conocido como Markdown Presentation Ecosystem) proporciona una experiencia intuitiva para crear hermosas presentaciones de diapositivas. Solo tienes que concentrarte en escribir tu historia en un documento de Markdown.

- En el área YAML en la parte superior del archivo Markdown, inicie Marp a través de `marp: true` y luego podrá abrir la vista previa lateral. El lado izquierdo de la interfaz de VS Code es el área de código y el lado derecho es la vista previa. área.
- El contenido sigue la sintaxis de Markdown, pero Marp agrega algunas instrucciones integradas y las instrucciones se dividen en instrucciones globales e [instrucciones locales] (https://marpit.marp.app/directives?id=local-directives-1) Se recomiendan instrucciones globales Colocadas en el área YAML, las instrucciones locales se encuentran en la página actual y las diferentes páginas están separadas por `---`.
- Lectura recomendada: Marpit [documento oficial](https://marpit.marp.app) y [versión traducida al chino](https://caizhiyuan.gitee.io/categories/skills/20200730-marp.html#%E5% 8A%9F%E8%83%BD), aprende Marp en cinco minutos [(Parte 1)](https://www.lianxh.cn/news/97fccdca2d7a5.html), [(Parte 2)](https:/ /www.lianxh.cn/news/521900220dd33.html)
</div>

## Marp Uso básico

<!-- _header: \ ***@Awesome Marp*** *Acerca de las plantillas* *portada* *Página de contenido*-->
<!-- _class: navbar -->

```yaml
marp: true # Activar Marp
size: 16:9 # Establezca la proporción de página, 
#las más comunes son 16:9 o 4:3, el valor predeterminado es 16:9
theme: gaia #Cambie el tema, hay 3 estilos de temas integrados
#, puede personalizar el tema
paginate: true # Activar el número de página
headerDivider: 2 # Divide las páginas por títulos secundarios
#, eliminando el problema de los cambios manuales de página.
footer: Chuhong # Establece el contenido del á
#rea del pie de página. Si el contenido del encabezado está configurado, es el encabezado.
```

- Si desea que la página se divida en varios niveles de encabezados al mismo tiempo, por ejemplo, dividir la página entre encabezados de segundo y cuarto nivel, puede `headingDivider: [2,3,4]`
- Si desea que varios estilos personalizados representen la misma página, puede conectar directamente diferentes estilos personalizados con espacios, como: `<!-- _class: cols-2-64 fglass -->`
---

<!-- _class: lastpage -->
<!-- _footer: "" -->
###### Bienvenido a comunicarnos

<div class="iconos">

- <i class="fa-solid fa-envelope"></i>
  - Correo electrónico: ch2099058972@163.com
- <i class="fa-brands fa-weixin"></i>
  - WeChat: favorhong
- <i class="fa-solid fa-house"></i>
  - Cuenta pública: Honghu Villa
<div>

## La creación no es fácil,buy me a coffee 🤙

<!-- _class: trans -->
<!-- _footer: "" -->
<!-- _paginate: "" -->

<br>

![#c w:300](https://mytuchuang-1303248785.cos.ap-beijing.myqcloud.com/picgo/202309240907419.png)

---

```cpp
int main(){
  int var = 2;
  foo().cow(var);

}

```