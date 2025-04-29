#include <stdio.h>

void ptr_double(int **num)
{

    int a = 125;
    *num = &a;
    printf("numero doubble %d\n", **num);    
    printf("ptr a%p\n", &a);
    num =NULL;
}

void ptr_single(int *num)
{

    printf("ptr antes %p\n", num);
    *num = 11;
    printf("numero single %d\n", *num);
    num = NULL;
    printf("ptr %p\n", num);
}

int main(void)
{
    int n = 10;
    int *n_ptr = &n;
    int **n2 = &n_ptr;
    printf("Before num %d\n", *n_ptr);
    printf("Before ptr n %p\n", &n);
    printf("Before ptr %p\n", n_ptr);
    // printf("--------------------------\n");
    // ptr_single(n_ptr);
    // printf("--------------------------\n");
    // printf("After single %d\n", *n_ptr);
    // printf("After num %d\n", *n_ptr);
    // printf("After single %p\n", n_ptr);
    
    printf("--------------------------\n");
    ptr_double(n2);
    printf("--------------------------\n");
    printf("After double %d\n", **n2);
    printf("After double %p\n", *n2);
    // printf("After double %p\n", n2);
}