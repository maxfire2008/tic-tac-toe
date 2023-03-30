#include<stdio.h>
#include<string.h>

// def player_won(player, board):
int player_won(char player, char board[3][4]) {
//     for y in range(3):
    char y;
    for (y = 1; y < 3; ++y) {
//         if board[y][0] == player and board[y][1] == player and board[y][2] == player:
        printf("\n==\n%s\n==\n", board[y]);
//         if (
//             strcmp(&board[y][0], &player) &&
//             strcmp(&board[y][1], &player) &&
//             strcmp(&board[y][2], &player)
//         ) {
// //             return 1
//             return 1;
//         }
    }
//     for x in range(3):
//         if board[0][x] == player and board[1][x] == player and board[2][x] == player:
//             return 1
//     if board[0][0] == player and board[1][1] == player and board[2][2] == player:
//         return 1
//     if board[0][2] == player and board[1][1] == player and board[2][0] == player:
//         return 1
//     return 0
    return 0;
}

// def board_render(board):
void board_render(char board[3][4], char *board_ascii) {
    memset(board_ascii, 0, 18);
//     board_ascii = ""
//     board_ascii += "a "
    strcat(board_ascii, "  123\n");
    strcat(board_ascii, "a|");
//     board_ascii += ''.join(board[0])
    char *row_a = &board[0][0];
    strcat(board_ascii, row_a);
//     board_ascii += "\nb "
    strcat(board_ascii, "\nb|");
//     board_ascii += ''.join(board[1])
    char *row_b = &board[1][0];
    strcat(board_ascii, row_b);
//     board_ascii += "\nc "
    strcat(board_ascii, "\nc|");
//     board_ascii += ''.join(board[2])
    char *row_c = &board[2][0];
    strcat(board_ascii, row_c);
    // strcat(board_ascii, "");
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
        char board_ascii[32];
        board_render(board, board_ascii);
//         print(board_ascii)
        printf("%s\n\n", board_ascii);
        // if player_won("X", board):
        if (player_won("X", board)) {
        //     print("Player X has won!")
            printf("Player X has won!");
            break;
        //     break
        }
        // if player_won("Y", board):
        //     print("Player Y has won!")
        //     break
//         print(current_move+" move:", end="")
        printf("%s move:", current_move);
//         move = input("")[:2]
        char move[2];
        scanf("%s", &move);
//         print(current_move+" chose", move)
        printf("\n%s chose %s\n", current_move, move);
//         move_Y = ord(move[0])-97
        char move_Y = move[0]-97;
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
            board[move_Y][move_X] = *current_move;
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
