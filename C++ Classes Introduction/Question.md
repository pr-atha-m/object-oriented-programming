Create class named CollegeCourse with fields courseID, grade, credits, gradePoints and honorPoints. Calculate honorpoints as the product of gradepoints and credits.
GradePoints are calculated as (A-10),(B-9),(C-8),(D-7),(E-6) & (F-5).

## Class CollegeCourse contains following functions:
1. set_CourseID( string CID): sets courseID
2. set_Grade(char g): sets grade equal to g
3. set_Credit(int cr): sets credits equal to cr 
4.calculateGradePoints(char g): returns gradePoint(int)
5. calculateHonorPoints(int gp,int cr): return honorPoint (float)
6. display(): prints gradePoint and honorPoint

## Input:
The first line contains an integer T, the number of test cases. For each test case, there is a string CID, denoting Course ID, a character g, denoting the grade and an integer cr, denoting the credits of the course.

## Output:
For each test case, the output is the gradePoints & the honorPoints of that course.

## Constraints:
1<=T<=100
1<=CID.length()<=100
'A'<=g<='F'
1<=cr<=4
Note: Grades are not case sensitive.

## Example:
### Input
2
CSN-206 A 4
ECE-500 d 3
### Output
10 40
7 21
