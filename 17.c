#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//Complete the following function.

int marks_summation(int* marks, int number_of_students, char gender) {
  int sum = 0;
  if (gender == 'b')
  {
    for (int i = 0; i < number_of_students; i+=2)
    {
      if (i%2 == 0)
      {
        sum = sum + *(marks+i);
      }
    }
    return sum;
  }
  else if (gender == 'g')
  {
    for (int i = 1; i < number_of_students; i+=2)
    {
    if (i%2 != 0)
      {
        sum = sum + *(marks+i);
      }
    }
    return sum;
  }
  else
  {}
}

int main() {
    int number_of_students;
    char gender;
    int sum;
  
    scanf("%d", &number_of_students);
    int *marks = (int *) malloc(number_of_students * sizeof (int));
 
    for (int i = 0; i < number_of_students; i++) {
        scanf("%d", (marks + i));
    }
    
    scanf(" %c", &gender);
    sum = marks_summation(marks, number_of_students, gender);
    printf("%d", sum);
    free(marks);
 
    return 0;
}