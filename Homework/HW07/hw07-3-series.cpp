/*
    จงเขียนโปรแกรมภาษาซีเพื่อรับข้อมูลจากผู้ใช้เป็นตัวเลข และให้แสดงชุดอนุกรมตามจำนวนตัวเลขที่กรอก พร้อมกับแสดงผลรวมของชุดอนุกรมนี้ 9 + 99 + 999 + 9999 + 9999 + .... เช่น ผู้ใช้กรอกเลข 5 ให้แสดงชุดอนุกรมคือ 9 + 99 + 999 + 9999 + 99999 และแสดงผลรวมคือ 111105
    (โจทย์ข้อนี้ให้ใช้ Do While Loop เท่านั้น)
    
    Test case:
        Enter number :
            5
    Output:
        Series = 9 + 99 + 999 + 9999 + 99999
        Sum = 111105

    Test case:
        Enter number :
            7
    Output:
        Series = 9 + 99 + 999 + 9999 + 99999 + 999999 + 9999999
        Sum = 11111103
*/
#include <stdio.h>

int main() {
    int n;
    
    // รับค่าจำนวนตัวเลขจากผู้ใช้
    printf("Enter number:\n");
    scanf("%d", &n);
    
    int i = 1; // เริ่มต้นเลขอนุกรมที่ 9
    int sum = 0; // ผลรวมของชุดอนุกรม
    
    // แสดงชุดอนุกรมและคำนวณผลรวม
    printf("Series = ");
    do {
        int term = 0;
        for (int j = 0; j < i; j++) {
            term = term * 10 + 9;
        }
        
        sum += term;
        
        printf("%d", term);
        if (i < n) {
            printf(" + ");
        }
        
        i++;
    } while (i <= n);
    
    printf("\nSum = %d\n", sum);
    
    return 0;
}//end function
