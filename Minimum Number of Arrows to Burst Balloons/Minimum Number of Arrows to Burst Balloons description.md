К плоской стене, представляющей плоскость XY, приклеено несколько сферических воздушных шаров. Воздушные шары представлены в виде двумерного целочисленного массива points, где points[i] = [xstart, xend] обозначает воздушный шар, горизонтальный диаметр которого простирается между xstart и xend . Вы не знаете точных координат Y воздушных шаров.

Стрелки можно стрелять прямо вертикально (в положительном направлении Y) из разных точек вдоль оси X. Воздушный шар с xstart и xend лопается от выстрела стрелы x, если xstart<=x<= xend . Нет ограничений на количество выпущенных стрел. Выпущенная стрела продолжает двигаться вверх бесконечно, разрывая все воздушные шары на своем пути. 
Учитывая массив points, верните минимальное количество стрел, которое необходимо выпустить, чтобы лопнуть все воздушные шары.

There are some spherical balloons taped onto a flat wall that represents the XY-plane. The balloons are represented as a 2D integer array points where points[i] = [xstart, xend] denotes a balloon whose horizontal diameter stretches between xstart and xend. You do not know the exact y-coordinates of the balloons.

Arrows can be shot up directly vertically (in the positive y-direction) from different points along the x-axis. A balloon with xstart and xend is burst by an arrow shot at x if xstart <= x <= xend. There is no limit to the number of arrows that can be shot. A shot arrow keeps traveling up infinitely, bursting any balloons in its path.

Given the array points, return the minimum number of arrows that must be shot to burst all balloons.

Example 1:

Input:
```
points = [[10,16],[2,8],[1,6],[7,12]]
```
Output:
```
2
```
Explanation:
The balloons can be burst by 2 arrows:
```
- Shoot an arrow at x = 6, bursting the balloons [2,8] and [1,6].
- Shoot an arrow at x = 11, bursting the balloons [10,16] and [7,12].
```
Example 2:
Input: 
```
points = [[1,2],[3,4],[5,6],[7,8]]
```
Output: 
```
4
```
Explanation: One arrow needs to be shot for each balloon for a total of 4 arrows.
Example 3:

Input:
```
points = [[1,2],[2,3],[3,4],[4,5]]
```
Output: 
```
2
```
Explanation: The balloons can be burst by 2 arrows:
```
- Shoot an arrow at x = 2, bursting the balloons [1,2] and [2,3].
- Shoot an arrow at x = 4, bursting the balloons [3,4] and [4,5].
```
Constraints:
```
1 <= points.length <= 10^5
points[i].length == 2
-2^31 <= xstart < xend <= 2^31 - 1
```

Решение.
Сначала мы сортируем список точек по конечной координате. Затем мы инициализируем переменную arrow_count значением 1 и устанавливаем начальную и конечную координаты первой точки как текущие начальную и конечную координаты.

Затем код перебирает оставшиеся точки в списке. Для каждой точки проверяется, находится ли начальная координата точки после конечной координаты текущего интервала. Еcли это так, он увеличивает стрелку_count на 1 и обновляет текущие начальные и конечные координаты до начальных и конечных координат текущей точки.

Наконец, после того, как все точки обработаны, метод возвращает аrrow_count.

Этот алгоритм работает, поскольку он обрабатывает точки в отсортированном порядке, и всякий раз, когда он встречает точку, не содержащуюся в текущем интервале, он увеличивает счетчик стрелок и обновляет текущий интервал до интервала текущей точки. Это гарантирует, что для взрыва всех шариков будет использовано минимальное количество стрел.
