#include <iostream>

bool verifyWin(char sec1, char sec2, char sec3, char sec4, char sec5, char sec6, char sec7, char sec8, char sec9) {
    // Horizontal wins
    if (sec1 == 'O' && sec2 == 'O' && sec3 == 'O') {
        return true;
    }
    else if (sec1 == 'X' && sec2 == 'X' && sec3 == 'X') {
        return true;
    }
    if (sec4 == 'O' && sec5 == 'O' && sec6 == 'O') {
        return true;
    }
    else if (sec4 == 'X' && sec5 == 'X' && sec6 == 'X') {
        return true;
    }
    if (sec7 == 'O' && sec8 == 'O' && sec9 == 'O') {
        return true;
    }
    else if (sec7 == 'X' && sec8 == 'X' && sec9 == 'X') {
        return true;
    }

    // Vertical wins
    if (sec1 == 'O' && sec4 == 'O' && sec7 == 'O') {
        return true;
    }
    else if (sec1 == 'X' && sec4 == 'X' && sec7 == 'X') {
        return true;
    }
    if (sec2 == 'O' && sec5 == 'O' && sec8 == 'O') {
        return true;
    }
    else if (sec2 == 'X' && sec5 == 'X' && sec8 == 'X') {
        return true;
    }
    if (sec3 == 'O' && sec6 == 'O' && sec9 == 'O') {
        return true;
    }
    else if (sec3 == 'X' && sec6 == 'X' && sec9 == 'X') {
        return true;
    }

    // Diagonal wins
    if (sec1 == 'O' && sec5 == 'O' && sec9 == 'O') {
        return true;
    }
    else if (sec1 == 'X' && sec5 == 'X' && sec9 == 'X') {
        return true;
    }
    if (sec7 == 'O' && sec5 == 'O' && sec3 == 'O') {
        return true;
    }
    else if (sec7 == 'X' && sec5 == 'X' && sec3 == 'X') {
        return true;
    }

    return false;
}

void drawMenu(char sec1, char sec2, char sec3, char sec4, char sec5, char sec6, char sec7, char sec8, char sec9) {
    system("cls");
    std::cout << "Welcome to tic tac toe type the number of the area you want to fill!" << std::endl;
    std::cout << sec1 << " | " << sec2 << " | " << sec3 << std::endl
        << "---------" << std::endl
        << sec4 << " | " << sec5 << " | " << sec6 << std::endl
        << "---------" << std::endl
        << sec7 << " | " << sec8 << " | " << sec9 << std::endl;
}

int main()
{
    bool xsTurn = true;
    char sec1 = '1';
    char sec2 = '2';
    char sec3 = '3';
    char sec4 = '4';
    char sec5 = '5';
    char sec6 = '6';
    char sec7 = '7';
    char sec8 = '8';
    char sec9 = '9';
    char selection, currentMove;
    while (true) {
        drawMenu(sec1, sec2, sec3, sec4, sec5, sec6, sec7, sec8, sec9);
        if (verifyWin(sec1, sec2, sec3, sec4, sec5, sec6, sec7, sec8, sec9)) {
            std::cout << "Congradulations " << currentMove << " you have won!" << std::endl;
            break;
        }


        std::cin >> selection;
        if (xsTurn) {
            currentMove = 'X';
        }
        else {
            currentMove = 'O';
        }
        switch (selection) {
        case '1':
            if (sec1 == '1') {
                sec1 = currentMove;
                xsTurn = !xsTurn;
            }
            break;
        case '2':
            if (sec2 == '2') {
                sec2 = currentMove;
                xsTurn = !xsTurn;
            }
            break;
        case '3':
            if (sec3 == '3') {
                sec3 = currentMove;
                xsTurn = !xsTurn;
            }
            break;
        case '4':
            if (sec4 == '4') {
                sec4 = currentMove;
                xsTurn = !xsTurn;
            }
            break;
        case '5':
            if (sec5 == '5') {
                sec5 = currentMove;
                xsTurn = !xsTurn;
            }
            break;
        case '6':
            if (sec6 == '6') {
                sec6 = currentMove;
                xsTurn = !xsTurn;
            }
            break;
        case '7':
            if (sec7 == '7') {
                sec7 = currentMove;
                xsTurn = !xsTurn;
            }
            break;
        case '8':
            if (sec8 == '8') {
                sec8 = currentMove;
                xsTurn = !xsTurn;
            }
            break;
        case '9':
            if (sec9 == '9'){
                sec9 = currentMove;
                xsTurn = !xsTurn;
            }
            break;
        default:
            break;
        }
    }
}
