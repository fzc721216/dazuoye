//
// Created by 86150 on 2023/4/25/0025.
//
#include "BlueHeadQuarter.h"
BlueHeadQuarter::BlueHeadQuarter(int M, const map<string, int>& lifes):meta_life(M),end(false), index(0), count(1), time(0) ,lifes(lifes){
    arms = {"lion", "dragon", "ninja","iceman", "wolf"};
    e_to_s = {{DRAGON,"dragon"},
              {LION, "lion"},
              {NINJA, "ninja"},
              {WOLF, "wolf"},
              {ICEMAN, "iceman"}};
    s_to_e = {{"dragon", DRAGON,},
              {"lion", LION},
              {"ninja", NINJA},
              {"wolf", WOLF},
              {"iceman", ICEMAN}};
}

bool BlueHeadQuarter::next(int min) {
    if(end) return false;
    if(meta_life >= min) {
        while(true){
            string s = arms[index];
            int now_life = lifes.at(s);
            if(meta_life >= now_life){
                nums[s]++;
                string _arm = arms[index];
                printf("%03d ", time);
                time = (time + 1) % 24;
                cout << "blue " << s << " " << count << " born with strength " << now_life
                     << "," << nums[s] << " " << s << " in blue headquarter" << endl;
                meta_life -= now_life;
                count++;
                index = (index + 1) % 5;
                break;
            }else{
                index = (index + 1) % 5;
            }
        }
        return true;
    }else{
        end = true;
        printf("%03d ", time);
        time = (time + 1) % 24;
        cout << "blue headquarter stops making warriors" << endl;
        return false;
    }
}
