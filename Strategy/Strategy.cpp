#include <iostream>
#include "Entities.h"

int main()
{
	Human* human = new Human(
		new NoWalkableBehaviour(),
		new NoSwimableBehaviour(),
		new NoFlyableBehaviour()
	);

	Turtle* turtle = new Turtle(
		new NoWalkableBehaviour(),
		new NoSwimableBehaviour()
	);

	Duck* duck = new Duck (
		new NoWalkableBehaviour(),
		new NoSwimableBehaviour(),
		new NoFlyableBehaviour()
	);
	//Duck* duck = new Duck(new SlowWalkableBehaviour());
	//Turtle* turtle = new Turtle(new SlowWalkableBehaviour());

	human->GetSwimStrategy()->Swim();
	human->SetWalkStrategy(new SlowWalkableBehaviour());
	human->SetSwimStrategy(new SwimableableBehaviour());
	human->GetWalkStrategy()->Walk();
}