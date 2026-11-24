/*
* a) Allocating arrays dynamically with malloc is useful because it is more flexible, as you can change the sizes of the array whenever you want, not
*    being restrained by a number you cannot change once you have it set. This allows you to do other more complex structures that would not be possible
*    with an array statically allocated, and also, you don't waste memory as you only allocated what you will use, and if you need more memory, you can
*    just reallocate more... With dynamically allocated arrays, you can free the memory use from the heap whenever you want, lessening
*    the burden from the memory this way.
*
* b) I would declare 3 variables, lin,col and a double pointer m, and then, scanf for the values of lin and col... then I would pass lin and col as parameters
*    for the alloc_matrix function, and pass the result to m.
*
* c) To free the dynamically allocated matrix, I would make a for to allocate each line of m[i], and after the for, I would finally free the double pointer m.
*
* d) The consequence of forgetting to free anything in C is the possibility of memory leak, as the memory allocated remains reserved and unusable until the
*    process terminates, in larger projects, a memory leak can be a huge problem.
*/







/**
 * 87. Suppose you are developing a program in C that handles data processing
 *     in float matrices. You need to dynamically allocate a float matrix to
 *     store this data and, later, free the allocated memory to avoid memory
 *     leaks.
 *
 *     (a) Explain the usefulness of dynamically allocating the matrix instead of
 *         using a static matrix of fixed size.
 *     (b) Describe how you would use in the main program the `aloca_matriz`
 *         function you implemented to allocate memory for the matrix. What is
 *         the role of the `lin` and `col` arguments in the function?
 *     (c) When working with dynamically allocated matrices, it is important to
 *         ensure that memory is properly freed to avoid memory leaks. Explain
 *         how you would use the `libera_matriz` function you implemented to
 *         deallocate the matrix memory.
 *     (d) What would happen if you forgot to call the `libera_matriz` function
 *         after finishing using the dynamically allocated matrix? What are the
 *         possible consequences of this?
 */