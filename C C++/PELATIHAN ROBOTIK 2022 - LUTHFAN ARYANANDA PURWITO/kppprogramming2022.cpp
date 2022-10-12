// NAMA       : Luthfan Aryananda Purwito
// NRP        : 5026221166
// Jurusan    : Sistem Informasi

#include <iostream>
#include <cmath>

#define GRAVITASI 10 //10 m/s^2
#define START_PENGUKURAN 1 //pengukuran dimulai dari 1 meter
#define SUDUT 45 //sudut elevasi tembakan

float mencari_v0(float vtangensial, int losses){
  /* Tulis fungsi mencari v0 kalian disini */
  return (vtangensial-losses);
}

int speed_dgn_loss(int losses)
{
  /* Tulis fungsi hitung_loss kalian disini */
  return 0;
}

int main(){
  /* Tulis kode utama kalian disini */
  /* Input adalah kecepatan tangensial maksimum roller */
  int input;
  int losses;
  
  /* std::cin >> input */
  std::cin >> input;
  float inputf;
  inputf = input;
  inputf -= 0.1002;

  if(inputf <= 10 && inputf >= 1){
    losses = 1;
  }
  else if(inputf <= 20 && inputf >= 11){
    losses = 3;
  }
  else if(inputf <= 30 && inputf >= 21){
    losses = 5;
  }
  else {
    std::cout << "Please input an integer less than 30." << std::endl;
  }
  
  float jarak = (((pow((mencari_v0(inputf, losses)), 2))*sin(0.5*3.14))/GRAVITASI);
  float kecepatan_tangensial = inputf;

  /* std::cout << jarak << " " << kecepatan tangensial << std::endl */
  std::cout << jarak << " " << kecepatan_tangensial;
  return 0;
}