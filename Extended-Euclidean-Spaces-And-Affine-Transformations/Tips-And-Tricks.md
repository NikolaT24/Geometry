# ✨ Хомогенни координати в равнината

---

## 📌 Основна идея

Точките, правите и равнините, изучавани до този момент, ще наричаме крайни.  
В двумерната евклидова равнина въвеждаме релация **"~"** (която лесно се установява, че е релация на еквивалентност), която дефинира структурата на хомогенните координати:

<p align="center">
  <img src="https://latex.codecogs.com/svg.image?%5Cforall%20x,y%20%5Cin%20%5Cmathbb%7BE%7D_2%2C%20x%20%5Csim%20y%20%5CLeftrightarrow%20%5Cexists%20%5Clambda%20%5Cin%20%5Cmathbb%7BR%7D%20%5Cbackslash%20%5C%7B0%5C%7D%20%3A%20x%20%3D%20%5Clambda%20y" />
</p>

## 🔄 Хомогенни координати

Нека относно АКС в равнината е дадена крайна точка ![equation](https://latex.codecogs.com/svg.image?%5Ctextstyle%20M(X,Y)). Ясно е, че наредената двойка ![equation](https://latex.codecogs.com/svg.image?%5Ctextstyle%20(X,Y)) е еднозначно определена. Дефинираме хомогенни координати на точка като ![equation](https://latex.codecogs.com/svg.image?%5Ctextstyle%20%5Cforall(x,y,t)%2C%20t%5Cneq0), за която е в сила:

<p align="center">
  <img src="https://latex.codecogs.com/svg.image?%5Ctextstyle%20%5Cfrac%7Bx%7D%7Bt%7D%20%3D%20X%2C%20%5Cfrac%7By%7D%7Bt%7D%20%3D%20Y" />
</p>

Тогава за хомогенните координати на произволна точка можем да запишем:

<p align="center">
  <img src="https://latex.codecogs.com/svg.image?%5Ctextstyle%20(x,y,t)%5Csim(\rho%20x,\rho%20y,\rho%20t),%20%5Crho%5Cneq0" />
</p>

### 🧪 Пример

<p align="center">
  <img src="https://latex.codecogs.com/svg.image?%5Ctextstyle%20M(1,2,1)%5Csim%20M(-1,-2,-1)%5Csim%20M(2,4,2)" />
</p>

## 💡 Tip

> Ако видите точка от вида  
> ![equation](https://latex.codecogs.com/svg.image?%5Ctextstyle%20(\rho%20x,\rho%20y,\rho%20t))  
> пишете я  
> ![equation](https://latex.codecogs.com/svg.image?%5Ctextstyle%20(%20x,%20y,%20t))  
> за по-малко сметки.

# 🌌 Безкрайни елементи в равнината

---

## 🔑 Най-важните неща

### 📍 Безкрайна точка

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

# Разширена евклидова равнина. Линейни трансформации на разширената евклидова равнина #
# Хомогенни координати в пространството #
# Безкрайни елементи в пространството #
# Разширено евклидово пространство #
# Централно проектиране #
# Афинни и ортогонални трансформации в равнината #
# Класификация на еднаквостите в равнината #
# Афинни и ортогонални трансформации в пространството #
# Класификация на еднаквостите в пространството #
# Представяне на ротациите в пространството чрез кватерниони #
# Сферична линейна интерполация #
