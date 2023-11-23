# About seilib
**"seilib"** adalah library **C programming language**, Library ini *berfungsi untuk memudahkan kalian* bagi para pemula bahasa C agar lebih singkat, intinya ini adalah library agar syntaxnya lebih shortcut dan tidak **tambah gila**.
# Code
![seilib](https://github.com/Sei-malvagio/seilib/assets/145441542/d3f74e2a-1fe5-488a-9178-e49c7c52eebf)
# Output
![Screenshot_2023-11-22-18-37-28-77_40deb401b9ffe8e1df2f1cc5ba480b12](https://github.com/Sei-malvagio/seilib/assets/145441542/9395a09f-c2f2-4e5f-a33c-465c524fe43a)
# How to use seilib?
- Pertama-tama kamu download source code dari github ini, dan import ke **IDE** mu.
- Langkah kedua, kamu buka file ```main.c``` yang sudah disediakan.
- Lankah **Jika**, Jika kamu tidak ingin menulis code yang sudah tertera di ```main.c``` dan membuat file baru, kamu harus menempatkan header ```#include "seilib/seilib.h"``` dibawah header ```#include <stdio.h>```
- Langkah terakhir, Tambahkan:
```c
  #include "seilib/seilib.h"
  ```

## Features
- ```pertambahan(const char*, const char*);```
- ```pengurangan(const char*, const char*)```
- ```perkalian(const char*, const char*)```
- ```pembagian(const char*, const char*)```
- ```pertambahanDesimal(const char*, const char*)```
- ```penguranganDesimal(const char*, const char*)```
- ```perkalianDesimal(const char*, const char*)```
- ```pembagianDesimalconst char*, const char*)```
- ```autoKetik(const char*, const char*)```
- ```autoKetikWarna(const char*, const char*, const char*)```
- ```angkaGanjilconst char*)```
- ```angkaGenap(const char*)```
- ```cekAngkaGanjil(const char*, const char*, const char*, const int)```
- ```cekAngkaGenap(const char*, const char*, const char*, const int)```
- ```cekPalindrome(const char*, const char*)```
- ```jeda(const int)```
- ```jedaCepat(const int)```
- ```kelipatan(const char*)```
- ```newLine(const char*)```
- ```tablePertambahan(const char*)```
- ```tablePengurangan(const char*)```
- ```tablePerkalian(const char*)```
- ```tablePembagian(const char*)```
- ```cekPosisiHuruf(const char*, const int)```
- ```displayPosisiHuruf(const char*, const int)```

### A little code example
```c
#include <stdio.h>
#include "seilib/seilib.h" //Librarynya

int main() {
    double hasil; //Variable hasil
    char simpan_nomor_1[20], simpan_nomor_2[20]; //Variable input
    autoKetikWarna("Halo!, selamat datang di program saya.\n\n", "34000", "warnaBiru"); //biar kece
    jeda(1); //Jeda 1 detik
    autoKetik("Saya disini membuat program Pertambahan desimal, dan Pembagian desimal\n\n", "34000");
    jeda(1); //Jeda 1 detik
    autoKetikWarna("Silahkan masukkan nomor 1 dan 2: ", "34000", "warnaAqua");
    scanf("%s %s", simpan_nomor_1, simpan_nomor_2); //Input nomor 1 dan 2
    jeda(1); // jeda 1 detik
    hasil = pertambahanDesimal(simpan_nomor_1, simpan_nomor_2); //Variable hasil untuk pertambahan
    printf("\nHasil dari pertambahan desimal : %.1lf\n", hasil); //Output variable hasil
    jeda(1); //Jeda 1 detik
    hasil = pembagianDesimal(simpan_nomor_1, simpan_nomor_2); //Variable hasil untuk Pengurangan
    printf("Hasil dari pembagian desimal : %.1lf\n", hasil); //Output variable hasil
    return 0;
}
```
### Output
![lv_0_20231123125308](https://github.com/Sei-malvagio/seilib/assets/145441542/89784d0a-697a-44d0-85af-033255fb096d)

> [!TIP]
> Harap **teliti** dalam memulis syntax ya beb ꒰⁠⑅⁠ᵕ⁠༚⁠ᵕ⁠꒱⁠˖⁠♡.

> [!IMPORTANT]
> Library ini hanya bisa dijalankan untuk IDE (Integrated Development Environment) yang mendukung import file.

> [!CAUTION]
> Library ini tidak dapat digunakan di IDE/APLIKASI **CodingC**.

> [!NOTE]
> Jika ada bug atau kesalahan ketika memakai library ini, silahkan feedback lewat issues, atau hubungi developernya langsung.

## Library version
> 1.0.0
