#include<stdio.h>



/// ******* Card Price: *******

#define sms1 5
#define sms2 15
#define sms3 15
#define mms1 20
#define mms2 40
#define mms3 55

#define voice1 25
#define voice2 40
#define voice3 55
#define voice4 90
#define voice5 115

#define internet1 2
#define internet2 10
#define internet3 20
#define internet4 45
#define internet5 70
#define internet6 120
#define internet7 175
#define internet8 250

#define combo1 15
#define combo2 30
#define combo3 40
#define combo4 60
#define combo5 80
#define combo6 120
#define combo7 210
#define combo8 185

void smsmms()
{
    int c,i,a=0,t,q,s=0; /// c = choice,i=loop control variable,s=sum of bill,q=quantity
                         ///t=paid money,a=total bill of a single item
    FILE *fp,*op;
    fp=fopen("bill.txt","a");
    op=fopen("Money receipt.txt","w");

    printf("\n SMS/MMS Menu ");
    printf("\n   1.10 SMS Card- 5 taka");
    printf("\n   2.25 SMS Card- 15 taka");
    printf("\n   3.40 SMS Card- 20 taka");
    printf("\n   4.10 MMS Card- 20 taka");
    printf("\n   5.25 MMS Card- 40 taka");
    printf("\n   6.35 MMS Card- 55 taka");

    printf("\nPress 1 to 6 to Purchase.");
    printf("\nPress 0 after Quantity input to Proceed to final bill and finish purchase !!");
    printf("\n\nEnter Your Choice: ");
    fprintf(op,"\tMOBILE CARD PURCHASE MACHINE\n ");

    for(i=1; ; i++)     ///Manual break. Loop won't stop until user wants
    {

        scanf("%d",&c);
        if(c==1)
        {
            printf("10 SMS Card- 5 taka");
            printf("\nQuantity: ");
            scanf("%d",&q);
            fprintf(op,"\n10 SMS Card- 5 taka :%d",q);
            a=q*sms1;
            s=s+a;
        }
        else if(c==2)
        {
            printf("25 SMS Card 15 taka");
            printf("\nQuantity: ");
            scanf("%d",&q);
            fprintf(op,"\n25 SMS Card- 15 taka :%d",q);
            a=q*sms2;
            s=s+a;
        }
        else if(c==3)
        {
            printf("40 SMS Card- 20 taka");
            printf("\nQuantity: ");
            scanf("%d",&q);
            fprintf(op,"\n40 SMS Card- 20 taka :%d",q);
            a=q*sms3;
            s=s+a;
        }
        else if(c==4)
        {
            printf("10 MMS Card- 20 taka");
            printf("\nQuantity: ");
            scanf("%d",&q);
            fprintf(op,"\n10 MMS Card- 20 taka :%d",q);
            a=q*mms1;
            s=s+a;
        }
        else if(c==5)
        {
            printf("25 MMS Card- 40 taka");
            printf("\nQuantity: ");
            scanf("%d",&q);
            fprintf(op,"\n25 MMS Card- 40 taka :%d",q);
            a=q*mms2;
            s=s+a;
        }
        else if(c==6)
        {
            printf("35 MMS Card- 55 taka");
            printf("\nQuantity: ");
            scanf("%d",&q);
            fprintf(op,"\n35 MMS Card- 55 taka :%d",q);
            a=q*mms3;
            s=s+a;
        }
        else if(c==0)
        {
            break;
        }
        else
        {
            printf("\n\n\tYou Have Chosen A Wrong Number...");
            break;
        }
        printf("Press 1 to 6 if you want to purchase anything else from this menu...\n");
        printf("Press 0 to finish purchase : ");

    }

    fprintf(fp,"\nSMS/MMS : Your Bill : %d Taka",s);
    fprintf(op,"\nYour Bill : %d Taka",s);

    printf("\n\nYour Bill : %d Taka",s);
    printf("\nYou paid: ");
    scanf("%d",&t);
    if(t>s)
    {
        printf("\n\nCash Change: %d Taka",t-s);
        printf("\n\n\t--------Thanks for coming--------\n");
        fprintf(op,"\n\t--------Thanks for coming--------");
    }
    else if(t<s)
    {
        printf("\n\nIncomplete Payment! Please Pay: %d Taka",s);
        printf("\nYou paid: ");
        scanf("%d",&t);
        if(t==s)
        {
            printf("\n\n\t--------Thanks for coming--------\n");
            fprintf(op,"\n\n\t--------Thanks for coming--------\n");
        }
        else if(t>s)
        {
            printf("\n\nCash Change: %d Taka",t-s);
            printf("\n\n\t--------Thanks for coming--------\n");
            fprintf(op,"\n\n\t--------Thanks for coming--------\n");
        }
        else
        {
            printf("\nKick...\n");
        }
    }

    else
    {
        printf("\n\n\t--------Thanks for coming--------\n");
        fprintf(op,"\n\n\t--------Thanks for coming--------\n");
    }
}



