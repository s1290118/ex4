#include<stdio.h>
#include<stdlib.h>

int main(){
  int Head=0,Tail=0;
  char name[10];
  int t;
    printf("Who are you?\n>");
  scanf("%s",name);
  printf("Hello,%s!\n",name);
  printf("Tossing a coin ...\n");
  for(int i=0;i<3;i++){
    printf("Round%d",i+1);
    t=rand()%2;
    if(t==0){
      Head++;
      printf(" Heads\n");
    }else{
      Tail++;
      printf(" Tails\n");
    }
  }
  printf("Heads: %d, Tails: %d\n",Head,Tail);
  if(Head>Tail)printf("%s won!\n",name);
   else printf("%s lost\n",name);
  return 0;
}
