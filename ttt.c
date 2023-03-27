#include<stdio.h>
#include<string.h>

// class Board:
//     def __init__(self):
//         self.a = list("   ")
//         self.b = list("   ")
//         self.c = list("   ")
struct Board {
    char a[4];
    char b[4];
    char c[4];
};

void initBoard(struct Board *board) {
    strcpy(board->a, "   ");
    strcpy(board->b, "   ");
    strcpy(board->c, "   ");
}


// def board_render(board):
void board_render(struct Board *board, char *board_ascii) {
    memset(board_ascii, 0, 18);
//     board_ascii = ""
//     board_ascii += "A "
    strcat(board_ascii, "A ");
//     board_ascii += ''.join(board.a)
    strcat(board_ascii, board->a);
//     board_ascii += "\nB "
    strcat(board_ascii, "\nB ");
//     board_ascii += ''.join(board.b)
    strcat(board_ascii, board->b);
//     board_ascii += "\nC "
    strcat(board_ascii, "\nC ");
//     board_ascii += ''.join(board.c)
    strcat(board_ascii, board->c);
//     return board_ascii
}

// def main():
int main() {
//     board = Board()
    struct Board board;
    initBoard(&board);
//     current_move = "X"
    char current_move[1] = "X";
//     while 1:
    while (1) {
//         board_ascii = board_render(board)
        char board_ascii[18];
        board_render(&board, board_ascii);
//         print(board_ascii)
        printf("%s", board_ascii);
//         print(current_move+" move:", end="")
//         move = input("")[:2]
//         print(current_move+" chose", move)
//         move_Y = move[0]
//         move_X = ord(move[1])-49
//         print("Y:", ord(move_Y))
//         print("X:", move_X)
//         if move_Y == "A":
//             board.a[move_X] = current_move
//         if move_Y == "B":
//             board.b[move_X] = current_move
//         if move_Y == "C":
//             board.c[move_X] = current_move
//         if current_move == "X":
//             current_move = "Y"
//         else:
//             current_move = "X"
//     return 0
    }
    return 0;
}
