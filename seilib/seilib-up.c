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

#define __MAX_ARRAY__ 20
#define __END_COLOR__ "\033[0m\n"
#define __ERR__ "\n\033[91m"
#define __LIB_VERSION__ "1.0.0"
#define __Auto_WRITE_End__ "\033[0m"
int _str_to_int = false;

int pertambahan(char *part_number_one, char *part_number_two) {
    int i = 0;
    if(strlen(part_number_one) == 0 || strlen(part_number_two) == 0) {
        fprintf(stderr, __ERR__"Error: parameter pertambahan(\"null\", \"null\");."__END_COLOR__);
        exit(1);
    }
    if(isdigit(part_number_one[i]) == 0 || isdigit(part_number_two[i]) == 0) {
        fprintf(stderr, __ERR__"Error: angka tidak terdeteksi."__END_COLOR__);
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
        fprintf(stderr, __ERR__"Error: parameter pengurangan(\"null\", \"null\");."__END_COLOR__);
        exit(1);
    }
    if(isdigit(part_number_one[i]) == 0 || isdigit(part_number_two[i]) == 0) {
        fprintf(stderr, __ERR__"Error: angka tidak terdeteksi."__END_COLOR__);
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
        fprintf(stderr, __ERR__"Error: parameter perkalian(\"null\", \"null\");."__END_COLOR__);
        exit(1);
    }
    if(isdigit(part_number_one[i]) == 0 || isdigit(part_number_two[i]) == 0) {
        fprintf(stderr, __ERR__"Error: angka tidak terdeteksi."__END_COLOR__);
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
        fprintf(stderr, __ERR__"Error: parameter pembagian(\"null\", \"null\");."__END_COLOR__);
        exit(1);
    }
    if(isdigit(part_number_one[i]) == 0 || isdigit(part_number_two[i]) == 0) {
        fprintf(stderr, __ERR__"Error: angka tidak terdeteksi."__END_COLOR__);
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
        fprintf(stderr, __ERR__"Error: parameter pertambahanDesimal(\"null\", \"null\");."__END_COLOR__);
        exit(1);
    }
    if(isdigit(part_number_one[i]) == 0 || isdigit(part_number_two[i]) == 0) {
        fprintf(stderr, __ERR__"Error: angka tidak terdeteksi."__END_COLOR__);
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
        fprintf(stderr, __ERR__"Error: parameter penguranganDesimal(\"null\", \"null\");."__END_COLOR__);
        exit(1);
    }
    if(isdigit(part_number_one[i]) == 0 || isdigit(part_number_two[i]) == 0) {
        fprintf(stderr, __ERR__"Error: angka tidak terdeteksi."__END_COLOR__);
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
        fprintf(stderr, __ERR__"Error: parameter perkalianDesimal(\"null\", \"null\");."__END_COLOR__);
        exit(1);
    }
    if(isdigit(part_number_one[i]) == 0 || isdigit(part_number_two[i]) == 0) {
        fprintf(stderr, __ERR__"Error: angka tidak terdeteksi."__END_COLOR__);
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
        fprintf(stderr, __ERR__"Error: parameter pembagianDesimal(\"null\", \"null\");."__END_COLOR__);
        exit(1);
    }
    if(isdigit(part_number_one[i]) == 0 || isdigit(part_number_two[i]) == 0) {
        fprintf(stderr, __ERR__"Error: angka tidak terdeteksi."__END_COLOR__);
        exit(1);
    } else {
        const double _C_ONE_NUM_ = atof(part_number_one);
        const double _C_TWO_NUM_ = atof(part_number_two);
        return _C_ONE_NUM_ / _C_TWO_NUM_;
    }
}

