#!python3

class Board:
    def __init__(self):
        self.a = list("   ")
        self.b = list("   ")
        self.c = list("   ")

def board_render(board):
    board_ascii = ""
    board_ascii += "A "
    board_ascii += ''.join(board.a)
    board_ascii += "\nB "
    board_ascii += ''.join(board.b)
    board_ascii += "\nC "
    board_ascii += ''.join(board.c)
    return board_ascii

def main():
    board = Board()
    current_move = "X"
    while 1:
        board_ascii = board_render(board)
        print(board_ascii)
        print(current_move+" move:", end="")
        move = input("")[:2]
        print(current_move+" chose", move)
        move_Y = move[0]
        move_X = ord(move[1])-49
        print("Y:", ord(move_Y))
        print("X:", move_X)
        if move_Y == "A":
            board.a[move_X] = current_move
        if move_Y == "B":
            board.b[move_X] = current_move
        if move_Y == "C":
            board.c[move_X] = current_move
        if current_move == "X":
            current_move = "Y"
        else:
            current_move = "X"
    return 0

if __name__ == "__main__":
    quit(main())
