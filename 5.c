/* 
1. Which of the following accesses a variable in structure b?
A. b->var;
B. b.var;
C. b-var;
D. b>var;

2. Which of the following accesses a variable in a pointer to a structure, *b?
A. b->var;
B. b.var;
C. b-var;
D. b>var;

3. Which of the following is a properly defined struct?
A. struct {int a;}
B. struct a_struct {int a;}
C. struct a_struct int a;
D. struct a_struct {int a;};

4. Which properly declares a variable of struct foo?
A. struct foo;
B. struct foo var;
C. foo;
D. int foo;
*/

// arrays

#include <stdio.h>
int main(){
    int f = 0;
    int telegram[5];
    telegram[0] = 2;
    telegram[1] = 3;
    telegram[2] = 4;
    telegram[3] = 5;
    telegram[4] = 6;
    for(f=0 ; f<5 ; f++){
        printf("%d\n",telegram[f]);
    }
    return 0;
}

