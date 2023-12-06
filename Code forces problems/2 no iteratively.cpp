#include <iostream>

using namespace std;

void towerOfHanoiIterative(int numDisks, char source, char destination, char auxiliary) {
    int totalMoves = (1 << numDisks) - 1;

    for (int move = 1; move <= totalMoves; ++move) {
        int fromPeg = (move & move - 1) % 3;
        int toPeg = ((move | move - 1) + 1) % 3;
        char from = (fromPeg == 0) ? source : (fromPeg == 1) ? auxiliary : destination;
        char to = (toPeg == 0) ? source : (toPeg == 1) ? auxiliary : destination;

        int diskToMove = (move & -move);

        cout << "Move disk " << diskToMove << " from " << from << " to " << to << endl;
    }
}

int main() {
    int numDisks = 3;
    char source = 'A', destination = 'C', auxiliary = 'B';

    towerOfHanoiIterative(numDisks, source, destination, auxiliary);

    return 0;
}