void voice()
{
    int c,i,q,a=0,s=0,t;   /// c = choice,i=loop control variable,s=sum of bill,q=quantity
                          ///t=paid money,a=total bill of a single item
    FILE *fp,*op;
    fp=fopen("bill.txt","a");
    op=fopen("Money receipt.txt","w");

    printf("\nVoice Menu: ");
    printf("\n   1.15 min Card- 25 taka");
    printf("\n   2.30 min Card- 40 taka");
    printf("\n   3.75 min Card- 55 taka");
    printf("\n   4.150 min Card- 90 taka");
    printf("\n   5.200 min Card- 115 taka");

    printf("\nPress 1 to 5 to Purchase.");
    printf("\nPress 0 after Quantity input to Proceed to final bill and finish purchase !!");
    printf("\n\nEnter Your Choice: ");
    fprintf(op,"MOBILE CARD PURCHASE MACHINE\n ");

    for(i=1;   ; i++)   ///Manual break. Loop won't stop until user wants
    {
        scanf("%d",&c);
        if(c==1)
        {
            printf("15 minCard- 25 taka");
            printf("\nQuantity: ");
            scanf("%d",&q);
            fprintf(op,"\n15 min Card- 25 taka :%d",q);
            a=q*voice1;
            s=s+a;

        }
        else if(c==2)
        {
            printf("30 min Card- 40 taka");
            printf("\nQuantity: ");
            scanf("%d",&q);
            fprintf(op,"\n30 min Card- 40 taka :%d",q);
            a=q*voice2;
            s=s+a;
        }
        else if(c==3)
        {
            printf("75 min Card- 55 taka");
            printf("\nQuantity: ");
            scanf("%d",&q);
            fprintf(op,"\n75 min Card- 55 taka :%d",q);
            a=q*voice3;
            s=s+a;
        }
        else if(c==4)
        {
            printf("150 min Card- 90 taka");
            printf("\nQuantity: ");
            scanf("%d",&q);
            fprintf(op,"\n150 min Card- 90 taka :%d",q);
            a=q*voice4;
            s=s+a;
        }
        else if(c==5)
        {
            printf("200 min Card- 115 taka");
            printf("\nQuantity: ");
            scanf("%d",&q);
            fprintf(op,"\n200 min Card- 115 taka :%d",q);
            a=q*voice5;
            s=s+a;
        }

        else if(c==0)
        {
            break;
        }
        else
        {
            printf("\n\n\tYou Have Chosen A Wrong Number...");
            break;
        }
        printf("Press 1 to 5 if you want to purchase anything else from this menu...\n");
        printf("Press 0 to finish purchase : ");
    }

    fprintf(fp,"\nVoice : Your Bill : %d Taka",s);
    fprintf(op,"\nYour Bill :%d Taka",s);

    printf("\n\nYour Bill : %d Taka",s);
    printf("\nYou Paid: ");
    scanf("%d",&t);
    if(t>s)
    {
        printf("\n\nCash Change: %d Taka",t-s);
        printf("\n\n\t--------Thanks for coming--------\n");
        fprintf(op,"\n\n\t--------Thanks for coming--------\n");
    }
    else if(t<s)
    {
        printf("\n\nIncomplete Payment! Please Pay: %d Taka",s);
        printf("\nYou paid: ");
        scanf("%d",&t);
        if(t==s)
        {
            printf("\n\n\t--------Thanks for coming--------\n");
            fprintf(op,"\n\n\t--------Thanks for coming--------\n");
        }
        else if(t>s)
        {
            printf("\n\nCash Change: %d Taka",t-s);
            printf("\n\n\t--------Thanks for coming--------\n");
            fprintf(op,"\n\n\t--------Thanks for coming--------\n");
        }
        else
        {
            printf("\nKick...\n");
        }
    }
    else
    {
        printf("\n\n\t--------Thanks for coming--------\n");
        fprintf(op,"\n\n\t--------Thanks for coming--------\n");
    }
}




