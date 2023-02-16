#pragma once
#include"settings.h"
#include <iostream>
#include <ctime>

const float WINDOW_WIDTH = 600;
const float WINDOW_HEIGHT = 1000;
int FPS = 60;

const std::string GRASS_FILE_NAME{ "grass.jpg" };
const sf::Vector2f GRASS_START_POS{ 0.f, 0.f };
const std::string GRASS_FILE_NAME_1{ "grass.jpg" };
const sf::Vector2f GRASS_START_POS_1{ 0.f, -1000.f };
const std::string ROAD_FILE_NAME{ "road.png" };
const sf::Vector2f ROAD_START_POS{ 100.f, 0.f };
const sf::Vector2f ROAD_START_POS_1{ 100.f, -1000.f };
const std::string ROAD_FILE_NAME_1{ "road.png" };
const sf::Vector2f CAR_START_POS{ 300.f, WINDOW_HEIGHT - 250.f };
const std::string CAR_FILE_NAME{ "car.png" };
const sf::Vector2f ENEMY_START_POS{ 300.f, WINDOW_HEIGHT + 250.f };
const std::string ENEMY_FILE_NAME{ "bochka.png" };

const std::string Vzruv1{"v1.png" };
const std::string Vzruv2{"v2.png" };
const std::string Vzruv3{"v3.png" };
const std::string Vzruv4{"v4.png" };
const std::string Vzruv5{"v5.png" };
const std::string Vzruv6{"v6.png" };
const std::string Vzruv7{"v7.png" };

float ROADOBJ_SPEED = 5.f;
const float CAR_SPEED = 7.f;
