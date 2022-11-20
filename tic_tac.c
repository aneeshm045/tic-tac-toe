def winner_checker(flag):
    for i in range(len(tic_tac)):
        for j in range(3):
            try:
                if tic_tac[i][j] == tic_tac[i][j + 1] and tic_tac[i][j + 1] == tic_tac[i][j + 2]:
                    print('Congregation', dicto[tic_tac[i][j]], 'You won the game!!!!!!!')
                    flag = 1
                    break
                elif tic_tac[i][j] == tic_tac[i + 1][j] and tic_tac[i + 1][j] == tic_tac[i + 2][j]:
                    print('Congregation', dicto[tic_tac[i][j]], 'You won the game!!!!!!!')
                    flag = 1
                    break
                elif tic_tac[i][j] == tic_tac[i + 1][j + 1] and tic_tac[i + 1][j + 1] == tic_tac[i + 2][j + 2]:
                    print('Congrs', dicto[tic_tac[i][j]], 'You won the game!!!!!!!')
                    flag = 1
                    break
            except:
                continue
    return flag


print("WELCOME TO TIC TAC GAME")
for i in range(10000000):
    pass
Enter = input('Please press Enter Key to start the Game')
while True:
    use = []
    used = 0
    f = 0
    for i in range(10000000):
        pass
    if Enter == '':
        print('Starting.....\n\n')
        for i in range(10000000):
            pass
        tic_tac = [['_', '_', '_'],
                   ['_', '_', '_'],
                   ['_', '_', '_']]
        end = 0
        player1 = input('Enter player 1 name\n').upper()
        player2 = input('\nEnter player 2 name\n').upper()

        for i in range(10000000):
            pass

        print('Welcome', player1, 'and', player2)
        dicto = {'X': player1, 'O': player2}
        for i in range(1000000):
            pass
        a = 0
        print('0, 1, 2--- 1st, 2nd, 3rd row and same for selection of column\n\n')
        for i in range(100000000):
            pass
        while end < 9:
            print(player1 + "'s Chance\n")
            for i in range(10000000):
                pass
            while True:
                row_and_column = [int(i) for i in input('Enter Input\n').split()][:2]
                if len(row_and_column) == 2:
                    if row_and_column not in use:
                        tic_tac[row_and_column[0]][row_and_column[1]] = 'X'
                        use += [row_and_column]
                        break
                    else:
                        print('Space already taken!!!')
                else:
                    print('Enter the number with space or invalid input')
                    continue
            for i in range(len(tic_tac)):
                print(*tic_tac[i])
            for i in range(10000000):
                pass
            if end >= 4:
               f = winner_checker(a)
            if f == 1:
                break
            print(player2 + "'s Chance\n")
            while True:
                row_and_column = [int(i) for i in input('Enter Input\n').split()][:2]
                if len(row_and_column) == 2:
                    if row_and_column not in use:
                        tic_tac[row_and_column[0]][row_and_column[1]] = 'O'
                        use += [row_and_column]
                        break
                    else:
                        print('Space already taken!!!')
                else:
                    print('Enter the number with space or invalid input')
                    continue
            for i in range(len(tic_tac)):
                print(*tic_tac[i])
            if end >= 4:
               f = winner_checker(a)
            if f == 1:
                break
            end += 2
            if end > 7:
                print("it's a DRAW")
                f = 1
                break
        if f == 1:
            check = input('Do you want to play again? Y/N').upper()
            if check == 'N':
                print('Exiting.....')
                for i in range(10000000):
                    pass
                break
            elif check == 'N':
                Enter = ''
    else:
        check = input('Are you sure? Y/N').upper()
        if check == 'Y':
            print('Exiting.....')
            for i in range(10000000):
                pass
            break
        elif check == 'N':
            Enter = ''
