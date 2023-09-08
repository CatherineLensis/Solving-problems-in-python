Online Stock Span

Разработайте алгоритм, который собирает ежедневные котировки цен на некоторые акции и возвращает диапазон цен этих акций на текущий день.

Размах цены акции за один день — это максимальное количество последовательных дней (начиная с этого дня и в обратном направлении), в течение которых цена акции была меньше или равна цене этого дня .

Например, если цена акции за последние четыре дня равна , [7,2,1,2]а цена акции сегодня равна 2, то интервал сегодняшнего дня равен 4тому, что, начиная с сегодняшнего дня, цена акции была меньше или равна ей 2в течение 4последовательных дней.
Кроме того, если цена акции за последние четыре дня равна , [7,34,1,2]а цена акции сегодня равна 8, то интервал сегодняшнего дня равен 3тому, что начиная с сегодняшнего дня цена акции была меньше или равна ей 8в течение 3последовательных дней.
Реализуйте StockSpannerкласс:

StockSpanner()Инициализирует объект класса.
int next(int price)Возвращает интервал цены акции, учитывая, что сегодняшняя цена равна price.

 Design an algorithm that collects daily price quotes for some stock and returns the span of that stock's price for the current day.

The span of the stock's price in one day is the maximum number of consecutive days (starting from that day and going backward) for which the stock price was less than or equal to the price of that day.

For example, if the prices of the stock in the last four days is [7,2,1,2] and the price of the stock today is 2, then the span of today is 4 because starting from today, the price of the stock was less than or equal 2 for 4 consecutive days.
Also, if the prices of the stock in the last four days is [7,34,1,2] and the price of the stock today is 8, then the span of today is 3 because starting from today, the price of the stock was less than or equal 8 for 3 consecutive days.
Implement the StockSpanner class:

StockSpanner() Initializes the object of the class.
int next(int price) Returns the span of the stock's price given that today's price is price.
 

Example 1:

Input
["StockSpanner", "next", "next", "next", "next", "next", "next", "next"]
[[], [100], [80], [60], [70], [60], [75], [85]]
Output
[null, 1, 1, 1, 2, 1, 4, 6]

Explanation
StockSpanner stockSpanner = new StockSpanner();
stockSpanner.next(100); // return 1
stockSpanner.next(80);  // return 1
stockSpanner.next(60);  // return 1
stockSpanner.next(70);  // return 2
stockSpanner.next(60);  // return 1
stockSpanner.next(75);  // return 4, because the last 4 prices (including today's price of 75) were less than or equal to today's price.
stockSpanner.next(85);  // return 6
Constraints:

1 <= price <= 10^5
At most 10^4 calls will be made to next.

Класс StockSpanner имеет стек пар целых чисел, где первое целое представляет цену акций, а второе целое представляет промежуток этой цены.
Конструктор класса не принимает никаких аргументов и ничего не делает.
Следующий() метод класса берёт целочисленную цену аргумента, которая представляет цену акции за текущий день, и возвращает целое число, представляющее промежуток этой цены.
Первоначально пролет установлен на 1.
Если стек не пуст и верхняя часть стека имеет цену меньше или равную текущей цене, то пролет увеличен пролётом верхней части стога, и верхняя часть стога высыпана.
Пара текущей цены и ее размах перемещается на стек.
Наконец, возвращается промежуток текущей цены.
Сложность:
Cложностью следующей функции является O(N), где N - число последующих вызовов. Это связано с тем, что в худшем случае все элементы в стеке будут выведены до того, как текущая цена будет перенесена на стек.
Пространственная сложность алгоритма - O(N), так как мы храним все цены и их соответствующие значения в стеке.