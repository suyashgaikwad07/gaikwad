#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    int choice;
    do
    {
       printf("\n\n*** MENU ***");
       printf("\n1 : ACCEPT CHARACTER ");
       printf("\n2 :CHECK ALPHABET ");
       printf("\n3 :CHECK DIGIT ");
       printf("\n4 :CHECK UPPERCASE ");
       printf("\n5 :CHECK LOWERCASE ");
       printf("\n6 :CONVERT TO UPPERCASE ");
       printf("\n7 :CONVERT TO LOWERCASE ");
       printf("\n8 :EXIT");
       printf("\n\nEnter your choice :");
       scanf("%d", &choice);
       switch(choice)
       {
        case 1 : printf("\nEnter the charater :");
                 fflush(stdin);
                 ch=getchar();
                 break;
        case 2 : if (isalpha(ch))
                   printf("%cis an alphabet",ch);
                   else
                   printf("%c is not an alphabet",ch);
                break;
        case 3 :  if (isalpha(ch))
                   printf("%c is an digit",ch);
                   else
                   printf("%c is not an digit",ch);
                break;
        case 4 :  if (isalpha(ch))
                   printf("%c is an uppercase alphabet",ch);
                   else
                   printf("%c is not an uppercase alphabet",ch);
                break;
        case 5 : if (isalpha(ch))
                   printf("%c is an lowerecase alphabet",ch);
                   else
                   printf("%c is not an lowercase alphabet",ch);
                break;
        case 6 : ch=toupper(ch);
                   printf("The uppercase character is %c ", ch);
                break;
        case 7 :ch=tolower(ch);
                   printf("The lowercase character is %c ", ch);            
       }
    } while (choice!=8);
    return 0;
}