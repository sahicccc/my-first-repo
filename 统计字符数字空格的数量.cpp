#include <stdio.h>
#include <ctype.h>  // 用于isalpha(), isdigit()等函数

int main() {
    char str[1000];  // 定义一个字符数组来存储输入的一行字符
    int letters = 0, spaces = 0, digits = 0, others = 0;

    printf("请输入一行字符: ");
    fgets(str, sizeof(str), stdin);  // 使用fgets读取一行字符

    // 遍历每个字符并统计
    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {  // 判断是否为字母
            letters++;
        } else if (isdigit(str[i])) {  // 判断是否为数字
            digits++;
        } else if (str[i] == ' ') {  // 判断是否为空格
            spaces++;
        } else {  // 其他字符
            others++;
        }
    }

    // 输出结果
    printf("英文字母的个数: %d\n", letters);
    printf("空格的个数: %d\n", spaces);
    printf("数字的个数: %d\n", digits);
    printf("其他字符的个数: %d\n", others);

    return 0;
}

