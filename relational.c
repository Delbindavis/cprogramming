#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,z,n;
    printf("Enter the value of x: ");
    scanf("%d",&x);
    printf("Enter the value of y: ");
    scanf("%d",&y);
    printf("Enter the value of n: ");
    scanf("%d",&n);
    switch (n)
    {
          case 1:
            z=x<y;
            printf("z=%d",z);
            break;
          case 2:
            z=x>y;
            printf("z=%d",z);
            break;
           case 3:
            z=x<=y;
            printf("z=%d",z);
            break;
          case 4:
            z=(x*x-y)>(y*y-x);
            printf("z=%d",z);
            break;
          case 5:
            z=(x*x*x)<(y*x*x);
            printf("z=%d",z);
            break;
          case 6:
            z=((x*y)!=(y*x));
            printf("z=%d",z);
            break;
         case 7:
            z=((x*y)==(y*x));
            printf("z=%d",z);
            break;
    }
return 0;
}

