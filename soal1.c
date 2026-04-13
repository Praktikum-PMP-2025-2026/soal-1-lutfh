/**
 * EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2025/2026
 * Modul : 1 - Overview of C language
 * Percobaan:
 * Hari dan Tanggal : Senin 13 April 2026
 * Pembuat File : Lutfi Hasan
 * Nama File : Set1.c
 * Deskripsi : 
 */

#include <stdio.h>

/**
 * Input:
 * Izin = 1 s/d 3
 * Suhu = T * 0.1
 * Radiasi <= 0
 * Jam = 0 s/d 23
 * */

/*
 * Status:
 * Radiasi >= 6 -> TOLAK
 * Else jika suhu >= 390 -> KARANTINA
 * Else jika izin = 1 dan jam < 6 atau jam > 20 -> TOLAK
 * Else jika izin = 1 -> MASUK
 * Else jika izin = 2 dan radiasi <= 2 dan jam diantara 8 sampai 18 -> MASUK
 * Else jika izin = 2 -> PEMERIKSAAN
 * Else jika izin = 3 dan radiasi = 0 dan suhu < 380, keluaran MASUK
 *
 * TOLAK = 0
 * MASUK = 1
 * PEMERIKSAAN = 2
 * */

int prem, Rad, Jam;
float T;


int main() {
  scanf("%d %f %d %d", &prem, &T, &Rad, &Jam);
  
  if (1 <= prem && prem <= 3 && Rad >= 0 && 0 <= Jam && Jam <= 23){
  T = T * 0.1;
    if(Rad >= 6){
      printf("TOLAK");
    }
    else if(T >= 39.0){
      printf("KARANTINA");
    }
    else if(prem == 1 && (Jam < 6 || Jam > 20)){
      printf("TOLAK");
    }
    else if(prem == 1) {
      printf("MASUK");
    }
    else if(prem == 2 && Rad <= 2 && 8 <= Jam && Jam <= 18){
      printf("MASUK");
    }
        else if(prem == 2){
      printf("PEMERIKSAAN");
    }
    else if(prem == 3 && Rad == 0 && T < 380) {
      printf("MASUK");
    }    
    else {
      printf("TOLAK");
    }
  }
}

