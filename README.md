# tic-tac-toe
Assessment for my Computer Science class.

Pseudocode:
```
current_user = X
while True:
    Take input for current_user
    Show updated board
    Check for win
    change current_user to opposite

def check_for_win(a, b, c):
    # X
    #  X
    #   X
    a[0] == b[1]
    a[0] == c[2]

    #   X
    #  X
    # X
    a[2] == b[1]
    a[2] == c[0]

    for i in range(3):
        if a == b
        if a == c

    for i in [A, B, C]
        if i[0] == i[1]
        if i[0] == i[2]

    draw = 1
    for x in [A, B, C]
        for y in range(3)
            if x[y] != " ":
                draw = 0

```
