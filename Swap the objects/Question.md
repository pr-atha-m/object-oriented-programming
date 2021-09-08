Classes and objects are one of the most important part of C++.
Here we will learn to use classes and objects and we'll swap the values of two objects. We'll provide name, number, and height for two objects.

## Input Format:
The first line of input contains T denoting the number of testcases. T testcases follow. Each testcase contains two lines of input. The first line contains values for object1. The second line contains values for object2.

## Output Format:
For each testcase, in a new line, print the required output (see example).

## Your Task:
Since this is a function problem, you do not need take any input our output . Just complete the provided function  swapper(Person **obj1, Person **obj2)  that is a friend function of class Person. Just swap values of obj1 and obj2.

Constraints:
1 <= T <= 100
1<= |name| <= 100
1 <= number <= 99999
1 <= height <= 10

## Example:
### Input:

1

Morty 1234 6

Rick 5678 5

### Output:

Morty 1234 6

Rick 5678 5

Rick 5678 5

Morty 1234 6

## Explanation:
Testcase1: First we print the original values of obj1 and obj2 in two lines. The next two lines contain swapped values of obj1 and obj2.
