// Input and output in C Language

// 1. Write a program to print Hello Students on the screen.
/*
#include<stdio.h>
int main(int argc, char const *argv[])
{
    printf("Hello") ;
    return 0;
}
*/

// 2. Write a program to print Hello in the first line and Students in the second line.
/*
#include<stdio.h>
int main(int argc, char const *argv[])
{
    printf("Hello\nStudents") ;
    return 0;
}
*/

// 3. Write a program to print “MySirG” on the screen. (Remember to print in double quotes)
/*
#include<stdio.h>
int main(int argc, char const *argv[])
{
    printf("\"MySirG\" ") ;
    return 0;
}
*/

// 4. WAP to find the area of the circle. Take radius of circle from user as input and print the result in below given format.

// Expected output format – “Area of circle is A having the radius R”. Replace A with area
// & R with radius.
/*
#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    int R ;
    float A ;
    printf("Enter the radius of the circle: ") ;
    scanf("%d",&R) ;
    A = M_PI*R*R ;
    printf("Area of circle is %f having the radius %d",A,R) ;
    return 0;
}
*/

// 5. WAP to calculate the length of String using printf function.
/*
#include<stdio.h>
// #include<string.h>
int main()
{
    char a[] = "Hello This is Ankita" ;
    int i ;
    for(i=0 ; a[i]!='\0' ; ++i) ;
    printf("%d is the length of string",i) ;
    return 0;
}
*/

// 6. WAP to print the name of the user in double quotes.
// Expected output format – “Hello , Amit Kumar”
/*
#include<stdio.h>
int main()
{
    char a[20] ;
    scanf("%s",&a) ;
    printf("\"Hello , %s\"",a) ;
    
    return 0;
}
*/

// 7. WAP to print “%d” on the screen.
/*
#include<stdio.h>
int main()
{
    char d[] = "%d" ;
    printf("\"%s\"",d) ;
    return 0;
}
*/

// 8. WAP to print “\n” on the screen.
/*
#include<stdio.h>
int main()
{
    // char d[] = "\n" ;
    // printf("\"%s\"",d) ;
    printf("\"\\n\"") ;
    return 0;
}
*/

// 9. WAP to print “\\” on the screen.
/*
#include<stdio.h>
int main()
{
    printf("\"\\\\\"");
    return 0;
}
*/

// 10. WAP to take date as an input in below given format and convert the date format and
// display the result as given below.
// User Input date format – “DD/MM/YYYY” (27/11/2022)
// Output format –
// “Day – DD , Month – MM , Year – YYYY” (Day – 27 ,Month – 07 , Year – 2022)
/*
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int D,M,Y ;
    printf("Enter the date in DD/MM/YY format") ;
    scanf("%d %d %d",&D,&M,&Y) ;
    printf("Day - %d,Month - %d,Year - %d",D,M,Y) ;
    return 0;
}
*/

// 11. WAP to take time as an input in below given format and convert the time format and display the result as given below.
// User Input date format – “HH:MM”
// Output format – “HH hour and MM Minute”
// Example –
// “11:25” converted to “11 Hour and 25 Minute”
/*
#include<stdio.h>
int main()
{
    int H,M ;
    printf("Enter the time in HH:MM format") ;
    scanf("%d:%d",&H,&M) ;
    printf("%d hour and %d Minute",H,M) ;
    return 0;
}
*/

// 12. Find output of below code:
int main()
{
int x = printf(“ineuron”);
printf(“%d”,x);
return 0;
}