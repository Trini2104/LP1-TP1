#include "cPersona.h"
using namespace std;
cAnimal::cAnimal(string _color, string _especie, float _peso, float _altura, bool _sano) {
	this->color = _color;
	this->especie = _especie;
	
	if (_altura > 0) { this->altura = _altura; }
	else { this->altura = 0; }
	this->sano = _sano;

}
cAnimal::~cAnimal(){}