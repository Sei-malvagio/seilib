/********************************************************/
/* ==================================================== */
/*                     "seilib.h"                       */
/*     Created by : Jafar Sodiq                         */
/*     Version    : 1.0.0                               */
/*     Github     : https://github.com/sei-malvagio     */
/*                                                      */
/* ==================================================== */
/********************************************************/

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <unistd.h>

#define MAX_ARRAY 20
#define END_COLOR "\033[0m\n"
#define ERR "\n\033[91m"
#define _LIB_VERSION_ "1.0.0"
int _str_to_int = false;

int pertambahan(char *part_number_one, char *part_number_two) {
    int i = 0;
    if(strlen(part_number_one) == 0 || strlen(part_number_two) == 0) {
        printf("%sError: parameter pertambahan(\"null\", \"null\");.%s", ERR, END_COLOR);
        exit(1);
    }
    if(isdigit(part_number_one[i]) == 0 || isdigit(part_number_two[i]) == 0) {
        printf("%sError: angka tidak terdeteksi.%s", ERR, END_COLOR);
        exit(1);
    } else {
        const int _C_ONE_NUM_ = atoi(part_number_one);
        const int _C_TWO_NUM_ = atoi(part_number_two);
        return _C_ONE_NUM_ + _C_TWO_NUM_;
    }
}

int pengurangan(char *part_number_one, char *part_number_two) {
    int i = 0;
    if(strlen(part_number_one) == 0 || strlen(part_number_two) == 0) {
        printf("%sError: parameter pengurangan(\"null\", \"null\");%s", ERR, END_COLOR);
        exit(1);
    }
if(isdigit(part_number_one[i]) == 0 || isdigit(part_number_two[i]) == 0) {
        printf("%sError: angka tidak terdeteksi.%s", ERR, END_COLOR);
        exit(1);
    } else {
        const int _C_ONE_NUM_ = atoi(part_number_one);
        const int _C_TWO_NUM_ = atoi(part_number_two);
        return _C_ONE_NUM_ - _C_TWO_NUM_;
    }
}

int perkalian(char *part_number_one, char *part_number_two) {
    int i = 0;
    if(strlen(part_number_one) == 0 || strlen(part_number_two) == 0) {
        printf("%sError: parameter perkalian(\"null\", \"null\");%s", ERR, END_COLOR);
        exit(1);
    }
if(isdigit(part_number_one[i]) == 0 || isdigit(part_number_two[i]) == 0) {
        printf("%sError: angka tidak terdeteksi.%s", ERR, END_COLOR);
        exit(1);
    } else {
        const int _C_ONE_NUM_ = atoi(part_number_one);
        const int _C_TWO_NUM_ = atoi(part_number_two);
        return _C_ONE_NUM_ * _C_TWO_NUM_;
    }
}

double pembagian(char *part_number_one, char *part_number_two) {
    int i = 0;
    if(strlen(part_number_one) == 0 || strlen(part_number_two) == 0) {
        printf("%sError: parameter pembagian(\"null\", \"null\");%s", ERR, END_COLOR);
        exit(1);
    }
    if(isdigit(part_number_one[i]) == 0 || isdigit(part_number_two[i]) == 0) {
        printf("%sError: angka tidak terdeteksi.%s", ERR, END_COLOR);
        exit(1);
    } else {
        const double _C_ONE_NUM_ = atoi(part_number_one);
        const double _C_TWO_NUM_ = atoi(part_number_two);
        return _C_ONE_NUM_ / _C_TWO_NUM_;
    }
}

double pertambahanDesimal(char *part_number_one, char *part_number_two) {
    int i = 0;
    if(strlen(part_number_one) == 0 || strlen(part_number_two) == 0) {
        printf("%sError: parameter pertambahanDesimal(\"null\", \"null\");%s", ERR, END_COLOR);
        exit(1);
    }
    if(isdigit(part_number_one[i]) == 0 || isdigit(part_number_two[i]) == 0) {
        printf("%sError: angka tidak terdeteksi.", ERR, END_COLOR);
        exit(1);
    } else {
        const double _C_ONE_NUM_ = atof(part_number_one);
        const double _C_TWO_NUM_ = atof(part_number_two);
        return _C_ONE_NUM_ + _C_TWO_NUM_;
    }
}

