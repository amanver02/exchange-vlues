#include <stdio.h>
int main() {
    int a, b;
    printf("Enter value for a: ");
    scanf("%d", &a);
    printf("Enter value for b: ");
    scanf("%d", &b);
    printf("Values before swapping:\n");
    printf("a = %d, b = %d\n", a, b);

    int temp = a;
    a = b;
    b = temp;

    printf("Values after swapping:\n");
    printf("a = %d, b = %d\n", a, b);
    return 0;}