//2.	Check whether the string is palindrome or not using array and Queue.

# include <stdio.h>
# include <string.h>

# define MAX 100

char queue[MAX];
int front = 0, rear=-1;

void enqueue(char ch){
queue[++rear]=ch;
}
 
char dequeue(){
    return queue[front++];
}

int main(){
    char str[MAX];
    int i,len;

    printf("Enter string:\n");
    scanf("%s",str);

    len=strlen(str);

    for(i=0;i<len;i++){
        enqueue(str[i]);
    }

    for (i = len - 1; i >= 0; i--) {
        if (str[i] != dequeue()) {
            printf("not palindrome\n");
            break;
        }
        else{
            printf("palindrome\n");
            break;
        }
    }
    return 0;
}