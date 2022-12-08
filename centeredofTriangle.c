#include<stdio.h>

struct Point
{
    double x;
    double y;
};
struct Triangle
{
    struct Point A;
    struct Point B;
    struct Point C;
};


struct Point centroid(struct Triangle t){
    
    struct Point ans;
    ans.x= (t.A.x+t.B.x+t.C.x)/3;
    ans.y = (t.A.y+t.B.y+t.C.y)/3;

    return ans;
}
int main()
{
   struct Point p1 ={3, 2};
   struct Point p2 ={4, 4};
   struct Point p3 ={5, 3};

    struct Triangle t={p1, p2, p3};
    struct Point D = centroid(t);

    printf("(%.2lf, %.2lf)\n", D.x, D.y);
    return 0;
}