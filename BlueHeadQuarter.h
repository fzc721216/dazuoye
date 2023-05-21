//
// Created by 86150 on 2023/4/25/0025.
//
#include <bits/stdc++.h>
#include "Arms.h"
using namespace std;
#ifndef WORK_BLUEHEADQUARTER_H
#define WORK_BLUEHEADQUARTER_H


class BlueHeadQuarter {
public:
    map<string, int> nums;
    map<Arms, string> e_to_s;
    map<string , Arms> s_to_e;
    BlueHeadQuarter(int M, const map<string, int>& lifes);
    bool next(int max);
private:
    vector<string> arms;
    const map<string, int>& lifes;
    bool end;
    int index;      //目前到哪了
    int time;       //几点了
    int meta_life;  //还剩多少生命元
    int count;      //产生了多少士兵
};


#endif //WORK_BLUEHEADQUARTER_H