void internet()
{
    int c,i,q,a=0,s=0,t;/// c = choice,i=loop control variable,s=sum of bill,q=quantity
                        ///t=paid money,a=total bill of a single item
    FILE *fp,*op;
    fp=fopen("bill.txt","a");
    op=fopen("Money receipt.txt","w");

    printf("\nInternet Menu: ");
    printf("\n   1.7 MB Card- 2 taka");
    printf("\n   2.45 MB Card- 10 taka");
    printf("\n   3.90 MB Card- 20 taka");
    printf("\n   4.150 MB Card- 45 taka");
    printf("\n   5.250 MB Card- 70 taka");
    printf("\n   6.500 MB Card- 120 taka");
    printf("\n   7.750 MB Card- 175 taka");
    printf("\n   8.1 GB Card- 250 taka");

    printf("\nPress 1 to 8 to Purchase.");
    printf("\nPress 0 after Quantity input to Proceed to final bill and finish purchase !!");
    printf("\n\nEnter Your Choice: ");
    fprintf(op,"MOBILE CARD PURCHASE MACHINE\n ");

    for(i=1; ; i++) ///Manual break. Loop won't stop until user wants
    {
        scanf("%d",&c);
        if(c==1)
        {
            printf("7 MB Card- 2 taka");
            printf("\nQuantity: ");
            scanf("%d",&q);
            fprintf(op,"\n7 MB Card- 2 taka :%d",q);
            a=q*internet1;
            s=s+a;

        }
        else if(c==2)
        {
            printf("45 MB Card- 10 taka");
            printf("\nQuantity: ");
            scanf("%d",&q);
            fprintf(op,"\n45 MB Card- 10 taka :%d",q);
            a=q*internet2;
            s=s+a;
        }
        else if(c==3)
        {
            printf("90 MB Card- 20 taka");
            printf("\nQuantity: ");
            scanf("%d",&q);
            fprintf(op,"\n90 MB Card- 20 taka :%d",q);
            a=q*internet3;
            s=s+a;
        }
        else if(c==4)
        {
            printf("150 MB Card- 45 taka");
            printf("\nQuantity: ");
            scanf("%d",&q);
            fprintf(op,"\n150 MB Card- 45 taka :%d",q);
            a=q*internet4;
            s=s+a;
        }
        else if(c==5)
        {
            printf("250 MB Card- 70 taka");
            printf("\nQuantity: ");
            scanf("%d",&q);
            fprintf(op,"\n250 MB Card- 70 taka :%d",q);
            a=q*internet5;
            s=s+a;
        }
        else if(c==6)
        {
            printf("500 MB Card- 120 taka");
            printf("\nQuantity: ");
            scanf("%d",&q);
            fprintf(op,"\n500 MB Card- 120 taka :%d",q);
            a=q*internet6;
            s=s+a;
        }
        else if(c==7)
        {
            printf("750 MB Card- 175 taka");
            printf("\nQuantity: ");
            scanf("%d",&q);
            fprintf(op,"\n750 MB Card- 175 taka :%d",q);
            a=q*internet7;
            s=s+a;
        }
        else if(c==8)
        {
            printf("1 GB Card- 250 taka");
            printf("\nQuantity: ");
            scanf("%d",&q);
            fprintf(op,"\n1 GB Card- 250 taka :%d",q);
            a=q*internet8;
            s=s+a;
        }

        else if(c==0)
        {
            break;
        }
        else
        {
            printf("\n\n\tYou Have Chosen A Wrong Number...");
            break;
        }
        printf("Press 1 to 8 if you want to purchase anything else from this menu...\n");
        printf("Press 0 to finish purchase : ");
    }

    fprintf(fp,"\nInternet : Your Bill : %d Taka",s);
    fprintf(op,"\nYour Bill :%d Taka",s);

    printf("\n\nYour Bill : %d Taka",s);
    printf("\nYou Paid: ");
    scanf("%d",&t);
    if(t>s)
    {
        printf("\n\nCash Change: %d Taka",t-s);
        printf("\n\n\t--------Thanks for coming--------\n");
        fprintf(op,"\n\n\t--------Thanks for coming--------\n");
    }
    else if(t<s)
    {
        printf("\n\nIncomplete Payment! Please Pay: %d Taka",s);
        printf("\nYou paid: ");
        scanf("%d",&t);
        if(t==s)
        {
            printf("\n\n\t--------Thanks for coming--------\n");
            fprintf(op,"\n\n\t--------Thanks for coming--------\n");
        }
        else if(t>s)
        {
            printf("\n\nCash Change: %d Taka",t-s);
            printf("\n\n\t--------Thanks for coming--------\n");
            fprintf(op,"\n\n\t--------Thanks for coming--------\n");
        }
        else
        {
            printf("\nKick...\n");
        }
    }
    else
    {
        printf("\n\n\t--------Thanks for coming--------\n");
        fprintf(op,"\n\n\t--------Thanks for coming--------\n");
    }
}


