#include<bits/stdc++.h>
using namespace std;


 long long dividePlayers(vector<int>& skill)
    {
        int totalScore = accumulate(skill.begin() , skill.end() , 0);
        int len = skill.size();

        int team = len / 2 ;
        
        if( totalScore % team != 0 ) return -1;

        int teamScore = totalScore / team ;

        map< int , int > mp;
        long chemistryScore = 0;

        for( auto el : skill ){
            mp[el]++;
        }

        for( auto el : skill) {
            int partnerSkill = teamScore - el ;

            if (mp.find(partnerSkill) == mp.end()) {
                return -1;
            }

            if( mp[partnerSkill] == 0){
                return -1;
            }

            chemistryScore += long(el) * long(partnerSkill);
            mp[partnerSkill]--;
        }

        return chemistryScore/2;
    }


int main()
{

    vector<int> arr = {1,1,1,2,3,3,3,7,7,8,8,8,9,9};

    cout << dividePlayers(arr) << endl;


}