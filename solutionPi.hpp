#ifndef SOLUTION_HPP
#define SOLUTION_HPP

#include <iostream>
#include <cmath>

using namespace std;

class SolutionFourtyTwo{
public:
	bool judgeSquareSum(int c){
		//a==b -> also -> a,b>=0
		if(c<=2) return 0;
		while(c%2==0) c/=2; //mientras c sea par -> que sea dividido entre dos
		if(c%4 == 3) return 0; //mientras c0=3(mod4) -> retornar falso
		int sqrt_c=sqrt(c);
		for(int k=3; k<=sqrt_c; k+=4){
			int exp=0;
			if(c%k==0){
				while(c%k==0){
					exp++;
					c/=k;
				}
				if(exp%2 != 0) return 0; //si exp es impar
			}
		}
		return c%4 != 3;
	}
};

#endif