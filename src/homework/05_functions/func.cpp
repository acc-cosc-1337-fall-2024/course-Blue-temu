#include "func.h"
#include <string>
//add include statements

//add function code here

double get_gc_content(const std::string& dna) {
    double count = 0;
    for (char nucleotide : dna) {
        if (nucleotide == 'C' || nucleotide == 'G') {
            count++;
        }
    }
    return (count / dna.size()) * 100;
}

std::string get_reverse_string(std::string str) {
    for (int i = 0; i < str.size() / 2; i++) {
        char temp = str[i];
        str[i] = str[str.size() - i - 1];
        str[str.size() - i - 1] = temp;
    }
    return str;
}

std::string get_dna_complement(std::string dna) {
    dna = get_reverse_string(dna);
    for (char& nucleotide : dna) {
        switch (nucleotide) {
            case 'A':
                nucleotide = 'T';
                break;
            case 'T':
                nucleotide = 'A';
                break;
            case 'C':
                nucleotide = 'G';
                break;
            case 'G':
                nucleotide = 'C';
                break;
            default:
                break;
        }
    }
    return dna;
}