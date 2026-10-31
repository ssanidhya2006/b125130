#include <iostream>
using namespace std;

class SecurityScanner
{
public:
    virtual void scan(int threats)
    {
        cout << "Scanning..." << endl;
    }
};

class BasicScanner : public SecurityScanner
{
public:
    void scan(int threats)
    {
        cout << "Threats Detected: " << threats << endl;
    }
};

class AdvancedScanner : public SecurityScanner
{
public:
    void scan(int threats)
    {
        int removed = threats * 90 / 100;
        int remaining = threats - removed;

        cout << "Threats Detected: " << threats << endl;
        cout << "Threats Removed: " << removed << endl;
        cout << "Threats Remaining: " << remaining << endl;
    }
};

int main()
{
    BasicScanner b;
    AdvancedScanner a;

    cout << "Basic Scanner:" << endl;
    b.scan(100);

    cout << "\nAdvanced Scanner:" << endl;
    a.scan(100);

    return 0;
}