#include <iostream>
using namespace std;

class Enemy{
	protected:
		float attackPower;
	public:
		virtual void  attack()=0;

};
class Ninja: public Enemy{
	public:
		void attack()
		{cout << "i am a ninja, ninj chop! -" <<endl;}
};

class Monster: public Enemy{
	public:
	    void attack(){}


};
int main()
{
	Ninja n;
	Monster m;
	Enemy *enemy1 = &n;
	Enemy *enemy2 = &m;
	enemy1->attack();
    enemy2->attack();

}
