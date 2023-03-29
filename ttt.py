#!python3

def board_render(board):
    board_ascii = ""
    board_ascii += "a "
    board_ascii += ''.join(board[0])
    board_ascii += "\nb "
    board_ascii += ''.join(board[1])
    board_ascii += "\nc "
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
                current_move = "Y"
            else:
                current_move = "X"
        else:
            print("Invalid move!")
    return 0

if __name__ == "__main__":
    quit(main())
