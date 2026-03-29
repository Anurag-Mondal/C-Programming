#include<stdio.h>
#include<string.h>
int main(){
    char string[100] = "YOJUS DELLIK HTANJAR NI HCRAM 3202";
    int length = strlen(string);
    int start = 0;
    for(int i = 0; i < length; i++){
        if(string[i] == ' ' || string[i] == '\0'){
            int end = i-1;
            for(int u = start, v = i-1; u < v; u++, v--){
                char temp = string[u];
                string[u] = string[v];
                string[v] = temp; 
            }
            start = i+1;
        }
    }
    printf("%s\n",string);
}