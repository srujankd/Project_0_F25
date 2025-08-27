//Srujan Kumar Damaraju - CIS 3207 - Lab 08/27/2025

void rand_string(char *s, size_t size) {

    // setting all valid chars that can be randomly picked from
    const char valid_char[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    
    // generating random valid chars for indicated length of str
    for(size_t i = 0; i < size; i++) {
        s[i] = valid_char[rand() % (sizeof(valid_char)-1)];
    }

    // adds final end of str value
    s[size] = '\0';
}