#pragma once
#include "Studio.cpp"

/* Saya Naufal Fakhri Al-Najieb dengan NIM 2309648 mengerjakan Tugas Praktikum 3
dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya 
maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin. */

class Sound_Department : public Studio {
    private:
        string Sound_Director;
        string VoiceActor;
    public:
        Sound_Department() {
            this->Sound_Director = "-";
            this->VoiceActor = "-";
        }
        Sound_Department(string director, string actor) {
            this->Sound_Director = director;
            this->VoiceActor = actor;
        }
        
        void setSoundDirector(string director) { 
            this->Sound_Director = director; 
        }
        void setVoiceActor(string actor) { 
            this->VoiceActor = actor; 
        }
        
        string getSoundDirector() { 
            return this->Sound_Director;
        }
        string getVoiceActor() {
             return this->VoiceActor;
        }
        
        ~Sound_Department(){
        }
    };