#include <random>
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>

#include <gtest/gtest.h>

#include "../../include/Rationnels.hpp"

TEST (RationnelsConstructor, basicConstructor) { 
	int vectorSize = 100;
	std::vector<int> testers(vectorSize);
	std::generate(testers.begin(), testers.end(),[n = 2] () mutable { return n++; });
	Rationnels<int> ratio;

	for(int i = 1; i<vectorSize; i++){
		ratio = Rationnels<int>(testers[i],testers[vectorSize-i]);
		const long gcd = std::__algo_gcd(testers[i],testers[vectorSize-i]);
		ASSERT_EQ (testers[i]/gcd,ratio.numerator);
		ASSERT_EQ (testers[vectorSize-i]/gcd,ratio.denominator);
	}
}

TEST (RationnelsConstructor, floatConstructor) { 

	int vectorSize = 500;
	std::vector<float> testers(vectorSize);
	srand(12);
	std::generate(testers.begin(), testers.end(),[](){return ((static_cast <float> (rand()) / (static_cast <float> (RAND_MAX/1000)))-200);});

	Rationnels<int> ratio;

	for(int i = 0; i<testers.size(); i++){
		ratio = Rationnels<int>(testers[i]);
		ASSERT_NEAR (testers[i], ( ratio.numerator/(double)ratio.denominator),0.001);
	}	
}

TEST (UnaryMinus, minus) { 

	int vectorSize = 500;
	std::vector<float> testers(vectorSize);
	srand(12);
	std::generate(testers.begin(), testers.end(),[](){return ((static_cast <float> (rand()) / (static_cast <float> (RAND_MAX/1000)))-200);});

	Rationnels<int> ratio;

	for(int i = 0; i<testers.size(); i++){
		ratio = -Rationnels<int>(testers[i]);
		ASSERT_NEAR (-testers[i], ( ratio.numerator/(double)ratio.denominator),0.001);
	}	
}

TEST (add, addTest){

	int vectorSize = 200;
	std::vector<float> testers(vectorSize);
	srand(12);
	std::generate(testers.begin(), testers.end(),[](){return (static_cast <float> (rand()) / (static_cast <float> (RAND_MAX/20))-100);});
	Rationnels<int> ratio;

	for(int i = 0; i<testers.size(); i++){
		
		ratio = Rationnels<int>(testers[i])+Rationnels<int>(testers[testers.size()-i]);
		float val = testers[i]+testers[testers.size()-i];

		ASSERT_NEAR (val, ((float) ratio.numerator/ratio.denominator),0.001);
	}
}


TEST (sub, subTest){

	int vectorSize = 100;
	std::vector<float> testers(vectorSize);
	std::generate(testers.begin(), testers.end(),[] ()  { return (static_cast <float> (rand()) / static_cast <float> (RAND_MAX/100)-100); });
	Rationnels<int> ratio;


	for(int i = 0; i<vectorSize; i++){
		ratio = Rationnels<int>(testers[i])-Rationnels<int>(testers[vectorSize-i]);
		float val = testers[i]-testers[vectorSize-i];

		ASSERT_NEAR (val, ((float) ratio.numerator/ratio.denominator),0.0001);
	}
}

TEST (multiply, multiplyTest){

	int vectorSize = 100;
	std::vector<float> testers(vectorSize);
	std::generate(testers.begin(), testers.end(),[] () { return (static_cast <float> (rand()) / static_cast <float> (RAND_MAX/50)-100); });
	Rationnels<long> ratio;


	for(int i = 0; i<vectorSize; i++){
		ratio = Rationnels<long>(testers[i])*Rationnels<long>(testers[vectorSize-i]);
		float val = testers[i]*testers[vectorSize-i];

		ASSERT_NEAR (val, ((float) ratio.numerator/ratio.denominator),0.001);
	}
}

