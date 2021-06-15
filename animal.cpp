class IAnimal {
    static int count;
    int m_id;
    int m_type;
    int m_gender;

    int m_age;
    int m_maturity;
    int m_maxAge;

    int m_gestation;
    int m_newBornPerGestation;
    int m_endMaturity;
    int m_spawnKill;


    int m_nutrition;
    double m_foodPerDay;
    int m_daysBeforeHunger;

    int m_starving = 0;
    int m_habitat = -1;

    int m_visitorsPerHighMonth;
    int m_visitorsPerLowMonth;

public:
    IAnimal(int type=-1, int gender=MALE, int nutrition=CARNIVOROUS,int maturity=0, int gestation=0, int newBornPerGestation =0, int endMaturity=0, double foodPerDay=0, int daysBeforeHunger = 0, int spawnkill = 0, int maxAge = 0, int age=0, double visitorsPerHighMonth = 0, double visitorsPerLowMonth = 0);
    virtual ~IAnimal();

    // Getters
    int ID();
    int type();
    int gender();
    int age();
    int maturity();
    int maxAge();
    int gestation();
    int newBornPerGestation();
    int spawnKill();
    int nutrition();
    double foodPerDay();
    int daysBeforeHunger();
    int habitat();
    int starving();
    double visitorsPerHighMonth();
    double visitorsPerLowMonth();
    // Setters
    int ID(int val);
    int gender(int val);
    int age(int val);
    int maturity(int val);
    int maxAge(int val);
    int gestation(int val);
    int newBornPerGestation(int val);
    int spawnKill(int val);
    int nutrition(int val);
    double foodPerDay(double val);
    int daysBeforeHunger(int val);
    int habitat(int val);
    int starving(int val);
    double visitorsPerHighMonth(double val);
    double visitorsPerLowMonth(double val);
    // Methods
    int incrementAge(int nbr=1);
    int incrementStarving(int nbr=1);
    virtual string toString();
};



#endif /* IAnimal_hpp */