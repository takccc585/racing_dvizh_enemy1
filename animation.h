#pragma once
#include <SFML/Graphics.hpp>
#include"settings.h"

struct Animation {
	sf::Texture texture;
	sf::Sprite sprite;
};

void animationInit(Animation& obj, sf::Vector2f pos) {
	obj.sprite.setTexture(obj.texture);
	obj.sprite.setPosition(pos);
}

void animationUpdate(Animation& obj) {
	
}

void roadObjDraw(sf::RenderWindow& window) {
}