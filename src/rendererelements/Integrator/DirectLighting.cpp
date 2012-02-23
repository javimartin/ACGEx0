/****************************************************************************
|*  DirectLighting.cpp
|*
|*  A integrator only considering direct lighting
|*
\***********************************************************/

#include "DirectLighting.h"

#include <utils/Vector4.h>
#include <Scene.h>

#define _USE_MATH_DEFINES
#include <math.h>

#include <utils/MonteCarloUtilities.h>
#include <sceneelements/geometry/MeshTriangle.h>

DirectLighting::DirectLighting(){}

Vector4 DirectLighting::integrate( const Ray& ray )
{
	return integrateConstant(ray);
}

Vector4 DirectLighting::integrateConstant(const Ray& ray) {
	Vector4 color(0.5, 0.5, 0.5, 1.0);
	return color;
}
Vector4 DirectLighting::integrateSamplingBRDF( const Ray& ray )
{
// Exercise 1.6
	Vector4 color (0.5, 0.5, 0.5, 1.0);
	return color;
}

void DirectLighting::setScene( Scene* scene )
{
	m_scene  = scene;
}
