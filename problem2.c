#include <stdio.h>

struct Point
{
    double x;
    double y;
};

struct Point midpoint(struct Point p, struct Point q)
{
   struct Point ans;
   ans.x=(p.x+q.x)/2;
   ans.y = (p.y+q.y)/2;
   return ans;
}
int main()
{
    struct Point p1, p2, p3;
    scanf("(%lf, %lf)\n", &p1.x, &p1.y);
    scanf("(%lf, %lf)", &p2.x, &p2.y);
    
    p3=(midpoint(p1, p2));

    printf("(%.2lf, %.2lf)\n", p3.x, p3.y);
    return 0;
}