#include <stdio.h>

typedef struct _student {
	char	name[15];
	int		kor;
	int		eng;
	int		mat;
	int		tot;
}	student;

int main() {
	student s[3];
	float avr;
	
	for(int i = 0; i < 3; i++){
		scanf("%s", &s[i].name);
		scanf("%d", &s[i].kor);
		scanf("%d", &s[i].eng);
		scanf("%d", &s[i].mat);
		s[i].tot = s[i].kor + s[i].eng + s[i].mat;
	}
	
	for(int i = 0; i < 3; i++){
		avr = (float)s[i].tot / 3;
		printf("%s %.1f\n", s[i].name, avr);
	}
	
	return 0;
}