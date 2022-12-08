#include<stdio.h>
#include<math.h>

struct Point
{
    int x;
    int y;
};

double manhattonDistance(struct Point p, struct Point q){
    return(abs(p.x-q.x)+abs(p.y-q.y));
}
int main()
{
    struct Point p1, p2;
    scanf("(%d, %d)\n", &p1.x, &p1.y);
    scanf("(%d, %d)", &p2.x, &p2.y);

    printf("Manhatton Distance between them: %.2lf\n", manhattonDistance(p1, p2));

    return 0;
}