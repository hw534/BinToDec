#include <iostream>
#include <string>

using namespace std;
int main(int argc, char* argv[])
{
    string input;
    if (argc == 2) {
        input = argv[argc - 1];
    }
    else {
        cin >> input;
    }
    int decimal = 0;
    input = input.substr(0, 8);
    int sum = 1;
    cout << "Convirtiendo a un numero de 8 bits...\n";
    cout << "Todo numero que no sea un 1 o 0, sera convertido en un 0\n";
    for (int i = 0; i < input.size(); i++) {
        char a = input[i];
        switch (a) {
        case '1':
            decimal += sum;
            break;
        default:
            decimal += 0;
            break;
        }
        sum += sum;
    }

    cout << "\n\n\n\n\n\n\n";
    cout << decimal << endl;
    cout << "\n\n\n\n\n\n\n";
    return 1;
}

void c() {
    cout << "A" << endl;
}