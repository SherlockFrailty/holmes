#include<stdbool.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define NUM_SUITS 4
#define NUM_RANKS 13

int main()
{
	bool in_hand[NUM_SUITS][NUM_RANKS]={false};
	int num_cards,rank,suit;
	const char rank_code[]={'1','2','3','4','5','6','7','8','9','t','j','q','k','a'};
	const char suit_code[]={'c','d','h','s'};
	
	srand((unsigned) time(NULL));
	//把time函数的返回值传递给函数srand可以避免程序每次运行时发同样的牌 
	
	printf("Enter number of cards in hand:");
	scanf("%d",&num_cards);
	
	printf("Your hand:\n");
	while(num_cards>0){
		suit=rand() % NUM_SUITS;  /*picks a random suit*/
		rank=rand() % NUM_RANKS;  /*picks a random rank*/
		if(!in_hand[suit][rank]){
			in_hand[suit][rank]=true;
			num_cards--;
			printf("%c%c\n",rank_code[rank],suit_code[suit]);
		}		
	}
	printf("\n");
	
	return 0;
} 
