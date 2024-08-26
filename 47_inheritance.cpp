#include <iostream>

using namespace std;

class Human
{
    private:
        /**
         * The variables declared here can be accessed only by Human class itself
         * all the derived classes can not read these private data
         */

    protected:
        int gender;
        string name;
        float height;

    public:
        Human(int gender, string name, float height) : gender(gender), name(name), height(height) {}
        void sleep()
        {
            cout << "Sleeping..." << endl;
        }
        void eat()
        {
            cout << "Eating..." << endl;
        }
        void introduce()
        {
            cout << "Hello everyone." << endl
            << "My name is " << name << "." << endl
            << "I am a " << ((gender == 0) ? "girl" : "boy")
            << " and am " << height << " centimeters tall." << endl;
        }
};

// This expression will turn all the protected and public members into protected members in the Male class
// class Male : protected Human

// This expression will turn all the protected and public members into private members in the male class
// class Male : private Human

// This expression will remain the same accessibility as the base class (Human)
class Male : public Human
{
    public:
        Male(string name, float height) : Human(1, name, height) {}
};

int main()
{
    Male joey("joey", 172);
    joey.introduce();
    joey.eat();
    joey.sleep();
    return 0;
}