#include "stack.h"

void main() {
        char string[200] = {' '};
        
        fgets(string, sizeof(string), stdin);
	Stack stack;
	init(&stack);
	
	int res = 1;
	
	for (int i = 0; i < 200; i++) {
	        if (string[i] == '\n') {
	                break;
	        }
	        else if ((string[i] == '(') || (string[i] == '[') || (string[i] == '{')) {
	                push(&stack, string[i]);
	        }
	        
	        else if (string[i] == ')') {
	                Node* pope = pop(&stack);
	                if (pope == NULL) {
	                        res = 0;
	                        break;
	                }
	                char popChar = (*pope).value;
	                if (popChar != '(') {
	                        free(pope);
	                        res = 0;
	                        break;
	                }
	        }
	        
	        else if (string[i] == ']') {
	                Node* pope = pop(&stack);
	                if (pope == NULL) {
	                        res = 0;
	                        break;
	                }
	                char popChar = (*pope).value;
	                if (popChar != '[') {
	                        free(pope);
	                        res = 0;
	                        break;
	                }
	        }
	        
	        else if (string[i] == '}') {
	                Node* pope = pop(&stack);
	                if (pope == NULL) {
	                        res = 0;
	                        break;
	                }
	                char popChar = (*pope).value;
	                if (popChar != '{') {
	                        free(pope);
	                        res = 0;
	                        break;
	                }
	        }
	}
	
	if (res == 0 || stack.size != 0) {
	        printf("Баланса нет\n");
	}
	else {
	        printf("Баланс есть\n");
	}
}

