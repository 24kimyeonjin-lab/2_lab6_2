#pragma once

#include "dayOfYear.h"
#include <string>


namespace KimYeonjin2693058
{
    class holiday
    {
        std::string name;
        dayOfYear date{};
        bool parkingEnforcement{};
    public:
        holiday(const std::string& n = "no name yet",
            dayOfYear d = dayOfYear{1,1}, bool p = false)
            : name{n}, date{d}, parkingEnforcement{p}
        {}
       
        void print() const //holiday::print()
        {
            std::cout << name << ": ";
            date.print(); //dayOfYear::print()
            if (parkingEnforcement) 
                std::cout << "Parking laws will be enforced.\n";
            else
                std::cout << "Parking laws will NOT be enforced.\n";
        }

         friend std::ostream& operator<<(std::ostream& os, const holiday& h)
         {
            os << h.name <<": ";
            os << h.date;//dayOfYear의 operator
            if(h.parkingEnforcement)
                os << "Parking laws will be enforced. \n";
            else
                os << "Parking laws will NOT be enforced.\n";
            return os;
         }

         friend std::istream& operator>>(std::istream& is, holiday& h)
         {
            std::cout << "Enter holdiay name: ";
            std::getline(is >> std::ws, h.name);
            is >> h.date; //dayOfYear operator>>
            std::cout << "Enter parking law enfocement: 1(true) or 0(false): ";
            is >> h.parkingEnforcement;
            return is;
         }

        void input()
        {
            std::cout << "Enter holiday name: ";
            std::getline(std::cin >> std::ws, name);//std::cin >> name;
            date.input();//date.month, date.day
            std::cout << "Enter parking law enforcement: 1(true) or 0(false)";
            std::cin >> parkingEnforcement;
        }
        const std::string& getName() const {return name;}
        const dayOfYear& getDate() const { return date; }
        void setName(const std::string& n) {name = n;}
        void setDate(const dayOfYear& d) { date = d; }
        void setParkingEnforcement(bool p){parkingEnforcement = p;}
        
    };
}

// 1의 본인이름학번의 네임스페이스 안에 클래스2를 정의하고 멤버함수들도 모두 인라인으로 구현합니다. 
// private 멤버변수 선언: 클래스1형(dayOfYear) 객체, 그 외 멤버변수(bool) 1개 이상
// public 멤버함수 인라인으로 정의
// -생성자: 모든 멤버변수 초기화, 기본값 설정
// -print: 표준스트림출력으로 멤버변수들 출력
// -클래스1형(dayOfYear) 객체의 접근함수를 참조형식으로 구현

