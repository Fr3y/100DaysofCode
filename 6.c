// ahh this will be something 
string and more 
)#include <stdio.h>
#include <string.h>
// Schildt, H. (2003). C++: Complete Reference. 4th ed. New York: McGraw-Hill. Ch. 4.

/*
  C/C++ supports a wide range of functions
that manipulate null-terminated strings.


The most common are
 ___________________________________________
|     Name                Function          |
|___________________________________________|

  strcpy(s1, s2)  Copies s2 into s1.
 
  strcat(s1, s2)  Concatenates s2 onto
                  the end of s1.

  strlen(s1)      Returns the length of s1.
 
  strcmp(s1, s2)  Returns 0 if s1 and s2
                  are the same;
                  less than 0 if s1<s2;
                  greater than 0 if s1>s2.
 
 
  strchr(s1, ch) Returns a pointer to the
                 first occurrence of ch in s1.

  strstr(s1, s2) Returns a pointer to the
                 first occurrence of s2 in s1.

 */
/*

These functions use the standard header file 
string.h. (C++ programs can also use the C++ 
style header <cstring>.)

 */
 // The following program illustrates
// the use of these string functions:
int main() {
    printf(
      "*** C-strings *** \n\n");
    
    char s1[80], s2[80];
    
    /* Enter the strings: */
    gets(s1);
    gets(s2);
    
    printf("lengths: %d %d \n", strlen(s1), strlen(s2));
    
    if( !strcmp(s1, s2) )
        printf("The strings are equal. \n");
    
    strcat(s1, s2);
    printf("%s \n\n", s1);
    
    
    strcpy(s1, "\nThis is a test. \n");
    printf(s1);
    if( strchr("hello", 'e') )
        printf("e is in hello \n");
    if( strstr("hi there", "hi") )
        printf("found hi");
    
    return 0;
}

/*
  Remember, strcmp( ) returns false if the
strings are equal. Be sure to use the logical
operator ! to reverse the condition, as just
shown, if you are testing for equality.

 */
