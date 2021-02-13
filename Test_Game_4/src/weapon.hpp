#pragma once

#include<basicChar.hpp>
using namespace std;

class weapon {
    public:
    float spdM;
    float wCooldownM;
    float wCooldownM2;
    float dmg;
    float dmg2;
    float atkD;
    float atkD2;
    float atk2Spd;
    float atk2Rot;
    sf::Texture icon;
    sf::Texture fIcon;
    sf::Texture atkAnims[7];
    sf::Texture atkAnims2[20];
    sf::Vector2f tipPos[7];
    sf::Vector2f tipPos2[20];
    int totalCycles;
    int totalCycles2;
    float atkDist;
    sf::Texture wTexture;
    void apply(basicChar *target);
    weapon(string a, string ic, string fic, string *textures, string *textures2, sf::Vector2f *tPos, sf::Vector2f *tPos2, int n, int n2, float sp, float cM, float cM2, float dm, float dm2, float aD, float aD2, float a2S, float a2R, float atkDi);
	weapon();
};