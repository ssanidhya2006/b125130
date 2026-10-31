#include <iostream>
#include <cmath>
using namespace std;

class MatchFormat
{
public:
    virtual void calculateTarget(int firstInningsScore)
    {
        cout << "Calculating Target" << endl;
    }
};

class T20Match : public MatchFormat
{
public:
    void calculateTarget(int firstInningsScore)
    {
        int margin = ceil(firstInningsScore * 0.01);

        int target = firstInningsScore + margin;

        cout << "T20 Target Score: " << target << endl;
    }
};

class ODIMatch : public MatchFormat
{
public:
    void calculateTarget(int firstInningsScore)
    {
        int margin = ceil(firstInningsScore * 0.02);

        int target = firstInningsScore + margin;

        cout << "ODI Target Score: " << target << endl;
    }
};

int main()
{
    T20Match t;
    ODIMatch o;

    t.calculateTarget(200);
    o.calculateTarget(200);

    return 0;
}