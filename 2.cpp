#include <stdio.h>
#include <math.h>

int main() {

    double a, b, c;
    double discriminant, root1, root2;

    printf("Enter the Amount AAAA : ");
    scanf("%lf", &a);
    printf("Enter the value b : ");
    scanf("%lf", &b);
    printf("Enter the value c : ");
    scanf("%lf", &c);

    if(!(a==0)){


        discriminant = b * b - 4 * a * c;

        if (discriminant > 0) {
            root1 = (-b + sqrt(discriminant)) / (2 * a);
            root2 = (-b - sqrt(discriminant)) / (2 * a);
            printf("The roots of the quadratc equation are %.0lf and %.0lf \n", root1, root2);
            printf("The roots are real and different");
        }
        else if (discriminant == 0) {
            root1 = root2 = -b / (2 * a);
            printf("The roots of the quadratc equation are %.0lf and %.0lf \n", root1, root2);
            printf("The roots are real and equal");
        }
        else {

          printf("The roots are complex and different");
     
        }

        


     }
      else{
        printf("The value of a cannot be 0");
      }

      return 0;

    
}
