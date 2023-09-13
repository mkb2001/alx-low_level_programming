#include <stdio.h>
#include <string.h>
/**
 * add_str_nums - check the code.
 *
 * Return: Nothing
 */
void add_str_nums(char *n1, char *n2, char *res) {
    int carry = 0;
    int len1 = strlen(n1);
    int len2 = strlen(n2);
    int max_len = len1 > len2 ? len1 : len2;
    res[max_len + 1] = '\0';

    for (int i = 0; i < max_len; i++) {
        int num1 = i < len1 ? n1[len1 - 1 - i] - '0' : 0;
        int num2 = i < len2 ? n2[len2 - 1 - i] - '0' : 0;
        int sum = num1 + num2 + carry;
        res[max_len - i] = '0' + sum % 10;
        carry = sum / 10;
    }

    if (carry > 0) {
        res[0] = '0' + carry;
    } else {
        memmove(res, res + 1, max_len);
    }
}

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void) {
    char a[5000] = "1";
    char b[5000] = "2";
    char res[5000];

    printf("%s, %s", a, b);
    for (int i = 3; i <= 98; i++) {
        add_str_nums(a, b, res);
        printf(", %s", res);
        strcpy(a, b);
        strcpy(b, res);
    }
    printf("\n");
    return (0);
}
