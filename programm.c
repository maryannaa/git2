#include <stdio.h>

int main()
{
    int x, y;
    
    printf("Введите целое число x: ");
    scanf("%d", &x);
    
    y = 5 * x + 20;
    
    printf("Результат: y = %d\n", y);
    
    return 0;
}
