#ifndef AUTOMATE_H_INCLUDED
#define AUTOMATE_H_INCLUDED

class automate1
{
    public:
	automate1(int taille, int regle);
	void affichage();
	void iterer();

    private:
	unsigned int* m_automate[2];
	bool m_numTableau;
	unsigned int m_taille;
	unsigned int m_regle;
};

#endif
