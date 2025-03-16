#pragma once
#include "Animation_Departement.cpp"
#include "Sound_Department.cpp"
#include "Production_Management.cpp"

/* Saya Naufal Fakhri Al-Najieb dengan NIM 2309648 mengerjakan Tugas Praktikum 3
dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya 
maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin. */

class Staff : public Animation_Department, public Sound_Department, public Production_Management {
    private:
        string nama;
        int umur;
        string asal;
        string jenis_kelamin;
        string status_kontrak;
    public:
        Staff() {
            this->nama = "-";
            this->umur = 0;
            this->asal = "-";
            this->jenis_kelamin = "-";
            this->status_kontrak = "-";
        }
        Staff(string nama, int umur, string asal, string jenis_kelamin, string status_kontrak,
        string Lead_Animator, string Animation_Style,
        string Sound_Director, string VoiceActor,
        string Project_Manager, string Schedule):
        
        Animation_Department(Lead_Animator, Animation_Style),
        Sound_Department(Sound_Director, VoiceActor),
        Production_Management(Project_Manager, Schedule)
        {
            this->nama = nama;
            this->umur = umur;
            this->asal = asal;
            this->jenis_kelamin = jenis_kelamin;
            this->status_kontrak = status_kontrak;
        }
        
        void setNama(string nama) { 
            this->nama = nama; 
        }
        void setUmur(int umur) { 
            this->umur = umur; 
        }
        void setAsal(string asal) { 
            this->asal = asal;
         }
        void setJenisKelamin(string jenis_kelamin) { 
            this->jenis_kelamin = jenis_kelamin;
         }
        void setStatusKontrak(string status_kontrak) { 
            this->status_kontrak = status_kontrak;
         }
        
        string getNama() { 
            return this->nama;
         }
        int getUmur() { 
            return this->umur;
         }
        string getAsal() { 
            return this->asal;
         }
        string getJenisKelamin() { 
            return this->jenis_kelamin; 
        }
        string getStatusKontrak() { 
            return this->status_kontrak; 
        }

        ~Staff(){
        }
    };
    