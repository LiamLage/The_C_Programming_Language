#include <stdio.h>

int main()  {
    //  Input & Output
    int testInteger;
    printf("Enter an integer: ");
    scanf("%d", &testInteger);
    printf("Number = %d\r\n", testInteger);
    
    //  C Floats Input & Output
    float f;
    printf("Enter a float: ");
    scanf("%f", &f);
    printf("Number = %f\r\n", f);


    /*  int prinf(const char* format, ...);
        '\r\n'      Makes a newline
        '\t'        Inserts a tab
        '\\'        Prints '\'
        '\"'        Prints '"'
        '%d'        Prints or scans an integer
        '%x or %X'  Prints or scans an integer value in lowercase or UPPERCASE hexidecimal format
        '%f'        Prints or scans a real (float) value
        '%lf'       Prints or scans a real (double) value
        '%u'        Prints or scans an (unsigned int) value
        '%c'        Prints or scans a single character (char)
    */
   int W;
   int H;
   printf("\r\nEnter the dimentions as H/W: ");
   scanf("%d/%d", &W, &H);  // The combination '%d/%d' is used to scan two integers separated by '/'
   printf("The area is %d\r\n", W*H);   //  Multiply W and H and return the Area

   int x = 172;
   printf("\r\nInteger 'x' shown in lowercase Hexidecimal format: ");
   printf("X Equals %x", x);    //  The directive '%x' prints the integer value in lowercase hexidecimal format

   int X;
   printf("\r\nEnter X in hexidecimal format: ");
   scanf("%X", &X);     //  The directive '%X' scans the integer value in uppercase hexidecimal format
   printf("X Equals %d\r\n", X);    //  The '%d' directive prints the integer value of 'X'

   float R = 2.5;
   printf("R Equals %f\r\n", R);    //  The directive '%f' prints a real (float) value

   int Z = 6235;
   printf("X Equals %10d\r\n", Z);  //  The directive '%10d' prints the number on ten digits including the '.' and two digits in the fraction part
   
   float Y = 8372.5675365;
   printf("Y Equals %10.2f\r\n", Y);    //  
   return 0;

}