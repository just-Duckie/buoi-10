#include <stdio.h>

int main() {
    int num1, num2, num3;
    

    printf("Nhap ba so nguyen:\n");
    scanf("%d %d %d", &num1, &num2, &num3);
    
    int smallest = num1;
    
    if (num2 < smallest)
	{
        smallest = num2;
    }
    if (num3 < smallest)
	{
        smallest = num3;
    }
    
    printf("%d\n", smallest);
    
    return 0;
    
}

