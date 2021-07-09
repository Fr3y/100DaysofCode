//Day1

#include <stdio.h>

int main() {
    int x,y;
    printf("Enter any number\n");
    scanf("%d", &x);
    printf("here is table of %d\n",x);
    for(y=1 ; y<=10 ; y++){
        printf("%d * %d = %d\n", x,y,x*y);
    }
    return 0;
}

// While loop

#include <stdio.h>
int main(){
    int x=0;
    while(x<=10){
        printf("%d\n",x);
        x++;
    }
    return 0;
}

// do 
#include <stdio.h>

int main() {
    int x=1;
    do{
        printf("pepe memes\n");
    } while(x<=10);
    return 0;
}

//

#include <stdio.h>

int main() {
    int x;
    for(x=0 ; x<10 ;x++){

    }
    printf("%d\n", x);
    return 0;
}

// answer will be 10
