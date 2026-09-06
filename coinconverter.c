# include<stdio.h>

void Currencyconvert(int value){

    float dollarvalues;
    printf("Enter the Dollar you have now:\t");
    scanf("%f",&dollarvalues);

    switch (value)
    {
    case 1:printf("Value of %0.2f dollar = %0.2f Euro Dollars!\n",dollarvalues,(dollarvalues*0.91));
         break;
    case 2:printf("Value of %0.2f dollar = %0.2f Canadian Dollars!\n",dollarvalues,(dollarvalues*1.36));
         break;
    case 3:printf("Value of %0.2f dollar = %0.2f Kuwaiti Dinar!\n",dollarvalues,(dollarvalues*0.31));
         break;
    case 4:printf("Value of %0.2f dollar = %0.2f Saudi Riyal!\n",dollarvalues,(dollarvalues*3.76));
         break;
    case 5:printf("Value of %0.2f dollar = %0.2f Indian Rupee!\n",dollarvalues,(dollarvalues*86.88));
         break;
    case 6:printf("Value of %0.2f dollar = %0.2f Singapore Dollar!\n",dollarvalues,(dollarvalues*1.30));
         break;
    case 7:printf("Value of %0.2f dollar = %0.2f Pound Sterling!\n",dollarvalues,(dollarvalues*0.76));
         break;
    
    default: printf("Enter the valid currency case :");
        break;
    }
}


int main(){
    // practice code of currency covert :

    printf("....**** Convergen of currency....****\n");

    int uservalue,select;
    again :
    printf("slect the case to convert the currency :\n");
    printf("1. Dollar to Euro \n");
    printf("2. Dollar to Canadian Dollar (CUD) \n");
    printf("3. Dollar to Kuwaiti Dinar \n");
    printf("4. Dollar to Saudi Riyal \n");
    printf("5. Dollar to Indian Rupee \n");
    printf("6. Dollar to Singapore Dollar \n");
    printf("7. Dollar to Pound Sterling \n");
    printf("....********************************....***************************...\n");
    printf("choose the country dollar to convert it : ");
    scanf("%d",&uservalue);
    printf("\n");
    Currencyconvert(uservalue);
    printf("\n");

// to continue the program we use labels.

 printf("If you want to continue the process Enter 1 or Enter 0 to exit! : ");
 scanf("%d",&select);
 printf("<.......*************************************...*******************************......>\n");
  if(select == 1)
  {
    goto again;
  }
  else{
    printf(" Thanks you <3..");
  }
}