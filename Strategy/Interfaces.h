#pragma once

class IWalkable
{
public:
	virtual void Walk() = 0;
};

class NoWalkableBehaviour : public IWalkable
{
	virtual void Walk() override;
};

class SlowWalkableBehaviour : public IWalkable
{
	virtual void Walk() override;
};

class FastWalkableBehaviour : public IWalkable
{
	virtual void Walk() override;
};

// ---------------------------------------------

class IFlyable
{
public:
	virtual void Fly() = 0;
};

class NoFlyableBehaviour : public IFlyable
{
	virtual void Fly() override;
};

class SlowFlyableableBehaviour : public IFlyable
{
	virtual void Fly() override;
};

class FastFlyableableBehaviour : public IFlyable
{
	virtual void Fly() override;
};


// ---------------------------------------------

class ISwimable
{
public:
	virtual void Swim() = 0;
};

class NoSwimableBehaviour : public ISwimable
{
	virtual void Swim() override;
};
class SwimableableBehaviour : public ISwimable
{
	virtual void Swim() override;
};