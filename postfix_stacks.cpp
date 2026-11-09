
#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    stack<int> s;
    string exp;

    cout << "Enter postfix expression: ";
    cin >> exp;

    for (int i = 0; i < exp.length(); i++) {

        char ch = exp[i];

        // If operand, push into stack
        if (ch >= '0' && ch <= '9') {
            s.push(ch - '0');
        }

        // If operator, perform operation
        else {
            int b = s.top();
            s.pop();

            int a = s.top();
            s.pop();

            switch (ch) {
                case '+':
                    s.push(a + b);
                    break;

                case '-':
                    s.push(a - b);
                    break;

                case '*':
                    s.push(a * b);
                    break;

                case '/':
                    s.push(a / b);
                    break;
            }
        }
    }

    cout << "Result: " << s.top() << endl;

    return 0;
}


