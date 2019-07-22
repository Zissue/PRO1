#include <iostream>
#include <vector>
using namespace std;

struct Interval {
    int start;
    int end;
};

struct Movie {
    string name;
    Interval inter;
    double score;
};

// Reads n movies from stdin and stores them in vector v
void read_movies(vector<Movie> &v) {
    for (int i = 0 ; i < v.size(); ++i) {
         cin >> v[i].name >> v[i].inter.start >> v[i].inter.end >> v[i].score;
    }
}

// Print movies that are shown in the interval 'time' 
// and have score larger or equal to 'sc'
void print_movies (const vector<Movie>& p, Interval time, double sc) {
    // ADD CODE HERE
    int vsize = p.size();
    for (int i = 0; i < vsize; i++) {
        if (time.start > time.end) {
            if (!(time.end < p[i].inter.start and time.start > p[i].inter.end)
                and p[i].score >= sc) {
                cout << p[i].name << " " << p[i].inter.end - p[i].inter.start;
                cout << endl;
            }
        }
        else if (p[i].inter.start >= time.start and p[i].inter.end <= time.end 
            and p[i].score >= sc) {
            cout << p[i].name << " " << p[i].inter.end - p[i].inter.start;
            cout << endl;
        }
    }
    cout << "---" << endl;
}

int main() {
    // load movies
    int n; 
    cin >> n;
    vector<Movie> v(n);
    read_movies(v);

    // Read and process queries, calling print_movies to produce
    // the required output for each query
    int m;
    cin >> m;
    for (int i = 0; i < m; ++i) {
        // ADD CODE HERE
        double sc;
        Interval inter;
        cin >> inter.start >> inter.end >> sc;
        print_movies(v, inter, sc);
    }
}