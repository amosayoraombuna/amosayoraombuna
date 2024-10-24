// C structure 
#include <stdio.h>
#include <string.h>

struct book {
    char title[30];
    char author[30];
    int publicationyear;
    char ISBN[13];
    float price;
}book;

int main(){
    strcpy(book.title,"Introduction to C programming");
    strcpy(book.author,"John Smith");
    book.publicationyear=2022;
    strcpy(book.ISBN,"9780131103627");
    book.price=49.99;
    
    printf("title:%s\n",book.title);
    printf("author:%s\n",book.author);
    printf("publicationyear:%d\n",book.publicationyear);
    printf("ISBN:%s\n",book.ISBN);
    printf("price:%2f\n",book.price);
    
    
    return 0;
}

       
    
       



    