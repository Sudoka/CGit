#include "Light.h"

Light::Light()
{
	color = vec3(0.0f, 1.0f, 0.0f);
	position = vec3(2.0f, 2.0f, 10.0f);
	ambientColor = vec3(0.2f, 0.2f, 0.2f);
}

Light::~Light()
{

}

void Light::setColor(vec3 color)
{
	this->color = color;
}

void Light::setPosition(vec3 position)
{
	this->position = position;
}