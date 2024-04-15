#include <iostream>
using namespace std;
class Gcd {
private:
    int a;
    int b;
public:
    Gcd(int x, int y) {
        a = x;
        b = y;
    }
    int Gcd_find() {
        while (a != b)
        {
            if (a > b)
            {
                a -= b;
            }
            else
            {
                b -= a;
            }
        }
        return a;
    }
};
int main()
{
    int w, z;
    cin >> w >> z;
    Gcd a(w, z);
    cout << a.Gcd_find();
}
