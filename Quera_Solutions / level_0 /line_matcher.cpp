/*
 * Project: Line Matcher
 * Author: Saeid Rostami
 */

#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Point
{
    int x, y;
};

class Player
{
private:
    Point position;
    string role;

public:
    Player(string r, int x, int y) : role(r), position({x, y}) {}

    Point getPosition() const { return position; }

    bool isAtSameLocation(const Player &other) const
    {
        return position.x == other.getPosition().x && position.y == other.getPosition().y;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x1, y1, x2, y2;
    if (!(cin >> x1 >> y1 >> x2 >> y2))
        return 0;

    Player player1("player1", x1, y1);
    Player player2("player2", x2, y2);

    Point p1 = player1.getPosition();
    Point p2 = player2.getPosition();

    if (player1.isAtSameLocation(player2))
    {
        cout << "Vertical" << endl;
        cout << "Horizontal" << endl;
    }
    else if (p1.x == p2.x)
    {
        cout << "Vertical" << endl;
    }
    else if (p1.y == p2.y)
    {
        cout << "Horizontal" << endl;
    }
    else
    {
        cout << "Try again" << endl;
    }

    return 0;
}