double penguranganDesimal(char *part_number_one, char *part_number_two) {
    int i = 0;
    if(strlen(part_number_one) == 0 || strlen(part_number_two) == 0) {
        printf("%sError: parameter penguranganDesimal(\"null\", \"null\");%s", ERR, END_COLOR);
        exit(1);
    }
    if(isdigit(part_number_one[i]) == 0 || isdigit(part_number_two[i]) == 0) {
        printf("%sError: angka tidak terdeteksi.%s", ERR, END_COLOR);
        exit(1);
    } else {
        const double _C_ONE_NUM_ = atof(part_number_one);
        const double _C_TWO_NUM_ = atof(part_number_two);
        return _C_ONE_NUM_ - _C_TWO_NUM_;
    }
}

double perkalianDesimal(char *part_number_one, char *part_number_two) {
    int i = 0;
    if(strlen(part_number_one) == 0 || strlen(part_number_two) == 0) {
        printf("%sError: parameter perkalianDesimal(\"null\", \"null\");%s", ERR, END_COLOR);
        exit(1);
    }
    if(isdigit(part_number_one[i]) == 0 || isdigit(part_number_two[i]) == 0) {
        printf("%sError: angka tidak terdeteksi.%s", ERR, END_COLOR);
        exit(1);
    } else {
        const double _C_ONE_NUM_ = atof(part_number_one);
        const double _C_TWO_NUM_ = atof(part_number_two);
        return _C_ONE_NUM_ * _C_TWO_NUM_;
    }
}

double pembagianDesimal(char *part_number_one, char *part_number_two) {
    int i = 0;
    if(strlen(part_number_one) == 0 || strlen(part_number_two) == 0) {
        printf("%sError: parameter pembagianDesimal(\"null\", \"null\");%s", ERR, END_COLOR);
        exit(1);
    }
    if(isdigit(part_number_one[i]) == 0 || isdigit(part_number_two[i]) == 0) {
        printf("%sError: angka tidak terdeteksi.%s", ERR, END_COLOR);
        exit(1);
    } else {
        const double _C_ONE_NUM_ = atof(part_number_one);
        const double _C_TWO_NUM_ = atof(part_number_two);
        return _C_ONE_NUM_ / _C_TWO_NUM_;
    }
}

void autoKetik(char *text_output, char *output_delay_time) {
    int i = 0;
    if(strlen(output_delay_time) == 0) {
        printf("%sError: delay time invalid.%s", ERR, END_COLOR);
        exit(1);
    } else if (isdigit(output_delay_time[i]) == 0) {
        printf("%sError: angka tidak terdeteksi.%s", ERR, END_COLOR);
        exit(1);
    } else {
        int output_delay_time_ms = atoi(output_delay_time);
        for(i = 0; i < strlen(text_output); ++i) {
            printf("%c", text_output[i]);
            fflush(stdout);
            usleep(output_delay_time_ms);
        }
    }
}

void autoKetikWarna(char *text_output, char *output_delay_time, char *color_code) {
    char *batasWarna = "\033[0m";
    int _color_found_ = false, i = 0;

    const char COLOR_COLLECTION[MAX_ARRAY][MAX_ARRAY] =
    {
        "warnaPutih", "warnaHitam", "warnaMerah","warnaHijau", "warnaKuning",
        "warnaBiru", "warnaUngu", "warnaAqua"
    };

    const char COLOR_COLLECTION_CODE[MAX_ARRAY][MAX_ARRAY] =
    {
        "\033[37m", "\033[30m", "\033[31m", "\033[32m", "\033[33m",
        "\033[34m", "\033[35m", "\033[36m"
    };

    if(strlen(color_code) == 0 || strlen(output_delay_time) == 0) {
        printf("%sError: Tolong masukkan delay time atau warna untuk auto ketiknya.%s", ERR, END_COLOR);
        exit(1);
    } else if(isdigit(output_delay_time[i]) == 0 || isalpha(color_code[i]) == 0) {
        printf("%sError: angka atau warna tidak terdeteksi.%s", ERR, END_COLOR);
        exit(1);
    } else {
        for(i = 0; i < MAX_ARRAY; ++i) {
            if(strcasecmp(color_code, COLOR_COLLECTION[i-1]) == 0) {
                _color_found_ = true;
                break;
            }
        }
    }

    if(_color_found_) {
        color_code = COLOR_COLLECTION_CODE[i-1];
    } else {
        printf("%sError: '%s' tidak ditemukan.%s", ERR, color_code, END_COLOR);
        exit(1);
    }

    int output_delay_time_ms = atoi(output_delay_time);
    for(i = 0; i < strlen(text_output); ++i) {
        printf("%s%c%s", color_code, text_output[i], batasWarna);
        fflush(stdout);
        usleep(output_delay_time_ms);
    }
}

