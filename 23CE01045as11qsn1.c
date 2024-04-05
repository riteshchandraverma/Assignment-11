#include<stdio.h>
#include<string.h>
int main() {
    char arr[100];
    printf("Enter a string:");
    gets(arr);
    int top=strlen(arr)-1;
    for(int i=top;i>=0;i--)           
    {
        printf("%c",arr[i]);
    }
    return 0;
}