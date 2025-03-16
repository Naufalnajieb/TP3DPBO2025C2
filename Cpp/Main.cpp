#include "Anime.cpp"
#include "Staff.cpp"

/* Saya Naufal Fakhri Al-Najieb dengan NIM 2309648 mengerjakan Tugas Praktikum 3
dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya 
maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin. */

int main(){
    
    list<Anime> list_Anime;

    Anime animation;
    Studio st;

    animation.setTitle("JujutSu Kaisen");
    animation.setGenre("Action,dark,fantasy,supranatural");
    animation.setReleaseYear("2020");
    st.addAnime(animation);

    for (int index = 1; index <= 2; index++){
        Staff staff;
        if (index == 1){
            staff.setNama("Tetsuya"); 
            staff.setUmur(35); 
            staff.setAsal("Japan"); 
            staff.setStatusKontrak("Full-time");
        }
        else if(index == 2){
            staff.setNama("Yuki"); 
            staff.setUmur(29); 
            staff.setAsal("Japan"); 
            staff.setStatusKontrak("Contract");
        }

        st.addStaffStudio(staff);
    }

    st.tampilkan();

    return 0;
}