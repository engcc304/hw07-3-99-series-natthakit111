/*
    จงเติมโค้ดโปรแกรมตามที่แสดงในส่วนของ Placeholder เพื่อแสดงผลลัพธ์ของ Operator ด้านซ้ายมือ พร้อมทั้งแก้ไขโค้ดโปรแกรมให้ถูกต้อง
*/
#include <stdio.h> // Corrected header name

int main() {
    int a = 0, b = 0 ;
    printf( "Please enter value (a b) : " ) ;
    scanf( "%d %d", &a, &b ); // Corrected input statement

    // Completed and corrected operator outputs
    printf( "a = %d , b = %d \n", a, b ) ;
    printf( "a + b = %d \n", a + b ) ;
    printf( "a - b = %d \n", a - b ) ;
    printf( "a * b = %d \n", a * b ) ; // Added missing semicolon
    printf( "a / b = %lf (b must be greater than 0)\n", b > 0 ? (double)a / b : 0.0 ) ;
    printf( "a %% b = %d \n", a % b ) ; // Escaped '%' with '%%'
    printf( "++a = %d \n", ++a ) ;
    printf( "a-- = %d \n", a-- ) ;
    printf( "a += 1 %d \n", a += 1 ) ;
    printf( "a += b %d \n", a += b ) ;
    printf( "a -= 1 %d \n", a -= 1 ) ; // Changed ':' to ';' to fix syntax error
    printf( "a -= b %d \n", a -= b ) ;
    printf( "a *= 1 %d \n", a *= 1 ) ;
    printf( "a *= b %d \n", a *= b ) ;
    printf( "a %%= 1 %d \n", a %= 1 ) ; // Changed '%' to '%%'
    printf( "a %%= b %d \n", a %= b ) ; // Changed '%' to '%%'
    printf( "a && b %d \n", a && b ) ;
    printf( "a || b %d \n", a || b ) ;
    return 0 ;
}//end function
