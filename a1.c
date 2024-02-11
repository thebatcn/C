#include <stdio.h>
#include<string.h>
#include<stdint.h>

// 函数声明
int isPalindrome(int num);

int main() {
    int number;

    // 输入待检查的数字
    printf("Enter a number: ");
    scanf("%d", &number);

    // 调用函数检查是否为回文数
    if (isPalindrome(number)) {
        printf("%d is a palindrome.\n", number);
    } else {
        printf("%d is not a palindrome.\n", number);
    }
    
    return 0;
}

int
// 函数定义：判断是否为回文数
int isPalindrome(int num) {
    int originalNum = num;
    int reverseNum = 0;

    // 反转数字
    while (num > 0) {
        int digit = num % 10;
        reverseNum = reverseNum * 10 + digit;
        num /= 10;
    }

    // 判断是否与原始数字相等
    return (originalNum == reverseNum);
}
