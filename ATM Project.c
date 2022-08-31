#include<stdio.h>
int pin, passoward;
int main()
{

        float x,y;
        char ch, f;
        {
  while (pin != 1520)
  {

    printf("ENTER YOUR  PIN NUMBER:");

    scanf("%d", & pin);

    if (pin != 1520)

      printf("PLEASE ENTER VALID PASSWORD! \a\n");
  }
       // printf("Enter initial amount\n");
        //scanf("%f",&x);
        do{
        printf("Enter\n1 Deposit Amount\n2 Withdraw\n3 Balance\n4 Transfer Amount\n ");
        scanf("\n%c",&ch);
        switch(ch)
        {
           case'1':
                printf("Enter Deposit Amount\n");
                scanf("%f",&y);
                x=x+y;
                printf("New Amount=%f",x);
                break;
           case'2':
                printf("Enter Withdraw\n");
                scanf("%f",&y);
                if(x>=y)
                {
                    x=x-y;
                    printf("New Amount=%f",x);
                }
                else
                {
                    printf("Insufficient amount in your account");
                }
                break;
           case'3':
                printf("Amount in your account=%f",x);
               // break;
          // default:
               // printf("Choose correct option for operation");
               default :
              {
               printf("Enter Valid Choice\n");
               break;
              }
              case'4':
{while (passoward != 1520)
  {

    printf("ENTER YOUR  PIN NUMBER:");

    scanf("%d", &passoward);

    if (passoward != 1520)

      printf("PLEASE ENTER VALID PASSWORD! \a\n");
  }
      }          printf("Enter Transfer Amount\n");
                scanf("%f",&y);
                if(x>=y)

                {
                    x=x-y;
                    printf("New Amount=%f",x);

                }
                 else
                {
                    printf("Insufficient amount in your account");
                }

                break;
        }
 printf("To Continue Press 'Y' else any letter\n");
 fflush(stdin);
 scanf("%c",&f);
   }while(f=='y' || f=='Y');
   printf("Thanks for using our ATM\n");
   return 0 ;
}}
