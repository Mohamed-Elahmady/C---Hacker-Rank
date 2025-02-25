#include <stdio.h>
#include <stdlib.h>
#define MAX_HEIGHT 41

typedef struct
{
	/**
	* Define three fields of type int: length, width and height
	*/
    int length;
    int width;
    int height;
} box;

int get_volume(box b) {
	int vl = 0;
    vl = (b.length)*(b.width)*(b.height);
    return vl;
}

int is_lower_than_max_height(box b) {
	int ht = b.height;
    if (ht < 41)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
	int n;
	scanf("%d", &n);
	box *boxes = malloc(n * sizeof(box));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &boxes[i].length, &boxes[i].width, &boxes[i].height);
	}
	for (int i = 0; i < n; i++) {
		if (is_lower_than_max_height(boxes[i])) {
			printf("%d\n", get_volume(boxes[i]));
		}
	}
	return 0;
}