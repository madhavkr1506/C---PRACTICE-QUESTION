// write a program to reverse a string without using librery function.
int main(){
    char str[100];
    printf("enter name = ");
    gets(str);
    printf("original name = %s \n",str);
    revstr(str);
    printf("reverse name = %s",str);
return 0;
}
void revstr(char *name){
    int i,temp,len;
    len=strlen(name);
    for (i=0;i<len/2;i++){
        temp=name[i];
        name[i]=name[len-i-1];
        name[len-i-1]=temp;
    }
}