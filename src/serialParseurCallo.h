/*! ===========================================================================================================================
  Classe: serialParseurCallo.h                        Fichier de déclaration
  Editor: Lycée Marcel Callo
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
      bool _statut[32];      
               
      byte _seprateurCMD;
  /// Méthodes

      void recupererQualificateur(bool debug);
      void choixCommande(bool debug);
      void parametre(byte subFrameLenght);
      void printStatut();
      void resetStatut(bool debug);

};
