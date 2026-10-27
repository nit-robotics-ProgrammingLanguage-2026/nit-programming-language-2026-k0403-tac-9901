#include <stdio.h>

int main(void) {
    /* 課題0403: 入力されたintのデータを1.08倍した結果を整数(int)として表示するプログラムを書け．intへの変換には「キャスト演算(前回スライドを参照のこと)」を使用せよ */
    int d;
    scanf("%d",&d);
    printf("%d", (int)(d * 1.08));
    return 0;
}
