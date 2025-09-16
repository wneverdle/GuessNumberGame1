
#include <iostream>

using namespace std;

int Calculate(int NumberOne, int NumberTwo, char Operation) {

switch (Operation) {
    case '+':
    return NumberOne + NumberTwo;
    break;
    case '-':
    return NumberOne - NumberTwo;
    break;
    case '*':
    return NumberOne * NumberTwo;
    break;
    case '/':
    if (NumberTwo == 0) {
        cout << "error" << endl;
        return 0;
    } else {
    return NumberOne / NumberTwo;
    }
    break;
    default:
    cout << "error" << endl;
    return 0;
}
}
int main() {

int a, b;
char op;

cin >> a >> op >> b;
int Result = Calculate(a, b, op);
cout << "Answer: " << Result << endl;

    return 0;
}
