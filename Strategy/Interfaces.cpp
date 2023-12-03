#include "Interfaces.h"
#include <iostream>

void NoWalkableBehaviour::Walk()
{
	std::cout << "Can't walk\n";
}

void SlowWalkableBehaviour::Walk()
{
	std::cout << "Slow walk\n";
}

void FastWalkableBehaviour::Walk()
{
	std::cout << "Fast walk\n";
}

void NoFlyableBehaviour::Fly()
{
	std::cout << "Can't fly\n";
}

void SlowFlyableableBehaviour::Fly()
{
	std::cout << "Slow fly\n";
}

void FastFlyableableBehaviour::Fly()
{
	std::cout << "Fast fly\n";
}

void NoSwimableBehaviour::Swim()
{
	std::cout << "Can't swim\n";
}

void SwimableableBehaviour::Swim()
{
	std::cout << "Normal swim\n";
}