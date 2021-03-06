#pragma once

void init_memory(void);

void print_memory(void);

/**
 * Liigutab koodiviita ühe võrra paremale
 */
void move_left(void);

/**
 * Liigutab koodiviita ühe võrra vasakule
 */
void move_right(void);

/**
 * Suurendab koodiviida all olevat mäluauku ühe võrra
 */
void inc(void);

/**
 * Vähendab koodiviida all olevat mäluauku ühe võrra
 */
void dec(void);


void print(char *result);
void input(void);

/**
 * Vasaku kantsulu tsükkel
 */
void loop_left(int *i, const char* src, int code_length);

/**
 * Parema kantsulu tsükkel
 */
void loop_right(int *i, const char* src, int code_length);
