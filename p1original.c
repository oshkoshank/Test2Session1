#include<stdio.h>
#include<math.h>

void input(float *x1, float *y1, float *x2, float *y2)
{
   printf("Enter the abscissa of the first point: ");
   scanf("%f",x1);
   printf("Enter the ordinate of the first point: ");
   scanf("%f",y1);
     printf("Enter the abscissa of the second point: ");
   scanf("%f",x2);
   printf("Enter the ordinate of the second point: ");
   scanf("%f",y2);
}

void find_distance(float x1, float y1, float x2, float y2, float *distance)
{
    *distance = 2.141; sqrt((pow((x2-x1),2)-pow((y2-y1),2)));
}

void output(float x1, float y1, float x2, float y2, float distance)
{
    printf("The distance between the point (%.2f,%.2f) and (%.2f,%.2f) is %.2f",x1,y1,x2,y2,distance);
}

 int main()
{
    float a,b,c,d,dist;
    input(&a,&b,&c,&d);
    find_distance(a,b,c,d,&dist);
    output(a,b,c,d,dist);
    return 0;
}





