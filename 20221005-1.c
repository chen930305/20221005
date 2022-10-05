#include <stdio.h>
int main()
{
    int grade, rate;
    scanf("%d", &grade);
    if (grade>100|grade<0){
    	printf("¿é¤J¿ù»~");
    	return 0;
	}
	while ((grade = getchar())! = EOF){
	
    rate = grade/10;
    switch(rate)
    {
    case 10: 
    case 9:   
        printf("A\n");
        break;
    case 8:   
        printf("B\n");
        break;
    case 7:
        printf("C\n");
        break;
    case 6:
        printf("D\n");
        break;
    default :
        printf("E\n");
    }
    }
    return 0;
}
 
