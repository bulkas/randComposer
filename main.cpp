/*
 * main.cpp
 *
 *  Created on: 27 paü 2015
 *      Author: Marek
 */
#include<windows.h>
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h> 		/* time */
#include <iostream>

#define MAX 5000

//using namespace std;

int main(){


	srand (time(NULL));
	int sound;
	int time;



	for (int i = 1000; i < MAX; i +=50) {
		time = rand() % 1000 + 10;
		sound = rand() % 3000 + 1000;
		Beep(sound,time);
		//printf("%d\n",sound);
		std::cout << sound << std::endl;
		//_sleep(10);
	}
	return 0;
}


