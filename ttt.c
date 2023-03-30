#include <stdio.h>
#include <string.h>

// def player_won(player, board):
int player_won(char player, char board[3][4])
{
    //     for y in range(3):
    char y;
    for (y = 0; y < 3; ++y)
    {
        //         if board[y][0] == player and board[y][1] == player and board[y][2] == player:
        // printf("b%d\n", board[y][0]);
        // printf("p%d\n\n", player);
        if (
            board[y][0] == player &&
            board[y][1] == player &&
            board[y][2] == player)
        {
            //             return 1
            return 1;
        }
    }
    //     for x in range(3):
    char x;
    for (x = 0; x < 3; ++x)
    {
        //         if board[0][x] == player and board[1][x] == player and board[2][x] == player:
        if (
            board[0][x] == player &&
            board[1][x] == player &&
            board[2][x] == player)
        {
            //             return 1
            return 1;
        }
    }
    //     if board[0][0] == player and board[1][1] == player and board[2][2] == player:
    if (
        board[0][0] == player &&
        board[1][1] == player &&
        board[2][2] == player)
    {
        //             return 1
        return 1;
    }
    //     if board[0][2] == player and board[1][1] == player and board[2][0] == player:
    if (
        board[0][2] == player &&
        board[1][1] == player &&
        board[2][0] == player)
    {
        //             return 1
        return 1;
    }
    //     return 0
    return 0;
}

// def player_winnable(player, board):
int player_winnable(char player, char blank, char board[3][4])
{
    //     for y in range(3):
    char y;
    for (y = 0; y < 3; ++y)
    {
        //         if (
        if (
            //             (board[y][0] == player or board[y][0] == " ") and
            (board[y][0] == player || board[y][0] == blank) &&
            //             (board[y][1] == player or board[y][1] == " ") and
            (board[y][1] == player || board[y][1] == blank) &&
            //             (board[y][2] == player or board[y][2] == " ")
            (board[y][2] == player || board[y][2] == blank)
            //         ):
        )
        {
            //             return 1
            return 1;
        }
    }
    //     for x in range(3):
    char x;
    for (x = 0; x < 3; ++x)
    {
        //         if (
        if (
            //             (board[0][x] == player or board[0][x] == " ") and
            (board[0][x] == player || board[0][x] == blank) &&
            //             (board[1][x] == player or board[1][x] == " ") and
            (board[1][x] == player || board[1][x] == blank) &&
            //             (board[2][x] == player or board[2][x] == " ")
            (board[2][x] == player || board[2][x] == blank)
            //         ):
        )
        {
            //             return 1
            return 1;
        }
    }
    //     if (
    if (
        //         (board[0][0] == player or board[0][0] == " ") and
        (board[0][0] == player || board[0][0] == blank) &&
        //         (board[1][1] == player or board[1][1] == " ") and
        (board[1][1] == player || board[1][1] == blank) &&
        //         (board[2][2] == player or board[2][2] == " ")
        (board[2][2] == player || board[2][2] == blank)
        //     ):
    )
    {
        //         return 1
        return 1;
    }
    //     if (
    if (
        //         (board[0][2] == player or board[0][2] == " ") and
        (board[0][2] == player || board[0][2] == blank) &&
        //         (board[1][1] == player or board[1][1] == " ") and
        (board[1][1] == player || board[1][1] == blank) &&
        //         (board[2][0] == player or board[2][0] == " ")
        (board[2][0] == player || board[2][0] == blank)
        //     ):
    )
    {
        //         return 1
        return 1;
    }
    //     return 0
    return 0;
}

// def board_render(board):
void board_render(char board[3][4], char *board_ascii)
{
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
int main()
{
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
    while (1)
    {
        //         board_ascii = board_render(board)
        char board_ascii[21];
        board_render(board, board_ascii);
        //         print(board_ascii)
        printf("%s\n\n", board_ascii);
        // if player_won("X", board):

        if (player_won("X"[0], board))
        {
            //     print("Player X has won!")
            printf("Player X has won!\n🎊🎉🎊🎉🎊🎉\n");
            //     break
            break;
        }
        // if player_won("O", board):
        if (player_won("O"[0], board))
        {
            //     print("Player Y has won!")
            printf("Player O has won!\n🎊🎉🎊🎉🎊🎉\n");
            //     break
            break;
        }
        // if player_winnable("X", " ", board) == 0 and player_winnable("O", " ", board) == 0:
        if (
            player_winnable("X"[0], " "[0], board) == 0 &&
            player_winnable("O"[0], " "[0], board) == 0
        )
        {
            // print("Draw! How boring!")
            printf("Draw! How boring!\n");
            // break
            break;
        }
        //         print(current_move+" move:", end="")
        printf("%s move:", current_move);
        //         move = input("")[:2]
        char move[2];
        scanf("%s", &move);
        //         print(current_move+" chose", move)
        printf("\033c");
        //         move_Y = ord(move[0])-97
        char move_Y = move[0] - 97;
        //         move_X = ord(move[1])-49
        char move_X = move[1] - 49;
        // //         print("Y:", move_Y)
        //         printf("Y: %d\n", move_Y);
        // //         print("X:", move_X)
        //         printf("X: %d\n", move_X);
        // printf("%d,%d is currently '%c'\n", move_Y, move_X, board[move_Y][move_X]);
        // if board[move_Y][move_X] == " ":
        if (board[move_Y][move_X] == 32)
        {
            //             board[move_Y][move_X] = current_move
            board[move_Y][move_X] = *current_move;
            //             if current_move == "X":
            if (current_move == "X")
            {
                //                 current_move = "Y"
                current_move = "O";
            }
            //             else:
            else
            {
                //                 current_move = "X"
                current_move = "X";
            }
        }
        //         else:
        else
        {
            printf("Invalid move!\n");
            //             print("Invalid move!")
        }
        //     return 0
    }
    return 0;
}