int angkaGanjil(char *part_number_one) {
    int i = 0;
    if(strlen(part_number_one) == 0) {
        printf("%sError: parameter angkaGanjil(\"null\");%s", ERR, END_COLOR);
        exit(1);
    } else if(isdigit(part_number_one[i]) == 0) {
        printf("%sError: angka tidak terdeteksi.%s", ERR, END_COLOR);
        exit(1);
    } else {
        _str_to_int = atoi(part_number_one);
        for(i = 1; i < _str_to_int; i+=2) {
            printf("%d ", i);
        }
    }
}

int angkaGenap(char *part_number_one) {
    int i = 0;
    if(strlen(part_number_one) == 0) {
        printf("%sError: parameter angkaGenap(\"null\");%s", ERR, END_COLOR);
        exit(1);
    } else if(isdigit(part_number_one[i]) == 0) {
        printf("%sError: angka tidak terdeteksi.%s", ERR, END_COLOR);
        exit(1);
    }
    _str_to_int = atoi(part_number_one);
    for(i = 0; i < _str_to_int; i+=2) {
        printf("%d ", i);
    }
}
char* cekAngkaGanjil(char *part_number_one, char *number_is_even, char *non_even_number, const int IS_ADD_NUMBER) {
    int i = 0;
    if(strlen(part_number_one) == 0 || strlen(number_is_even) == 0 || strlen(non_even_number) == 0) {
        printf("%sError: parameter cekAngkaGanjil(\"null\", \"null\", \"null\");%s", ERR, END_COLOR);
        exit(1);
    } else if(isdigit(part_number_one[i]) == 0) {
        printf("%sError: angka tidak terdeteksi.%s", ERR, END_COLOR);
        exit(1);
    } else {
        _str_to_int = atoi(part_number_one);
        char _MIXED_NUM_ARRCHAR_[1000];

        for(i = 1; i < _str_to_int; i+=2);
        if(_str_to_int == i && IS_ADD_NUMBER == 0) {
            snprintf(_MIXED_NUM_ARRCHAR_, sizeof(_MIXED_NUM_ARRCHAR_), "%s", number_is_even);
        } else if(_str_to_int != i && IS_ADD_NUMBER == 0) {
            snprintf(_MIXED_NUM_ARRCHAR_, sizeof(_MIXED_NUM_ARRCHAR_), "%s", non_even_number);
        } else if(_str_to_int == i && IS_ADD_NUMBER == 1) {
            snprintf(_MIXED_NUM_ARRCHAR_, sizeof(_MIXED_NUM_ARRCHAR_), "%s %s", part_number_one, number_is_even);
        } else if(_str_to_int != i && IS_ADD_NUMBER == 1) {
            snprintf(_MIXED_NUM_ARRCHAR_, sizeof(_MIXED_NUM_ARRCHAR_), "%s %s", part_number_one, non_even_number);
        } else {
            printf("%sError: pilihan untuk '%d' tidak ada.%s", ERR, IS_ADD_NUMBER, END_COLOR);
        }
        return _MIXED_NUM_ARRCHAR_;
    }
}

