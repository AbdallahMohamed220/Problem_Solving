/*
 A. Sereja and Dima
 
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output

Sereja and Dima play a game. The rules of the game are very simple. The players have n cards in a row. Each card contains a number, all numbers on the cards are distinct. The players take turns, Sereja moves first. During his turn a player can take one card: either the leftmost card in a row, or the rightmost one. The game ends when there is no more cards. The player who has the maximum sum of numbers on his cards by the end of the game, wins.
Sereja and Dima are being greedy. Each of them chooses the card with the larger number during his move.
Inna is a friend of Sereja and Dima. She knows which strategy the guys are using, so she wants to determine the final score, given the initial state of the game. Help her.

Input
The first line contains integer n (1 ≤ n ≤ 1000) — the number of cards on the table. The second line contains space-separated numbers on the cards from left to right. The numbers on the cards are distinct integers from 1 to 1000.

Output
On a single line, print two integers. The first number is the number of Sereja's points at the end of the game, the second number is the number of Dima's points at the end of the game.


*/

#include <iostream>
#include <list>
#include <string>
using namespace std;
 
 
int main() {
    int size;
    cin>>size;
    int arr[size];
    for(int i =0;i<size;i++){
        cin>>arr[i];
    }
    
    int start =0;
    int end = size -1;
    int r1 =0;
    int r2=0;
    int max=0;
    int play=0;
    
    while(start<=end){
        if(arr[start] >= arr[end]){
            max =arr[start];
            start++;
        }else{
            max = arr[end];
            end--;
        }
        
        if(play %2 ==0){
            r1 += max;
        }else{
            r2 += max;
        }
        play++;
    }
    
    cout<<r1<< " " << r2<<endl;
}