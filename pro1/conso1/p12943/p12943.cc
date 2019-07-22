#include <iostream>
using namespace std;

int main () {

    int n;
    cin >> n;

    char c;
    int counta=0, countb=0, countc=0;

    while (cin >> c) {
        //cin >> c;
        if (c=='a') counta++;
        if (c=='b') countb++;
        if (c=='c') countc++;
    }

    char rc;
    int rn=0;

    if ((counta==countb) and (counta==countc)) {
        rc='a';
        rn=counta;
    }
    if ((counta>=countb) and (counta>countc)) {
        if (counta>countb) {
            rc='a';
            rn=counta;
        }
        else {
            rc='a';
            rn=countb;
        }
    }
    if ((countb>=counta) and (countb>countc)) {
        if (countb>counta) {
            rc='b';
            rn=countb;
        }
        else {
            rc='a';
            rn=counta;
        }
    }
    if ((countc>=countb) and (countc>counta)) {
        if (countc>countb) {
            rc='c';
            rn=countc;
        }
        else {
            rc='b';
            rn=countb;
        }
    }
    if ((countc>=counta) and (countc>countb)) {
        if (countc>counta) {
            rc='c';
            rn=countc;
        }
        else {
            rc='a';
            rn=counta;
        }
    }

    cout << "majoria de " << rc << endl;
    cout << rn << " repeticio(ns)" << endl;
}