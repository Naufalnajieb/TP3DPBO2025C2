#pragma once
#include "Studio.cpp"

/* Saya Naufal Fakhri Al-Najieb dengan NIM 2309648 mengerjakan Tugas Praktikum 3
dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya 
maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin. */

class Production_Management : public Studio {
    private:
        string Project_Manager;
        string Schedule;
    public:
        Production_Management() {
            this->Project_Manager = "-";
            this->Schedule = "-";
        }
        Production_Management(string manager, string schedule) {
            this->Project_Manager = manager;
            this->Schedule = schedule;
        }
        
        void setProjectManager(string manager) { 
            this->Project_Manager = manager;
        }
        void setSchedule(string schedule) { 
            this->Schedule = schedule; 
        }
        
        string getProjectManager() { 
            return this->Project_Manager;
        }
        string getSchedule() { 
            return this->Schedule; 
        }

        ~Production_Management(){
        }
    };