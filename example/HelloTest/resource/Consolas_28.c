#include "egui.h"

static const unsigned char _32[] = {
0, 255, 0, 109, };
static const unsigned char _48[] = {
0, 95, 73, 1, 197, 1, 255, 2, 197, 1, 73, 1, 0, 6, 197, 1, 255, 6, 153, 1, 0, 4, 111, 1, 255, 2, 73, 1, 0, 2, 73, 1, 255, 2, 73, 1, 0, 3, 255, 2, 73, 1, 0, 4, 111, 1, 255, 1, 197, 1, 0, 2, 73, 1, 255, 1, 197, 1, 0, 5, 197, 1, 255, 2, 0, 2, 111, 1, 255, 1, 111, 1, 0, 3, 36, 1, 255, 4, 36, 1, 0, 1, 153, 1, 255, 1, 111, 1, 0, 2, 73, 1, 255, 2, 111, 1, 197, 1, 255, 1, 73, 1, 0, 1, 153, 1, 255, 1, 73, 1, 0, 1, 153, 1, 255, 2, 73, 1, 0, 1, 153, 1, 255, 1, 73, 1, 0, 1, 153, 1, 255, 1, 111, 1, 197, 1, 255, 1, 197, 1, 36, 1, 0, 2, 153, 1, 255, 1, 73, 1, 0, 1, 111, 1, 255, 3, 153, 1, 0, 4, 197, 1, 255, 1, 36, 1, 0, 1, 73, 1, 255, 2, 111, 1, 0, 4, 36, 1, 255, 2, 0, 3, 255, 2, 36, 1, 0, 4, 111, 1, 255, 1, 153, 1, 0, 3, 153, 1, 255, 1, 197, 1, 36, 1, 0, 2, 111, 1, 255, 2, 36, 1, 0, 4, 197, 1, 255, 6, 111, 1, 0, 6, 153, 1, 255, 3, 197, 1, 73, 1, 0, 81, };
static const unsigned char _49[] = {
0, 96, 111, 1, 255, 2, 111, 1, 0, 6, 36, 1, 197, 1, 255, 4, 111, 1, 0, 6, 255, 3, 73, 1, 153, 1, 255, 1, 111, 1, 0, 6, 153, 1, 111, 1, 0, 2, 153, 1, 255, 1, 111, 1, 0, 10, 153, 1, 255, 1, 111, 1, 0, 10, 153, 1, 255, 1, 111, 1, 0, 10, 153, 1, 255, 1, 111, 1, 0, 10, 153, 1, 255, 1, 111, 1, 0, 10, 153, 1, 255, 1, 111, 1, 0, 10, 153, 1, 255, 1, 111, 1, 0, 10, 153, 1, 255, 1, 111, 1, 0, 10, 153, 1, 255, 1, 111, 1, 0, 10, 153, 1, 255, 1, 111, 1, 0, 6, 153, 1, 255, 9, 0, 3, 153, 1, 255, 9, 0, 79, };
static const unsigned char _50[] = {
0, 95, 153, 1, 255, 3, 197, 1, 73, 1, 0, 5, 36, 1, 197, 1, 255, 6, 73, 1, 0, 4, 153, 1, 255, 1, 153, 1, 36, 1, 0, 1, 36, 1, 197, 1, 255, 2, 0, 4, 36, 1, 153, 1, 0, 5, 255, 2, 73, 1, 0, 10, 255, 2, 73, 1, 0, 10, 255, 2, 36, 1, 0, 9, 111, 1, 255, 1, 197, 1, 0, 9, 36, 1, 255, 2, 73, 1, 0, 8, 36, 1, 255, 2, 111, 1, 0, 8, 36, 1, 255, 2, 111, 1, 0, 8, 36, 1, 255, 2, 111, 1, 0, 8, 36, 1, 255, 2, 111, 1, 0, 8, 73, 1, 255, 2, 73, 1, 0, 9, 255, 10, 36, 1, 0, 2, 255, 10, 36, 1, 0, 78, };
static const unsigned char _51[] = {
0, 94, 73, 1, 197, 1, 255, 3, 197, 1, 36, 1, 0, 5, 73, 1, 255, 7, 73, 1, 0, 4, 73, 1, 153, 1, 36, 1, 0, 2, 36, 1, 197, 1, 255, 1, 197, 1, 0, 10, 36, 1, 255, 2, 0, 10, 36, 1, 255, 1, 197, 1, 0, 9, 36, 1, 197, 1, 255, 1, 36, 1, 0, 6, 197, 1, 255, 3, 197, 1, 36, 1, 0, 7, 197, 1, 255, 5, 73, 1, 0, 9, 36, 1, 153, 1, 255, 2, 36, 1, 0, 10, 153, 1, 255, 1, 153, 1, 0, 10, 73, 1, 255, 1, 153, 1, 0, 10, 153, 1, 255, 1, 111, 1, 0, 8, 36, 1, 153, 1, 255, 2, 0, 4, 153, 1, 255, 7, 36, 1, 0, 4, 153, 1, 255, 4, 197, 1, 73, 1, 0, 82, };
static const unsigned char _52[] = {
0, 98, 255, 3, 73, 1, 0, 8, 153, 1, 255, 3, 73, 1, 0, 7, 73, 1, 255, 1, 197, 2, 255, 1, 73, 1, 0, 7, 255, 2, 36, 1, 197, 1, 255, 1, 73, 1, 0, 6, 111, 1, 255, 1, 111, 1, 0, 1, 197, 1, 255, 1, 73, 1, 0, 5, 36, 1, 255, 1, 197, 1, 0, 2, 197, 1, 255, 1, 73, 1, 0, 5, 197, 1, 255, 1, 36, 1, 0, 2, 197, 1, 255, 1, 73, 1, 0, 4, 111, 1, 255, 1, 111, 1, 0, 3, 197, 1, 255, 1, 73, 1, 0, 3, 36, 1, 255, 1, 197, 1, 0, 4, 197, 1, 255, 1, 73, 1, 0, 3, 197, 1, 255, 1, 36, 1, 0, 4, 197, 1, 255, 1, 73, 1, 0, 2, 36, 1, 255, 11, 197, 1, 36, 1, 255, 11, 197, 1, 0, 8, 197, 1, 255, 1, 73, 1, 0, 10, 197, 1, 255, 1, 73, 1, 0, 10, 197, 1, 255, 1, 73, 1, 0, 80, };
static const unsigned char _53[] = {
0, 93, 73, 1, 255, 8, 0, 4, 73, 1, 255, 8, 0, 4, 73, 1, 255, 1, 153, 1, 0, 10, 73, 1, 255, 1, 153, 1, 0, 10, 73, 1, 255, 1, 153, 1, 0, 10, 73, 1, 255, 1, 153, 1, 0, 10, 73, 1, 255, 5, 197, 1, 73, 1, 0, 5, 73, 1, 255, 7, 197, 1, 0, 9, 36, 1, 153, 1, 255, 2, 111, 1, 0, 10, 153, 1, 255, 1, 153, 1, 0, 10, 111, 1, 255, 1, 153, 1, 0, 10, 197, 1, 255, 1, 111, 1, 0, 8, 36, 1, 197, 1, 255, 2, 0, 4, 111, 1, 255, 6, 197, 1, 36, 1, 0, 4, 111, 1, 255, 4, 197, 1, 73, 1, 0, 82, };
static const unsigned char _54[] = {
0, 96, 36, 1, 153, 1, 197, 1, 255, 3, 0, 6, 153, 1, 255, 6, 0, 5, 153, 1, 255, 2, 111, 1, 36, 1, 0, 7, 73, 1, 255, 1, 197, 1, 0, 10, 153, 1, 255, 1, 73, 1, 0, 10, 255, 2, 0, 10, 36, 1, 255, 1, 197, 1, 73, 1, 197, 1, 255, 3, 197, 1, 36, 1, 0, 3, 36, 1, 255, 9, 36, 1, 0, 2, 73, 1, 255, 2, 153, 1, 36, 1, 0, 2, 36, 1, 197, 1, 255, 1, 197, 1, 0, 2, 36, 1, 255, 1, 197, 1, 0, 5, 36, 1, 255, 2, 0, 2, 36, 1, 255, 1, 197, 1, 0, 6, 255, 2, 0, 3, 197, 1, 255, 1, 36, 1, 0, 4, 36, 1, 255, 2, 0, 3, 111, 1, 255, 1, 197, 1, 36, 1, 0, 2, 36, 1, 255, 2, 111, 1, 0, 4, 197, 1, 255, 6, 197, 1, 0, 6, 153, 1, 255, 3, 197, 1, 73, 1, 0, 81, };
static const unsigned char _55[] = {
0, 92, 73, 1, 255, 10, 36, 1, 0, 1, 73, 1, 255, 10, 36, 1, 0, 9, 73, 1, 255, 1, 197, 1, 0, 10, 197, 1, 255, 1, 73, 1, 0, 9, 73, 1, 255, 1, 197, 1, 0, 10, 197, 1, 255, 1, 73, 1, 0, 9, 73, 1, 255, 1, 197, 1, 0, 10, 197, 1, 255, 1, 73, 1, 0, 9, 73, 1, 255, 1, 197, 1, 0, 10, 197, 1, 255, 1, 73, 1, 0, 9, 73, 1, 255, 1, 197, 1, 0, 10, 197, 1, 255, 1, 73, 1, 0, 9, 73, 1, 255, 1, 197, 1, 0, 10, 197, 1, 255, 1, 73, 1, 0, 9, 111, 1, 255, 1, 197, 1, 0, 85, };
static const unsigned char _56[] = {
0, 94, 36, 1, 153, 1, 255, 4, 153, 1, 36, 1, 0, 4, 36, 1, 255, 8, 36, 1, 0, 3, 197, 1, 255, 1, 153, 1, 0, 3, 36, 1, 197, 1, 255, 1, 111, 1, 0, 3, 255, 2, 0, 5, 73, 1, 255, 1, 153, 1, 0, 3, 197, 1, 255, 1, 73, 1, 0, 4, 153, 1, 255, 1, 111, 1, 0, 3, 73, 1, 255, 2, 153, 1, 36, 2, 153, 1, 255, 1, 197, 1, 0, 5, 36, 1, 197, 1, 255, 4, 153, 1, 0, 6, 36, 1, 153, 1, 255, 4, 153, 1, 0, 5, 36, 1, 255, 2, 153, 1, 36, 1, 73, 1, 255, 3, 0, 4, 255, 2, 153, 1, 0, 3, 36, 1, 255, 2, 153, 1, 0, 2, 73, 1, 255, 2, 0, 5, 73, 1, 255, 2, 0, 2, 73, 1, 255, 2, 0, 5, 73, 1, 255, 2, 0, 2, 36, 1, 255, 2, 153, 1, 0, 3, 36, 1, 197, 1, 255, 1, 153, 1, 0, 3, 111, 1, 255, 7, 197, 1, 0, 5, 73, 1, 197, 1, 255, 3, 197, 1, 111, 1, 0, 81, };
static const unsigned char _57[] = {
0, 94, 36, 1, 153, 1, 255, 3, 197, 1, 36, 1, 0, 5, 36, 1, 255, 7, 73, 1, 0, 4, 255, 2, 153, 1, 0, 3, 111, 1, 255, 2, 0, 3, 73, 1, 255, 1, 197, 1, 0, 5, 153, 1, 255, 1, 111, 1, 0, 2, 111, 1, 255, 1, 111, 1, 0, 5, 73, 1, 255, 1, 153, 1, 0, 2, 111, 1, 255, 1, 153, 1, 0, 5, 36, 1, 255, 1, 197, 1, 0, 2, 36, 1, 255, 2, 111, 1, 0, 3, 73, 1, 197, 1, 255, 1, 197, 1, 0, 3, 153, 1, 255, 8, 197, 1, 0, 4, 73, 1, 197, 1, 255, 3, 153, 1, 73, 1, 255, 1, 197, 1, 0, 10, 73, 1, 255, 1, 153, 1, 0, 10, 153, 1, 255, 1, 73, 1, 0, 9, 111, 1, 255, 1, 197, 1, 0, 8, 73, 1, 197, 1, 255, 2, 36, 1, 0, 4, 111, 1, 255, 6, 36, 1, 0, 5, 111, 1, 255, 3, 197, 1, 73, 1, 0, 83, };
static const unsigned char _58[] = {
0, 135, 73, 1, 255, 1, 153, 1, 0, 10, 197, 1, 255, 2, 73, 1, 0, 9, 197, 1, 255, 2, 73, 1, 0, 9, 73, 1, 255, 1, 197, 1, 0, 62, 73, 1, 255, 1, 153, 1, 0, 10, 197, 1, 255, 2, 73, 1, 0, 9, 197, 1, 255, 2, 73, 1, 0, 9, 73, 1, 255, 1, 197, 1, 0, 83, };
static const unsigned char _60[] = {
0, 126, 197, 1, 73, 1, 0, 9, 36, 1, 197, 1, 255, 1, 197, 1, 0, 8, 36, 1, 255, 2, 153, 1, 0, 8, 111, 1, 255, 2, 73, 1, 0, 8, 153, 1, 255, 2, 36, 1, 0, 8, 197, 1, 255, 1, 197, 1, 36, 1, 0, 8, 197, 1, 255, 1, 197, 1, 0, 11, 197, 1, 255, 1, 197, 1, 36, 1, 0, 10, 153, 1, 255, 2, 36, 1, 0, 10, 111, 1, 255, 2, 73, 1, 0, 10, 36, 1, 255, 2, 153, 1, 0, 10, 36, 1, 197, 1, 255, 1, 197, 1, 0, 11, 197, 1, 73, 1, 0, 80, };
static const unsigned char _62[] = {
0, 120, 111, 1, 153, 1, 0, 11, 197, 1, 255, 1, 197, 1, 0, 11, 197, 1, 255, 1, 197, 1, 36, 1, 0, 10, 153, 1, 255, 2, 36, 1, 0, 10, 111, 1, 255, 2, 73, 1, 0, 10, 73, 1, 255, 2, 111, 1, 0, 10, 73, 1, 255, 2, 111, 1, 0, 8, 36, 1, 255, 2, 111, 1, 0, 8, 111, 1, 255, 2, 73, 1, 0, 8, 153, 1, 255, 2, 36, 1, 0, 8, 197, 1, 255, 1, 197, 1, 36, 1, 0, 8, 197, 1, 255, 1, 197, 1, 0, 10, 111, 1, 153, 1, 0, 86, };
static const unsigned char _97[] = {
0, 133, 36, 1, 153, 1, 255, 3, 197, 1, 111, 1, 0, 5, 36, 1, 255, 7, 197, 1, 0, 4, 36, 1, 197, 1, 73, 1, 0, 3, 73, 1, 255, 2, 73, 1, 0, 10, 153, 1, 255, 1, 111, 1, 0, 10, 111, 1, 255, 1, 111, 1, 0, 4, 36, 1, 197, 1, 255, 6, 111, 1, 0, 3, 73, 1, 255, 8, 111, 1, 0, 3, 255, 2, 153, 1, 0, 4, 111, 1, 255, 1, 111, 1, 0, 2, 36, 1, 255, 2, 36, 1, 0, 4, 153, 1, 255, 1, 111, 1, 0, 3, 255, 2, 111, 1, 0, 2, 36, 1, 197, 1, 255, 2, 111, 1, 0, 3, 153, 1, 255, 6, 197, 1, 255, 1, 111, 1, 0, 4, 153, 1, 255, 3, 197, 1, 36, 1, 73, 1, 255, 1, 111, 1, 0, 79, };
static const unsigned char _99[] = {
0, 135, 111, 1, 197, 1, 255, 2, 197, 1, 111, 1, 0, 6, 197, 1, 255, 6, 73, 1, 0, 4, 197, 1, 255, 1, 197, 1, 73, 1, 0, 2, 36, 1, 111, 1, 73, 1, 0, 3, 73, 1, 255, 2, 0, 10, 153, 1, 255, 1, 111, 1, 0, 10, 197, 1, 255, 1, 36, 1, 0, 10, 197, 1, 255, 1, 36, 1, 0, 10, 153, 1, 255, 1, 73, 1, 0, 10, 111, 1, 255, 1, 197, 1, 0, 10, 36, 1, 255, 2, 197, 1, 36, 1, 0, 2, 36, 1, 111, 1, 73, 1, 0, 4, 73, 1, 255, 7, 73, 1, 0, 5, 36, 1, 153, 1, 255, 3, 197, 1, 111, 1, 0, 80, };
static const unsigned char _100[] = {
0, 74, 111, 1, 255, 1, 111, 1, 0, 10, 111, 1, 255, 1, 111, 1, 0, 10, 111, 1, 255, 1, 111, 1, 0, 10, 111, 1, 255, 1, 111, 1, 0, 10, 111, 1, 255, 1, 111, 1, 0, 5, 73, 1, 197, 1, 255, 5, 111, 1, 0, 4, 153, 1, 255, 7, 111, 1, 0, 3, 111, 1, 255, 2, 73, 1, 0, 2, 36, 1, 153, 1, 255, 1, 111, 1, 0, 3, 255, 2, 36, 1, 0, 4, 111, 1, 255, 1, 111, 1, 0, 2, 36, 1, 255, 1, 197, 1, 0, 5, 111, 1, 255, 1, 111, 1, 0, 2, 73, 1, 255, 1, 153, 1, 0, 5, 111, 1, 255, 1, 111, 1, 0, 2, 73, 1, 255, 1, 153, 1, 0, 5, 111, 1, 255, 1, 111, 1, 0, 2, 73, 1, 255, 1, 197, 1, 0, 5, 153, 1, 255, 1, 111, 1, 0, 2, 36, 1, 255, 2, 0, 4, 111, 1, 255, 2, 111, 1, 0, 3, 197, 1, 255, 1, 153, 1, 0, 2, 111, 1, 255, 3, 111, 1, 0, 3, 73, 1, 255, 5, 197, 1, 73, 1, 255, 1, 111, 1, 0, 4, 73, 1, 197, 1, 255, 2, 153, 1, 0, 1, 73, 1, 255, 1, 111, 1, 0, 79, };
static const unsigned char _105[] = {
0, 70, 73, 1, 255, 1, 197, 1, 36, 1, 0, 9, 197, 1, 255, 2, 111, 1, 0, 9, 73, 1, 255, 1, 197, 1, 36, 1, 0, 32, 73, 1, 255, 5, 73, 1, 0, 6, 73, 1, 255, 5, 73, 1, 0, 10, 197, 1, 255, 1, 73, 1, 0, 10, 197, 1, 255, 1, 73, 1, 0, 10, 197, 1, 255, 1, 73, 1, 0, 10, 197, 1, 255, 1, 73, 1, 0, 10, 197, 1, 255, 1, 73, 1, 0, 10, 197, 1, 255, 1, 73, 1, 0, 10, 197, 1, 255, 1, 73, 1, 0, 10, 197, 1, 255, 1, 73, 1, 0, 6, 153, 1, 255, 8, 197, 1, 0, 3, 153, 1, 255, 8, 197, 1, 0, 79, };
static const unsigned char _107[] = {
0, 67, 153, 1, 255, 1, 111, 1, 0, 10, 153, 1, 255, 1, 111, 1, 0, 10, 153, 1, 255, 1, 111, 1, 0, 10, 153, 1, 255, 1, 111, 1, 0, 10, 153, 1, 255, 1, 111, 1, 0, 10, 153, 1, 255, 1, 111, 1, 0, 4, 197, 1, 255, 1, 197, 1, 0, 3, 153, 1, 255, 1, 111, 1, 0, 3, 197, 1, 255, 1, 197, 1, 0, 4, 153, 1, 255, 1, 111, 1, 0, 2, 197, 1, 255, 1, 197, 1, 0, 5, 153, 1, 255, 1, 111, 1, 0, 1, 153, 1, 255, 1, 197, 1, 0, 6, 153, 1, 255, 1, 111, 1, 153, 1, 255, 1, 197, 1, 0, 7, 153, 1, 255, 1, 197, 1, 255, 2, 0, 8, 153, 1, 255, 1, 111, 1, 153, 1, 255, 1, 153, 1, 0, 7, 153, 1, 255, 1, 111, 1, 0, 1, 197, 1, 255, 1, 153, 1, 0, 6, 153, 1, 255, 1, 111, 1, 0, 2, 255, 2, 111, 1, 0, 5, 153, 1, 255, 1, 111, 1, 0, 2, 36, 1, 255, 2, 111, 1, 0, 4, 153, 1, 255, 1, 111, 1, 0, 3, 73, 1, 255, 2, 73, 1, 0, 3, 153, 1, 255, 1, 111, 1, 0, 4, 111, 1, 255, 2, 36, 1, 0, 78, };
static const unsigned char _108[] = {
0, 67, 73, 1, 255, 5, 73, 1, 0, 6, 73, 1, 255, 5, 73, 1, 0, 10, 197, 1, 255, 1, 73, 1, 0, 10, 197, 1, 255, 1, 73, 1, 0, 10, 197, 1, 255, 1, 73, 1, 0, 10, 197, 1, 255, 1, 73, 1, 0, 10, 197, 1, 255, 1, 73, 1, 0, 10, 197, 1, 255, 1, 73, 1, 0, 10, 197, 1, 255, 1, 73, 1, 0, 10, 197, 1, 255, 1, 73, 1, 0, 10, 197, 1, 255, 1, 73, 1, 0, 10, 197, 1, 255, 1, 73, 1, 0, 10, 197, 1, 255, 1, 73, 1, 0, 10, 197, 1, 255, 1, 73, 1, 0, 10, 197, 1, 255, 1, 73, 1, 0, 6, 153, 1, 255, 8, 197, 1, 0, 3, 153, 1, 255, 8, 197, 1, 0, 79, };
static const unsigned char _115[] = {
0, 134, 73, 1, 197, 1, 255, 3, 153, 1, 0, 6, 153, 1, 255, 6, 111, 1, 0, 4, 36, 1, 255, 2, 36, 1, 0, 2, 36, 1, 111, 2, 0, 4, 73, 1, 255, 1, 153, 1, 0, 10, 36, 1, 255, 2, 153, 1, 36, 1, 0, 9, 73, 1, 255, 4, 111, 1, 0, 9, 111, 1, 197, 1, 255, 3, 73, 1, 0, 9, 36, 1, 153, 1, 255, 2, 36, 1, 0, 10, 197, 1, 255, 1, 73, 1, 0, 3, 111, 1, 153, 1, 36, 1, 0, 3, 73, 1, 255, 2, 36, 1, 0, 3, 111, 1, 255, 7, 153, 1, 0, 5, 111, 1, 197, 1, 255, 3, 197, 1, 73, 1, 0, 81, };
static const LATTICE lattice_array[] = {
        {32, 13, _32},
        {48, 13, _48},
        {49, 13, _49},
        {50, 13, _50},
        {51, 13, _51},
        {52, 13, _52},
        {53, 13, _53},
        {54, 13, _54},
        {55, 13, _55},
        {56, 13, _56},
        {57, 13, _57},
        {58, 13, _58},
        {60, 13, _60},
        {62, 13, _62},
        {97, 13, _97},
        {99, 13, _99},
        {100, 13, _100},
        {105, 13, _105},
        {107, 13, _107},
        {108, 13, _108},
        {115, 13, _115},
};
extern const LATTICE_FONT_INFO Consolas_28;
const LATTICE_FONT_INFO Consolas_28 ={
    28,
    21,
    lattice_array
};