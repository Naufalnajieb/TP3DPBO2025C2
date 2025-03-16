#pragma once
#include "Studio.cpp"

/* Saya Naufal Fakhri Al-Najieb dengan NIM 2309648 mengerjakan Tugas Praktikum 3
dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya 
maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin. */

class Animation_Department : public Studio {
    private:
        string Lead_Animator;
        string Animation_Style;
    public:
        Animation_Department() {
            this->Lead_Animator = "-";
            this->Animation_Style = "-";
        }
        Animation_Department(string lead, string style) {
            this->Lead_Animator = lead;
            this->Animation_Style = style;
        }
        
        void setLeadAnimator(string lead) { 
            this->Lead_Animator = lead; 
        }
        void setAnimationStyle(string style) { 
            this->Animation_Style = style; 
        }
        
        string getLeadAnimator() { 
            return this->Lead_Animator; 
        }
        string getAnimationStyle() { 
            return this->Animation_Style; 
        }

        ~Animation_Department(){
        }
    };