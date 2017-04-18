/*
Title : Library Fine
Author : Kaushik Sarker Setu
Problem Link : https://www.hackerrank.com/challenges/library-fine
Language : c++
Date : 18.4.17
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int yearLate = 0;
int dayLate = 0;
int monthLate = 0;

int calculateFine(){
    if(yearLate){
        return 10000;
    }
    if(monthLate){
        return 500*monthLate;
    }
    if(dayLate){
        return 15*dayLate;
    }
    return 0;
}

int main(){
    int d1;
    int m1;
    int y1;
    cin >> d1 >> m1 >> y1;
    int d2;
    int m2;
    int y2;
    cin >> d2 >> m2 >> y2;
    
    if(y1>y2){
        yearLate = y1-y2;
    }
    if(m1>m2 and y1==y2){
        monthLate = m1-m2;
    }
    if(d1>d2 and m1==m2 and y2==y1){
        dayLate = d1-d2;
    }
    int fine = calculateFine();
    cout<<fine<<endl;
    return 0;
}

