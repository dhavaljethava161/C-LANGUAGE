#include<stdio.h>
int main()
{
int Accounts, State, Economics, English, BA, Gujarati, total;

float percentage;

printf("\nEnter marks of accounts : " );
scanf("%d", &Accounts);
printf("\nEnter marks of  state : " );
scanf("%d", &State);
printf("\nEnter marks of  economics : " );
scanf("%d", &Economics);
printf("\nEnter marks of   english : " );
scanf("%d", &English);
printf("\nEnter marks of   BA : " );
scanf("%d", &BA);
printf("\nEnter marks of  gujarati : " );
scanf("%d", &Gujarati);

total= Accounts + State + Economics + English + BA + Gujarati;

printf("Total mmarks: %d", total);

percentage = (float)total/600*100;
printf("\nYour percentage : %.2f", percentage );

return 0;
}