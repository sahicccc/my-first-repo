#include <stdio.h>

int main() {
    int a[10];
    printf("输入10个整数，用空格或回车分隔：\n");
    for (int i=0;i<10;i++) scanf("%d",&a[i]);

    // 选择排序（升序）
    for (int i=0;i<9;i++){
        int min_idx = i;
        for (int j=i+1;j<10;j++){
            if (a[j] < a[min_idx]) min_idx = j;
        }
        if (min_idx != i){
            int t = a[i]; a[i] = a[min_idx]; a[min_idx] = t;
        }
    }

    printf("排序后（升序）：\n");
    for (int i=0;i<10;i++) printf("%d ", a[i]);
    printf("\n");
    return 0;
}

