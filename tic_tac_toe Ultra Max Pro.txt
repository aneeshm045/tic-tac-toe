import turtle as tr


def draw(value1, value2, a):
    dic = {'00': [50, 250], '01': [150, 250], '02': [250, 250], '10': [50, 150], '11': [150, 150], '12': [250, 150],
           '20': [50, 50], '21': [150, 50], '22': [250, 50]}
    if value1 == 1:
        point = dic[value2]
        a.pencolor('green')
        a.penup()
        a.goto(point[0], point[1])
        a.rt(90)
        a.forward(40)
        a.lt(90)
        a.pendown()
        a.circle(40)
    elif value1 == 0:
        point = dic[value2]
        a.pencolor('red')
        a.penup()
        a.goto(point[0], point[1])
        a.pendown()
        a.goto(point[0] + 35, point[1] + 35)
        a.penup()
        a.goto(point[0], point[1])
        a.pendown()
        a.goto(point[0] - 35, point[1] - 35)
        a.penup()
        a.goto(point[0], point[1])
        a.pendown()
        a.goto(point[0] + 35, point[1] - 35)
        a.penup()
        a.goto(point[0], point[1])
        a.pendown()
        a.goto(point[0] - 35, point[1] + 35)


def winner_checker(flag):
    for p in range(len(tic_tac)):
        for j in range(3):
            try:
                if tic_tac[p][j] == tic_tac[p][j + 1] and tic_tac[p][j + 1] == tic_tac[p][j + 2]:
                    print('Congrs', dicto[tic_tac[p][j]], 'You won the game')
                    flag = 1
                    break

                elif tic_tac[p][j] == tic_tac[p + 1][j] and tic_tac[p + 1][j] == tic_tac[p + 2][j]:
                    print('Congrs', dicto[tic_tac[p][j]], 'You won the game')
                    flag = 1
                    break
            except:
                continue
    if tic_tac[1][1] == tic_tac[0][0] and tic_tac[0][0] == tic_tac[2][2]:
        print('Congrs', dicto[tic_tac[1][1]], 'You won the game')
        flag = 1
    elif tic_tac[1][1] == tic_tac[0][2] and tic_tac[0][2] == tic_tac[2][0]:
        print('Congrs', dicto[tic_tac[1][1]], 'You won the game')
        flag = 1
    if tic_tac[0][2] == tic_tac[1][2] and tic_tac[1][2] == tic_tac[2][2]:
        print('Congrs', dicto[tic_tac[0][2]], 'You won the game')
        flag = 1

    return flag


a = tr.Turtle()
a.pensize(4)
x = 100
for i in range(4):
    a.forward(300)
    a.left(90)
for i in range(2):
    a.goto(0,x)
    a.pendown()
    a.goto(300,x)
    a.penup()
    x += 100
y = 100
a.home()
for i in range(2):
    a.goto(y, 0)
    a.pendown()
    a.goto(y, 300)
    a.penup()
    y += 100
use = []
used = 0
end = 0
o = 0
player1 = input('Enter Name of Player 1\n')
player2 = input("Enter name of Player 2\n")
tic_tac = [['00', '01', '02'],
           ['10', '11', '12'],
           ['20', '21', '22']]
for i in tic_tac:
    print(i)
dicto = {'X': player1, 'O': player2}
while end < 9:
    print(player1 + "'s Chance")
    while True:
        try:
            row_and_column = input("Enter the place\n")
            if len(row_and_column) == 2:
                if row_and_column not in use:
                    tic_tac[int(row_and_column[0])][int(row_and_column[1])] = 'X'
                    use += [row_and_column]
                    draw(0, row_and_column, a)
                    break
                else:
                    print('Space already taken!!!')
            else:
                print('Invalid input')
                continue
        except:
            print('Enter valid order')
            continue
    for i in range(10000000):
        pass
    if end >= 4:
        o = winner_checker(a)
    if o == 1:
        break
    print(player2 + "'s Chance")
    while True:
        try:
            row_and_column = input('Enter the Place\n')
            if len(row_and_column) == 2:
                if row_and_column not in use:
                    tic_tac[int(row_and_column[0])][int(row_and_column[1])] = 'O'
                    use += [row_and_column]
                    draw(1, row_and_column, a)
                    break
                else:
                    print('Space already taken!!!')
            else:
                print('Invalid input')
                continue
        except:
            print('Enter valid order')
            continue
    if end >= 4:
        o = winner_checker(a)
    if o == 1:
        break
    end += 2
    if end > 7:
        print("it's a DRAW")
        o = 1
        break
tr.mainloop()
