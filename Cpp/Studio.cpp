#pragma once
#include "Anime.cpp"
#include "Staff.cpp"
#include <iomanip>
#include <list>

/* Saya Naufal Fakhri Al-Najieb dengan NIM 2309648 mengerjakan Tugas Praktikum 3
dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya 
maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin. */

class Studio {
    private:
        string Location;
        string NamaStudio;
        list<Anime> animeList;
        list<Staff> staffList;

    public:
        Studio() {
            this->Location = "-";
            this->NamaStudio = "-";
        }
        Studio(string location, string namaStudio) {
            this->Location = location;
            this->NamaStudio = namaStudio;
        }
        
        void setLocation(string location) { 
            this->Location = location; 
        }
        void setNamaStudio(string namaStudio) { 
            this->NamaStudio = namaStudio; 
        }
        
        string getLocation() { 
            return this->Location;
        }
        string getNamaStudio() { 
            return this->NamaStudio;
        }
        
        void addAnime(Anime animestudio) { 
            animeList.push_back(animestudio); 
        }
        void addStaffStudio(Staff staffstudio) { 
            staffList.push_back(staffstudio); 
        }
        void tampilkan() {

            cout << "\nStudio: " << getNamaStudio() << " - " << getLocation() << "\n";
            cout << "+----+--------------------+--------------+------------+\n";
            cout << "| ID | Title              | Genre        | Year       |\n";
            cout << "+----+--------------------+--------------+------------+\n";
            
            int iterasi = 0;
            for (Anime &anime : animeList) {
                iterasi++;
                cout << "| " << setw(2) << iterasi << " | "
                     << setw(18) << anime.getTitle() << " | "
                     << setw(12) << anime.getGenre() << " | "
                     << setw(10) << anime.getReleaseYear() << " |" << endl;
            }
            cout << "+----+--------------------+--------------+------------+\n";
            
            cout << "\nDaftar Staff:\n";
            cout << "+----+--------------------+------+--------------+------------+\n";
            cout << "| ID | Nama               | Umur | Asal         | Kontrak    |\n";
            cout << "+----+--------------------+------+--------------+------------+\n";
            iterasi = 0;
            for (Staff &staff : staffList) {
                iterasi++;
                cout << "| " << setw(2) << iterasi << " | "
                     << setw(18) << staff.getNama() << " | "
                     << setw(4) << staff.getUmur() << " | "
                     << setw(12) << staff.getAsal() << " | "
                     << setw(10) << staff.getStatusKontrak() << " |" << endl;
            }
            cout << "+----+--------------------+------+--------------+------------+\n";
        
            cout << "\nDetail Department:\n";
            cout << "+----+-------------------+------------------+-------------------+-------------------+-------------------+-------------------+\n";
            cout << "| ID | Lead Animator     | Animation Style  | Sound Director    | Voice Actor       | Project Manager   | Schedule          |\n";
            cout << "+----+-------------------+------------------+-------------------+-------------------+-------------------+-------------------+\n";
            iterasi = 0;
            for (Staff &staff : staffList) {
                iterasi++;
                cout << "| " << setw(2) << iterasi << " | "
                    << setw(17) << staff.getLeadAnimator() << " | "
                    << setw(16) << staff.getAnimationStyle() << " | "
                    << setw(17) << staff.getSoundDirector() << " | "
                    << setw(17) << staff.getVoiceActor() << " | "
                    << setw(17) << staff.getProjectManager() << " | "
                    << setw(17) << staff.getSchedule() << " |" << endl;
            }
            cout << "+----+-------------------+------------------+-------------------+-------------------+-------------------+-------------------+\n";
        }
        
        ~Studio(){
        }
    };