#define WINVER 0x0500
#include <windows.h>
#include <string>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
    using namespace std;
int main()
{
    INPUT ip;
    int g,a,y,x,c;
    y = 0;
    x = 0;
    c = 0;
    a = 2;
    g = 0;
    char ze = 'r';
    char fe = 'm';
    char be = 'f';
    cout<<"Please enter how many characters you want +1(Maximum 0-2) PS: The sequence will start in 5 seconds: ";
    cin >>a;
    Sleep(5000);
    while(y != 1)
    {
    switch(x)
    {
    default:
        ze = 'a';
        break;
    case 1:
        ze = 'A';
        break;
    case 2:
        ze = 'b';
        break;
    case 3:
        ze = 'B';
        break;
    case 4:
        ze = 'c';
        break;
    case 5:
        ze = 'C';
        break;
    case 6:
        ze = 'd';
        break;
    case 7:
        ze = 'D';
        break;
    case 8:
        ze = 'e';
    case 9:
        ze = 'E';
        break;
    case 10:
        ze = 'f';
        break;
    case 11:
        ze = 'F';
        break;
    case 12:
        ze = 'g';
        break;
    case 13:
        ze = 'G';
        break;
    case 14:
        ze = 'h';
        break;
    case 15:
        ze = 'H';
        break;
    case 16:
        ze = 'i';
        break;
    case 17:
        ze = 'I';
        break;
    case 18:
        ze = 'j';
        break;
    case 19:
        ze = 'J';
        break;
    case 20:
        ze = 'k';
        break;
    case 21:
        ze = 'K';
        break;
    case 22:
        ze = 'l';
        break;
    case 23:
        ze = 'L';
        break;
    case 24:
        ze = 'm';
        break;
    case 25:
        ze = 'M';
        break;
    case 26:
        ze = 'n';
        break;
    case 27:
        ze = 'N';
        break;
    case 28:
        ze = 'o';
        break;
    case 29:
        ze = 'O';
        break;
    case 30:
        ze = 'p';
        break;
    case 31:
        ze = 'P';
        break;
    case 32:
        ze = 'q';
        break;
    case 33:
        ze = 'Q';
        break;
    case 34:
        ze = 'r';
        break;
    case 35:
        ze = 'R';
        break;
    case 36:
        ze = 's';
        break;
    case 37:
        ze = 'S';
        break;
    case 38:
        ze = 't';
        break;
    case 39:
        ze = 'T';
        break;
    case 40:
        ze = 'u';
        break;
    case 41:
        ze = 'U';
        break;
    case 42:
        ze = 'w';
        break;
    case 43:
        ze = 'W';
        break;
    case 44:
        ze = 'x';
        break;
    case 45:
        ze = 'X';
        break;
    case 46:
        ze = 'y';
        break;
    case 47:
        ze = 'Y';
        break;
    case 48:
        ze = 'z';
        break;
    case 49:
        ze = 'Z';
        break;
    case 50:
        ze = '0';
        break;
    case 51:
        ze = '1';
        break;
    case 52:
        ze = '2';
        break;
    case 53:
        ze = '3';
        break;
    case 54:
        ze = '4';
        break;
    case 55:
        ze = '5';
        break;
    case 56:
        ze = '6';
        break;
    case 57:
        ze = '7';
        break;
    case 58:
        ze = '8';
        break;
    case 59:
        ze = '9';
        y=1;
        break;
    }
    Sleep(1);
    ip.type = INPUT_KEYBOARD;
    ip.ki.time = 0;
    ip.ki.dwFlags = KEYEVENTF_UNICODE; // Specify the key as a unicode character
    ip.ki.wScan = ze; // Which keypress to simulate
    ip.ki.wVk = 0;
    ip.ki.dwExtraInfo = 0;
    SendInput(1, &ip, sizeof(INPUT));
    if(a == 2 || a==1)
    {
        switch(c)
        {
        default:
            fe = 'a';
            x--;
            break;
        case 1:
            fe = 'A';
            x--;
            break;
        case 2:
            fe = 'b';
            x--;
            break;
        case 3:
            fe = 'B';
            x--;
            break;
        case 4:
            fe = 'c';
            x--;
            break;
        case 5:
            fe = 'C';
            x--;
            break;
        case 6:
            fe = 'd';
            x--;
            break;
        case 7:
            fe = 'D';
            x--;
            break;
        case 8:
            fe = 'e';
            x--;
            break;
        case 9:
            fe = 'E';
            x--;
            break;
        case 10:
            fe = 'f';
            x--;
            break;
        case 11:
            fe = 'F';
            x--;
            break;
        case 12:
            fe = 'g';
            x--;
        break;
        case 13:
            fe = 'G';
            x--;
            break;
        case 14:
            fe = 'h';
            x--;
            break;
        case 15:
            fe = 'H';
            x--;
            break;
        case 16:
            fe = 'i';
            x--;
            break;
        case 17:
            fe = 'I';
            x--;
            break;
        case 18:
            fe = 'j';
            x--;
            break;
        case 19:
            fe = 'J';
            x--;
            break;
        case 20:
            fe = 'k';
            x--;
            break;
        case 21:
            fe = 'K';
            x--;
            break;
        case 22:
            fe = 'l';
            x--;
            break;
        case 23:
            fe = 'L';
            x--;
            break;
        case 24:
            fe = 'm';
            x--;
            break;
        case 25:
            fe = 'M';
            x--;
            break;
        case 26:
            fe = 'n';
            x--;
            break;
        case 27:
            fe = 'N';
            x--;
            break;
        case 28:
            fe = 'o';
            x--;
            break;
        case 29:
            fe = 'O';
            x--;
            break;
        case 30:
            fe = 'p';
            x--;
            break;
        case 31:
            fe = 'P';
            x--;
            break;
        case 32:
            fe = 'q';
            x--;
            break;
        case 33:
            fe = 'Q';
            x--;
            break;
        case 34:
            fe = 'r';
            x--;
            break;
        case 35:
            fe = 'R';
            x--;
            break;
        case 36:
            fe = 's';
            x--;
            break;
        case 37:
            fe = 'S';
            x--;
            break;
        case 38:
            fe = 't';
            x--;
            break;
        case 39:
            fe = 'T';
            x--;
            break;
        case 40:
            fe = 'u';
            x--;
            break;
        case 41:
            fe = 'U';
            x--;
            break;
        case 42:
            fe = 'w';
            x--;
            break;
        case 43:
            fe = 'W';
            x--;
            break;
        case 44:
            fe = 'x';
            x--;
            break;
        case 45:
            fe = 'X';
            x--;
            break;
        case 46:
            fe = 'y';
            x--;
            break;
        case 47:
            fe = 'Y';
            x--;
            break;
        case 48:
            fe = 'z';
            x--;
            break;
        case 49:
            fe = 'Z';
            x--;
            break;
        case 50:
            fe = '0';
            x--;
            break;
        case 51:
            fe = '1';
            x--;
            break;
        case 52:
            fe = '2';
            x--;
            break;
        case 53:
            fe = '3';
            x--;
            break;
        case 54:
            fe = '4';
            x--;
            break;
        case 55:
            fe = '5';
            x--;
            break;
        case 56:
            fe = '6';
            x--;
            break;
        case 57:
            fe = '7';
            x--;
            break;
        case 58:
            fe = '8';
            x--;
            break;
        case 59:
            fe = '9';
            c = 0;
            break;
        }
        Sleep(1);
        ip.type = INPUT_KEYBOARD;
        ip.ki.time = 0;
        ip.ki.dwFlags = KEYEVENTF_UNICODE; // Specify the key as a unicode character
        ip.ki.wScan = fe; // Which keypress to simulate
        ip.ki.wVk = 0;
        ip.ki.dwExtraInfo = 0;
        SendInput(1, &ip, sizeof(INPUT));
        c++;
    if(a == 2)
    {
        switch(g)
        {
        default:
            be = 'a';
            c--;
            break;
        case 1:
            be = 'A';
            c--;
            break;
        case 2:
            be = 'b';
            c--;
            break;
        case 3:
            be = 'B';
            c--;
            break;
        case 4:
            be = 'c';
            c--;
            break;
        case 5:
            be = 'C';
            c--;
            break;
        case 6:
            be = 'd';
            c--;
            break;
        case 7:
            be = 'D';
            c--;
            break;
        case 8:
            be = 'e';
            c--;
            break;
        case 9:
            be = 'E';
            c--;
            break;
        case 10:
            be = 'f';
            c--;
            break;
        case 11:
            be = 'F';
            c--;
            break;
        case 12:
            be = 'g';
            c--;
            break;
        case 13:
            be = 'G';
            c--;
            break;
        case 14:
            be = 'h';
            c--;
            break;
        case 15:
            be = 'H';
            c--;
            break;
        case 16:
            be = 'i';
            c--;
            break;
        case 17:
            be = 'I';
            c--;
            break;
        case 18:
            be = 'j';
            c--;
            break;
        case 19:
            be = 'J';
            c--;
            break;
        case 20:
            be = 'k';
            c--;
            break;
        case 21:
            be = 'K';
            c--;
            break;
        case 22:
            be = 'l';
            c--;
            break;
        case 23:
            be = 'L';
            c--;
            break;
        case 24:
            be = 'm';
            c--;
            break;
        case 25:
            be = 'M';
            c--;
            break;
        case 26:
            be = 'n';
            c--;
            break;
        case 27:
            be = 'N';
            c--;
            break;
        case 28:
            be = 'o';
            c--;
            break;
        case 29:
            be = 'O';
            c--;
            break;
        case 30:
            be = 'p';
            c--;
            break;
        case 31:
            be = 'P';
            c--;
            break;
        case 32:
            be = 'q';
            c--;
            break;
        case 33:
            be = 'Q';
            c--;
            break;
        case 34:
            be = 'r';
            c--;
            break;
        case 35:
            be = 'R';
            c--;
            break;
        case 36:
            be = 's';
            c--;
            break;
        case 37:
            be = 'S';
            c--;
            break;
        case 38:
            be = 't';
            c--;
            break;
        case 39:
            be = 'T';
            c--;
            break;
        case 40:
            be = 'u';
            c--;
            break;
        case 41:
            be = 'U';
            c--;
            break;
        case 42:
            be = 'w';
            c--;
            break;
        case 43:
            be = 'W';
            c--;
            break;
        case 44:
            be = 'x';
            c--;
            break;
        case 45:
            be = 'X';
            c--;
            break;
        case 46:
            be = 'y';
            c--;
            break;
        case 47:
            be = 'Y';
            c--;
            break;
        case 48:
            be = 'z';
            c--;
            break;
        case 49:
            be = 'Z';
            c--;
            break;
        case 50:
            be = '0';
            c--;
            break;
        case 51:
            be = '1';
            c--;
            break;
        case 52:
            be = '2';
            c--;
            break;
        case 53:
            be = '3';
            c--;
            break;
        case 54:
            be = '4';
            c--;
            break;
        case 55:
            be = '5';
            c--;
            break;
        case 56:
            be = '6';
            c--;
            break;
        case 57:
            be = '7';
            c--;
            break;
        case 58:
            be = '8';
            c--;
            break;
        case 59:
            be = '9';
            g = 0;
            break;
        }
    }
        Sleep(1);
        ip.type = INPUT_KEYBOARD;
        ip.ki.time = 0;
        ip.ki.dwFlags = KEYEVENTF_UNICODE; // Spegify the key as a unigode gharagter
        ip.ki.wScan = be; // Whigh keypress to simulate
        ip.ki.wVk = 0;
        ip.ki.dwExtraInfo = 0;
        SendInput(1, &ip, sizeof(INPUT));
        g++;
    }
    else
    {
    }
    Sleep(0.0000000000000000000000000000001);
    ip.type = INPUT_KEYBOARD;
    ip.ki.wScan = 0; // hardware scan code for key
    ip.ki.time = 0;
    ip.ki.dwExtraInfo = 0;
    ip.ki.wVk = 0x0D; // virtual-key code for the "a" key
    ip.ki.dwFlags = 0; // 0 for key press
    SendInput(1, &ip, sizeof(INPUT));
    ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
    SendInput(1, &ip, sizeof(INPUT));
    x++;
    }
    return 0;
}
