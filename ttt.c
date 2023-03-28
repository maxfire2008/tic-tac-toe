#include<stdio.h>
#include<string.h>


// def board_render(board):
void board_render(char board[3][4], char *board_ascii) {
    memset(board_ascii, 0, 18);
//     board_ascii = ""
//     board_ascii += "A "
    strcat(board_ascii, "A ");
//     board_ascii += ''.join(board[0])
    char *row_a = &board[0][0];
    strcat(board_ascii, row_a);
//     board_ascii += "\nB "
    strcat(board_ascii, "\nB ");
//     board_ascii += ''.join(board[1])
    char *row_b = &board[1][0];
    strcat(board_ascii, row_b);
//     board_ascii += "\nC "
    strcat(board_ascii, "\nC ");
//     board_ascii += ''.join(board[2])
    char *row_c = &board[2][0];
    strcat(board_ascii, row_c);
//     return board_ascii
}

// def main():
int main() {
//     board = [
    //     [" ", " ", " "],
    //     [" ", " ", " "],
    //     [" ", " ", " "],
    // ]
    char board[3][4] = {{' ', ' ', ' '},
                        {' ', ' ', ' '},
                        {' ', ' ', ' '}};
//     current_move = "X"
    char current_move[1] = "X";
//     while 1:
    while (1) {
//         board_ascii = board_render(board)
        char board_ascii[18];
        board_render(board, board_ascii);
//         print(board_ascii)
        printf("%s\n\n", board_ascii);
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
