/*
Problem Titla: ACM ICPC Team
Problem Link : https://www.hackerrank.com/challenges/sparse-arrays
Category     : Datastructure
Author       : Kaushik Sarker Setu
Language     : C#
Date         : 20.4.17

*/

using System;
using System.Collections.Generic;
using System.IO;
class Solution {
    static void Main(String[] args) {
        Dictionary<string,int> strings = new Dictionary<string,int>();
        int n,q;
        Int32.TryParse(Console.ReadLine(),out n);
        string input;
        for(int i=0;i<n;i++){
            input = Console.ReadLine();
            if(strings.ContainsKey(input)){
                strings[input]++;
            }else{
                strings[input]=1;
            }
        }
        Int32.TryParse(Console.ReadLine(),out q);
        for(int i=0;i<q;i++){
            input = Console.ReadLine();
            if(strings.ContainsKey(input)){
                Console.WriteLine(strings[input]);
            }else{
                Console.WriteLine("0");
            }
        }
        
    }
}
