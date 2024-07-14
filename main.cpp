#include <iostream>
#include <sstream>
using namespace std;
int main() {
    cout << "                                                                                                        " << endl;
    cout << "                                                                                                        " << endl;
    cout << "  ,----..               ,--,                             ,--,                  ___                       " << endl;
    cout << " /   /   \\            ,--.'|                           ,--.'|                ,--.'|_                     " << endl;
    cout << "|   :     :           |  | :                      ,--, |  | :                |  | :,'   ,---.    __  ,-. " << endl;
    cout << ".   |  ;. /           :  : '                    ,'_ /| :  : '                :  : ' :  '   ,\'\\ ,' ,'/ /| " << endl;
    cout << ".   ; /--`   ,--.--.  |  ' |      ,---.    .--. |  | : |  ' |     ,--.--.  .;__,'  /  /   /   |'  | |' | " << endl;
    cout << ";   | ;     /       \\ '  | |     /     \\ ,'_ /| :  . | '  | |    /       \\ |  |   |  .   ; ,. :|  |   ,' " << endl;
    cout << "|   : |    .--.  .-. ||  | :    /    / ' |  ' | |  . . |  | :   .--.  .-. |:__,'| :  '   | |: :'  :  /   " << endl;
    cout << ".   | '___  \\__\\/: . .'  : |__ .    ' /  |  | ' |  | | '  : |__  \\__\\/: . .  '  : |__'   | .; :|  | '    " << endl;
    cout << "'   ; : .'| ,\" .--.; ||  | '.'|'   ; :__ :  | : ;  ; | |  | '.'| ,\" .--.; |  |  | '.'|   :    |;  : |    " << endl;
    cout << "'   | '/  :/  /  ,.  |;  :    ;'   | '.'|'  :  `--'   \\;  :    ;/  /  ,.  |  ;  :    ;\\   \\  / |  , ;    " << endl;
    cout << "|   :    /;  :   .'   \\  ,   / |   :    ::  ,      .-./|  ,   /;  :   .'   \\ |  ,   /  `----'   ---'     " << endl;
    cout << " \\   \\ .' |  ,     .-./---`-'   \\   \\  /  `--`----'     ---`-' |  ,     .-./  ---`-'                     " << endl;
    cout << "  `---`    `--`---'              `----'                         `--`---'                                 " << endl;
    cout << "                                                                                                        " << endl;
    cout << "                                                                                                        " << endl;
    cout << "Enter your calculation. Example: 2 + 2" << endl;
    string calculation;
    getline(cin, calculation);
    stringstream swag(calculation);
    double num1, num2;
    char op;
    swag >> num1 >> op >> num2;
    if (op != '+' && op != '-' && op != '*' && op != '/') {
        cout << "Invalid Operator" << endl;
    }
    else {
#define print(something) std::cout << something << std::endl;
        switch(op) {
            case '+': print(num1 + num2)
            break;
            case '-': print(num1 - num2)
            break;
            case '*': print(num1 * num2)
            break;
            case '/':
                while(num2 > 0) {
                    print(num1 / num2)
                    break;
                }
        }
    }
    return 0;
}