TEST (divide, divideTest){

	int vectorSize = 100;
	std::vector<float> testers(vectorSize);
	std::generate(testers.begin(), testers.end(),[] () { return ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX/20))-100); });
	Rationnels<long> ratio;

	for(int i = 1; i<vectorSize; i++){
		Rationnels<long> ratio2 = Rationnels<long>(testers[vectorSize-i]);
		ratio = Rationnels<long>(testers[i])/ratio2;
		float val = testers[i]/testers[vectorSize-i];
		ASSERT_NEAR (val, ((float) ratio.numerator/ratio.denominator),0.01);
	}
}

TEST (logarithme, logarithmeTest){

	int vectorSize = 100;
	std::vector<float> testers(vectorSize);
	std::generate(testers.begin(), testers.end(),[] () { return ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX/20))+1); });
	Rationnels<long long> ratio;

	for(int i = 1; i<vectorSize; i++){
		ratio = Rationnels<long long>(testers[i]).logarithme();
		ASSERT_NEAR(log(testers[i]), ((float) ratio.numerator/ratio.denominator),0.1);
	}
}

TEST (exponential, exponentialTest){

	int vectorSize = 100;
	std::vector<float> testers(vectorSize);
	std::generate(testers.begin(), testers.end(),[] () { return ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX/10))-10); });
	Rationnels<int> ratio;

	for(int i = 1; i<vectorSize; i++){
		ratio = Rationnels<int>(testers[i]).exponentielle();
		ASSERT_NEAR(exp(testers[i]), ((float) ratio.numerator/ratio.denominator),0.1);
	}
}

TEST (cosine, cosineTest){

	int vectorSize = 100;
	std::vector<float> testers(vectorSize);
	std::generate(testers.begin(), testers.end(),[] () { return ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX/20)-100)); });
	Rationnels<long long> ratio;

	for(int i = 1; i<vectorSize; i++){
		ratio = Rationnels<long long>(testers[i]).cosinus();
		ASSERT_NEAR(cosl(testers[i]), ((float) ratio.numerator/ratio.denominator),0.1);
	}
}

TEST (sine, sineTest){

	int vectorSize = 100;
	std::vector<float> testers(vectorSize);
	std::generate(testers.begin(), testers.end(),[] () { return (((static_cast <float> (rand()) / static_cast <float> (RAND_MAX/20))-100)); });
	Rationnels<long long> ratio;

	for(int i = 1; i<vectorSize; i++){
		ratio = Rationnels<long long>(testers[i]).sinus();
		ASSERT_NEAR(sinl(testers[i]), ((float) ratio.numerator/ratio.denominator),0.1);
	}
}

TEST (abs, absTest){

	int vectorSize = 100;
	std::vector<float> testers(vectorSize);
	std::generate(testers.begin(), testers.end(),[] () { return (((static_cast <float> (rand()) / static_cast <float> (RAND_MAX/2))-100)); });
	Rationnels<int> ratio;
	for(int i = 1; i<vectorSize; i++){
		ratio = Rationnels<int>(testers[i]).absolue();
		ASSERT_NEAR(abs(testers[i]), ((float) ratio.numerator/ratio.denominator),1);
	}
}

TEST (whole, wholeTest){

	int vectorSize = 100;
	std::vector<float> testers(vectorSize);
	std::generate(testers.begin(), testers.end(),[] () { return (((static_cast <float> (rand()) / static_cast <float> (RAND_MAX/2))-100)); });
	Rationnels<int> ratio;
	for(int i = 1; i<vectorSize; i++){
		ratio = Rationnels<int>(testers[i]);
		ASSERT_NEAR(floor(testers[i]), (ratio.whole()),1);
	}
}

