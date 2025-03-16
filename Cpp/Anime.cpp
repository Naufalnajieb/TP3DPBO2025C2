#pragma once
#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

/* Saya Naufal Fakhri Al-Najieb dengan NIM 2309648 mengerjakan Tugas Praktikum 3
dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya 
maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin. */

class Anime {
    private:
        string Title;
        string Genre;
        string ReleaseYear;
    public:
        Anime() {
            this->Title = "-";
            this->Genre = "-";
            this->ReleaseYear = "-";
        }
        Anime(string title, string genre, string year) {
            this->Title = title;
            this->Genre = genre;
            this->ReleaseYear = year;
        }
            
        void setTitle(string title) { 
            this->Title = title; 
        }
        void setGenre(string genre) { 
            this->Genre = genre; 
        }
        void setReleaseYear(string year) { 
            this->ReleaseYear = year; 
        }
        
        string getTitle() { 
            return this->Title; 
        }
        string getGenre() { 
            return this->Genre; 
        }
        string getReleaseYear() { 
            return this->ReleaseYear; 
        }

        ~Anime(){
        }
};
    