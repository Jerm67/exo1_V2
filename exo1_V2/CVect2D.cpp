#include "CVect2D.h"
#include <iostream>

using namespace std;

//Constructeur par défaut
/*CVect2D::CVect2D()
{
	this -> m_flt_x = 0.0;
	this-> m_flt_y = 0.0;
}*/

//Constructeur avec paramètre
CVect2D::CVect2D(float flt_x, float flt_y)
{
	this->m_flt_x = flt_x;
	this->m_flt_y = flt_y;

}

//Constructeur de copie
CVect2D::CVect2D(const CVect2D& p)
{
	//J'assigne "p" a mes objet
	this->m_flt_x = p.m_flt_x;
	this->m_flt_y = p.m_flt_y;
}

//Destructeur
CVect2D::~CVect2D()
{
}

//Accesseurs
float CVect2D::getX() const
{
	return m_flt_x;
}

float CVect2D::getY() const
{
	return m_flt_y;
}

//Mutateurs
void CVect2D::setX(float flt_x)
{
	this->m_flt_x = flt_x;
}

void CVect2D::setY(float flt_y)
{
	this->m_flt_y = flt_y;
}

void CVect2D::addition()
{
	this->m_flt_x = m_flt_x + m_flt_y;
	this->m_flt_y = m_flt_y + m_flt_x;
}

void CVect2D::soustraction()
{
	this->m_flt_x = m_flt_x - m_flt_y;
	this->m_flt_y = m_flt_y - m_flt_x;
}

void CVect2D::multiplication()
{
	this->m_flt_x = m_flt_x * m_flt_y;
	this->m_flt_y = m_flt_y * m_flt_x;
}

void CVect2D::division()
{
	//Ici si m_x et m_y sont différent de 0 alors division
	if (m_flt_x != 0 && m_flt_y != 0) {
		this->m_flt_x = m_flt_x / m_flt_y;
		this->m_flt_y = m_flt_y / m_flt_x;
	}
}

//Fonction qui affiche
void CVect2D::affiche() const
{
	cout << "X :" << m_flt_x << endl << "Y :" << m_flt_y << endl;
}


//Surcharges opérateur
// avec l'opérateur +
CVect2D CVect2D::operator+(CVect2D& p) const
{
	CVect2D p_temporaire;
	p_temporaire.m_flt_x = this->m_flt_x + p.m_flt_x;
	p_temporaire.m_flt_y = this->m_flt_y + p.m_flt_y;

	return p_temporaire;
}


//avec l'opérateur -
CVect2D CVect2D::operator-(CVect2D& p) const
{
	CVect2D p_temporaire;
	p_temporaire.m_flt_x = this->m_flt_x - p.m_flt_x;
	p_temporaire.m_flt_y = this->m_flt_y - p.m_flt_y;
	return p_temporaire;
}


//avec l'opérateur *
CVect2D CVect2D::operator*(CVect2D& p) const
{
	CVect2D p_temporaire;
	p_temporaire.m_flt_x = this->m_flt_x * p.m_flt_x;
	p_temporaire.m_flt_y = this->m_flt_y * p.m_flt_y;
	return p_temporaire;
}


//Avec l'opérateur /
/*CVect2D CVect2D::operator/(CVect2D& p) const
{
	CVect2D p_temporaire;
	if ()
	return CVect2D();
}*/




//Fonction amie
bool coincide2D(const CVect2D& p, const CVect2D& m)
{
	return p.m_flt_x == m.m_flt_x && p.m_flt_y == m.m_flt_y;
}
