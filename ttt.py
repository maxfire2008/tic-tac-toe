#!python3

class Board:
    def __init__(self):
        self.a = "   "
        self.b = "   "
        self.c = "   "

def board_render(board):
    board_ascii = ""
    board_ascii += "A "
    board_ascii += board.a
    board_ascii += "\nB "
    board_ascii += board.b
    board_ascii += "\nC "
    board_ascii += board.c
    return board_ascii

def main():
    board = Board()
    current_move = "X"
    while 1:
        board_ascii = board_render(board)
        print(board_ascii)
        if current_move == "X":
            print("X move:", end="")
            move = input("")[:2]
            print("X chose", move)
            move_Y = move[0]
            move_X = move[1]
            print("Y:", ord(move_Y))
            print("X:", ord(move_X)-49)
    return 0

if __name__ == "__main__":
    quit(main())