void combo()
{
    int c,i,q,a=0,s=0,t;  /// c = choice,i=loop control variable,s=sum of bill,q=quantity
                         ///t=paid money,a=total bill of a single item
    FILE *fp,*op;
    fp=fopen("bill.txt","a");
    op=fopen("Money receipt.txt","w");

    printf("\nCombo Menu: ");
    printf("\n   1.10 min 5 MB 5 SMS 2 MMS Card- 15 taka");
    printf("\n   2.20 min 10 MB 10 SMS 5 MMS Card- 30 taka");
    printf("\n   3.30 min 15 MB 15 SMS Card- 40 taka");
    printf("\n   4.50 min 30 MB Card- 60 taka");
    printf("\n   5.100 min 50 MB Card 80 taka");
    printf("\n   6.200 min 100 MB Card- 120 taka");
    printf("\n   7.500 min 250 MB Card- 210 taka");
    printf("\n   8.500 MB 500 SMS Card- 185 taka");

    printf("\nPress 1 to 6 to Purchase.");
    printf("\nPress 0 after Quantity input to Proceed to final bill and finish purchase !!");
    printf("\n\nEnter Your Choice: ");
    fprintf(op,"MOBILE CARD PURCHASE MACHINE\n ");

    for(i=1; ; i++) ///Manual break. Loop won't stop until user wants
    {
        scanf("%d",&c);
        if(c==1)
        {
            printf("10 min 5 MB 5 SMS 2 MMS Card- 15 taka");
            printf("\nQuantity: ");
            scanf("%d",&q);
            fprintf(op,"\n10 min 5 MB 5 SMS 2 MMS Card- 15 taka :%d",q);
            a=q*combo1;
            s=s+a;

        }
        else if(c==2)
        {
            printf("20 min 10 MB 10 SMS 5 MMS Card- 30 taka");
            printf("\nQuantity: ");
            scanf("%d",&q);
            fprintf(op,"\n20 min 10 MB 10 SMS 5 MMS Card- 30 taka :%d",q);
            a=q*combo2;
            s=s+a;
        }
        else if(c==3)
        {
            printf("30 min 15 MB 15 SMS Card- 40 taka");
            printf("\nQuantity: ");
            scanf("%d",&q);
            fprintf(op,"\n30 min 15 MB 15 SMS Card- 40 taka :%d",q);
            a=q*combo3;
            s=s+a;
        }
        else if(c==4)
        {
            printf("50 min 30 MB Card- 60 taka");
            printf("\nQuantity: ");
            scanf("%d",&q);
            fprintf(op,"\n50 min 30 MB Card- 60 taka :%d",q);
            a=q*combo4;
            s=s+a;
        }
        else if(c==5)
        {
            printf("5.100 min 50 MB Card 80 taka");
            printf("\nQuantity: ");
            scanf("%d",&q);
            fprintf(op,"\n5.100 min 50 MB Card 80 taka :%d",q);
            a=q*combo5;
            s=s+a;
        }
        else if(c==6)
        {
            printf("200 min 100 MB Card- 120 taka");
            printf("\nQuantity: ");
            scanf("%d",&q);
            fprintf(op,"\n200 min 100 MB Card- 120 taka :%d",q);
            a=q*combo6;
            s=s+a;
        }
        else if(c==7)
        {
            printf("500 min 250 MB Card- 210 taka");
            printf("\nQuantity: ");
            scanf("%d",&q);
            fprintf(op,"\n500 min 250 MB Card- 210 taka :%d",q);
            a=q*combo7;
            s=s+a;
        }
        else if(c==8)
        {
            printf("500 MB 500 SMS Card- 185 taka");
            printf("\nQuantity: ");
            scanf("%d",&q);
            fprintf(op,"\n500 MB 500 SMS Card- 185 taka :%d",q);
            a=q*combo8;
            s=s+a;
        }

        else if(c==0)
        {
            break;
        }
        else
        {
            printf("\n\n\tYou Have Chosen A Wrong Number...");
            break;
        }
        printf("Press 1 to 8 if you want to purchase anything else from this menu...\n");
        printf("Press 0 to finish purchase : ");
    }

    fprintf(fp,"\nInternet : Your Bill : %d Taka",s);
    fprintf(op,"\nYour Bill :%d Taka",s);

    printf("\n\nYour Bill : %d Taka",s);
    printf("\nYou Paid: ");
    scanf("%d",&t);
    if(t>s)
    {
        printf("\n\nCash Change: %d Taka",t-s);
        printf("\n\n\t--------Thanks for coming--------\n");
        fprintf(op,"\n\n\t--------Thanks for coming--------\n");
    }
    else if(t<s)
    {
        printf("\n\nIncomplete Payment! Please Pay: %d Taka",s);
        printf("\nYou paid: ");
        scanf("%d",&t);
        if(t==s)
        {
            printf("\n\n\t--------Thanks for coming--------\n");
            fprintf(op,"\n\n\t--------Thanks for coming--------\n");
        }
        else if(t>s)
        {
            printf("\n\nCash Change: %d Taka",t-s);
            printf("\n\n\t--------Thanks for coming--------\n");
            fprintf(op,"\n\n\t--------Thanks for coming--------\n");
        }
        else
        {
            printf("\nKick...\n");
        }
    }
    else
    {
        printf("\n\n\t--------Thanks for coming--------\n");
        fprintf(op,"\n\n\t--------Thanks for coming--------\n");
    }
}


int main()
{
    int n;
    printf("--- WELCOME TO MOBILE CARD PURCHASE MACHINE ---\n\n");
    printf("\t 1. SMS & MMS menu \n");
    printf("\t 2. Voice menu \n");
    printf("\t 3. Internet menu\n");
    printf("\t 4. Combo menu\n");
    scanf("%d",&n);
    printf("\nYou Pressed %d",n);

    if(n==1)
    {
        smsmms();
    }
    else if(n==2)
    {
        voice();
    }
    else if(n==3)
    {
        internet();
    }
    else if(n==4)
    {
        combo();
    }
    else
    {
        printf("Wrong Input  !!!! ");
    }
}