char* cekAngkaGenap(char *part_number_one, char *is_odd_num, char *non_odd_num, const int IS_ADD_NUMBER) {
    int i = 0;
    if(strlen(part_number_one) == 0 || strlen(is_odd_num) == 0 || strlen(non_odd_num) == 0) {
        printf("%sError: parameter cekAngkaGenap(\"null\", \"null\", \"null\");%s", ERR, END_COLOR);
        exit(1);
    } else if(isdigit(part_number_one[i]) == 0) {
        printf("%sError: angka tidak terdeteksi.%s", ERR, END_COLOR);
        exit(1);
    } else {
        _str_to_int = atoi(part_number_one);
        char _MIXED_NUM_ARRCHAR_[1000];

        for(i = 0; i < _str_to_int; i+=2);
        if(_str_to_int == i && IS_ADD_NUMBER == 0) {
            snprintf(_MIXED_NUM_ARRCHAR_, sizeof(_MIXED_NUM_ARRCHAR_), "%s", is_odd_num);
        } else if(_str_to_int != i && IS_ADD_NUMBER == 0) {
            snprintf(_MIXED_NUM_ARRCHAR_, sizeof(_MIXED_NUM_ARRCHAR_), "%s", non_odd_num);
        } else if(_str_to_int == i && IS_ADD_NUMBER == 1) {
            snprintf(_MIXED_NUM_ARRCHAR_, sizeof(_MIXED_NUM_ARRCHAR_), "%s %s", part_number_one, is_odd_num);
        } else if(_str_to_int != i && IS_ADD_NUMBER == 1) {
            snprintf(_MIXED_NUM_ARRCHAR_, sizeof(_MIXED_NUM_ARRCHAR_), "%s %s", part_number_one, non_odd_num);
        } else {
            printf("%sError: pilihan untuk '%d' tidak ada.%s", ERR, IS_ADD_NUMBER, END_COLOR);
            exit(1);
        }
        return _MIXED_NUM_ARRCHAR_;
    }
}

int _CHECK_PALINDROME_(int check_condition_number_is_palindrome) {
    int _temp_original_palidrome_ = check_condition_number_is_palindrome;
    int part_remainder = 0, part_reverse = 0;

    while(0 < check_condition_number_is_palindrome) {
        part_remainder = check_condition_number_is_palindrome % 10;
        part_reverse = part_reverse * 10 + part_remainder;
        check_condition_number_is_palindrome /= 10;
    }
    return (_temp_original_palidrome_ == part_reverse);
}

void cekPalindrome(char *start_polindrome_num, char *end_polindrome_num) {
    int start_polindrome, end_polindrome, i = 0;
    start_polindrome = atoi(start_polindrome_num);
    end_polindrome = atoi(end_polindrome_num);

    if(strlen(start_polindrome_num) == 0 || strlen(end_polindrome_num) == 0) {
        printf("%sError: parameter cekPalindrome(\"null\", \"null\");%s", ERR, END_COLOR);
        exit(1);
    } else if(isdigit(start_polindrome_num[i]) == 0 || isdigit(end_polindrome_num[i]) == 0) {
        printf("%sError: angka tidak terdeteksi.%s", ERR, END_COLOR);
        exit(1);
    } else if(end_polindrome < start_polindrome) {
        printf("%sError: end polindrome tidak boleh lebih besar dari start.%s", ERR, END_COLOR);
    } else {
        for(int i = start_polindrome; i < end_polindrome; ++i) {
            if(_CHECK_PALINDROME_(i)) printf("- %d\n", i);
        }
    }
}

int jeda(int pause_time) {
    if(pause_time < 0 || pause_time == 0) {
        printf("%sError: jeda tidak dapat kurang dari nol, atau nol.%s", ERR, END_COLOR);
        exit(1);
    } else {
        return sleep(pause_time);
    }
}

int jedaCepat(int pause_time_ms) {
    if(pause_time_ms < 0 || pause_time_ms == 0) {
        printf("%sError: jeda tidak dapat kurang dari nol, atau nol.%s", ERR, END_COLOR);
        exit(1);
    } else {
        return fflush(stdout) + usleep(pause_time_ms);
    }
}

void kelipatan(char *part_number_one) {
    int i = 0;
    if(strlen(part_number_one) == false) {
        printf("%sError: parameter kelipatan(\"null\");%s", ERR, END_COLOR);
        exit(1);
    }
    if(isdigit(part_number_one[i]) == 0) {
        printf("%sError: angka tidak terdeteksi.%s", ERR, END_COLOR);
        exit(1);
    } else {
        _str_to_int = atoi(part_number_one);
        for(i = _str_to_int; i <= _str_to_int * _str_to_int; i+=_str_to_int) {
            printf("%d ", i);
            fflush(stdout);
            usleep(90900);
        }
    }
}

char newLine(const char *_USE_SPACE_) {
    int i = 0;
    if(strlen(_USE_SPACE_) == 0) {
        printf("%sError: parameter newLine(\"null\");%s", ERR, END_COLOR);
        exit(1);
    } else if(isalpha(_USE_SPACE_[i])) {
        printf("%sError: tidak mendukung huruf.%s", ERR, END_COLOR);
        exit(1);
    } else {
        _str_to_int = atoi(_USE_SPACE_);
        for(int j = 0; j < _str_to_int; j++) {
            printf("\n");
        }
    }
}

