#include "point.h"

float distance(point* a, point* b){
	return (abs(a->x - b->x)+abs(a->y - b->y));
}

int main(){
	point* a = (point*)malloc(sizeof(point));
	point* b = (point*)malloc(sizeof(point));
	scanf("%d %d", &(a->x), &(a->y));
	scanf("%d %d", &(b->x), &(b->y));
	printf("Distance between a and b is: %f\n", distance(a, b));
	return 0;
}
