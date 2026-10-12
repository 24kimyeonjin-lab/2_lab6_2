#pragma once

#include "dayOfYear.h"


namespace KimYeonjin2693058
{
    class holiday
    {
        dayOfYear date{};
        bool parkingEnforcement{};
    public:
        holiday(dayOfYear d = dayOfYear{1,1}, bool p = false)
        : date{ d }, parkingEnforcement{p}
        {}
        // holiday(int m, intd d, bool p)
        //     : date{m,d}, parkingEnforcement{p}
        // {}
        void print() const //holiday::print()
        {
            date.print(); //dayOfYear::print()
            if (parkingEnforcement) 
                std::cout << "Parking laws will be enforced.\n";
            else
                std::cout << "Parking laws will NOT be enforced.\n";
        }
        const dayOfYear& getDate() const { return date; }
        void setDate(const dayOfYear& d) { date = d; }
    };
}

// 1의 본인이름학번의 네임스페이스 안에 클래스2를 정의하고 멤버함수들도 모두 인라인으로 구현합니다. 
// private 멤버변수 선언: 클래스1형(dayOfYear) 객체, 그 외 멤버변수(bool) 1개 이상
// public 멤버함수 인라인으로 정의
// -생성자: 모든 멤버변수 초기화, 기본값 설정
// -print: 표준스트림출력으로 멤버변수들 출력
// -클래스1형(dayOfYear) 객체의 접근함수를 참조형식으로 구현

