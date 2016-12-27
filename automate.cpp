#include "automate.h"

#include <iostream>

automate1::automate1(int taille, int regle) 
    : m_taille(taille), m_regle(regle)
{
    m_numTableau = false;
    m_automate[0] = new unsigned int[taille];
    m_automate[1] = new unsigned int[taille];

    for(int i = 0; i < taille; i++)
    {
	m_automate[0][i] = 0;
	m_automate[1][i] = 0;
    }

    m_automate[0][taille/2] = 1;
}

void automate1::affichage()
{
    const int tab = m_numTableau? 1 : 0;

    for(int i = 0; i < m_taille; i++)
	std::cout << m_automate[tab][i];
    std::cout << std::endl;
}

void automate1::iterer()
{
    const int newtab = !m_numTableau? 1 : 0;
    const int tab = newtab == 1 ? 0: 1;
    m_numTableau = !m_numTableau;

    int mot3bits = 0;
    
    for(int i = 1; i < m_taille -1; i++)
    {
	mot3bits = m_automate[tab][i-1] * 4
		    + m_automate[tab][i] * 2
		    + m_automate[tab][i+1];

	m_automate[newtab][i] = (m_regle & (1 << mot3bits)) != 0 ? 1:0;
    }
}
