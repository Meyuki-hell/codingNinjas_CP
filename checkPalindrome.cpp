#include<string.h>

bool check(char input[], int start, int end){
    if(start == end){
        return true;
    }

    if(input[start] != input[end]){
        return false;
    }

    if(start < end - 1){
        check(input, start + 1, end - 1);
    }
}

bool checkPalindrome(char input[]) {
    // Write your code here
    int len = strlen(input);
    return check(input, 0, len - 1);

}


