#include <stdio.h>

int		main()
{
	int	Hero[100];
	int	Not_Choice;
	int	HeroNum;
	
	for(int i = 0; i < 4; i++){
		scanf("%d", &HeroNum);
		Hero[HeroNum] = 1;
	}
	for(int i = 0; i < 5; i++){
		scanf("%d", &HeroNum);
		if(Hero[HeroNum] == 0) ++Not_Choice;
	}
	printf("%d", Not_Choice);
	
	return 0;
}