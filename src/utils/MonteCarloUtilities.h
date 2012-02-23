/****************************************************************************
|*  MonteCarloUtilities.h
|*
|*  Utilities for monte-carlo rendering methods
|*
|*  Mario Deuss, mario.deuss@epfl.ch
\***********************************************************/

#include <utils/Vector2.h>
#include <utils/Vector3.h>

#define _USE_MATH_DEFINES
#include <math.h>

#include <algorithm>

class MonteCarloUtilities{
public:

// Returns a pseudo-random variable between [0,1]
static double mcRand()
{
	double r1=static_cast<double>(rand())/(static_cast<double>(RAND_MAX));
	return r1;
}

// Uniformly sample a hemisphere spanned by zenith
static Vector3 uniformSampleHemisphere( const Vector3& zenith)
{
	Vector3 sample(1.0, 0.0, 0.0);
	return sample;
}

// Sample a hemisphere spanned by zenith with a cosine pdf
static Vector3 cosineWeightedSampleHemisphere(const Vector3& zenith)
{
	Vector3 dirSample(1.0, 0.0, 0.0);
	return dirSample;
}



private:
//A private constructor to avoid that anybody creates instances of this class. All Functions are static.
MonteCarloUtilities(){};
};