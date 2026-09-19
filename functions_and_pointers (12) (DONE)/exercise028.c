//Answers
/*
A) i = 35, j = 68
B) i = 7, j = 5, c = 12
C) x = 30, y = 10
D) a = 10, b = 5
*/


/**
 * 28. Analyze the code snippets below and determine the value of the variables
 * at the end of execution:
 *
 * (a)
 * int i=34, j;
 * int *p;
 * p = &i;
 * (*p)++;
 * j = *p + 33;
 *
 * (b)
 * int i=7, j=5, c;
 * int *p;
 * int **q;
 * p = &i;
 * q = &p;
 * c = **q + j;
 *
 * (c)
 * int x = 10;
 * int y = 20;
 * int *p, *q;
 *
 * p = &x;
 * q = &y;
 *
 * *p = *p + *q;
 * *q = *p - *q;
 *
 * (d)
 * int a = 5;
 * int b = 7;
 * int *p, *q;
 *
 * p = &a;
 * q = &b;
 *
 * a = a + b;
 * b = a - b;
 * *p = *q + b;
 */