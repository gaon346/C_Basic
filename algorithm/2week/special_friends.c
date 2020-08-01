#include <stdio.h>

void friend(int *x, int *y, int n);

int main() {
	int person;
	
	scanf("%d", &person);
	int location_x[person];
	int location_y[person];
	for(int i = 0; i < person; i++) {
		scanf("%d%d", &location_x[i], &location_y[i]);
	}
	
	friend(location_x, location_y, person);
	
	return 0;
}

void friend(int *x, int *y, int n)
{
	long long distance;
	long long longest;
	long long temp_x;
	long long temp_y;
	int temp_i;
	int temp_j;
	
	longest = 0;
	for(int i = 0; i < n-1; i++) {
		for(int j = i+1; j < n; j++) {
			temp_x = x[i] - x[j];
			temp_y = y[i] - y[j];
			distance = ((temp_x * temp_x) + (temp_y * temp_y));
			
			if(longest < distance) {
				longest = distance;
				temp_i = i;
				temp_j = j;
			}
		}
	}
	printf("%d %d", temp_i+1, temp_j+1);
}