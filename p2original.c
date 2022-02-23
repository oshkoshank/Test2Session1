#include<stdio.h>

void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3)
{
    printf("Enter the co-ordinates of the fisrt point: ");
    scanf("%f,%f",x1,y1);
     printf("Enter the co-ordinates of the Second point: ");
    scanf("%f,%f",x2,y2);
     printf("Enter the co-ordinates of the Third point: ");
    scanf("%f,%f",x3,y3);
}

int is_triangle(float x1, float y1, float x2, float y2, float x3, float y3)
{
    int a;
    a = ((x1)*(y2-y3)+(x2)*(y3-y1)+(x3)*(y1-y2));
    return a;
}

void output(float x1, float y1, float x2, float y2, float x3, float y3, float istriangle)
{
    if (istriangle==0)
    {
        printf("The three points do not form a Triangle !!!");
    }
    else
    {
        printf("The three points do form a triangle  ");
    }
    
    
}
int main()
{
    float a,b,c,d,e,f,g;
    input_triangle(&a,&b,&c,&d,&e,&f);
    g = is_triangle(a,b,c,d,e,f);
    output(a,b,c,d,e,f,g);
    return 0;
}
