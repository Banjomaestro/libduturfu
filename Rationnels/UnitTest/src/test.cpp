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
	int vectorSize = 10;
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

	std::vector<double> testers = {12,4545.6,545454.67,343432.6,1.545674,3.567897654,5678.7654322,4.566778,-56565.76768,-0.6565657,-678.0657575, 168.0854};
	Rationnels ratio;

	for(int i = 0; i<testers.size(); i++){
		ratio = Rationnels(testers[i]);

		ASSERT_NEAR (testers[i], ((float) ratio.numerator/ratio.denominator),0.9);
	}
	
}

TEST (add, addTest){

	std::vector<double> testers = {12,4545.6,545454.67,343432.6,1.545674,3.567897654,5678.7654322,4.566778,-56565.76768,-0.6565657,-678.0657575, 168.0854};
	Rationnels ratio;


	for(int i = 0; i<testers.size(); i++){
		ratio = Rationnels(testers[i])+Rationnels(testers[testers.size()-i]);
		float val = testers[i]+testers[testers.size()-i];
		std::cout<<"passed "<<std::endl;
		std::cout<<Rationnels(testers[i])<<std::endl<<Rationnels(testers[testers.size()-i])<<std::endl;
		std::cout<<testers[i]<<std::endl<<testers[testers.size()-i]<<std::endl;

		ASSERT_NEAR (val, ((float) ratio.numerator/ratio.denominator),1);
	}
}


TEST (sub, subTest){

	double vectorSize = 50;
	std::vector<double> testers(vectorSize);

	std::generate(testers.begin(), testers.end(),[n = 1] () mutable { return (static_cast <float> (rand()) / static_cast <float> (RAND_MAX))*100; });
	Rationnels ratio;


	for(int i = 0; i<vectorSize; i++){
		ratio = Rationnels(testers[i])-Rationnels(testers[vectorSize-i]);
		float val = testers[i]-testers[vectorSize-i];

		ASSERT_NEAR (val, ((float) ratio.numerator/ratio.denominator),0.001);
	}
}

TEST (multiply, multiplyTest){

	double vectorSize = 50;
	std::vector<double> testers(vectorSize);

	std::generate(testers.begin(), testers.end(),[n = 1] () mutable { return (static_cast <float> (rand()) / static_cast <float> (RAND_MAX))*100; });
	Rationnels ratio;


	for(int i = 0; i<vectorSize; i++){
		ratio = Rationnels(testers[i])*Rationnels(testers[vectorSize-i]);
		float val = testers[i]*testers[vectorSize-i];

		ASSERT_NEAR (val, ((float) ratio.numerator/ratio.denominator),0.001);
	}
}

TEST (divide, divideTest){

	double vectorSize = 50;
	std::vector<double> testers(vectorSize);

	std::generate(testers.begin(), testers.end(),[n = 1] () mutable { return (static_cast <float> (rand()) / static_cast <float> (RAND_MAX))*100; });
	Rationnels ratio;


	for(int i = 0; i<vectorSize; i++){
		ratio = Rationnels(testers[i])/Rationnels(testers[vectorSize-i]);
		float val = testers[i]/testers[vectorSize-i];

		ASSERT_NEAR (val, ((float) ratio.numerator/ratio.denominator),0.001);
	}
}




TEST (reverse, reverseTest){

	int vectorSize = 50;
	std::vector<int> testers(vectorSize);
	std::generate(testers.begin(), testers.end(),[n = 1] () mutable { return n++; });
	Rationnels ratio;

	for(int i = 0; i<vectorSize; i++){
		ratio = Rationnels(testers[i],testers[vectorSize-i]);
		ratio.reverse();
		ASSERT_EQ (testers[i],ratio.denominator);
		ASSERT_EQ (testers[vectorSize-i],ratio.numerator);
	}
}

