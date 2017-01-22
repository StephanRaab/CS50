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
+ In Merge Sort, the idea of the algorithm is to sort smaller arrays and then combine those arrays together (merge them) in sorted order.
+ Merge sort leverages something called **recursion**.

In Pseudo Code:
    + Sort the left half of the array (assuming *n* > 1)
    + Sort the right half of the array (assuming *n* > 1)
    + Merge the two halves together

+ **Worst-case scenario**: We have to split *n* elements up and then recombine them, effectively doubling the sorted subarrays as we build them up.
+ **Best-case scenario**: The array is already perfectly sorted. But we still have to split and recombine it back together with this algorithm.

--------
## Linear Search
+ In Linear Search, the idea of the algorithm is to iterate across the array from left to right, searching for specified element.

In Pseudo Code:
+ Repeat, starting at the first element:
    + If the first element is what you're looking for (the target), stop.
    + Otherwise, move to the next element.

+ **Worst-case scenario**: We have to look through the entire array of *n* elements, either because the target element is the last element in the array or doesn't exist in the array at all.
+ **Best-case scenario**: The target element is the first element of the array, and so we can stop looking immediately after we start.

---------
##Binary Search
+ In Binary Search, the idea of the algorithm is to divide and conquer, reducing the search area by half each time, trying to find a target number.
    + In order to leverage this power however, our array must first be sorted, else we cannot make assumptions about the array's contents.

In Pseudo Code:
+ Repeat until the (sub)array is of size 0:
    + Calculate the middle point of the current (sub)array
    + If the target is the middle, stop.
    + Otherwise, if the target is less than what's in the middle, repeat, changing the end point to be just to the left of the middle.
    + Otherwise, if the target is greater than what's at the middle, repeat, changing the start point to be just to the right of the middle.

+ **Worst-case scenario**: We have to divide a list of *n* elements in half repeatedly to find the target element, either because the target element will be found at the end of the last division or doesn't exist in the array at all.
+ **best-case scenario**: the target element is at the midpoint of the full array, and so we can stop looking immediately after we start.