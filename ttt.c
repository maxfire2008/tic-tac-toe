#include<stdio.h>
#include<stdlib.h>
#include<string.h>


char* board_render(char a[3], char b[3], char c[3]) {
    char* board = malloc(19);
    strcpy(board, "A ");
    strcat(board, a);
    strcat(board, "\nB ");
    strcat(board, b);
    strcat(board, "\nC ");
    strcat(board, c);
    return board;
}

int main() {
    // x move then o move
    char a[3] = "   ";
    char b[3] = "   ";
    char c[3] = "   ";

    char* board;

    while (1) {
        board = board_render(a, b, c);
        printf("%s\n", board);

        printf("X move:");
        char move[2];
        scanf("%s", move);
        printf("X chose %s\n", move);
    }
    return 0;
}
