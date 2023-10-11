Pointer function

int (*pointer)(int, int) = &fun(function name)
or 
int main (*pointer)(int, int) = fun

use pointer function
int result;
result = *pointer(1,2); or result = pointer(1,2);
printf("%d\n", result);

