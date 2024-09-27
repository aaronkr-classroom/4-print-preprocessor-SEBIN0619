//rps.c
//Rockk-Paper-Scissors
#include <stdio.h>
#include <stdlib.h>
#include <time.h> // srand()

//  상수 변수 정의
#define ROCK 1
#define PAPER 2
#define SCISSORS 3

//상수 함수 wjddml
#define WIN printf("You win!\n")
#define LOSE printf("You lose ㅠㅠ\n")
#define TIE printf("You win!\n")

void print_choice(int choice);
void play_game(int user_choice, int comp_choice);

int main(void) {
	int user_choice, comp_choice;

	//랜덤숫자 생성
	srand(time(0));

	printf("Welcome to RPS!\n");
	printf("Choose your move:\n");
	printf("1-Rock\n");
	printf("2-Paper\n");
	printf("3=Scissor\n");

	//사용자의 선택 받기
	printf("Choice:>>> ");
	scanf_s("%d", &user_choice);

	//AI 선택 받기
	comp_choice = (rand() % 3 + 1);//(0~2)+1

	//선택 출력하기
	printf("Your chose:");
	print_choice(user_choice);
	printf("AI chose:");
	print_choice(comp_choice);

	play_game(user_choice, comp_choice);

	return 0;
}


void print_choice(int choice) {
	if (choice == ROCK) { // choice ==1
		printf("ROCK\n");
	}
	else if (choice == PAPER) { // choice ==2
		printf("Paper\n");
	}
	else if (choice == SCISSORS) { // choice ==3
		printf("SCISSORS\n");
	}
}

void play_game(int user_choice, int comp_choice) {
	if (user_choice == comp_choice) {
		TIE; // printf("It's a tie~~~");
	}
	else if (
		(user_choice == ROCK && comp_choice == SCISSORS) ||
		(user_choice == PAPER && comp_choice == ROCK) ||
		(user_choice == SCISSORS && comp_choice == PAPER)
		) {
		WIN;
	}
	else {
		LOSE;
	}
}