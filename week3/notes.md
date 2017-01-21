# Week 3

+ Bubble Sort
+ Insertion Sort
+ Selection Sort
+ Merge Sort

## Computational Complexity
+ When we talk about the complexity of an algorithm, we generally refer
to the **worst-case scenario**.
    + We refer to this as O.
+ We sometimes also care about the **best-case scenario** (also known as 'big Omega')

-----

+ What is a data set?
    + Whatever makes the most sense in context.
+ We can measure an algorithm based on how it handles these inputs.
Let's call this measure *f(n)*.
+ We don't actually care about *f(n)* is precisely. Rather, we care only about its **tendency**, which is dictated by its highest-order term.

-----

+ O(1) -- Constant Time
+ O(*log n*) -- Logarithmic Time
+ O(*n*) -- Linear Time
+ O(*n log n*) -- Linearithmic Time
+ O(*n<sup>2</sup>*) -- Quadratic Time
+ O(*n<sup>c</sup>*) -- Polynomial Time
+ O(*c<sup>n</sup>*) -- Exponential Time
+ O(*n!*) -- Factorial Time
+ O(*infinite sign*) -- Infinite Time

### O(1)
+ Always takes a single operation in the worst case.

```
int four_for_you(int array[1000])
{
    return 4;
}

int add_two_nums(int a, int b)
{
    return a + b;
}
```

###O(*n*)
+ Always takes *n* operations in the worst case

------
## Bubble Sort
+ In Bubble Sort, the ideo of the algorithm is to move higher valued
elements generally towards the right and lower value elements generally
to the left.

In Pseudo Code:
    +  Set swap counter to a non-zero value
    +  Look at each adjacent pair
        + If two adjacent elements are not in order, swap them and add one to the swap counter
+ **Worst-case scenario**: The array is in reverse order; We have to "buble" each of the *n* elements all the way across the array, and since we can only fully bubble one element into position per pass, we must do this *n* times.
+ **Best-case scenario**: The array is already perfectly sorted, and we make no swaps on the first pass.

-------
## Selection Sort
+ In Selection Sort, the idea of the algorithm is to find the smallest unsorted element and add it to the end of the sorted list.

In Pseudo Code:
+ Repeat until no unsorted elements remain:
    + Search the unsorted part of the data to find the smallest value
    + Swap the smallest found value with the first element of the unsorted part

+ **Worst-case scenario**: We have to iterate over each of the *n* elements of the array (to find the smallest unsorted element) and we must repeat this process *n* times, since only one element gets sorted on each pass.
+ **Best-case scenario**: Exactly the same.

-------
## Insertion Sort
+ In Insertion Sort, the ideo of the algorithm is to build your sorted array in place, shifting elements out of the way if necessary to make room as you go.

In Pseudo Code:
    + Call the first element of the array "sorted".
    + Repeat until all elements are sorted:
        + Look at the next unsorted element. Insert into the "sorted" portion by shifting the requisite number of elements.
+ **Worst-case scenario**: The array is in reverse order; we have to shift each of the *n* elements *n* positions each time we make an insertion.
+ **Best-case scenario**: The array is already perfectly sorted, and we simply keep moving the line between "unsorted" and "sorted" as we examine each element.

-------
## Merge Sort
+ 