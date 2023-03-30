#!python3

def player_won(player, board):
    for y in range(3):
        if board[y][0] == player and board[y][1] == player and board[y][2] == player:
            return 1
    for x in range(3):
        if board[0][x] == player and board[1][x] == player and board[2][x] == player:
            return 1
    if board[0][0] == player and board[1][1] == player and board[2][2] == player:
        return 1
    if board[0][2] == player and board[1][1] == player and board[2][0] == player:
        return 1
    return 0

def player_winnable(player, blank, board):
    for y in range(3):
        if (
            (board[y][0] == player or board[y][0] == blank) and
            (board[y][1] == player or board[y][1] == blank) and
            (board[y][2] == player or board[y][2] == blank)
        ):
            return 1
    for x in range(3):
        if (
            (board[0][x] == player or board[0][x] == blank) and
            (board[1][x] == player or board[1][x] == blank) and
            (board[2][x] == player or board[2][x] == blank)
        ):
            return 1
    if (
        (board[0][0] == player or board[0][0] == blank) and
        (board[1][1] == player or board[1][1] == blank) and
        (board[2][2] == player or board[2][2] == blank)
    ):
        return 1
    if (
        (board[0][2] == player or board[0][2] == blank) and
        (board[1][1] == player or board[1][1] == blank) and
        (board[2][0] == player or board[2][0] == blank)
    ):
        return 1
    return 0

def board_render(board):
    board_ascii = "  123\n"
    board_ascii += "a|"
    board_ascii += ''.join(board[0])
    board_ascii += "\nb|"
    board_ascii += ''.join(board[1])
    board_ascii += "\nc|"
    board_ascii += ''.join(board[2])
    return board_ascii

def main():
    board = [
        [" ", " ", " "],
        [" ", " ", " "],
        [" ", " ", " "],
    ]
    current_move = "X"
    while 1:
        board_ascii = board_render(board)
        print(board_ascii)
        if player_won("X", board):
            print("Player X has won!\n🎊🎉🎊🎉🎊🎉")
            break
        if player_won("O", board):
            print("Player O has won!\n🎊🎉🎊🎉🎊🎉")
            break
        if player_winnable("X", " ", board) == 0 and player_winnable("O", " ", board) == 0:
            print("Draw! How boring!")
            break

        print(current_move+" move:", end="")
        move = input("")[:2]
        print(current_move+" chose", move)
        move_Y = ord(move[0])-97
        move_X = ord(move[1])-49
        print("Y:", move_Y)
        print("X:", move_X)
        if board[move_Y][move_X] == " ":
            board[move_Y][move_X] = current_move
            if current_move == "X":
                current_move = "O"
            else:
                current_move = "X"
        else:
            print("Invalid move!")
    return 0

if __name__ == "__main__":
    quit(main())
