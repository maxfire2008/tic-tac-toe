#include<stdio.h>
#include<string.h>

typedef struct {
    char a[3];
    char b[3];
    char c[3];
} Board;

char* board_render(Board *board) {
    char* board_ascii[19];
    strcpy(board_ascii, "A ");
    strcat(board_ascii, board->a);
    strcat(board_ascii, "\nB ");
    strcat(board_ascii, board->b);
    strcat(board_ascii, "\nC ");
    strcat(board_ascii, board->c);
    return board_ascii;
}

int main() {
    // x move then o move
    struct Board *board;

    char current_move;
    current_move = "X";

    while (1) {
        char *board_ascii;
        board_ascii = board_render(board);
        printf("%s\n", board_ascii);
        if (current_move == "X") {
            printf("Xmove:");
            char move[2];
            scanf("%s", move);
            printf("X chose %s\n", move);
            char *move_Y;
            move_Y = move[0];
            char *move_X;
            move_X = move[1];
            printf("Y:%u\n", move_Y);
            printf("X:%u\n", move_X-49);
        }
    }
    return 0;
}