void tabelPertambahan(char *part_number_one) {
    int i = 0;
    if(strlen(part_number_one) == 0) {
        printf("%sError: parameter tabelPertambahan(\"null\")%s", ERR, END_COLOR);
        exit(1);
    }
    if(isdigit(part_number_one[i]) == 0) {
        printf("%sError: angka tidak terdeteksi.%s", ERR, END_COLOR);
        exit(1);
    } else {
        _str_to_int = atoi(part_number_one);
        for(int j = 1; j <= _str_to_int; ++j) {
            printf("%d + %d = %d\n", _str_to_int, j, _str_to_int + j);
        }
    }
}

void tabelPengurangan(char *part_number_one) {
    int i = 0;
    if(strlen(part_number_one) == 0) {
        printf("%sError: parameter tabelPengurangan(\"null\")%s", ERR, END_COLOR);
        exit(1);
    }
    if(isdigit(part_number_one[i]) == 0) {
        printf("%sError: angka tidak terdeteksi.%s", ERR, END_COLOR);
        exit(1);
    } else {
        _str_to_int = atoi(part_number_one);
        for(int j = 1; j <= _str_to_int; ++j) {
            printf("%d - %d = %d\n", _str_to_int, j, _str_to_int - j);
        }
    }
}

void tabelPerkalian(char *part_number_one) {
    int i = 0;
    if(strlen(part_number_one) == 0) {
        printf("%sError: parameter tabelPerkalian(\"null\")%s", ERR, END_COLOR);
        exit(1);
    }
    if(isdigit(part_number_one[i]) == 0) {
        printf("%sError: angka tidak terdeteksi.%s", ERR, END_COLOR);
        exit(1);
    } else {
        _str_to_int = atoi(part_number_one);
        for(int j = 1; j <= _str_to_int; ++j) {
            printf("%d x %d = %d\n", _str_to_int, j, _str_to_int * j);
        }
    }
}

void tabelPembagian(char *part_number_one) {
    int i = 0;
    if(strlen(part_number_one) == 0) {
        printf("%sError: parameter tabelPerkalian(\"null\")%s", ERR, END_COLOR);
        exit(1);
    }
    if(isdigit(part_number_one[i]) == 0) {
        printf("%sError: angka tidak terdeteksi.%s", ERR, END_COLOR);
        exit(1);
    } else {
        const double _STR_TO_D_ = atof(part_number_one);
        for(int j = 1; j <= _STR_TO_D_; ++j) {
            printf("%g : %d = %g\n", _STR_TO_D_, j, _STR_TO_D_ / j);
        }
    }
}

int cekPosisiHuruf(const char *INCOMING_STRING, const int POSITION_NUMBER) {
    int i = 0;
    if(strlen(INCOMING_STRING) == 0 || POSITION_NUMBER <= 0) {
        printf("%sError: parameter cekPosisiHuruf(\"null\", 0);%s", ERR, END_COLOR);
        exit(1);
    } else if(isalpha(INCOMING_STRING[i]) == false) {
        printf("%sError: '%s' bukan huruf.%s", ERR, INCOMING_STRING, END_COLOR);
        exit(1);
    } else {
        int _current_letter_position_ = POSITION_NUMBER;
        int lenght = strlen(INCOMING_STRING);
        for(int j = 0; j < lenght; j++) {
            if(_current_letter_position_ == j + 1) {
                return _current_letter_position_;
            }
        }
    }
}

char displayPosisiHuruf(const char *_INCOMING_STRING_, const int POSITION_NUMBER) {
    int i = 0;
    int _current_letter_position_ = POSITION_NUMBER;
    int  length = strlen(_INCOMING_STRING_);
    if(strlen(_INCOMING_STRING_) == 0) {
        printf("%sError: parameter displayPosisiHuruf(\"null\");%s", ERR, END_COLOR);
        exit(1);
    } else if(isalpha(_INCOMING_STRING_[i]) == false) {
        printf("%sError: '%s' bukan huruf.%s", ERR, _INCOMING_STRING_, END_COLOR);
        exit(1);
    } else {
        for(int j = 0; j < length; j++) {
            if(_current_letter_position_ == j + 1) {
                return _INCOMING_STRING_[j];
            }
        }
    }
}
