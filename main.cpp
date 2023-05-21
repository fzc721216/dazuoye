/**
 * @author fzc
 * @build cmake
 */

#include <bits/stdc++.h>
#include "BlueHeadQuarter.h"
#include "RedHeadQuarter.h"
using namespace std;

int healths[5];
int meta_life, cities, loyaldesc, end_time;

void input();

int main() {
    ///玩几次
    int num_loop;cin >> num_loop;
    for(int i = 0; i < num_loop; i++){
        memset(healths, 0, sizeof(healths));
        input();
        int a,b,c,d,e;cin>>a>>b>>c>>d>>e;
        const map<string, int>& lifes = {{"dragon", a},{"ninja", b},{"iceman", c},{"lion",d},{"wolf", e}};
        vector<int> v{a,c,e,d,b};
        int min_health = *min_element(v.begin(),v.end());
        RedHeadQuarter r_head(meta_life, lifes);
        BlueHeadQuarter b_head(meta_life, lifes);
        cout << "Case:" << i << endl;
        while(true){
            bool r1 = r_head.next(min_health);
            bool r2 = b_head.next(min_health);
            if(r1 || r2) continue;
            else break;
        }
    }
    system("pause");
    return 0;
}

void input(){
    cin >> meta_life >> cities >> loyaldesc >> end_time;
}



