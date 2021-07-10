/* Functions */

#include <stdio.h>

int Mugen(int x, int y);

int main() {
    int x;
    int y;
    printf("Enter one\n");
    scanf("%d", &x);
    printf("Enter two\n");
    scanf("%d", &y);
    printf("%d\n", x*y);

    return 0;
}


// more advance 

#include <stdio.h>
int frey(int x, int y);
int main(){
    int x;
    int y;
    printf("Enter 2 numbers\n");
    scanf("%d", &x);
    scanf("%d", &y);
    printf("the product is %d\n", frey(x, y));

}
int frey(int x, int y)
{
    return x*y;
}
