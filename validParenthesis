class Solution {
public:

    bool isValid(string expr){
        stack<char> tempStack;
        char item;

        for (int i=0; i < expr.length(); i++){
            if (expr[i]=='(' || expr[i]=='{' || expr[i]=='[') {
                tempStack.push(expr[i]);
                continue;
            }
            else if (tempStack.empty()) {
               return false;
            }
            switch (expr[i]) {
                case ')':
                    item = tempStack.top();
                    tempStack.pop();
                    if (item=='{' || item=='[') {
                        return false;
                    }
                    break;

                case '}':
                    item = tempStack.top();
                    tempStack.pop();
                    if (item=='(' || item=='[') {
                        return false;
                    }
                    break;

                case ']':
                    item = tempStack.top();
                    tempStack.pop();
                    if (item =='(' || item == '{') {
                        return false;
                    }
                    break;
            }
        }
        return (tempStack.empty());
    }

};
