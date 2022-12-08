#include<stdio.h>
#include<math.h>

struct Point
{
    int x;
    int y;
    int z;
};

double manhattonDistance(struct Point p, struct Point q){
    return(abs(p.x-q.x)+abs(p.y-q.y)+abs(p.z-q.z));
}
int main()
{
    struct Point p1, p2;
    scanf("%d, %d, %d\n", &p1.x, &p1.y, &p1.z);
    scanf("%d, %d, %d", &p2.x, &p2.y, &p2.z);

    printf("Manhatton Distance between them: %.2lf\n", manhattonDistance(p1, p2));

    return 0;
}