/*! ===========================================================================================================================
  Classe: serialParseurCallo.h                        Fichier de d�claration
  Editor: Lyc�e Marcel Callo
  date:30-09-2018
//============================================================================================================================*/



class serialParseurCallo
{
  private:
  /// Attributs
      String _valString;
      byte _lengthQualif;
      byte _subFrameLenght;

  public:
  /// constructeur
	  serialParseurCallo(byte formatCMD);

  /// Attributs
      String _textQualificateur;
      byte _numeroCommande;
      String _parametre;
      bool _statut[32+128+64];      // 32 pour les commandes simples pour les debugs ou liaison BT pour APPLI
									// 128 pour les commandes avec param�tres ==> stockage dans I2C pour param�tres poele
                                   //  + 64 pour les commandes application ANDROIDE avec param�tres               
      byte _seprateurCMD;
  /// M�thodes

      void recupererQualificateur(bool debug);
      void choixCommande(bool debug);
      void parametre(byte subFrameLenght);
      void printStatut();
      void resetStatut(bool debug);

};
