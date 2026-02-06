#include <stdio.h>

int main(void) {
    int h;
    printf("请输入圣诞树的高度（建议 >= 5）：");
    if (scanf("%d", &h) != 1 || h <= 0) {
        printf("输入无效。\n");
        return 1;
    }

    int i, j;

    // 画树冠（等腰三角形）
    for (i = 1; i <= h; i++) {
        // 左侧空格
        for (j = 0; j < h - i; j++) {
            printf(" ");
        }
        // 星号
        for (j = 0; j < 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    // 计算树干尺寸
    int trunk_height = h / 3;
    if (trunk_height < 1) trunk_height = 1;

    int trunk_width = h / 3;
    if (trunk_width < 1) trunk_width = 1;
    // 保证树干宽度为奇数，方便居中
    if (trunk_width % 2 == 0) {
        trunk_width++;
    }

    // 让树干大致居中对齐
    int spaces = h - trunk_width / 2 - 1;

    // 画树干
    for (i = 0; i < trunk_height; i++) {
        for (j = 0; j < spaces; j++) {
            printf(" ");
        }
        for (j = 0; j < trunk_width; j++) {
            printf("|");
        }
        printf("\n");
    }

    return 0;
}


