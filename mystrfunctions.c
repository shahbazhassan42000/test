int mystrlen(const char *s) {
    int size = 0;
    while (s[size] != '\0')
        size++;
    return size;
}
int mystrcpy(char *dest, const char *src) {
    for(int i=0;src[i]!='\0';){
        dest[i]=src[i];
        i++;
        if(src[i]=='\0'){
            dest[i]='\0';
            return 1;
        }
    }
    return 0;
}
int mystrncpy(char *dest, const char *src, int n) {
    int i = 0;
    for(;i<n;i++){
        dest[i]=src[i];
    }
    if(src[i]!='\0'){
        dest[i]='\0';
    }
    return 1;
}
int mystrcat(char *dest, const char *src) {
    for(int i=0;dest[i]!='\0';){
        i++;
        if(dest[i]=='\0'){
            for(int j=0;src[j]!='\0';){
                dest[i]=src[j];
                i++;
                j++;
                if(src[j]=='\0'){
                    dest[i]='\0';
                    return 1;
                }
            }
        }
    }
    return 0;
}
