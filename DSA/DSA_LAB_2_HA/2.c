#include <stdio.h>

struct distance
{
	int km;
	int m;
};
struct distance* add(struct distance *n1, struct distance *n2)
{
	struct distance ans;
	struct distance *d=&ans;
	d->m = (n1->m) + (n2->m);
	d->km = (n1->km) + (n2->km);
    while(d->m>=1000)
    {
        d->m-=1000;
        d->km++;
    }
	return d;
}

int main()
{
	struct distance d1, d2;
	printf("For Distance 1");
	printf("\nEnter distance in km:");
	scanf("%d", &d1.km);
	printf("\nEnter distance in meter:");
	scanf("%d", &d1.m);
	printf("\nFor Distance 2");
	printf("\nEnter distance in km:");
	scanf("%d", &d2.km);
	printf("\nEnter distance in meter:");
	scanf("%d", &d2.m);
	struct distance *ptr = add(&d1, &d2);
	printf("\nResult distance is %d km and %dm\n", ptr->km,ptr->m);
	return 0;
}