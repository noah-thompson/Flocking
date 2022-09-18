#include "CohesionRule.h"
#include "../gameobjects/Boid.h"

Vector2 CohesionRule::computeForce(const std::vector<Boid*>& neighborhood, Boid* boid) {
    Vector2 cohesionForce;

    // todo: add your code here to make a force towards the center of mass
    // hint: iterate over the neighborhood
    if (neighborhood.size() != 0)
    {
        for (auto bird : neighborhood)
        {
            cohesionForce += bird->getPosition() - boid->getPosition();
        }
    }
    cohesionForce = Vector2::normalized(cohesionForce);
    return cohesionForce;
}