void autoKetik(char *text_output, char *output_delay_time) {
    int i = 0;
    if(strlen(output_delay_time) == 0 || strlen(text_output) == 0) {
        fprintf(stderr, __ERR__"Error: text/delay time null"__END_COLOR__);
        exit(1);
    } else if (isdigit(output_delay_time[i]) == 0) {
        fprintf(stderr, __ERR__"Error: angka tidak terdeteksi."__END_COLOR__);
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
    int _color_found_ = false, i = 0;

    const char COLOR_COLLECTION[__MAX_ARRAY__][__MAX_ARRAY__] =
    {
        "warnaPutih", "warnaHitam", "warnaMerah","warnaHijau", "warnaKuning",
        "warnaBiru", "warnaUngu", "warnaAqua"
    };

    const char COLOR_COLLECTION_CODE[__MAX_ARRAY__][__MAX_ARRAY__] =
    {
        "\033[37m", "\033[30m", "\033[31m", "\033[32m", "\033[33m",
        "\033[34m", "\033[35m", "\033[36m"
    };

    if(strlen(text_output) == 0 || strlen(color_code) == 0 || strlen(output_delay_time) == 0) {
        fprintf(stderr, __ERR__"Error: text/delay time/kode warna tidak terdeteksi."__END_COLOR__);
        exit(1);
    } else if(isdigit(output_delay_time[i]) == 0 || isalpha(color_code[i]) == 0) {
        fprintf(stderr, __ERR__"Error: angka atau warna tidak terdeteksi."__END_COLOR__);
        exit(1);
    } else {
        for(i = 0; i < __MAX_ARRAY__; ++i) {
            if(strcasecmp(color_code, COLOR_COLLECTION[i-1]) == 0) {
                _color_found_ = true;
                break;
            }
        }
    }

    if(_color_found_) {
        color_code = COLOR_COLLECTION_CODE[i-1];
    } else {
        fprintf(stderr, __ERR__"Error: '%s'ktidak ditemukan."__END_COLOR__, color_code);
        exit(1);
    }

    int output_delay_time_ms = atoi(output_delay_time);
    for(i = 0; i < strlen(text_output); ++i) {
        printf("%s%c"__Auto_WRITE_End__, color_code, text_output[i]);
        fflush(stdout);
        usleep(output_delay_time_ms);
    }
}

int angkaGanjil(char *part_number_one) {
    int i = 0;
    if(strlen(part_number_one) == 0) {
        fprintf(stderr, __ERR__"Error: parameter angkaGanjil(\"null\");."__END_COLOR__);
        exit(1);
    } else if(isdigit(part_number_one[i]) == 0) {
        fprintf(stderr, __ERR__"Error: angka tidak terdeteksi."__END_COLOR__);
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
        fprintf(stderr, __ERR__"Error: parameter angkaGenap(\"null\");."__END_COLOR__);
        exit(1);
    } else if(isdigit(part_number_one[i]) == 0) {
        fprintf(stderr, __ERR__"Error: angka tidak terdeteksi."__END_COLOR__);
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
        fprintf(stderr, __ERR__"Error: parameter cekAngkaGanjil(\"null\", \"null\", \"null\", 0);."__END_COLOR__);
        exit(1);
    } else if(isdigit(part_number_one[i]) == 0) {
        fprintf(stderr, __ERR__"Error: angka tidak terdeteksi."__END_COLOR__);
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
            fprintf(stderr, __ERR__"Error: pilihan untuk '%d' tidak ada."__END_COLOR__, IS_ADD_NUMBER);
            exit(1);
        }
        return _MIXED_NUM_ARRCHAR_;
    }
}

char* cekAngkaGenap(char *part_number_one, char *is_odd_num, char *non_odd_num, const int IS_ADD_NUMBER) {
    int i = 0;
    if(strlen(part_number_one) == 0 || strlen(is_odd_num) == 0 || strlen(non_odd_num) == 0) {
        fprintf(stderr, __ERR__"Error: parameter cekAngkaGenap(\"null\", \"null\", \"null\", 0);."__END_COLOR__);
        exit(1);
    } else if(isdigit(part_number_one[i]) == 0) {
        fprintf(stderr, __ERR__"Error: angka tidak terdeteksi."__END_COLOR__);
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
            fprintf(stderr, __ERR__"Error: pilihan untuk '%d' tidak ada."__END_COLOR__, IS_ADD_NUMBER);
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
        fprintf(stderr, __ERR__"Error: parameter cekPalindrome(\"null\", \"null\");."__END_COLOR__);
        exit(1);
    } else if(isdigit(start_polindrome_num[i]) == 0 || isdigit(end_polindrome_num[i]) == 0) {
        fprintf(stderr, __ERR__"Error: angka tidak terdeteksi."__END_COLOR__);
        exit(1);
    } else if(end_polindrome > start_polindrome) {
        fprintf(stderr, __ERR__"Error: 'END' polindrome tidak boleh lebih besar dari 'START'"__END_COLOR__);
        exit(1);
    } else {
        for(int i = start_polindrome; i < end_polindrome; ++i) {
            if(_CHECK_PALINDROME_(i)) printf("- %d\n", i);
        }
    }
}

int jeda(int pause_time) {
    if(pause_time < 0 || pause_time == 0) {
        fprintf(stderr, __ERR__"Error: \033[1m'jeda'\033[0m tidak dapat kurang dari 0, atau 0."__END_COLOR__);
        exit(1);
    } else {
        return sleep(pause_time);
    }
}

