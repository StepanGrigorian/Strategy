#include "Entities.h"
#include <iostream>

Human::Human(IWalkable* walk, ISwimable* swim, IFlyable* fly)
{
	walkStrategy = walk;
	SetSwimStrategy(swim);
	SetFlyStrategy(fly);
}

void Human::SetWalkStrategy(IWalkable* walk)
{
	if (walkStrategy != nullptr)
		delete walkStrategy;
	walkStrategy = walk;
}

void Human::SetSwimStrategy(ISwimable* swim)
{
	if (swimStrategy != nullptr)
		delete swimStrategy;
	swimStrategy = swim;
}

void Human::SetFlyStrategy(IFlyable* fly)
{
	if (flyStrategy != nullptr)
		delete flyStrategy;
	flyStrategy = fly;
}

IWalkable* Human::GetWalkStrategy()
{
	return walkStrategy;
}

ISwimable* Human::GetSwimStrategy()
{
	return swimStrategy;
}

IFlyable* Human::GetFlyStrategy()
{
	return flyStrategy;
}

Turtle::Turtle(IWalkable* walk, ISwimable* Swim)
{
	SetWalkStrategy(walk);
	SetSwimStrategy(Swim);
}

void Turtle::SetWalkStrategy(IWalkable* walk)
{
	if (walkStrategy != nullptr)
		delete walkStrategy;
	walkStrategy = walk;
}

void Turtle::SetSwimStrategy(ISwimable* Swim)
{
	if (swimStrategy != nullptr)
		delete walkStrategy;
	swimStrategy = Swim;
}

IWalkable* Turtle::GetWalkStrategy()
{
	return walkStrategy;
}

ISwimable* Turtle::GetSwimStrategy()
{
	return swimStrategy;
}

Duck::Duck(IWalkable* walk, ISwimable* Swim, IFlyable* fly)
{
	SetWalkStrategy(walk);
	SetSwimStrategy(Swim);
	SetFlyStrategy(fly);
}

void Duck::SetWalkStrategy(IWalkable* walk)
{
	if (walkStrategy != nullptr)
		delete walkStrategy;
	walkStrategy = walk;
}

void Duck::SetSwimStrategy(ISwimable* Swim)
{
	if (swimStrategy != nullptr)
		delete walkStrategy;
	swimStrategy = Swim;
}

void Duck::SetFlyStrategy(IFlyable* fly)
{
	if (flyStrategy != nullptr)
		delete flyStrategy;
	flyStrategy = fly;
}

IWalkable* Duck::GetWalkStrategy()
{
	return walkStrategy;
}

ISwimable* Duck::GetSwimStrategy()
{
	return swimStrategy;
}

IFlyable* Duck::GetFlyStrategy()
{
	return flyStrategy;
}