#include <stdio.h>

int radius, area;
double PI = 3.1459;

int main(void)
{
    printf("Enter radius (i.e. 10): ");
    scanf("%d", &radius);
    area = (int) (PI * radius * radius);
    printf("\n\nArea = %d\n", area);
    return 0;
}
