#include <stdio.h>

int isprime(int val){if(val==0||val==1)return 0;if(val%2==0)return val==2;if(val%3==0)return val==3;if(val%5==0)return val==5;for(int i=7;i*i<=val;i+=2){if(val%i== 0)return 0;}return 1;}int main(void){int low,high;int prime_count=0;printf("iki tamsayi girin : ");scanf("%d%d",&low,&high);for (int i=low;i<=high;++i){if(isprime(i)){++prime_count;printf("%d ",i);}}printf("\n[%d %d] araliginda %d asal sayi bulundu\n",low,high,prime_count);}
