#include <random>
#include <vector>
#include <string>
#include <algorithm>
#include <iostream>

#include <gtest/gtest.h>

#include "../../include/Rationnels.hpp"


/////////////////////////////////////////////////////
// constructors

TEST (RationnelsConstructor, basicConstructor) { 
	int vectorSize = 100;
	std::vector<int> testers(vectorSize);
	std::generate(testers.begin(), testers.end(),[n = 2] () mutable { return n++; });
	Rationnels ratio;

	for(int i = 1; i<vectorSize; i++){
		ratio = Rationnels(testers[i],testers[vectorSize-i]);
		const long gcd = std::__algo_gcd(testers[i],testers[vectorSize-i]);
		ASSERT_EQ (testers[i]/gcd,ratio.numerator);
		ASSERT_EQ (testers[vectorSize-i]/gcd,ratio.denominator);
	}
}

TEST (RationnelsConstructor, floatConstructor) { 

	int vectorSize = 20;
	std::vector<float> testers(vectorSize);
	srand(12);
	std::generate(testers.begin(), testers.end(),[](){return (-static_cast <float> (rand()) / (static_cast <float> (RAND_MAX/200)));});
	Rationnels ratio;

	for(int i = 0; i<testers.size(); i++){
		ratio = Rationnels(testers[i]);
		ASSERT_NEAR (testers[i], ( ratio.numerator/(float)ratio.denominator),0.001000);
	}
	
}


TEST (add, addTest){

	int vectorSize = 200;
	std::vector<float> testers(vectorSize);
	srand(12);
	std::generate(testers.begin(), testers.end(),[](){return (static_cast <float> (rand()) / (static_cast <float> (RAND_MAX/20)));});
	Rationnels ratio;

	for(int i = 0; i<testers.size(); i++){
		
		ratio = Rationnels(testers[i])+Rationnels(testers[testers.size()-i]);
		float val = testers[i]+testers[testers.size()-i];

		ASSERT_NEAR (val, ((float) ratio.numerator/ratio.denominator),1);
	}
}


TEST (sub, subTest){

	int vectorSize = 100;
	std::vector<float> testers(vectorSize);

	std::generate(testers.begin(), testers.end(),[] ()  { return (static_cast <float> (rand()) / static_cast <float> (RAND_MAX/100)); });
	Rationnels ratio;


	for(int i = 0; i<vectorSize; i++){
		ratio = Rationnels(testers[i])-Rationnels(testers[vectorSize-i]);
		float val = testers[i]-testers[vectorSize-i];

		ASSERT_NEAR (val, ((float) ratio.numerator/ratio.denominator),1);
	}
}

TEST (multiply, multiplyTest){

	int vectorSize = 100;
	std::vector<float> testers(vectorSize);

	std::generate(testers.begin(), testers.end(),[] () { return (static_cast <float> (rand()) / static_cast <float> (RAND_MAX/50)); });
	Rationnels ratio;


	for(int i = 0; i<vectorSize; i++){
		ratio = Rationnels(testers[i])*Rationnels(testers[vectorSize-i]);
		float val = testers[i]*testers[vectorSize-i];

		ASSERT_NEAR (val, ((float) ratio.numerator/ratio.denominator),1);
	}
}

TEST (reverse, reverseTest){

	int vectorSize = 100;
	std::vector<int> testers(vectorSize);
	std::generate(testers.begin(), testers.end(),[n = 2] () mutable { return n++; });
	Rationnels ratio;

	for(int i = 1; i<vectorSize; i++){
		ratio = Rationnels(testers[i],testers[vectorSize-i]);
		ratio.reverse();
		const long gcd = std::__algo_gcd(testers[i],testers[vectorSize-i]);
		ASSERT_EQ (testers[i]/gcd,ratio.denominator);
		ASSERT_EQ (testers[vectorSize-i]/gcd,ratio.numerator);
	}
}


TEST (divide, divideTest){

	int vectorSize = 100;
	std::vector<float> testers(vectorSize);
	std::generate(testers.begin(), testers.end(),[] () { return ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX))+1); });
	Rationnels ratio;

	for(int i = 1; i<vectorSize; i++){
		Rationnels ratio2 = Rationnels(testers[vectorSize-i]);
		ratio = Rationnels(testers[i])/ratio2;
		float val = testers[i]/testers[vectorSize-i];

		ASSERT_NEAR (val, ((float) ratio.numerator/ratio.denominator),1);
	}
}

TEST (logarithme, logarithmeTest){

	int vectorSize = 100;
	std::vector<float> testers(vectorSize);
	std::generate(testers.begin(), testers.end(),[] () { return ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX))+1); });
	Rationnels ratio;

	for(int i = 1; i<vectorSize; i++){
		ratio = Rationnels(testers[i]).logarithme();
		float val = testers[i];

		ASSERT_NEAR(log(val), ((float) ratio.numerator/ratio.denominator),1);
	}
}

TEST (exponential, exponentialTest){

	int vectorSize = 100;
	std::vector<float> testers(vectorSize);
	std::generate(testers.begin(), testers.end(),[] () { return ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX/2))); });
	Rationnels ratio;

	for(int i = 1; i<vectorSize; i++){
		ratio = Rationnels(testers[i]).exponentielle();
		float val = testers[i];
		std::cout<<testers[i]<<std::endl;

		ASSERT_NEAR(exp(val), ((float) ratio.numerator/ratio.denominator),2);
	}
}

git remote set-url origin https://scuzzlebuzzle:<MYTOKEN>@github.com/scuzzlebuzzle/ol3-1.git
https://github.com/Banjomaestro/libduturfu
git@github.com:Banjomaestro/libduturfu.git
