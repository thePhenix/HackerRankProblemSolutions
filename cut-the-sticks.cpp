/*
Problem Titla: ACM ICPC Team
Problem Link : https://www.hackerrank.com/challenges/cut-the-sticks
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
    cin >> n;
    vector<int> arr(n);
    int mini = 2000;
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
       if(arr[arr_i]<mini)
         mini = arr[arr_i];
    }

    int left = n;
    int cut = 0;
    int temp = 20000;
    while(left){
      cut = 0;
      temp = 20000;
      for(int i=0;i<n;i++){
         if(arr[i]>0){
            arr[i] -= mini;
            cut++;
            if(arr[i]<=0){
               left--;
            }else if(arr[i]<temp){
               temp = arr[i];
            }
         }
      }
      mini = temp;
      cout<<cut<<endl;
    }
    return 0;
}

