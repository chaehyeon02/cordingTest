#include <iostream>
using namespace std;

int main() {
    int j_money, j_stock = 0;
    int s_money, s_stock = 0;
    int price1 = 0, price2 = 0, up = 0, down = 0;
    cin >> j_money;
    s_money = j_money;

    for (int i = 0; i < 14; i++) {
        price1 = price2;
        cin >> price2;
        if(i == 0) price1 = price2;

        //준현
        if (j_money >= price2) {
            j_stock = j_money / price2;
            j_money -= price2 * j_stock;
        }

        //성민
        if (price1 < price2) {
            up++;
            down = 0;
        }
        else if(price1 > price2) {
            up = 0;
            down++;
        }
        else {
            up = 0;
            down = 0;
        }

        if (s_stock != 0 && up >= 3) { //전량 매도
            s_money += s_stock * price2;
            s_stock = 0;
        }
        else if (s_money > price2 && down >= 3) { //전량 매수
            int buy_stock = s_money / price2;
            s_stock += s_money / price2;
            s_money -= buy_stock * price2;
        }
    }
    int j_score = j_money + j_stock * price2;
    int s_score = s_money + s_stock * price2;

    if (j_score > s_score) cout << "BNP";
    else if (j_score < s_score) cout << "TIMING";
    else cout << "SAMESAME";

    return 0;
}