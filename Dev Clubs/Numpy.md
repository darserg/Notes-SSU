Numpy активно испольует **SIMD**
SIMD - single instruction multiple data (позволяет обрабатывать одновременно несколько данных)
Python использует **SISD**
SISD - single instruction single data (выполняет только один процесс одновременно)

#### Внутренние библиотеки NUMPY:
BLAS - Basic Linear Algebra System
LAPackage
Низкоуровневые библиотеки для ускорения вычислений с помощью линейной алгебры

#### Основные команды Numpy
```python
a = np.array([1, 2, 3, 4])

b = np.zeros(5)
print(b) # [0, 0, 0, 0, 0]

c = np.arange(0, 10, 2)
print(c) # [0, 2, 4, 6, 8]

d = np.identity(5) # создаёт единичную матрицу

print(np.array([1, 2, 0, 4, 5]).shape) # (5,)
```

```python
np.sort(arr) # по умполчанию быстрая сортировка o(nlogn)
np.sort(arr, kind=merge) # o(nlongn)
np.sort(arr, kind=timsort)
np.sort(arr, kind=radix)
np.sort(arr, kind=heapsort) # o(nlogn)
```

```python
np.e # exp
np.pi # pi
```

```python
a = np.array([[1, 2], [3, 4]])
b = a.flatten() # объединяет в одномерный массив

a = a+1 # прибавит к каждому элементу 1

def function(x, y):
	retun x + y

func_np = np.vectorise(funtion)
a = np.array([1, 2, 3, 4])
print(func_np(a, 5)) # не ускоряет вычисления
```

```python
a = np.array([1, 2, 3])
np.add.accumulate(a) # Сохраняет все этапы вычислений [1, 3, 6]
np.add.reduce(a) # применяет операцию, пока не останется одного элемента (6)
```
# Агрегирование
```python
a = np.arange(9).reshape(1, 3) # создали матрицу 3*3
np.min(a, axis = 0) # вернёт минимальный массив из матрицы [0, 1, 2]
```
axis - убирает ось
```
	axis1 ->
a	[0][1][2]
x	[3][4][5]
i	[6][7][8]
s
0
```

```python
a = np.array([1, 2, 3, 4])
a = a[:, np.newaxis]
```
# Индексация
Причудливая индексация
```python
i = [1, 2, 4]
a = np.arange(10)
print(a[i]) # будет выведено несколько элементов
```

```python
a = np.arange(0, 20, 2)
ind = np.array([[3, 7], [4, 5]])
a[ind] # array([[6, 14], [8 , 10]])
```
# Логика
```python
a = np.arange(10)
print(a > 3) # [0, 0, 0, 0, 1, 1, 1, 1, 1, 1]
a[a > 3] # [4, 5, 6, 7, 8, 9]
mask = a >= 5
a[~mask] # [0, 1, 2, 3, 4]
```