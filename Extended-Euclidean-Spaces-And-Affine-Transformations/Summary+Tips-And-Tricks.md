# 1. Хомогенни координати в равнината

---

## 📌 Основна идея

Точките, правите и равнините, изучавани до този момент, ще наричаме крайни.  
В двумерната евклидова равнина въвеждаме релация **"~"** (която лесно се установява, че е релация на еквивалентност), която дефинира структурата на хомогенните координати:

<p align="center">
  <img src="https://latex.codecogs.com/svg.image?%5Cforall%20x,y%20%5Cin%20%5Cmathbb%7BE%7D_2%2C%20x%20%5Csim%20y%20%5CLeftrightarrow%20%5Cexists%20%5Clambda%20%5Cin%20%5Cmathbb%7BR%7D%20%5Cbackslash%20%5C%7B0%5C%7D%20%3A%20x%20%3D%20%5Clambda%20y" />
</p>

## 🔄 Какво представляват хомогенните координати в равнината?

Нека относно АКС в равнината е дадена крайна точка ![equation](https://latex.codecogs.com/svg.image?%5Ctextstyle%20M(X,Y)). Ясно е, че наредената двойка ![equation](https://latex.codecogs.com/svg.image?%5Ctextstyle%20(X,Y)) е еднозначно определена. Дефинираме хомогенни координати на точка като ![equation](https://latex.codecogs.com/svg.image?%5Ctextstyle%20%5Cforall(x,y,t)%2C%20t%5Cneq0), за която е в сила:

<p align="center">
  <img src="https://latex.codecogs.com/svg.image?%5Ctextstyle%20%5Cfrac%7Bx%7D%7Bt%7D%20%3D%20X%2C%20%5Cfrac%7By%7D%7Bt%7D%20%3D%20Y" />
</p>

Тогава за хомогенните координати на произволна точка можем да запишем:

<p align="center">
  <img src="https://latex.codecogs.com/svg.image?%5Ctextstyle%20(x,y,t)%5Csim(\rho%20x,\rho%20y,\rho%20t),%20%5Crho%5Cneq0" />
</p>

### 🧪 Пример:

<p align="center">
  <img src="https://latex.codecogs.com/svg.image?%5Ctextstyle%20M(1,2,1)%5Csim%20M(-1,-2,-1)%5Csim%20M(2,4,2)" />
</p>

## 💡 Tip

> Ако видите точка от вида  
> ![equation](https://latex.codecogs.com/svg.image?%5Ctextstyle%20(\rho%20x,\rho%20y,\rho%20t))  
> пишете я  
> ![equation](https://latex.codecogs.com/svg.image?%5Ctextstyle%20(%20x,%20y,%20t))  
> за по-малко сметки.

# 2. Безкрайни елементи в равнината

---

## 🔑 Най-важните неща

### 🌌 Безкрайна точка

Безкрайна точка на правата ![equation](https://latex.codecogs.com/svg.image?%5Ctextstyle%20%5Cell) наричаме множеството:

<p align="center">
  <img src="https://latex.codecogs.com/svg.image?%5Ctextstyle%20U_%7B%5Cell%7D%20%3A%3D%20%5C%7B%5Cforall%20%5Cell'%20%7C%20%5Cell'%20%5Coverset%7B%5Ccirc%7D%7B%5Cparallel%7D%20%5Cell%5C%7D%20%3D%20%5C%7B%5Cforall%20%5Cell'%20%7C%20%5Cell'%20%5Cparallel%20%5Cell%20%5Cvee%20%5Cell'%20%5Cequiv%20%5Cell%5C%7D" />
</p>

Всяка безкрайна точка (бележим ги с ![equation](https://latex.codecogs.com/svg.image?%5Ctextstyle%20U)) има вида ![equation](https://latex.codecogs.com/svg.image?%5Ctextstyle%20U(a,b,0)).

Очевидно безкрайната точка няма нехомогенни координати. Безкрайната точка е клас на еквивалентност, породен от релацията “направление”.

### 📏 Безкрайна права

Безкрайна права ще наричаме множеството от всички безкрайни точки:

<p align="center">
  <img src="https://latex.codecogs.com/svg.image?%5Ctextstyle%20%5Comega%20%3A%3D%20%5C%7B%5Cforall%20U(x,y,0)%20%7C%20(x,y)%5Cneq(0,0)%5C%7D" />
</p>

### 📘 Твърдения

#### 📌 Твърдение 1

<p align="center">
  <img src="https://latex.codecogs.com/svg.image?%5Ctextstyle%20U_g%20%3D%20g%20%5Ccap%20%5Comega" />
</p>

#### 📌 Твърдение 2

Две прави са обобщено успоредни тогава и само тогава, когато безкрайните им точки съвпадат.

#### 📌 Твърдение 3

Общото уравнение на права в равнината, в хомогенни координати, е:

<p align="center">
  <img src="https://latex.codecogs.com/svg.image?%5Ctextstyle%20Ax%2BBy%2BCt%3D0%2C%20(A,B)%5Cneq(0,0)" />
</p>

и пишем:

<p align="center">
  <img src="https://latex.codecogs.com/svg.image?%5Ctextstyle%20g%5BA,B,C%5D" />
</p>

#### 📌 Твърдение 4

Общото уравнение на безкрайната права ![equation](https://latex.codecogs.com/svg.image?%5Ctextstyle%20%5Comega) е:

<p align="center">
  <img src="https://latex.codecogs.com/svg.image?%5Ctextstyle%20%5Comega%3At%3D0%5CRightarrow%5Comega%5B0,0,1%5D" />
</p>

---

## 💡 Tricks

> Ако в условието е казано "Правата g е успоредна на p и минава през точката M" използвайте, че p и q имат обща безкрайна точка U и разгледайте правата g като правата UM. Точката U намирате с помощтта на Твърдение 1 и Твърдение 4.

## 🧭 Визуална интуиция

<p align="center">
  <img src="images/IMG_1074.jpeg" width="500"/><br>
  <em>Визуализация на общата безкрайна точка на успоредни помежду си прави</em>
</p>

---

<p align="center">
  <img src="images/IMG_1119.jpeg" width="500"/><br>
  <em>Визуализация на безкрайната права</em>
</p>

# 3. Разширена евклидова равнина. Линейни трансформации на разширената евклидова равнина #

---

Дефинираме разширената евклидова равнина като множеството:

<p align="center">
  <img src="https://latex.codecogs.com/svg.image?%5Ctextstyle%20%5Cmathbb%7BE%7D_2%5E%5Cstar%20%3A%3D%20%5Cmathbb%7BE%7D_2%20%5Ccup%20%5Comega" />
</p>

# 4. Хомогенни координати в пространството #
# 5. Безкрайни елементи в пространството #
# 6. Разширено евклидово пространство #
# 7. Централно проектиране #
# 8. Афинни и ортогонални трансформации в равнината #
# 9. Класификация на еднаквостите в равнината #
# 10. Афинни и ортогонални трансформации в пространството #
# 11. Класификация на еднаквостите в пространството #
# 12. Представяне на ротациите в пространството чрез кватерниони #
# 13. Сферична линейна интерполация (SLERP) #

Сферичната линейна интерполация (SLERP) е геодезична интерполация върху единичната n-сфера ![Sn](https://latex.codecogs.com/png.image?\dpi{110}S^n), използвана за плавни преходи между ориентации и посоки.

---

## Най-важното

- Интерполация по **най-късия път** върху сфера (геодезика)
- **Константна ъглова скорост**
- Запазване на **нормата**
- Числено стабилна при работа с **кватерниони**
- Фундаментална за **3D ротации и анимации**

---

## Дефиниции

### Векторна форма

<p align="center">
  <img src="https://latex.codecogs.com/svg.image?%5Cmathrm%7BSLERP%7D(v_0,v_1,t)%3D%5Cfrac%7B%5Csin((1-t)%5Ctheta)%7D%7B%5Csin(%5Ctheta)%7Dv_0%2B%5Cfrac%7B%5Csin(t%5Ctheta)%7D%7B%5Csin(%5Ctheta)%7Dv_1"/>
</p>

<span>
  <img src="https://latex.codecogs.com/svg.image?%5Ctheta%3D%5Carccos(v_0%5E%7B%5Ctop%7Dv_1)"/>
</span>

където <img src="https://latex.codecogs.com/svg.image?%5Ctheta%3D%5Carccos(v_0%5E%7B%5Ctop%7Dv_1)"/> , <img src="https://latex.codecogs.com/svg.image?v_0%2Cv_1%20%5Cin%20S%5En%20%5Cwedge%20t%20%5Cin%20%5B0%2C1%5D"/>.

---

### Кватернионна форма

<span>
  <img src="https://latex.codecogs.com/svg.image?q_0,q_1%20%5Cin%20%5Cmathbb%7BH%7D%2C%20%5C%7Cq_0%5C%7C%3D%5C%7Cq_1%5C%7C%3D1"/>
</span>

<p align="center">
  <img src="https://latex.codecogs.com/svg.image?%5Cmathrm%7BSLERP%7D(q_0,q_1,t)%3Dq_0(q_0%5E%7B-1%7Dq_1)%5Et"/>
</p>

Еквивалентно:

<p align="center">
  <img src="https://latex.codecogs.com/svg.image?%5Cmathrm%7BSLERP%7D(q_0,q_1,t)%3Dq_0%5Ccdot%5Cexp%28t%5Clog(q_0%5E%7B-1%7Dq_1)%29"/>
</p>

---

## Най-важни твърдения

### 1. Запазване на нормата

<p align="center">
  <img src="https://latex.codecogs.com/svg.image?%5C%7C%5Cmathrm%7BSLERP%7D(v_0,v_1,t)%5C%7C%3D1"/>
</p>

---

### 2. Константна ъглова скорост

<p align="center">
  <img src="https://latex.codecogs.com/svg.image?%5Ctheta(t)%3Dt%5Ctheta"/>
</p>

---

### 3. Геодезичност

SLERP параметризира дъга от голям кръг върху сферата.

---

### 4. Инвариантност спрямо ротации

<span>
  <img src="https://latex.codecogs.com/svg.image?R%5Ccdot%5Cmathrm%7BSLERP%7D(v_0,v_1,t)%3D%5Cmathrm%7BSLERP%7D(Rv_0,Rv_1,t)"/>
</span>

---

### 5. Кватернионна групова структура

<span>
  <img src="https://latex.codecogs.com/svg.image?q_0%5E%7B-1%7Dq_1"/>
</span>

е относителната ротация, а степента \( t \) интерполира в групата.

---

### 6. Кратък път (sign correction)

<span>
  <img src="https://latex.codecogs.com/svg.image?q_0%5E%7B%5Ctop%7Dq_1%3C0%20%5CRightarrow%20q_1%20%5Cleftarrow%20-q_1"/>
</span>

гарантира минимална дъга.

---

### 7. Граничен случай

<p align="center">
  <img src="https://latex.codecogs.com/svg.image?%5Clim_%7B%5Ctheta%5Cto0%7D%5Cmathrm%7BSLERP%7D%3D%5Cmathrm%7BLERP%7D"/>
</p>

---

## Интуиция

- Векторно: движение по **сфера**
- Кватернионно: движение в **пространството на ротациите <img src="https://latex.codecogs.com/svg.image?%5Cmathrm%7BSO%7D(3)"/>**
- Алгебрично: линейност в **ъгловото пространство**
- Геометрично: „дъга вместо хорда“

---

## Заключение

SLERP е каноничният начин за интерполация на ротации.  
Той съчетава геометрия, алгебра и числена стабилност в една формула, която следва естествената структура на пространството.