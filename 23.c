#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct
{
	int a;
	int b;
	int c;
} triangle;

void swap(int *x, int *y)
{
	*x ^= *y;
	*y ^= *x;
	*x ^= *y;
}

void sort_by_area(triangle *tr, int n)
{
	/*
		* Sort an array a of the length n
	*/
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			float pj = (tr[j].a + tr[j].b + tr[j].c)/2.0;
			float sj = sqrt(pj * (pj-tr[j].a) * (pj-tr[j].b) * (pj-tr[j].c));
			float pj_1 = (tr[j+1].a + tr[j+1].b + tr[j+1].c)/2.0;
			float sj_1 = sqrt(pj_1 * (pj_1-tr[j+1].a) * (pj_1-tr[j+1].b) * (pj_1-tr[j+1].c));
			
			if (sj > sj_1)
			{
				swap(&tr[j].a, &tr[j + 1].a);
				swap(&tr[j].b, &tr[j + 1].b);
				swap(&tr[j].c, &tr[j + 1].c);
			}
		}
	}
}

int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++)
	{
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++)
	{
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}
/*int temp = 0;
    for (int i = 0; i < n; ++i) {
        temp = i;
        for (int j = i+1; j < n; ++j) {
			int pj = (((tr[j].a) + (tr[j].b) + (tr[j].c)) / 2);
			int sj = sqrt(((pj) * (pj - (tr[j].a)) * (pj - (tr[j].b)) * (pj - (tr[j].c))));
			int pj_1 = (((tr[j + 1].a) + (tr[j + 1].b) + (tr[j + 1].c)) / 2);
			int sj_1 = sqrt(((pj_1) * (pj_1 - (tr[j + 1].a)) * (pj_1 - (tr[j + 1].b)) * (pj_1 - (tr[j + 1].c))));
            if (sj > sj_1) {
                temp = j;
            }
        }
        if (i != temp) {
            	swap(&tr[i].a, &tr[i + 1].a);
				swap(&tr[i].b, &tr[i + 1].b);
				swap(&tr[i].c, &tr[i + 1].c);
        }
    }*/