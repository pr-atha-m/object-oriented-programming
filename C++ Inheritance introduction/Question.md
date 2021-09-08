Create two classes:

## Cuboid
The Cuboid class should have three data fields- length, width and height of int types. The class should have display() method, to print the length, width and height of the cuboid separated by space.

## CuboidVol 
The CuboidVol class is derived from Cuboid class, i.e., it is the sub-class of Cuboid class. The class should have read_input() method, to read the values of length, width and height of the Cuboid. The CuboidVol class should also overload the display() method to print the volume of the Cuboid ( length * width * height ).

### Input:

The first line contains the number of test cases and one and only line of each test case contains 3 space separated integer denoting length, width, and height of the Cuboid

### Output:

The output should consist of exactly two lines: 
In the first line, print the length, width, and height of the cuboid separated by space. 
In the second line, print the volume of the cuboid.
Constraints:

0 <= (length, width, height) <= 100
Example:

Sample input:

1

12 10 2

Sample output:

12 10 2 

240

Explanation:

As here length = 12, width = 10 and height = 2
Volume of the cuboid is = ( length * width * height )= 12 * 10 * 2 = 240
