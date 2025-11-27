//1
#include<stdio.h>
void print1toN(int num){
    if (num==0)
    {
        return;
    }
    print1toN(num-1);
    printf("%d  ",num);
}
int main()
{
  print1toN(9);
    return 0;
}

//2
#include<stdio.h>
void printNto1(int num){
    if(num==0){
        return;
    }
    printf("%d ",num);
    printNto1(num-1);
    
}
int main()
{
    printNto1(9);
    return 0;
}
//3

#include<stdio.h>
int fact(int num){
    int factorial=1;
    if(num==0){
        return 1;
    }
    return num*fact(num-1);
}
int main()
{
    printf("%d",fact(5));
    return 0;
}

//4

#include <stdio.h>

void fibo(int a, int b, int n)
{
    if (n == 0)
        return;

    printf("%d ", a);

    fibo(b, a + b, n - 1);
}

int main()
{
    fibo(0, 1, 5);
    return 0;
}


//5

#include <stdio.h>

int sumDigits(int n) // 55 //5 0
{
    if (n == 0) // false false true //recursion ends
        return 0;

    return (n % 10) + sumDigits(n / 10); // 5+sd(5) 5+5+sd(0)
}

int main()
{
    printf("Sum = %d\n", sumDigits(-567));

    return 0;
}


//6

#include <stdio.h>

int reverse(int n, int rev)
{
    if (n == 0)
        return rev;

    rev = rev * 10 + (n % 10);
    return reverse(n / 10, rev);
}

int main()
{
    int n = 543;
    printf("%d", reverse(n, 0));
    return 0;
}

//7

#include <stdio.h>

int findMax(int arr[], int n) {
    if (n == 1)
        return arr[0];

    int maxRest = findMax(arr, n - 1);

    return (arr[n - 1] > maxRest) ? arr[n - 1] : maxRest;
}

int main() {
    int arr[] = {3, 9, 1, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Maximum = %d", findMax(arr, n));

    return 0;
}


//8

#include <stdio.h>

int countDigits(int n)
{
    if (n < 10)
        return 1;

    return 1 + countDigits(n / 10);
}

int main()
{
    int n = 10020;
    printf("%d", countDigits(n));
    return 0;
}


//9
#include <stdio.h>

int power(int a, int b)
{
    if (b == 0)
        return 1;

    return a * power(a, b - 1);
}

int main()
{
    printf("%d", power(2, 5)); 
    return 0;
}

//10

#include <stdio.h>
#include <string.h>

int isPalindrome(char str[], int start, int end) {
    if (start >= end)
        return 1;   // Reached middle → valid palindrome

    if (str[start] != str[end])
        return 0;   // Mismatch → not a palindrome

    return isPalindrome(str, start + 1, end - 1);
}

int main() {
    char str[] = "RADAR";

    if (isPalindrome(str, 0, strlen(str) - 1))
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}

//11

#include <stdio.h>

int sumArray(int arr[], int n) {
    if (n == 0)
        return 0;

    return arr[n - 1] + sumArray(arr, n - 1);
}

int main() {
    int arr[] = {1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("%d", sumArray(arr, n));   // Output: 10
    return 0;
}

//12

#include <stdio.h>

void printTable(int n, int i) {
    if (i > 10)
        return;

    printf("%d × %d = %d\n", n, i, n * i);

    printTable(n, i + 1);
}

int main() {
    printTable(8, 1);   // Change 8 to any number you want
    return 0;
}

//13
#include <stdio.h>

int sumN(int n) {
    if (n == 1)
        return 1;

    return n + sumN(n - 1);
}

int main() {
    int n = 5;
    printf("%d", sumN(n));   // Output: 15
    return 0;
}


