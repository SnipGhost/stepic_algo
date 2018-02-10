
## Задача с курса [Алгоритмы и структуры данных](https://stepik.org/lesson/12556/step/3)

Даны два массива целых чисел одинаковой длины A[0..n−1] и B[0..n−1].  
Необходимо найти первую пару индексов i0 и j0, i0 ≤ j0,  
такую что A[i0] + B[j0] = max{A[i]+B[j],где 0 ≤ i < n, 0 ≤ j < n, i ≤ j}.  

Время работы – O(n).  
Ограничения: 1 ≤ n ≤ 100000, -100000 ≤ A[i] ≤ 100000, -10000 ≤ B[i] ≤ 100000 для любого i.  


 Sample Input:
 ```
4
4 -8 6 0
-10 3 1 1
```  
Sample Output:
```
0 1
```

Годные варианты тестов хранятся в папке tests  
Компиляция и прогон всех тестов - с помощью `test.sh`