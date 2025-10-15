#include "stack.h"

int getPriority(char cur);


void main() {
	char string[200] = {' '};
	
	Stack stack;
	init(&stack);
	fgets(string, sizeof(string), stdin);
	
	int countSpace = 0;
	
	for (int i = 0; i < 200; i++) {
	        char cur = string[i];
	        if (cur == '\n') {
	                break;  
	        }
	        
	        else if (cur == '(') {
	                push(&stack, cur);
	        }
	        
	        else if (cur == ')') {
	                while (stack.size > 0) {
	                        Node* node = pop(&stack);
	                        char value = (*node).value;
	                        if (value == '(') {
	                                break;
	                        }
	                        
	                        printf(" %c", value);
	                }
	        }
	        else if (cur == '+' || cur == '-' || cur == '*' || cur == '/') {
	                int curPriority = getPriority(cur);
	                while (stack.size > 0) {
	                        Node* node = pop(&stack);
	                        char value = (*node).value;
	                        
	                        int valuePriority = getPriority(value);
	                        if (valuePriority >= curPriority) {
	                                printf(" %c", value);
	                        }
	                        else {
	                                push(&stack, value);
	                                free(node);
	                                break;
	                        }
	                }
	                push(&stack, cur);
	        }
	        
	        else {
	                if (cur == ' ' && countSpace == 0) {
	                        printf("%c", cur);
	                        countSpace += 1;
	                }
	                else if (cur != ' ') {
	                        printf("%c", cur);
	                        countSpace = 0;
	                }
	                
	                
	        }
	        
	}
	
	
	while (stack.size > 0) {
	        Node* node = pop(&stack);
	        char value = (*node).value;
	        if (value == '(') {
	                break;
	        }
	                        
	        printf(" %c", value);
	}
	
	printf("\n");
	
	
	
}

int getPriority(char cur) {
        if (cur == '+' || cur == '-') {
                return 1;
        }
        else if (cur == '*' || cur == '/') {
                return 2;
        }
        
        return -1000;
}
