#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int int_num1, int_num2;
    float float_num1, float_num2;
    
    scanf("%d%d", &int_num1, &int_num2);
    scanf("%f%f", &float_num1, &float_num2);
    
    printf("%d %d\n", int_num1+int_num2, int_num1-int_num2);
    printf("%.1f %.1f\n", float_num1+float_num2, float_num1-float_num2);
    return 0;
}
