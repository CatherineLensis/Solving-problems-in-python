Online Stock Span
<p>
Разработайте алгоритм, который собирает ежедневные котировки цен на некоторые акции и возвращает диапазон цен этих акций на текущий день.

Размах цены акции за один день — это максимальное количество последовательных дней (начиная с этого дня и в обратном направлении), в течение которых цена акции была меньше или равна цене этого дня .

Например, если цена акции за последние четыре дня равна `[7,2,1,2]`, цена акции сегодня равна `2`, то интервал сегодняшнего дня равен `4` потому что, начиная с сегодняшнего дня, цена акции была меньше или равна `2` в течение `4` последовательных дней.
Кроме того, если цена акции за последние четыре дня равна `[7,34,1,2]`,  цена акции сегодня равна `8`, то интервал сегодняшнего дня равен `3` потому что, начиная с сегодняшнего дня цена акции была меньше или равна `8` в течение `3` последовательных дней.

Реализуйте `StockSpanner` класс:

`StockSpanner()` Инициализирует объект класса.
 `int next(int price)` Возвращает интервал цены акции, учитывая, что сегодняшняя цена равна `price`

 Design an algorithm that collects daily price quotes for some stock and returns the span of that stock's price for the current day.

The span of the stock's price in one day is the maximum number of consecutive days (starting from that day and going backward) for which the stock price was less than or equal to the price of that day.

For example, if the prices of the stock in the last four days is `[7,2,1,2]` and the price of the stock today is `2`, then the span of today is `4` because starting from today, the price of the stock was less than or equal `2` for `4` consecutive days.
Also, if the prices of the stock in the last four days is `[7,34,1,2]` and the price of the stock today is `8`, then the span of today is `3` because starting from today, the price of the stock was less than or equal `8` for `3` consecutive days.
Implement the `StockSpanner` class:

`StockSpanner()` Initializes the object of the class.
`int next(int price)` Returns the span of the stock's price given that today's price is `price`.
 

Example 1:

Input
```
["StockSpanner", "next", "next", "next", "next", "next", "next", "next"]
[[], [100], [80], [60], [70], [60], [75], [85]]
```
Output
```
[null, 1, 1, 1, 2, 1, 4, 6]
```
Explanation
```
StockSpanner stockSpanner = new StockSpanner();
stockSpanner.next(100); // return 1
stockSpanner.next(80);  // return 1
stockSpanner.next(60);  // return 1
stockSpanner.next(70);  // return 2
stockSpanner.next(60);  // return 1
stockSpanner.next(75);  // return 4, because the last 4 prices (including today's price of 75) were less than or equal to today's price.
stockSpanner.next(85);  // return 6
```
Constraints:
```
1 <= price <= 10^5
At most 10^4 calls will be made to next.
```
Класс `StockSpanner` имеет стек пар целых чисел, где первое целое число представляет цену акции, а второе целое число представляет диапазон этой цены.
Конструктор класса не принимает никаких аргументов и ничего не делает.
Метод `next()` класса принимает целочисленный аргумент `price`, который представляет цену акции на текущий день, и возвращает целое число, представляющее диапазон этой цены.
Изначально диапазон установлен на `1`.
Если стек не пуст и цена вершины стека меньше или равна текущей цене, то диапазон увеличивается на диапазон вершины стека, и вершина стека извлекается.
Пара текущей цены и ее диапазона помещается в стек.
Наконец, возвращается диапазон текущей цены.

Временная сложность следующей функции равна `O(N)`, где `N` — количество вызовов следующей функции. Это связано с тем, что в худшем случае все элементы стека будут извлечены до того, как текущая цена будет помещена в стек.
Пространственная сложность алгоритма составляет `O(N)`, поскольку мы храним все цены и соответствующие им значения диапазона в стеке.
</p>
