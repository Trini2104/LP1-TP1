#pragma once

#include <string>
#include <iostream>

using namespace std;
class cAnimal {
private:
	string color;
	string especie;
	float peso;
	float altura;
	bool sano;
public: 
	cAnimal(string _color, string _especie, float _peso, float _altura, bool _sano = true);
	~cAnimal(); 
	string getcolor() {
		return color;
	}
	string getespecie() {
		return especie;
	}
	float getpeso() {
		return peso;
	}
	float getaltura() {
		return altura;
	}
	bool getsano() {
		return sano;
	}
	void setsano(bool _sano) {
		this->sano = _sano;
	}
	void setpeso(float _peso) {
		if (_peso > 0) {
			this->peso = _peso;
		}
		else { this->peso = 0; }
	}

};