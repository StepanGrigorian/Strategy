#pragma once
#include "Interfaces.h"

class Human
{
private:
	IWalkable* walkStrategy;
	ISwimable* swimStrategy;
	IFlyable* flyStrategy;
public:
	Human(IWalkable* walk, ISwimable* swim, IFlyable* fly);
	void SetWalkStrategy(IWalkable* walk);
	void SetSwimStrategy(ISwimable* swim);
	void SetFlyStrategy(IFlyable* fly);
	IWalkable* GetWalkStrategy();
	ISwimable* GetSwimStrategy();
	IFlyable* GetFlyStrategy();
};

class Turtle
{
private:
	IWalkable* walkStrategy;
	ISwimable* swimStrategy;
public:
	Turtle(IWalkable* walk, ISwimable* swim);
	void SetWalkStrategy(IWalkable* walk);
	void SetSwimStrategy(ISwimable* Swim);
	IWalkable* GetWalkStrategy();
	ISwimable* GetSwimStrategy();
};
class Duck
{
private:
	IWalkable* walkStrategy;
	ISwimable* swimStrategy;
	IFlyable* flyStrategy;
public:
	Duck(IWalkable* walk, ISwimable* swim, IFlyable* fly);
	void SetWalkStrategy(IWalkable* walk);
	void SetSwimStrategy(ISwimable* Swim);
	void SetFlyStrategy(IFlyable* fly);
	IWalkable* GetWalkStrategy();
	ISwimable* GetSwimStrategy();
	IFlyable* GetFlyStrategy();
};