int jedaCepat(int pause_time_ms) {
    if(pause_time_ms < 0 || pause_time_ms == 0) {
        fprintf(stderr, __ERR__"Error: \033[1m'jedaCepat'\033[0m tidak dapat kurang dari 0, atau 0."__END_COLOR__);
        exit(1);
    } else {
        return fflush(stdout) + usleep(pause_time_ms);
    }
}

void kelipatan(char *part_number_one) {
    int i = 0;
    if(strlen(part_number_one) == false) {
        fprintf(stderr, __ERR__"Error: parameter kelipatan(\"null\");."__END_COLOR__);
        exit(1);
    }
    if(isdigit(part_number_one[i]) == 0) {
        fprintf(stderr, __ERR__"Error: angka tidak terdeteksi."__END_COLOR__);
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
        fprintf(stderr, __ERR__"Error: parameter newLine(\"null\");."__END_COLOR__);
        exit(1);
    } else if(isalpha(_USE_SPACE_[i])) {
        fprintf(stderr, __ERR__"Error: huruf tidak terdeteksi."__END_COLOR__);
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
        fprintf(stderr, __ERR__"Error: parameter tabelPertambahan(\"null\");."__END_COLOR__);
        exit(1);
    }
    if(isdigit(part_number_one[i]) == 0) {
        fprintf(stderr, __ERR__"Error: angka tidak terdeteksi."__END_COLOR__);
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
        fprintf(stderr, __ERR__"Error: parameter tabelPengurangan(\"null\");."__END_COLOR__);
        exit(1);
    }
    if(isdigit(part_number_one[i]) == 0) {
        fprintf(stderr, __ERR__"Error: angka tidak terdeteksi."__END_COLOR__);
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
        fprintf(stderr, __ERR__"Error: parameter tabelPerkalian(\"null\");."__END_COLOR__);
        exit(1);
    }
    if(isdigit(part_number_one[i]) == 0) {
        fprintf(stderr, __ERR__"Error: angka tidak terdeteksi."__END_COLOR__);
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
        fprintf(stderr, __ERR__"Error: parameter tabelPembagian(\"null\");."__END_COLOR__);
        exit(1);
    }
    if(isdigit(part_number_one[i]) == 0) {
        fprintf(stderr, __ERR__"Error: angka tidak terdeteksi."__END_COLOR__);
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
    if(strlen(INCOMING_STRING) == 0 || POSITION_NUMBER >= 0 && POSITION_NUMBER <= 0) {
        fprintf(stderr, __ERR__"Error: parameter cekPosisiHuruf(\"null\", 0);."__END_COLOR__);
        exit(1);
    } else if(isalpha(INCOMING_STRING[i]) == false) {
        fprintf(stderr, __ERR__"Error: '%s' bukan huruf."__END_COLOR__, INCOMING_STRING);
        exit(1);
    } else {
        int _current_letter_position_ = POSITION_NUMBER;
        int length = strlen(INCOMING_STRING);
        if(length < _current_letter_position_) {
            fprintf(stderr, __ERR__"Error: panjang string lebih kecil dibanding posisi huruf."__END_COLOR__);
            exit(1);
        }
        for(int j = 0; j < length; j++) {
            if(_current_letter_position_ == j + 1) {
                return _current_letter_position_;
            }
        }
    }
}

char displayPosisiHuruf(const char *_INCOMING_STRING_, const int POSITION_NUMBER) {
    int i = 0;
    if(strlen(_INCOMING_STRING_) == 0 || POSITION_NUMBER >= 0 && POSITION_NUMBER <= 0) {
        fprintf(stderr, __ERR__"Error: parameter displayPosisiHuruf(\"null\", 0);."__END_COLOR__);
        exit(1);
    } else if(isalpha(_INCOMING_STRING_[i]) == false) {
        fprintf(stderr, __ERR__"Error: '%s' bukan huruf."__END_COLOR__, _INCOMING_STRING_);
        exit(1);
    } else {
        int _current_letter_position_ = POSITION_NUMBER;
        int  length = strlen(_INCOMING_STRING_);
        if(length < _current_letter_position_) {
            fprintf(stderr, __ERR__"Error: panjang string lebih kecil dibanding posisi huruf."__END_COLOR__);
            exit(1);
        }
        for(int j = 0; j < length; j++) {
            if(_current_letter_position_ == j + 1) {
                return _INCOMING_STRING_[j];
            }
        }
    }
}