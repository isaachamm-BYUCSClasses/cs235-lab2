#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main(int argc, char* argv[]) {
    //characters to check: ()[]{}<>

    //outline:

    stack <char> parenthesisStack;          //Stack used to store parenthesis characters
    string nextChar = argv[1];
    for (int i =0; i < nextChar.size(); ++i){
        cout << nextChar.at(i) << endl;
    }
    for (int i = 0; i < nextChar.size(); ++i) {
        if (nextChar.at(i) == ')') {
            if (parenthesisStack.top() == '(') {
                parenthesisStack.pop();
            }
        }
        else if (nextChar.at(i) == ']') {
            if (parenthesisStack.top() == '[') {
                parenthesisStack.pop();
            }
        }
        else if (nextChar.at(i) == '}') {
            if (parenthesisStack.top() == '{') {
                parenthesisStack.pop();
            }
        }
        else if (nextChar.at(i) == '>'){
                if (parenthesisStack.top() == '<'){
                    parenthesisStack.pop();
                }
        }
        else if (nextChar.at(i) == '(' || nextChar.at(i) == '[' || nextChar.at(i) == '{'
            || nextChar.at(i) == '<'){
            parenthesisStack.push(nextChar.at(i));
        }

    }

    if (parenthesisStack.empty()){
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }

    return 0;
}
