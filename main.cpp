#include <iostream>
using namespace std;

bool strcmp_ab(char* s1, char* s2) {
    int i=0;
    while (true) {
        if (s1[i]==s2[i])
            if(s1[i]=='\0') return 1;
            else i++;
        else return 0;
    }
}

bool strncmp_ab(char* s1, char* s2, int n) {
    int i=0;
    while (true) {
        if (s1[i]==s2[i])
            if((s1[i]=='\0')||(i==n-1)) return 1;
            else i++;
        else return 0;
    }
}

void strchr_ab(char* s, char c){
    int counter=0;
    int i=0;
    while ((s[i]!=c)&&(s[i]!='\0')) {
        counter++;
        i++;
    }
    if (s[i]=='\0')
        std::cout<<"not found"<<endl;
    else std::cout << counter;
}

void strcpy_ab(char* s1, char* s2) {
    int i=0;
    while(s2[i]!='\0') {
        s1[i]=s2[i];
        i++;
    }

}

void strncpy_ab(char* s1, char* s2, int n) {
    int i=0;
    while(i<n) {
        s1[i]=s2[i];
        if (s2[i]=='\0') break;
        i++;
    }
}

void strcat_ab(char* s1, char* s2){
    int counter=0;
    int i=0;
    while (s1[i]!='\0'){
        i++;
        counter++;
    }
    i=0;
    while(true) {
        if (s2[i]!='\0') { s1[counter]=s2[i]; counter++; i++;}
        else {s1[counter]='\0'; break;}
    }
}

void strncat_ab(char* s1, char* s2, int n){
    int counter=0;
    int i=0;
    while (s1[i]!='\0'){
        i++;
        counter++;
    }
    i=0;
    while(i<n) {
        if (s2[i]!='\0') { s1[counter]=s2[i]; counter++; i++;}
        else {s1[counter]='\0'; break;}
    }
}

int strlen_ab(char* s) {
    int i=0;
    while(s[i]!='\0') {
        i++;
    }
    return i;
}

char strstr_ab(char* s1,char* s2) {
    for (int i = 0; i < strlen_ab(s1) ; i++) {
        for (int j = 0; j < strlen_ab(s2) ; j++) {
            if (s2[j] == s1[i])
                std::cout << s1[i];
        }
    }
}

char strpbrk_ab(char* s){
    char key[] = "aeiou";
    for (int i = 0; i < strlen_ab(s) ; i++){
        for (int j = 0; j < strlen_ab(key) ; j++) {
            if (s[i]==key[j])
                return s[i];
        }
    }
}

int strspn_ab(char* s1, char* s2){
    int counter=0;
    for (int i = 0; i < strlen_ab(s1) ; i++){
        for (int j = 0; j < strlen_ab(s2) ; j++) {
            if (s1[i]==s2[j])
                counter++;
        }
    }
    return counter;
}

int strcspn_ab(char* s1, char* s2){
    int counter=0;
    for (int i = 0; i < strlen_ab(s1) ; i++){
        for (int j = 0; j < strlen_ab(s2) ; j++) {
            if (s1[i]==s2[j])
                return ++i;
        }
    }
}

int main() {
    char s1[]="abcdcba";
    char s2[]="bc";
    char s[]="adegikos";
    char c='g';
    int n=3;

    //cout<<strcmp_ab(s1,s2)<<endl;;
    //cout<<strncmp_ab(s1,s2,n)<<endl;
    //strchr_ab(s,c);
    //strcpy_ab(s1,s2);
    //strncpy_ab(s1,s2,n);
    //strcat_ab(s1,s2);
    //strncat_ab(s1,s2,n);
    //cout<<s1<<endl;
    //cout<<s2<<endl;
    /*cout<<s;
    cout<<' '<<strlen_ab(s)<<endl;*/
    //strstr_ab(s1,s2);
    //cout<<strpbrk_ab(s)<<endl;
    //cout<<strspn_ab(s1,s2)<<endl;

    cout<<strcspn_ab(s1,s2)<<endl;

    return 0;
}