/*
TEST (add, addTest){

	double vectorSize = 50;
	std::vector<double> testers(vectorSize);

	std::generate(testers.begin(), testers.end(),[n = 1] () mutable { return (static_cast <float> (rand()) / static_cast <float> (RAND_MAX))*100; });
	Rationnels ratio;


	for(int i = 0; i<vectorSize; i++){
		ratio = Rationnels(testers[i])+Rationnels(testers[vectorSize-i]);
		float val = testers[i]+testers[vectorSize-i];

		ASSERT_NEAR (val, ((float) ratio.numerator/ratio.denominator),0.001);
	}
}

/*
TEST (sub, subTest){

	double vectorSize = 50;
	std::vector<double> testers(vectorSize);

	std::generate(testers.begin(), testers.end(),[n = 1] () mutable { return (static_cast <float> (rand()) / static_cast <float> (RAND_MAX))*100; });
	Rationnels ratio;


	for(int i = 0; i<vectorSize; i++){
		ratio = Rationnels(testers[i])-Rationnels(testers[vectorSize-i]);
		float val = testers[i]-testers[vectorSize-i];

		ASSERT_NEAR (val, ((float) ratio.numerator/ratio.denominator),0.001);
	}
}

TEST (multiply, multiplyTest){

	double vectorSize = 50;
	std::vector<double> testers(vectorSize);

	std::generate(testers.begin(), testers.end(),[n = 1] () mutable { return (static_cast <float> (rand()) / static_cast <float> (RAND_MAX))*100; });
	Rationnels ratio;


	for(int i = 0; i<vectorSize; i++){
		ratio = Rationnels(testers[i])*Rationnels(testers[vectorSize-i]);
		float val = testers[i]*testers[vectorSize-i];

		ASSERT_NEAR (val, ((float) ratio.numerator/ratio.denominator),0.001);
	}
}

TEST (divide, divideTest){

	double vectorSize = 50;
	std::vector<double> testers(vectorSize);

	std::generate(testers.begin(), testers.end(),[n = 1] () mutable { return (static_cast <float> (rand()) / static_cast <float> (RAND_MAX))*100; });
	Rationnels ratio;


	for(int i = 0; i<vectorSize; i++){
		ratio = Rationnels(testers[i])/Rationnels(testers[vectorSize-i]);
		float val = testers[i]/testers[vectorSize-i];

		ASSERT_NEAR (val, ((float) ratio.numerator/ratio.denominator),0.001);
	}
}


v

/*
TEST (VectorDConstructor, copyConstructor) { 
	VectorD vec(10,9.8);
	VectorD vecro (vec);
	for(int i =0; i<vec.size(); i++){
		ASSERT_EQ (vec[i], vecro[i]);
	}
	
}

/////////////////////////////////////////////////////
// arithmetic

TEST (VectorDArithmetic, plus) {

	const size_t maxSize = 1000;  // max size of the tested vectors
	std::mt19937 generator(0);
	std::uniform_int_distribution<int> uniformIntDistribution(1,maxSize);
	std::uniform_real_distribution<double> uniformDistributionValue(-int(maxSize),maxSize);
	auto gen = [&uniformDistributionValue, &generator](){ return uniformDistributionValue(generator);};

	// run many times the same test with different values
	for(int run=0; run<100; ++run){

		// define a vector dimension
		const size_t dim = uniformIntDistribution(generator);

		// generate random data
		std::vector<double> data1(dim), data2(dim);
		std::generate(data1.begin(), data1.end(), gen);
		std::generate(data2.begin(), data2.end(), gen);

		// build the corresponding VectorD
		VectorD vec1(dim), vec2(dim), vec3(dim);
		for(size_t i=0; i<dim; ++i){
			vec1[i] = data1[i];
			vec2[i] = data2[i];
		}

		vec3 = vec1 + vec2;
		ASSERT_EQ (vec3.size(), dim);

		for(size_t i=0; i<dim; ++i){
	    	ASSERT_DOUBLE_EQ (vec3[i], data1[i] + data2[i]);    // EXPECT_DOUBLE_EQ would be fine too
		}
	}
}

TEST (VectorDArithmetic, minus) {

	const size_t maxSize = 1000;  // max size of the tested vectors
	std::mt19937 generator(0);
	std::uniform_int_distribution<int> uniformIntDistribution(1,maxSize);
	std::uniform_real_distribution<double> uniformDistributionValue(-int(maxSize),maxSize);
	auto gen = [&uniformDistributionValue, &generator](){ return uniformDistributionValue(generator);};

	// run many times the same test with different values
	for(int run=0; run<100; ++run){

		// define a vector dimension
		const size_t dim = uniformIntDistribution(generator);

		// generate random data
		std::vector<double> data1(dim), data2(dim);
		std::generate(data1.begin(), data1.end(), gen);
		std::generate(data2.begin(), data2.end(), gen);

		// build the corresponding VectorD
		VectorD vec1(dim), vec2(dim), vec3(dim);
		for(size_t i=0; i<dim; ++i){
			vec1[i] = data1[i];
			vec2[i] = data2[i];
		}

		vec3 = vec1 - vec2;
		ASSERT_EQ (vec3.size(), dim);

		for(size_t i=0; i<dim; ++i){
	    	ASSERT_DOUBLE_EQ (vec3[i], data1[i] - data2[i]);  // EXPECT_DOUBLE_EQ would be fine too
		}
	}
}

TEST (VectorDArithmetic, multiply) {

	const size_t maxSize = 1000;  // max size of the tested vectors
	std::mt19937 generator(0);
	std::uniform_int_distribution<int> uniformIntDistribution(1,maxSize);
	std::uniform_real_distribution<double> uniformDistributionValue(-int(maxSize),maxSize);
	auto gen = [&uniformDistributionValue, &generator](){ return uniformDistributionValue(generator);};
	double lul = 0.987564;
	// run many times the same test with different values
	for(int run=0; run<100; ++run){

		// define a vector dimension
		const size_t dim = uniformIntDistribution(generator);

		// generate random data
		std::vector<double> data1(dim), data2(dim);
		std::generate(data1.begin(), data1.end(), gen);
		std::generate(data2.begin(), data2.end(), gen);

		// build the corresponding VectorD
		VectorD vec1(dim), vec2(dim), vec3(dim);
		for(size_t i=0; i<dim; ++i){
			vec1[i] = data1[i];
			vec2[i] = data2[i];
		}

		vec3 = vec1 * lul;
		ASSERT_EQ (vec3.size(), dim);

		for(size_t i=0; i<dim; ++i){
	    	ASSERT_DOUBLE_EQ (vec3[i], data1[i] * lul);  // EXPECT_DOUBLE_EQ would be fine too
		}
	}
}

TEST (VectorDArithmetic, dot) {

	int dotResult = 0;
	int dotExpectedResult = 0;
	const size_t maxSize = 1000;  // max size of the tested vectors
	std::mt19937 generator(0);
	std::uniform_int_distribution<int> uniformIntDistribution(1,maxSize);
	std::uniform_real_distribution<double> uniformDistributionValue(-int(maxSize),maxSize);
	auto gen = [&uniformDistributionValue, &generator](){ return uniformDistributionValue(generator);};

	// run many times the same test with different values
	for(int run=0; run<100; ++run){
		dotExpectedResult = 0;
		// define a vector dimension
		const size_t dim = uniformIntDistribution(generator);

		// generate random data
		std::vector<double> data1(dim), data2(dim);
		std::generate(data1.begin(), data1.end(), gen);
		std::generate(data2.begin(), data2.end(), gen);

		// build the corresponding VectorD
		VectorD vec1(dim), vec2(dim), vec3(dim);
		for(size_t i=0; i<dim; ++i){
			vec1[i] = data1[i];
			vec2[i] = data2[i];
		}


		double res2 =0; 
		for(int i =0; i<vec1.size();i++)
			res2 += vec1[i] * vec2[i];

		ASSERT_DOUBLE_EQ (vec1.dot(vec2), res2);    // EXPECT_DOUBLE_EQ would be fine too

		double res3 =0; 
		for(int i =0; i<vec1.size();i++)
			res3 += vec1[i] * vec2[i];

		ASSERT_DOUBLE_EQ (vec2.dot(vec1), res3);    // EXPECT_DOUBLE_EQ would be fine too

		ASSERT_TRUE(vec1.dot(vec1)>0);

		VectorD temp = vec1-vec2;
		ASSERT_NEAR(vec2.dot(vec1), 0.5*(((vec1.dot(vec1))+(vec2.dot(vec2)))-((temp).dot(temp)) ),0.01);
}

}




/////////////////////////////////////////////////////
// exception

TEST (VectorDException, loadExceptionMessage) {
	const std::string filename = "filename.txt";
	const std::string expectedException = "VectorD::load: error: can not open file: " + filename;

	// check the exception message
    try{
		VectorD vec;
        vec.load(filename);
    }
    catch( const std::exception &e){
        EXPECT_TRUE( std::string(e.what()).find(expectedException) == 0);
    }

	    try{
		VectorD vecOne(5);
		VectorD vecTwo(15);
        vecOne + vecTwo;
    }
    catch( const std::length_error &e){
        EXPECT_TRUE(std::string(e.what()).find("VectorD::operator+: operand with incompatible size : ") == 0);
    }

	
}


TEST (VectorDException, loadExceptionType) {

	// check exception type
	VectorD vec;
	EXPECT_THROW(vec.load("filename.txt"), std::ios_base::failure);
}



int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}


*/