TEST (floatProductTest, floatProductTesting){

	int vectorSize = 100;
	std::vector<float> testers(vectorSize);
	std::generate(testers.begin(), testers.end(),[] () { return (((static_cast <float> (rand()) / static_cast <float> (RAND_MAX/2))-100)); });
	std::vector<float> testers2(vectorSize);
	std::generate(testers2.begin(), testers2.end(),[] () { return (((static_cast <float> (rand()) / static_cast <float> (RAND_MAX/2))-100)); });
	Rationnels<long long> ratio;

	for(int i = 1; i<vectorSize; i++){
		ratio = Rationnels<long long>(testers[i]);
		ratio = ratio *testers2[i];
		ASSERT_NEAR(testers[i]*testers2[i], (float) ratio.numerator/ratio.denominator,0.1);
	}
}

TEST (floatDivideTest, floatDivideTesting){

	int vectorSize = 100;
	std::vector<float> testers(vectorSize);
	std::generate(testers.begin(), testers.end(),[] () { return (((static_cast <float> (rand()) / static_cast <float> (RAND_MAX/2))-100)); });
	std::vector<float> testers2(vectorSize);
	std::generate(testers2.begin(), testers2.end(),[] () { return (((static_cast <float> (rand()) / static_cast <float> (RAND_MAX/2))-100)); });
	Rationnels<long long> ratio;

	for(int i = 1; i<vectorSize; i++){
		ratio = Rationnels<long long>(testers[i]);
		ratio = ratio /testers2[i];
		ASSERT_NEAR(testers[i]/testers2[i], (float) ratio.numerator/ratio.denominator,0.1);
	}
}

TEST (squareRoot, squareRootTest){

	int vectorSize = 100;
	std::vector<float> testers(vectorSize);
	std::generate(testers.begin(), testers.end(),[] () { return (((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)))); });
	Rationnels<long long> ratio;

	for(int i = 1; i<vectorSize; i++){
		ratio = Rationnels<long long>(testers[i]);
		ratio.squareRoot();
		ASSERT_NEAR(sqrt(testers[i]), (float) ratio.numerator/ratio.denominator,1);
	}
}

TEST (power, powerTest){

	int vectorSize = 100;
	std::vector<float> testers(vectorSize);
	std::generate(testers.begin(), testers.end(),[] () { return (((static_cast <float> (rand()) / static_cast <float> (RAND_MAX/20))-10)); });
	Rationnels<long long> ratio;

	for(int i = 1; i<vectorSize; i++){
		ratio = Rationnels<long long>(testers[i]);
		ratio = ratio.power(2);
		ASSERT_NEAR(pow(testers[i],2),  ratio.numerator/(double)ratio.denominator,1);
	}
}

TEST (boolean, booleanTest){

	int vectorSize = 100;
	std::vector<float> testers(vectorSize);
	std::generate(testers.begin(), testers.end(),[] () { return (((static_cast <float> (rand()) / static_cast <float> (RAND_MAX/20))-100)); });
	std::vector<float> testers2(vectorSize);
	std::generate(testers2.begin(), testers2.end(),[] () { return (((static_cast <float> (rand()) / static_cast <float> (RAND_MAX/20))-100)); });
	Rationnels<int> ratio;
	Rationnels<int> ratio2;

	for(int i = 1; i<vectorSize; i++){
		ratio = Rationnels<int>(testers[i]);
		ratio2 = Rationnels<int>(testers2[i]);
		ASSERT_TRUE((testers[i] >= testers2[i] && ratio >= ratio2 ) || (!(testers[i] >= testers2[i] && ratio >= ratio2 )));
		ASSERT_TRUE((testers[i] == testers2[i] && ratio == ratio2 ) || (!(testers[i] == testers2[i] && ratio == ratio2 )));
		ASSERT_TRUE((testers[i] <= testers2[i] && ratio <= ratio2 ) || (!(testers[i] <= testers2[i] && ratio <= ratio2 )));
		ASSERT_TRUE((testers[i] > testers2[i] && ratio > ratio2 ) || (!(testers[i] > testers2[i] && ratio > ratio2 )));
		ASSERT_TRUE((testers[i] < testers2[i] && ratio < ratio2 ) || (!(testers[i] < testers2[i] && ratio < ratio2 )));
	}
}