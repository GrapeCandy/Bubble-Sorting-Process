# Bubble-Sorting-Process
Print Bubble Sorting Process

This post is based on Baikjun algorithm **No. 11920.** [Shortcut](https://www.acmicpc.net/problem/11920)

# What is Bubble sorting?


<img src="https://gmlwjd9405.github.io/images/algorithm-bubble-sort/bubble-sort.png" width="90%"></img> [Reference](https://gmlwjd9405.github.io/2018/05/06/algorithm-bubble-sort.html)


# Concepts used in writing code
## priority queue 
1. Use ```#include <queue>``` library
2. By default, it is sorted in descending order.
3. If you want to use ascending order, use the following:
```#include <queue>```
```#include <functional>```

```std::priority_queue<int, std::vector<int>, std::greater<int>> q;```    
The above example is an example of ascending alignment to one int-type factor.


4. Function
  ```push()``` : Insert Factor in Queue
  ```empty()``` : Check if the queue is empty (true if empty)
  ```top()``` : Return the first element of the queue.
  ```size()``` : Return size of queue
