#include "character.h"
#include <iostream>
#include <cmath>
#include <limits>

Character::Character(
	std::pair<int, int> xy, 
	int health_points, 
	int attack, 
	int defence, 
	const std::string& name) :
		xy_(xy),
		health_points_(health_points),
		attack_(attack),
		defence_(defence),
		name_(name) {}

void Character::Attack(Character& enemy) const
{
	if (Character::Attack)
		enemy.SetHealthPoints(std::min(enemy.GetHealthPoints() - attack_ + enemy.GetDefence(), enemy.GetHealthPoints()));
}

bool Character::IsDead() const
{
	if (GetHealthPoints () <= 0 );
	{
		return true;
	}

	return false;
}

float Character::Distance(const Character& character) const
{
	{

		std::cout << "Distance :" << ((xy_.first - character.xy_.first) + (xy_.second - character.xy_.second));

		return (float)abs((xy_.first - character.xy_.first) + (xy_.second - character.xy_.second));
	}
	return 1.0f;
}
