#include <iostream>
#include "loading.h"
#include <string>
#include <Windows.h>
#include "adminFunction.h"

using namespace std;

void passwordVerification(void);
void mainMenu(void);
void passwordVerification()
{
    system("cls");
    string password;
    cout << "\n\n\n\n\n\t\t\t\t\t";
    cout << "\n\n\n\t\t\t\t\tEnter Password : ";

    do
    {
        cin >> password;

        if (password != "project")
        {
            system("cls");
            cout << "\n\n\n\n\n\t\t"
                 << "wrong password!, try again or type 'quit' / 'exit' to Quit The program.";
            cout << "\n\n\n\t\t\t\t\tEnter Password : ";
        }

        if (password == "Quit" || password == "quit" || password == "exit" || password == "Exit" || password == "QUIT" || password == "EXIT")
        {
            system("cls");
            cout << "\t\t\n\n\n\n\n\n\n\t\t\t\t\tQuitting The Program";

            for (int i = 0; i < 4; i++)
            {

                Sleep(1010); 
                cout << ".";
            }

            exit(0);
        }

    }

    while (password != "project");
    mainMenu(); 
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    system("color 2F");
    passwordVerification();
    return 0;
}
