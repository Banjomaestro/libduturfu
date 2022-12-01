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
		std::cout << ratio;
		const long gcd = std::__algo_gcd(testers[i],testers[vectorSize-i]);
		ASSERT_EQ (testers[i]/gcd,ratio.numerator);
		ASSERT_EQ (testers[vectorSize-i]/gcd,ratio.denominator);
	}
}
/*
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
TEST (RationnelsConstructor, floatConstructor) { 
	Rationnels ratio = Rationnels(0.3);
    Rationnels ratio2 = Rationnels(0.5);

	ASSERT_NEAR (0.3, ((float) ratio.numerator/ratio.denominator),0.1);
	//ASSERT_EQ (0.5,(ratio2.numerator/ratio2.denominator));
	
}


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