#include <stdio.h>

int		decide(long int nb);
long int Max_Num = 1000000000000000000;

int		main() {
	long int Secret_Num;
	
	scanf("%ld", &Secret_Num);
	
	if(decide(Secret_Num)){
		printf("Yes");
	}
	else{
		printf("No");
	}
	
	return 0;
}

int		decide(long int nb)
{
	if(nb == 1){
		return 1;
	}
	else if(nb >= 2 && nb < Max_Num){
		if(nb % 2 != 0){
			return 0;
		}
		else{
			decide(nb / 2);
		}
	}
	else
		return 0;
}