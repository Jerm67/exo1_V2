#pragma once
#include <iostream>

class CVect2D {

	//Encapsulation
private:

	float m_flt_x = 0;
	float m_flt_y = 0;




protected:

public:

	//Constructeur par défaut 
	//CVect2D();

	//Constructeur avec paramètres
	CVect2D(float flt_x = 1, float flt_y = 2);

	//constructeur de copie
	CVect2D(const CVect2D& p);

	//Destructeur
	~CVect2D();

	//Accesseurs
	float getX()const;
	float getY()const;

	//Mutateurs
	void setX(float flt_x = 4);
	void setY(float flt_y = 6);

	//Fonction usuelles
	void addition();
	void soustraction();
	void multiplication();
	void division();


	//Fonction amie
	friend bool coincide2D(const CVect2D& p, const CVect2D& m);

	//Fonction qui affiche
	void affiche()const;

	//surcharges opérateur

	//surcharges avec l'opérateur +
	CVect2D operator +(CVect2D& p)const;

	//surcharges avec l'opérateur -
	CVect2D operator -(CVect2D& p)const;

	//Surcharges avec l'opérateur * 
	CVect2D operator *(CVect2D& p)const;

	//Srucharges avec l'opérateur / 
	//CVect2D operator /(CVect2D& p)const;


};


