/*
Problem Titla: ACM ICPC Team
Problem Link : https://www.hackerrank.com/challenges/acm-icpc-team
Author       : Kaushik Sarker Setu
Language     : C++
Date         : 20.4.17
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    int m;
    int j;
    cin >> n >> m;
    vector<string> topic(n);
    for(int topic_i = 0;topic_i < n;topic_i++){
       cin >> topic[topic_i];
    }
    int maxTopic = 0;
    int maxTeam = 0;
    int total = 0;
    int i = 0;
    while(i<n-1){
        for(int j=i+1;j<n;j++){
           total = 0;
           for(int k=0;k<m;k++){
             if(topic[i][k]=='1' or topic[j][k]=='1'){
                total++;
             }
           }
           if(maxTopic<total){
            maxTopic = total;
            maxTeam=1;
           }else if(maxTopic==total){
            maxTeam++;
           }
        }
        i++;
    }
    cout<<maxTopic<<endl;
    cout<<maxTeam<<endl;
    return 0;
}

