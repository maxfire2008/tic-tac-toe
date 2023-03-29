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
    strcat(board_ascii, "'\nB ");
//     board_ascii += ''.join(board[1])
    char *row_b = &board[1][0];
    strcat(board_ascii, row_b);
//     board_ascii += "\nC "
    strcat(board_ascii, "'\nC ");
//     board_ascii += ''.join(board[2])
    char *row_c = &board[2][0];
    strcat(board_ascii, row_c);
    strcat(board_ascii, "'");
//     return board_ascii
}

// def main():
int main() {
//     board = [
    //     [" ", " ", " "],
    //     [" ", " ", " "],
    //     [" ", " ", " "],
    // ]
    // char board[3][4] = {{'A', 'B', 'C'},
    //                     {'D', 'E', 'F'},
    //                     {'G', 'H', 'I'}};
    char board[3][4] = {{' ', ' ', ' '},
                        {' ', ' ', ' '},
                        {' ', ' ', ' '}};
//     current_move = "X"
    char *current_move;
    current_move = "X";
//     while 1:
    while (1) {
//         board_ascii = board_render(board)
        char board_ascii[18];
        board_render(board, board_ascii);
//         print(board_ascii)
        printf("%s\n\n", board_ascii);
//         print(current_move+" move:", end="")
        printf("%s move:", current_move);
//         move = input("")[:2]
        char move[2];
        scanf("%s", &move);
//         print(current_move+" chose", move)
        printf("\n%s chose %s\n", current_move, move);
//         move_Y = ord(move[0])-65
        char move_Y = move[0]-65;
//         move_X = ord(move[1])-49
        char move_X = move[1]-49;
//         print("Y:", move_Y)
        printf("Y: %d\n", move_Y);
//         print("X:", move_X)
        printf("X: %d\n", move_X);
        printf("%d,%d is currently '%c'\n", move_Y, move_X, board[move_Y][move_X]);
        // if board[move_Y][move_X] == " ":
        if (board[move_Y][move_X] == 32) {
//             board[move_Y][move_X] = current_move
            // char old_row[3];
            // strcpy(old_row, board[move_Y]);
            // printf("%s", old_row);
            strcpy(&board[move_Y][move_X], current_move);
            char extra_space;
            for (extra_space = 1-move_X; extra_space >= 0; --extra_space) {
                strcat(&board[move_Y], " ");
            }
//             if current_move == "X":
            if (current_move == "X") {
//                 current_move = "Y"
                current_move = "Y";
            }
//             else:
            else {
//                 current_move = "X"
                current_move = "X";
            }
        }
//         else:
        else {
            printf("Invalid move!\n");
//             print("Invalid move!")
        }
//     return 0
    }
    return 0;
}
