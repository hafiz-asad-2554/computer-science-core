#include <iostream>
#include <string>
#include <cctype>
using namespace std;

// Evaluating a simple postfix expression using stack logic
// Not a full tree implementation, but concept based

int eval(string postfix) {
    int stack[100], top = -1;
    for(char c : postfix) {
        if(isdigit(c)) {
            stack[++top] = c - '0';
        } else {
            int val1 = stack[top--];
            int val2 = stack[top--];
            switch(c) {
                case '+': stack[++top] = val2 + val1; break;
                case '-': stack[++top] = val2 - val1; break;
                case '*': stack[++top] = val2 * val1; break;
                case '/': stack[++top] = val2 / val1; break;
            }
        }
    }
    return stack[top];
}

int main() {
    string exp = "231*+9-"; // Postfix for 2 + 3 * 1 - 9
    cout << "postfix evaluation: " << eval(exp);
    return 0;
}
