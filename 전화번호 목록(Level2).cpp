#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool solution(vector<string> phone_book) {
    
    sort(phone_book.begin(), phone_book.end());

    for (int i = 0; i < phone_book.size() - 1; i++)
    {
        if (phone_book[i] == phone_book[i + 1].substr(0, phone_book[i].size()))
            return false;



            // 어차피 sort 를 하게되면, 사전순으로 정렬이 된다.

            // 우리가 알고싶은건, 
            // 겹치는 접두사가 존재하는 마는지 이기 때문에, 그냥 앞 뒤 순서끼리만 비교하면 된다!!

            // substr 함수 : 변수.substr(시작인덱스, 끝인덱스)  ->  문자열을 잘라주는 함수이다!
            // 파이썬의 슬라이싱 기능이라고 생각하면 될듯
    }
    
    return true;
}