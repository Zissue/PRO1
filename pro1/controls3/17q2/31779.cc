#include <iostream>
#include <vector>
using namespace std;

typedef vector <vector <int> > Room;

// Pre: n, m integers greater than 0
// Post: it returns a valid n*m Room
Room read_room(int n, int m) {
    // YOUR CODE HERE
    Room r(n, vector<int> (m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> r[i][j];
        }
    }
    return r;
}

// Pre: room is a valid Room
// Post: it returns the value of those objects that are not monitored by any of the security cameras in room, no matter the final value of room
int non_monitored_objects(const Room& room) {
    // YOUR CODE HERE
    int sum = 0, n = room.size(), m = room[0].size();
    int auxi = n+1, auxj = m+1;
    for (int i = 0; i < n and i <= auxi; i++) {
        for (int j = 0; j < m and j <= auxj; j++) {
            if (room[i][j] == -1) {
                if (i < auxi) auxi = i;
                if (j < auxj) auxj = j;
            }
            else if (i < auxi and j < auxj) sum += room[i][j];
        }
    }
    return sum;
}

int main() {
    int n, m;
    while (cin >> n >> m) {
        Room room = read_room(n, m);
        cout << non_monitored_objects(room) << endl;
    }
}