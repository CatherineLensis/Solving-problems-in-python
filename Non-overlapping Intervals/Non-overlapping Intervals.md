<p>
Non-overlapping Intervals
</p>

Given an array of intervals intervals where `intervals[i] = [starti, endi]`, return the minimum number of intervals you need to remove to make the rest of the intervals non-overlapping.

Учитывая массив интервалов intervals где `intervals[i] = [starti, endi]`, верните минимальное количество интервалов, которое необходимо удалить, чтобы остальные интервалы не перекрывались.
<p>
Example 1:
Input: 
 </p>
```
intervals = [[1,2],[2,3],[3,4],[1,3]]
```
Output:
```
1
```
Explanation: [1,3] can be removed and the rest of the intervals are non-overlapping.
Example 2:

Input:
```
intervals = [[1,2],[1,2],[1,2]]
```
Output:
```
2
```
Explanation: You need to remove two [1,2] to make the rest of the intervals non-overlapping.
Example 3:
Input: 
```
intervals = [[1,2],[2,3]]
```
Output:
```
0
```
Explanation: You don't need to remove any of the intervals since they're already non-overlapping.
 
Constraints:
```
1 <= intervals.length <= 10^5
intervals[i].length == 2
-5 * 10^4 <= starti < endi <= 5 * 10^4
```


Чтобы найти минимальное количество интервалов, которые нам нужно удалить, чтобы остальные интервалы не перекрывались, мы можем использовать подход, основанный на сортировке интервалов.
Функция сначала сортирует интервалы по времени их окончания. Затем он перебирает отсортированные интервалы, отслеживая непересекающиеся интервалы и `end_time` соответствующим образом обновляя переменную. Количество непересекающихся интервалов увеличивается каждый раз, когда обнаруживается новый непересекающийся интервал. Наконец, функция возвращает минимальное количество интервалов для удаления, которое рассчитывается как общее количество интервалов минус количество непересекающихся интервалов.
Сложность
Временная сложность:
временная сложность равна `O(n log n)`.

Пространственная сложность:
Пространственная сложность равна `O (1)`.
</p>
