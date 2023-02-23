#ifndef __HEADER__
#define __HEADER__
#include "marchingCubes.h"
#endif

int CaseRotationFlip[256][3] =
 {{1, 24, 1},
  {2, 19, 1},
  {2, 17, 1},
  {3, 17, 1},
  {2, 24, 1},
  {4, 24, 1},
  {3, 24, 1},
  {6, 10, 1},
  {2, 15, 1},
  {3, 19, 1},
  {4, 17, 1},
  {6, 9, 1},
  {3, 9, 1},
  {6, 8, 1},
  {6, 1, 1},
  {9, 23, -1},
  {2, 20, 1},
  {3, 18, 1},
  {4, 7, 1},
  {6, 16, 1},
  {5, 24, 1},
  {7, 5, 1},
  {7, 24, 1},
  {12, 9, 1},
  {4, 20, 1},
  {6, 22, 1},
  {8, 24, 1},
  {10, 24, -1},
  {7, 9, 1},
  {15, 24, -1},
  {13, 20, -1},
  {6, 20, -1},
  {2, 21, 1},
  {4, 6, 1},
  {3, 16, 1},
  {6, 4, 1},
  {4, 16, 1},
  {8, 23, 1},
  {6, 14, 1},
  {10, 23, -1},
  {5, 21, 1},
  {7, 10, 1},
  {7, 16, 1},
  {15, 9, 1},
  {7, 2, 1},
  {13, 8, 1},
  {12, 23, -1},
  {6, 6, -1},
  {3, 6, 1},
  {6, 17, 1},
  {6, 18, 1},
  {9, 18, 1},
  {7, 4, 1},
  {13, 17, 1},
  {15, 18, 1},
  {6, 13, -1},
  {7, 6, 1},
  {12, 16, 1},
  {13, 18, 1},
  {6, 2, -1},
  {11, 24, 1},
  {7, 3, -1},
  {7, 12, -1},
  {3, 12, -1},
  {2, 23, 1},
  {5, 23, 1},
  {4, 23, 1},
  {7, 1, 1},
  {3, 14, 1},
  {7, 14, 1},
  {6, 21, 1},
  {15, 23, -1},
  {4, 15, 1},
  {7, 19, 1},
  {8, 19, 1},
  {13, 23, -1},
  {6, 11, 1},
  {12, 17, -1},
  {10, 19, -1},
  {6, 23, -1},
  {4, 12, 1},
  {7, 18, 1},
  {8, 22, 1},
  {13, 16, 1},
  {7, 13, 1},
  {11, 23, 1},
  {13, 21, 1},
  {7, 15, -1},
  {8, 21, 1},
  {13, 22, 1},
  {14, 24, -1},
  {8, 15, -1},
  {13, 11, 1},
  {7, 7, -1},
  {8, 12, -1},
  {4, 22, -1},
  {3, 23, 1},
  {7, 23, 1},
  {6, 24, 1},
  {12, 18, 1},
  {6, 7, 1},
  {13, 19, -1},
  {9, 24, 1},
  {6, 19, -1},
  {7, 21, 1},
  {11, 18, 1},
  {13, 24, 1},
  {7, 20, -1},
  {15, 16, -1},
  {7, 22, -1},
  {6, 15, -1},
  {3, 22, -1},
  {6, 3, 1},
  {15, 17, 1},
  {10, 22, -1},
  {6, 12, -1},
  {12, 24, 1},
  {7, 11, -1},
  {6, 5, -1},
  {3, 15, -1},
  {13, 10, -1},
  {7, 8, -1},
  {8, 20, -1},
  {4, 9, -1},
  {7, 17, -1},
  {5, 22, -1},
  {4, 18, -1},
  {2, 22, -1},
  {2, 22, 1},
  {4, 18, 1},
  {5, 22, 1},
  {7, 17, 1},
  {4, 9, 1},
  {8, 20, 1},
  {7, 8, 1},
  {13, 10, 1},
  {3, 15, 1},
  {6, 5, 1},
  {7, 11, 1},
  {12, 24, -1},
  {6, 12, 1},
  {10, 22, 1},
  {15, 17, -1},
  {6, 3, -1},
  {3, 22, 1},
  {6, 15, 1},
  {7, 22, 1},
  {15, 16, 1},
  {7, 20, 1},
  {13, 24, -1},
  {11, 18, -1},
  {7, 21, -1},
  {6, 19, 1},
  {9, 24, -1},
  {13, 19, 1},
  {6, 7, -1},
  {12, 18, -1},
  {6, 24, -1},
  {7, 23, -1},
  {3, 23, -1},
  {4, 22, 1},
  {8, 12, 1},
  {7, 7, 1},
  {13, 11, -1},
  {8, 15, 1},
  {14, 24, 1},
  {13, 22, -1},
  {8, 21, -1},
  {7, 15, 1},
  {13, 21, -1},
  {11, 23, -1},
  {7, 13, -1},
  {13, 16, -1},
  {8, 22, -1},
  {7, 18, -1},
  {4, 12, -1},
  {6, 23, 1},
  {10, 19, 1},
  {12, 17, 1},
  {6, 11, -1},
  {13, 23, 1},
  {8, 19, -1},
  {7, 19, -1},
  {4, 15, -1},
  {15, 23, 1},
  {6, 21, -1},
  {7, 14, -1},
  {3, 14, -1},
  {7, 1, -1},
  {4, 23, -1},
  {5, 23, -1},
  {2, 23, -1},
  {3, 12, 1},
  {7, 12, 1},
  {7, 3, 1},
  {11, 24, -1},
  {6, 2, 1},
  {13, 18, -1},
  {12, 16, -1},
  {7, 6, -1},
  {6, 13, 1},
  {15, 18, -1},
  {13, 17, -1},
  {7, 4, -1},
  {9, 18, -1},
  {6, 18, -1},
  {6, 17, -1},
  {3, 6, -1},
  {6, 6, 1},
  {12, 23, 1},
  {13, 8, -1},
  {7, 2, -1},
  {15, 9, -1},
  {7, 16, -1},
  {7, 10, -1},
  {5, 21, -1},
  {10, 23, 1},
  {6, 14, -1},
  {8, 23, -1},
  {4, 16, -1},
  {6, 4, -1},
  {3, 16, -1},
  {4, 6, -1},
  {2, 21, -1},
  {6, 20, 1},
  {13, 20, 1},
  {15, 24, 1},
  {7, 9, -1},
  {10, 24, 1},
  {8, 24, -1},
  {6, 22, -1},
  {4, 20, -1},
  {12, 9, -1},
  {7, 24, -1},
  {7, 5, -1},
  {5, 24, -1},
  {6, 16, -1},
  {4, 7, -1},
  {3, 18, -1},
  {2, 20, -1},
  {9, 23, 1},
  {6, 1, -1},
  {6, 8, -1},
  {3, 9, -1},
  {6, 9, -1},
  {4, 17, -1},
  {3, 19, -1},
  {2, 15, -1},
  {6, 10, -1},
  {3, 24, -1},
  {4, 24, -1},
  {2, 24, -1},
  {3, 17, -1},
  {2, 17, -1},
  {2, 19, -1},
  {1, 24, -1}};

size_t indexArray[8][3] =
{{0, 0, 0},
 {1, 0, 0},
 {1, 1, 0},
 {0, 1, 0},
 {0, 0, 1},
 {1, 0, 1},
 {1, 1, 1},
 {0, 1, 1}};

unsigned edgesLengths[254] =
  {3, 3, 6, 3, 0, 6, 9, 3, 6, 0, 9, 6, 9, 9, 6, 3, 6, 0, 9, 0,
   0, 0, 12, 0, 9, 0, 12, 0, 12, 0, 9, 3, 0, 6, 9, 0, 0, 9, 12,
   0, 0, 0, 12, 0, 0, 12, 9, 6, 9, 9, 6, 0, 0, 12, 9, 0, 12, 0,
   9, 0, 0, 0, 6, 3, 0, 0, 0, 6, 0, 9, 12, 0, 0, 0, 0, 9, 12, 12,
   9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 9, 12,
   9, 0, 6, 9, 0, 0, 0, 0, 12, 0, 9, 6, 9, 12, 12, 9, 12, 0, 9,
   6, 0, 0, 0, 0, 0, 0, 0, 3, 3, 0, 0, 0, 0, 0, 0, 0, 6, 9, 0, 12,
   9, 12, 12, 9, 6, 9, 0, 12, 0, 0, 0, 0, 9, 6, 0, 9, 12, 9, 0,
   6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 12, 12,
   9, 0, 0, 0, 0, 12, 9, 0, 6, 0, 0, 0, 3, 6, 0, 0, 0, 9, 0, 12,
   0, 9, 12, 0, 0, 6, 9, 9, 6, 9, 12, 0, 0, 12, 0, 0, 0, 12, 9,
   0, 0, 9, 6, 0, 3, 9, 0, 12, 0, 12, 0, 9, 0, 12, 0, 0, 0, 9, 0,
   6, 3, 6, 9, 9, 6, 9, 0, 6, 3, 9, 6, 0, 3, 6, 3, 3};

unsigned EdgePoints[13][3] =
 {{1, 1, 2},
  {2, 2, 3},
  {3, 3, 4},
  {4, 4, 1},
  {5, 5, 6},
  {6, 6, 7},
  {7, 7, 8},
  {8, 8, 5},
  {9, 1, 5},
  {10, 2, 6},
  {11, 3, 7},
  {12, 4, 8},
  {13, 9, 9}};


// https://stackoverflow.com/questions/1083658/do-jagged-arrays-exist-in-c-c
unsigned edgesRow0[] = {4, 9, 1};
unsigned edgesRow1[] = {1, 10, 2};
unsigned edgesRow2[] = {9, 10, 4, 10, 2, 4};
unsigned edgesRow3[] = {2, 11, 3};
unsigned edgesRow4[] = {0};
unsigned edgesRow5[] = {10, 11, 1, 11, 3, 1};
unsigned edgesRow6[] = {4, 9, 3, 3, 9, 11, 9, 10, 11};
unsigned edgesRow7[] = {12, 4, 3};
unsigned edgesRow8[] = {12, 9, 3, 9, 1, 3};
unsigned edgesRow9[] = {0};
unsigned edgesRow10[] = {3, 12, 2, 2, 12, 10, 12, 9, 10};
unsigned edgesRow11[] = {4, 2, 12, 2, 11, 12};
unsigned edgesRow12[] = {2, 11, 1, 1, 11, 9, 11, 12, 9};
unsigned edgesRow13[] = {1, 10, 4, 4, 10, 12, 10, 11, 12};
unsigned edgesRow14[] = {11, 9, 10, 11, 12, 9};
unsigned edgesRow15[] = {8, 5, 9};
unsigned edgesRow16[] = {5, 1, 8, 1, 4, 8};
unsigned edgesRow17[] = {0};
unsigned edgesRow18[] = {10, 2, 5, 5, 2, 8, 2, 4, 8};
unsigned edgesRow19[] = {0};
unsigned edgesRow20[] = {0};
unsigned edgesRow21[] = {0};
unsigned edgesRow22[] = {3, 4, 8, 3, 8, 10, 3, 10, 11, 8, 5, 10};
unsigned edgesRow23[] = {0};
unsigned edgesRow24[] = {8, 5, 12, 12, 5, 3, 5, 1, 3};
unsigned edgesRow25[] = {0};
unsigned edgesRow26[] = {2, 5, 10, 2, 3, 8, 2, 8, 5, 8, 3, 12};
unsigned edgesRow27[] = {0};
unsigned edgesRow28[] = {2, 11, 12, 2, 12, 5, 2, 5, 1, 8, 12, 5};
unsigned edgesRow29[] = {0};
unsigned edgesRow30[] = {8, 5, 12, 5, 10, 12, 12, 10, 11};
unsigned edgesRow31[] = {6, 10, 5};
unsigned edgesRow32[] = {0};
unsigned edgesRow33[] = {1, 5, 2, 5, 6, 2};
unsigned edgesRow34[] = {5, 6, 9, 9, 6, 4, 6, 2, 4};
unsigned edgesRow35[] = {0};
unsigned edgesRow36[] = {0};
unsigned edgesRow37[] = {11, 3, 6, 6, 3, 5, 3, 1, 5};
unsigned edgesRow38[] = {6, 9, 5, 6, 11, 4, 6, 4, 9, 4, 11, 3};
unsigned edgesRow39[] = {0};
unsigned edgesRow40[] = {0};
unsigned edgesRow41[] = {0};
unsigned edgesRow42[] = {3, 6, 2, 3, 9, 6, 3, 12, 9, 5, 9, 6};
unsigned edgesRow43[] = {0};
unsigned edgesRow44[] = {0};
unsigned edgesRow45[] = {6, 1, 5, 6, 12, 1, 6, 11, 12, 1, 12, 4};
unsigned edgesRow46[] = {5, 6, 9, 6, 11, 9, 9, 11, 12};
unsigned edgesRow47[] = {8, 6, 9, 6, 10, 9};
unsigned edgesRow48[] = {1, 4, 10, 10, 4, 6, 4, 8, 6};
unsigned edgesRow49[] = {9, 8, 1, 1, 8, 2, 8, 6, 2};
unsigned edgesRow50[] = {4, 8, 6, 4, 6, 2};
unsigned edgesRow51[] = {0};
unsigned edgesRow52[] = {0};
unsigned edgesRow53[] = {9, 3, 1, 9, 6, 3, 9, 8, 6, 11, 6, 3};
unsigned edgesRow54[] = {11, 3, 6, 3, 4, 6, 6, 4, 8};
unsigned edgesRow55[] = {0};
unsigned edgesRow56[] = {10, 1, 3, 10, 3, 8, 10, 8, 6, 3, 12, 8};
unsigned edgesRow57[] = {0};
unsigned edgesRow58[] = {3, 12, 2, 12, 8, 2, 2, 8, 6};
unsigned edgesRow59[] = {0};
unsigned edgesRow60[] = {0};
unsigned edgesRow61[] = {0};
unsigned edgesRow62[] = {12, 8, 11, 11, 8, 6};
unsigned edgesRow63[] = {6, 7, 11};
unsigned edgesRow64[] = {0};
unsigned edgesRow65[] = {0};
unsigned edgesRow66[] = {0};
unsigned edgesRow67[] = {2, 6, 3, 6, 7, 3};
unsigned edgesRow68[] = {0};
unsigned edgesRow69[] = {6, 7, 10, 10, 7, 1, 7, 3, 1};
unsigned edgesRow70[] = {6, 7, 3, 6, 3, 9, 6, 9, 10, 4, 3, 9};
unsigned edgesRow71[] = {0};
unsigned edgesRow72[] = {0};
unsigned edgesRow73[] = {0};
unsigned edgesRow74[] = {0};
unsigned edgesRow75[] = {12, 4, 7, 7, 4, 6, 4, 2, 6};
unsigned edgesRow76[] = {1, 12, 9, 1, 6, 12, 1, 2, 6, 12, 6, 7};
unsigned edgesRow77[] = {4, 7, 12, 4, 1, 6, 4, 6, 7, 6, 1, 10};
unsigned edgesRow78[] = {6, 7, 10, 7, 12, 10, 10, 12, 9};
unsigned edgesRow79[] = {0};
unsigned edgesRow80[] = {0};
unsigned edgesRow81[] = {0};
unsigned edgesRow82[] = {0};
unsigned edgesRow83[] = {0};
unsigned edgesRow84[] = {0};
unsigned edgesRow85[] = {0};
unsigned edgesRow86[] = {0};
unsigned edgesRow87[] = {0};
unsigned edgesRow88[] = {0};
unsigned edgesRow89[] = {0};
unsigned edgesRow90[] = {0};
unsigned edgesRow91[] = {0};
unsigned edgesRow92[] = {0};
unsigned edgesRow93[] = {0};
unsigned edgesRow94[] = {0};
unsigned edgesRow95[] = {5, 7, 10, 7, 11, 10};
unsigned edgesRow96[] = {0};
unsigned edgesRow97[] = {2, 1, 11, 11, 1, 7, 1, 5, 7};
unsigned edgesRow98[] = {9, 5, 7, 9, 7, 2, 9, 2, 4, 7, 11, 2};
unsigned edgesRow99[] = {10, 5, 2, 2, 5, 3, 5, 7, 3};
unsigned edgesRow100[] = {0};
unsigned edgesRow101[] = {3, 1, 5, 3, 5, 7};
unsigned edgesRow102[] = {4, 9, 3, 9, 5, 3, 3, 5, 7};
unsigned edgesRow103[] = {0};
unsigned edgesRow104[] = {0};
unsigned edgesRow105[] = {0};
unsigned edgesRow106[] = {0};
unsigned edgesRow107[] = {10, 5, 7, 10, 7, 4, 10, 4, 2, 12, 7, 4};
unsigned edgesRow108[] = {0};
unsigned edgesRow109[] = {12, 4, 7, 4, 1, 7, 7, 1, 5};
unsigned edgesRow110[] = {9, 5, 12, 12, 5, 7};
unsigned edgesRow111[] = {7, 11, 8, 8, 11, 9, 11, 10, 9};
unsigned edgesRow112[] = {1, 11, 10, 1, 8, 11, 1, 4, 8, 7, 8, 11};
unsigned edgesRow113[] = {8, 1, 9, 8, 7, 2, 8, 2, 1, 2, 7, 11};
unsigned edgesRow114[] = {7, 11, 8, 11, 2, 8, 8, 2, 4};
unsigned edgesRow115[] = {2, 10, 9, 2, 9, 7, 2, 7, 3, 9, 8, 7};
unsigned edgesRow116[] = {0};
unsigned edgesRow117[] = {9, 8, 1, 8, 7, 1, 1, 7, 3};
unsigned edgesRow118[] = {8, 7, 4, 4, 7, 3};
unsigned edgesRow119[] = {0};
unsigned edgesRow120[] = {0};
unsigned edgesRow121[] = {0};
unsigned edgesRow122[] = {0};
unsigned edgesRow123[] = {0};
unsigned edgesRow124[] = {0};
unsigned edgesRow125[] = {0};
unsigned edgesRow126[] = {8, 7, 12};
unsigned edgesRow127[] = {8, 12, 7};
unsigned edgesRow128[] = {0};
unsigned edgesRow129[] = {0};
unsigned edgesRow130[] = {0};
unsigned edgesRow131[] = {0};
unsigned edgesRow132[] = {0};
unsigned edgesRow133[] = {0};
unsigned edgesRow134[] = {0};
unsigned edgesRow135[] = {8, 4, 7, 4, 3, 7};
unsigned edgesRow136[] = {9, 1, 8, 8, 1, 7, 1, 3, 7};
unsigned edgesRow137[] = {0};
unsigned edgesRow138[] = {2, 9, 10, 2, 7, 9, 2, 3, 7, 9, 7, 8};
unsigned edgesRow139[] = {7, 8, 11, 11, 8, 2, 8, 4, 2};
unsigned edgesRow140[] = {8, 9, 1, 8, 2, 7, 8, 1, 2, 2, 11, 7};
unsigned edgesRow141[] = {1, 10, 11, 1, 11, 8, 1, 8, 4, 7, 11, 8};
unsigned edgesRow142[] = {7, 8, 11, 8, 9, 11, 11, 9, 10};
unsigned edgesRow143[] = {9, 12, 5, 12, 7, 5};
unsigned edgesRow144[] = {12, 7, 4, 4, 7, 1, 7, 5, 1};
unsigned edgesRow145[] = {0};
unsigned edgesRow146[] = {10, 7, 5, 10, 4, 7, 10, 2, 4, 12, 4, 7};
unsigned edgesRow147[] = {0};
unsigned edgesRow148[] = {0};
unsigned edgesRow149[] = {0};
unsigned edgesRow150[] = {0};
unsigned edgesRow151[] = {4, 3, 9, 9, 3, 5, 3, 7, 5};
unsigned edgesRow152[] = {3, 5, 1, 3, 7, 5};
unsigned edgesRow153[] = {0};
unsigned edgesRow154[] = {10, 2, 5, 2, 3, 5, 5, 3, 7};
unsigned edgesRow155[] = {9, 7, 5, 9, 2, 7, 9, 4, 2, 7, 2, 11};
unsigned edgesRow156[] = {2, 11, 1, 11, 7, 1, 1, 7, 5};
unsigned edgesRow157[] = {0};
unsigned edgesRow158[] = {5, 10, 7, 7, 10, 11};
unsigned edgesRow159[] = {0};
unsigned edgesRow160[] = {0};
unsigned edgesRow161[] = {0};
unsigned edgesRow162[] = {0};
unsigned edgesRow163[] = {0};
unsigned edgesRow164[] = {0};
unsigned edgesRow165[] = {0};
unsigned edgesRow166[] = {0};
unsigned edgesRow167[] = {0};
unsigned edgesRow168[] = {0};
unsigned edgesRow169[] = {0};
unsigned edgesRow170[] = {0};
unsigned edgesRow171[] = {0};
unsigned edgesRow172[] = {0};
unsigned edgesRow173[] = {0};
unsigned edgesRow174[] = {0};
unsigned edgesRow175[] = {6, 10, 7, 7, 10, 12, 10, 9, 12};
unsigned edgesRow176[] = {4, 12, 7, 4, 6, 1, 4, 7, 6, 6, 10, 1};
unsigned edgesRow177[] = {1, 9, 12, 1, 12, 6, 1, 6, 2, 12, 7, 6};
unsigned edgesRow178[] = {12, 7, 4, 7, 6, 4, 4, 6, 2};
unsigned edgesRow179[] = {0};
unsigned edgesRow180[] = {0};
unsigned edgesRow181[] = {0};
unsigned edgesRow182[] = {0};
unsigned edgesRow183[] = {6, 3, 7, 6, 9, 3, 6, 10, 9, 4, 9, 3};
unsigned edgesRow184[] = {6, 10, 7, 10, 1, 7, 7, 1, 3};
unsigned edgesRow185[] = {0};
unsigned edgesRow186[] = {2, 3, 6, 6, 3, 7};
unsigned edgesRow187[] = {0};
unsigned edgesRow188[] = {0};
unsigned edgesRow189[] = {0};
unsigned edgesRow190[] = {6, 11, 7};
unsigned edgesRow191[] = {12, 11, 8, 11, 6, 8};
unsigned edgesRow192[] = {0};
unsigned edgesRow193[] = {0};
unsigned edgesRow194[] = {0};
unsigned edgesRow195[] = {3, 2, 12, 12, 2, 8, 2, 6, 8};
unsigned edgesRow196[] = {0};
unsigned edgesRow197[] = {10, 3, 1, 10, 8, 3, 10, 6, 8, 3, 8, 12};
unsigned edgesRow198[] = {0};
unsigned edgesRow199[] = {11, 6, 3, 3, 6, 4, 6, 8, 4};
unsigned edgesRow200[] = {9, 1, 3, 9, 3, 6, 9, 6, 8, 11, 3, 6};
unsigned edgesRow201[] = {0};
unsigned edgesRow202[] = {0};
unsigned edgesRow203[] = {4, 6, 8, 4, 2, 6};
unsigned edgesRow204[] = {9, 1, 8, 1, 2, 8, 8, 2, 6};
unsigned edgesRow205[] = {1, 10, 4, 10, 6, 4, 4, 6, 8};
unsigned edgesRow206[] = {8, 9, 6, 6, 9, 10};
unsigned edgesRow207[] = {5, 9, 6, 6, 9, 11, 9, 12, 11};
unsigned edgesRow208[] = {6, 5, 1, 6, 1, 12, 6, 12, 11, 1, 4, 12};
unsigned edgesRow209[] = {0};
unsigned edgesRow210[] = {0};
unsigned edgesRow211[] = {3, 2, 6, 3, 6, 9, 3, 9, 12, 5, 6, 9};
unsigned edgesRow212[] = {0};
unsigned edgesRow213[] = {0};
unsigned edgesRow214[] = {0};
unsigned edgesRow215[] = {6, 5, 9, 6, 4, 11, 6, 9, 4, 4, 3, 11};
unsigned edgesRow216[] = {11, 6, 3, 6, 5, 3, 3, 5, 1};
unsigned edgesRow217[] = {0};
unsigned edgesRow218[] = {0};
unsigned edgesRow219[] = {5, 9, 6, 9, 4, 6, 6, 4, 2};
unsigned edgesRow220[] = {1, 2, 5, 5, 2, 6};
unsigned edgesRow221[] = {0};
unsigned edgesRow222[] = {6, 5, 10};
unsigned edgesRow223[] = {8, 12, 5, 5, 12, 10, 12, 11, 10};
unsigned edgesRow224[] = {0};
unsigned edgesRow225[] = {2, 12, 11, 2, 5, 12, 2, 1, 5, 8, 5, 12};
unsigned edgesRow226[] = {0};
unsigned edgesRow227[] = {2, 10, 5, 2, 8, 3, 2, 5, 8, 8, 12, 3};
unsigned edgesRow228[] = {0};
unsigned edgesRow229[] = {8, 12, 5, 12, 3, 5, 5, 3, 1};
unsigned edgesRow230[] = {0};
unsigned edgesRow231[] = {3, 8, 4, 3, 10, 8, 3, 11, 10, 8, 10, 5};
unsigned edgesRow232[] = {0};
unsigned edgesRow233[] = {0};
unsigned edgesRow234[] = {0};
unsigned edgesRow235[] = {10, 5, 2, 5, 8, 2, 2, 8, 4};
unsigned edgesRow236[] = {0};
unsigned edgesRow237[] = {5, 8, 1, 1, 8, 4};
unsigned edgesRow238[] = {8, 9, 5};
unsigned edgesRow239[] = {11, 10, 9, 11, 9, 12};
unsigned edgesRow240[] = {1, 4, 10, 4, 12, 10, 10, 12, 11};
unsigned edgesRow241[] = {2, 1, 11, 1, 9, 11, 11, 9, 12};
unsigned edgesRow242[] = {4, 12, 2, 2, 12, 11};
unsigned edgesRow243[] = {3, 2, 12, 2, 10, 12, 12, 10, 9};
unsigned edgesRow244[] = {0};
unsigned edgesRow245[] = {12, 3, 9, 9, 3, 1};
unsigned edgesRow246[] = {12, 3, 4};
unsigned edgesRow247[] = {4, 3, 9, 3, 11, 9, 9, 11, 10};
unsigned edgesRow248[] = {10, 1, 11, 11, 1, 3};
unsigned edgesRow249[] = {0};
unsigned edgesRow250[] = {2, 3, 11};
unsigned edgesRow251[] = {9, 4, 10, 10, 4, 2};
unsigned edgesRow252[] = {1, 2, 10};
unsigned edgesRow253[] = {4, 1, 9};
unsigned (*Edges[])[] = {&edgesRow0, &edgesRow1, &edgesRow2, &edgesRow3, &edgesRow4, &edgesRow5, &edgesRow6, &edgesRow7, &edgesRow8, &edgesRow9, &edgesRow10, &edgesRow11, &edgesRow12, &edgesRow13, &edgesRow14, &edgesRow15, &edgesRow16, &edgesRow17, &edgesRow18, &edgesRow19, &edgesRow20, &edgesRow21, &edgesRow22, &edgesRow23, &edgesRow24, &edgesRow25, &edgesRow26, &edgesRow27, &edgesRow28, &edgesRow29, &edgesRow30, &edgesRow31, &edgesRow32, &edgesRow33, &edgesRow34, &edgesRow35, &edgesRow36,
   &edgesRow37, &edgesRow38, &edgesRow39, &edgesRow40, &edgesRow41, &edgesRow42, &edgesRow43, &edgesRow44, &edgesRow45, &edgesRow46, &edgesRow47, &edgesRow48, &edgesRow49, &edgesRow50, &edgesRow51, &edgesRow52, &edgesRow53, &edgesRow54, &edgesRow55, &edgesRow56, &edgesRow57, &edgesRow58, &edgesRow59, &edgesRow60, &edgesRow61, &edgesRow62, &edgesRow63, &edgesRow64, &edgesRow65, &edgesRow66, &edgesRow67, &edgesRow68, &edgesRow69, &edgesRow70, &edgesRow71, &edgesRow72, &edgesRow73, &edgesRow74,
   &edgesRow75, &edgesRow76, &edgesRow77, &edgesRow78, &edgesRow79, &edgesRow80, &edgesRow81, &edgesRow82, &edgesRow83, &edgesRow84, &edgesRow85, &edgesRow86, &edgesRow87, &edgesRow88, &edgesRow89, &edgesRow90, &edgesRow91, &edgesRow92, &edgesRow93, &edgesRow94, &edgesRow95, &edgesRow96, &edgesRow97, &edgesRow98, &edgesRow99, &edgesRow100, &edgesRow101, &edgesRow102, &edgesRow103, &edgesRow104, &edgesRow105, &edgesRow106, &edgesRow107, &edgesRow108, &edgesRow109, &edgesRow110, &edgesRow111,
   &edgesRow112, &edgesRow113, &edgesRow114, &edgesRow115, &edgesRow116, &edgesRow117, &edgesRow118, &edgesRow119, &edgesRow120, &edgesRow121, &edgesRow122, &edgesRow123, &edgesRow124, &edgesRow125, &edgesRow126, &edgesRow127, &edgesRow128, &edgesRow129, &edgesRow130, &edgesRow131, &edgesRow132, &edgesRow133, &edgesRow134, &edgesRow135, &edgesRow136, &edgesRow137, &edgesRow138, &edgesRow139, &edgesRow140, &edgesRow141, &edgesRow142, &edgesRow143, &edgesRow144, &edgesRow145, &edgesRow146,
   &edgesRow147, &edgesRow148, &edgesRow149, &edgesRow150, &edgesRow151, &edgesRow152, &edgesRow153, &edgesRow154, &edgesRow155, &edgesRow156, &edgesRow157, &edgesRow158, &edgesRow159, &edgesRow160, &edgesRow161, &edgesRow162, &edgesRow163, &edgesRow164, &edgesRow165, &edgesRow166, &edgesRow167, &edgesRow168, &edgesRow169, &edgesRow170, &edgesRow171, &edgesRow172, &edgesRow173, &edgesRow174, &edgesRow175, &edgesRow176, &edgesRow177, &edgesRow178, &edgesRow179, &edgesRow180, &edgesRow181,
   &edgesRow182, &edgesRow183, &edgesRow184, &edgesRow185, &edgesRow186, &edgesRow187, &edgesRow188, &edgesRow189, &edgesRow190, &edgesRow191, &edgesRow192, &edgesRow193, &edgesRow194, &edgesRow195, &edgesRow196, &edgesRow197, &edgesRow198, &edgesRow199, &edgesRow200, &edgesRow201, &edgesRow202, &edgesRow203, &edgesRow204, &edgesRow205, &edgesRow206, &edgesRow207, &edgesRow208, &edgesRow209, &edgesRow210, &edgesRow211, &edgesRow212, &edgesRow213, &edgesRow214, &edgesRow215, &edgesRow216,
   &edgesRow217, &edgesRow218, &edgesRow219, &edgesRow220, &edgesRow221, &edgesRow222, &edgesRow223, &edgesRow224, &edgesRow225, &edgesRow226, &edgesRow227, &edgesRow228, &edgesRow229, &edgesRow230, &edgesRow231, &edgesRow232, &edgesRow233, &edgesRow234, &edgesRow235, &edgesRow236, &edgesRow237, &edgesRow238, &edgesRow239, &edgesRow240, &edgesRow241, &edgesRow242, &edgesRow243, &edgesRow244, &edgesRow245, &edgesRow246, &edgesRow247, &edgesRow248, &edgesRow249, &edgesRow250, &edgesRow251,
   &edgesRow252, &edgesRow253};

/* Special cases */
int facesRow0[] = {0};
int facesRow1[] = {0};
int facesRow2[] = {0};
int facesRow3[] = {0};
int facesRow4[] = {5};
int facesRow5[] = {0};
int facesRow6[] = {0};
int facesRow7[] = {0};
int facesRow8[] = {0};
int facesRow9[] = {-5};
int facesRow10[] = {0};
int facesRow11[] = {0};
int facesRow12[] = {0};
int facesRow13[] = {0};
int facesRow14[] = {0};
int facesRow15[] = {0};
int facesRow16[] = {0};
int facesRow17[] = {-1};
int facesRow18[] = {0};
int facesRow19[] = {7};
int facesRow20[] = {5, 7};
int facesRow21[] = {-1, 7};
int facesRow22[] = {0};
int facesRow23[] = {-4};
int facesRow24[] = {0};
int facesRow25[] = {-5, -1, -4, 7};
int facesRow26[] = {0};
int facesRow27[] = {-4, 7};
int facesRow28[] = {0};
int facesRow29[] = {-4, -1, 7};
int facesRow30[] = {0};
int facesRow31[] = {0};
int facesRow32[] = {1};
int facesRow33[] = {0};
int facesRow34[] = {0};
int facesRow35[] = {-2};
int facesRow36[] = {-2, 1, 5, -7};
int facesRow37[] = {0};
int facesRow38[] = {0};
int facesRow39[] = {-7};
int facesRow40[] = {1, -7};
int facesRow41[] = {-5, -7};
int facesRow42[] = {0};
int facesRow43[] = {-2, -7};
int facesRow44[] = {-2, 1, -7};
int facesRow45[] = {0};
int facesRow46[] = {0};
int facesRow47[] = {0};
int facesRow48[] = {0};
int facesRow49[] = {0};
int facesRow50[] = {0};
int facesRow51[] = {-2, 7};
int facesRow52[] = {5, -2, 7};
int facesRow53[] = {0};
int facesRow54[] = {0};
int facesRow55[] = {-4, -7};
int facesRow56[] = {0};
int facesRow57[] = {-4, -5, -7};
int facesRow58[] = {0};
int facesRow59[] = {-2, -4, 7};
int facesRow60[] = {2, -7};
int facesRow61[] = {4, 7};
int facesRow62[] = {0};
int facesRow63[] = {0};
int facesRow64[] = {7};
int facesRow65[] = {2};
int facesRow66[] = {2, 7};
int facesRow67[] = {0};
int facesRow68[] = {5, 7};
int facesRow69[] = {0};
int facesRow70[] = {0};
int facesRow71[] = {3};
int facesRow72[] = {3, 7};
int facesRow73[] = {-5, 3, 2, 7};
int facesRow74[] = {2, 3, 7};
int facesRow75[] = {0};
int facesRow76[] = {0};
int facesRow77[] = {0};
int facesRow78[] = {0};
int facesRow79[] = {6};
int facesRow80[] = {6, 7};
int facesRow81[] = {6, -1, 2, -7};
int facesRow82[] = {2, 6, 7};
int facesRow83[] = {6, 7};
int facesRow84[] = {6, 5, 7};
int facesRow85[] = {6, -1, 7};
int facesRow86[] = {-6, -7};
int facesRow87[] = {6, 3, -4, -7};
int facesRow88[] = {6, 3, 7};
int facesRow89[] = {-5, -1, 6, 3, 2, -4, 7};
int facesRow90[] = {-3, -6, -2, 7};
int facesRow91[] = {-4, 6, 7};
int facesRow92[] = {-6, -7};
int facesRow93[] = {-6, 4, 1, 7};
int facesRow94[] = {-6};
int facesRow95[] = {0};
int facesRow96[] = {1, 7};
int facesRow97[] = {0};
int facesRow98[] = {0};
int facesRow99[] = {0};
int facesRow100[] = {5, 1, 7};
int facesRow101[] = {0};
int facesRow102[] = {0};
int facesRow103[] = {3, -7};
int facesRow104[] = {1, 3, 7};
int facesRow105[] = {-5, 3, -7};
int facesRow106[] = {-3, 7};
int facesRow107[] = {0};
int facesRow108[] = {-1, -7};
int facesRow109[] = {0};
int facesRow110[] = {0};
int facesRow111[] = {0};
int facesRow112[] = {0};
int facesRow113[] = {0};
int facesRow114[] = {0};
int facesRow115[] = {0};
int facesRow116[] = {-5, -7};
int facesRow117[] = {0};
int facesRow118[] = {0};
int facesRow119[] = {-4, 3, -7};
int facesRow120[] = {-3, -7};
int facesRow121[] = {4, -3, 5, -7};
int facesRow122[] = {-3};
int facesRow123[] = {4, -7};
int facesRow124[] = {-7};
int facesRow125[] = {4};
int facesRow126[] = {0};
int facesRow127[] = {0};
int facesRow128[] = {4};
int facesRow129[] = {-7};
int facesRow130[] = {4, -7};
int facesRow131[] = {-3};
int facesRow132[] = {4, -3, 5, -7};
int facesRow133[] = {-3, -7};
int facesRow134[] = {4, -3, -7};
int facesRow135[] = {0};
int facesRow136[] = {0};
int facesRow137[] = {-5, -7};
int facesRow138[] = {0};
int facesRow139[] = {0};
int facesRow140[] = {0};
int facesRow141[] = {0};
int facesRow142[] = {0};
int facesRow143[] = {0};
int facesRow144[] = {0};
int facesRow145[] = {-1, -7};
int facesRow146[] = {0};
int facesRow147[] = {-3, 7};
int facesRow148[] = {5, -3, 7};
int facesRow149[] = {-1, -3, 7};
int facesRow150[] = {3, -7};
int facesRow151[] = {0};
int facesRow152[] = {0};
int facesRow153[] = {-5, -1, -7};
int facesRow154[] = {0};
int facesRow155[] = {0};
int facesRow156[] = {0};
int facesRow157[] = {1, 7};
int facesRow158[] = {0};
int facesRow159[] = {-6};
int facesRow160[] = {-6, 4, 1, 7};
int facesRow161[] = {-6, -7};
int facesRow162[] = {4, -6, -7};
int facesRow163[] = {-3, -6, -2, 7};
int facesRow164[] = {5, 1, -6, -3, -2, 4, 7};
int facesRow165[] = {-6, -3, -7};
int facesRow166[] = {6, 3, -4, -7};
int facesRow167[] = {-6, -7};
int facesRow168[] = {-6, 1, -7};
int facesRow169[] = {-6, -5, -7};
int facesRow170[] = {6, 7};
int facesRow171[] = {-2, -6, -7};
int facesRow172[] = {6, -1, 2, -7};
int facesRow173[] = {6, 7};
int facesRow174[] = {6};
int facesRow175[] = {0};
int facesRow176[] = {0};
int facesRow177[] = {0};
int facesRow178[] = {0};
int facesRow179[] = {-2, -3, 7};
int facesRow180[] = {-5, 3, 2, 7};
int facesRow181[] = {3, 7};
int facesRow182[] = {3};
int facesRow183[] = {0};
int facesRow184[] = {0};
int facesRow185[] = {5, 7};
int facesRow186[] = {0};
int facesRow187[] = {2, 7};
int facesRow188[] = {2};
int facesRow189[] = {7};
int facesRow190[] = {0};
int facesRow191[] = {0};
int facesRow192[] = {4, 7};
int facesRow193[] = {2, -7};
int facesRow194[] = {2, 4, 7};
int facesRow195[] = {0};
int facesRow196[] = {4, 5, 7};
int facesRow197[] = {0};
int facesRow198[] = {-4, -7};
int facesRow199[] = {0};
int facesRow200[] = {0};
int facesRow201[] = {-5, 2, -7};
int facesRow202[] = {-2, 7};
int facesRow203[] = {0};
int facesRow204[] = {0};
int facesRow205[] = {0};
int facesRow206[] = {0};
int facesRow207[] = {0};
int facesRow208[] = {0};
int facesRow209[] = {2, -1, -7};
int facesRow210[] = {-2, -7};
int facesRow211[] = {0};
int facesRow212[] = {-5, -7};
int facesRow213[] = {1, -7};
int facesRow214[] = {-7};
int facesRow215[] = {0};
int facesRow216[] = {0};
int facesRow217[] = {-2, 1, 5, -7};
int facesRow218[] = {-2};
int facesRow219[] = {0};
int facesRow220[] = {0};
int facesRow221[] = {1};
int facesRow222[] = {0};
int facesRow223[] = {0};
int facesRow224[] = {4, 1, 7};
int facesRow225[] = {0};
int facesRow226[] = {-4, 7};
int facesRow227[] = {0};
int facesRow228[] = {-5, -1, -4, 7};
int facesRow229[] = {0};
int facesRow230[] = {-4};
int facesRow231[] = {0};
int facesRow232[] = {-1, 7};
int facesRow233[] = {5, 7};
int facesRow234[] = {7};
int facesRow235[] = {0};
int facesRow236[] = {-1};
int facesRow237[] = {0};
int facesRow238[] = {0};
int facesRow239[] = {0};
int facesRow240[] = {0};
int facesRow241[] = {0};
int facesRow242[] = {0};
int facesRow243[] = {0};
int facesRow244[] = {-5};
int facesRow245[] = {0};
int facesRow246[] = {0};
int facesRow247[] = {0};
int facesRow248[] = {0};
int facesRow249[] = {5};
int facesRow250[] = {0};
int facesRow251[] = {0};
int facesRow252[] = {0};
int facesRow253[] = {0};
int (*Faces[])[] = {&facesRow0, &facesRow1, &facesRow2, &facesRow3, &facesRow4, &facesRow5, &facesRow6, &facesRow7, &facesRow8, &facesRow9, &facesRow10, &facesRow11, &facesRow12, &facesRow13, &facesRow14, &facesRow15, &facesRow16, &facesRow17, &facesRow18, &facesRow19, &facesRow20, &facesRow21, &facesRow22, &facesRow23, &facesRow24, &facesRow25, &facesRow26, &facesRow27, &facesRow28, &facesRow29, &facesRow30, &facesRow31, &facesRow32, &facesRow33, &facesRow34, &facesRow35, &facesRow36,
   &facesRow37, &facesRow38, &facesRow39, &facesRow40, &facesRow41, &facesRow42, &facesRow43, &facesRow44, &facesRow45, &facesRow46, &facesRow47, &facesRow48, &facesRow49, &facesRow50, &facesRow51, &facesRow52, &facesRow53, &facesRow54, &facesRow55, &facesRow56, &facesRow57, &facesRow58, &facesRow59, &facesRow60, &facesRow61, &facesRow62, &facesRow63, &facesRow64, &facesRow65, &facesRow66, &facesRow67, &facesRow68, &facesRow69, &facesRow70, &facesRow71, &facesRow72, &facesRow73, &facesRow74,
   &facesRow75, &facesRow76, &facesRow77, &facesRow78, &facesRow79, &facesRow80, &facesRow81, &facesRow82, &facesRow83, &facesRow84, &facesRow85, &facesRow86, &facesRow87, &facesRow88, &facesRow89, &facesRow90, &facesRow91, &facesRow92, &facesRow93, &facesRow94, &facesRow95, &facesRow96, &facesRow97, &facesRow98, &facesRow99, &facesRow100, &facesRow101, &facesRow102, &facesRow103, &facesRow104, &facesRow105, &facesRow106, &facesRow107, &facesRow108, &facesRow109, &facesRow110, &facesRow111,
   &facesRow112, &facesRow113, &facesRow114, &facesRow115, &facesRow116, &facesRow117, &facesRow118, &facesRow119, &facesRow120, &facesRow121, &facesRow122, &facesRow123, &facesRow124, &facesRow125, &facesRow126, &facesRow127, &facesRow128, &facesRow129, &facesRow130, &facesRow131, &facesRow132, &facesRow133, &facesRow134, &facesRow135, &facesRow136, &facesRow137, &facesRow138, &facesRow139, &facesRow140, &facesRow141, &facesRow142, &facesRow143, &facesRow144, &facesRow145, &facesRow146,
   &facesRow147, &facesRow148, &facesRow149, &facesRow150, &facesRow151, &facesRow152, &facesRow153, &facesRow154, &facesRow155, &facesRow156, &facesRow157, &facesRow158, &facesRow159, &facesRow160, &facesRow161, &facesRow162, &facesRow163, &facesRow164, &facesRow165, &facesRow166, &facesRow167, &facesRow168, &facesRow169, &facesRow170, &facesRow171, &facesRow172, &facesRow173, &facesRow174, &facesRow175, &facesRow176, &facesRow177, &facesRow178, &facesRow179, &facesRow180, &facesRow181,
   &facesRow182, &facesRow183, &facesRow184, &facesRow185, &facesRow186, &facesRow187, &facesRow188, &facesRow189, &facesRow190, &facesRow191, &facesRow192, &facesRow193, &facesRow194, &facesRow195, &facesRow196, &facesRow197, &facesRow198, &facesRow199, &facesRow200, &facesRow201, &facesRow202, &facesRow203, &facesRow204, &facesRow205, &facesRow206, &facesRow207, &facesRow208, &facesRow209, &facesRow210, &facesRow211, &facesRow212, &facesRow213, &facesRow214, &facesRow215, &facesRow216,
   &facesRow217, &facesRow218, &facesRow219, &facesRow220, &facesRow221, &facesRow222, &facesRow223, &facesRow224, &facesRow225, &facesRow226, &facesRow227, &facesRow228, &facesRow229, &facesRow230, &facesRow231, &facesRow232, &facesRow233, &facesRow234, &facesRow235, &facesRow236, &facesRow237, &facesRow238, &facesRow239, &facesRow240, &facesRow241, &facesRow242, &facesRow243, &facesRow244, &facesRow245, &facesRow246, &facesRow247, &facesRow248, &facesRow249, &facesRow250, &facesRow251,
   &facesRow252, &facesRow253};

unsigned FacesSizes[254] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
                            2, 2, 1, 1, 1, 4, 1, 2, 1, 3, 1, 1, 1, 1, 1, 1, 4, 1, 1, 1, 2,
                            2, 1, 2, 3, 1, 1, 1, 1, 1, 1, 2, 3, 1, 1, 2, 1, 3, 1, 3, 2, 2,
                            1, 1, 1, 1, 2, 1, 2, 1, 1, 1, 2, 4, 3, 1, 1, 1, 1, 1, 2, 4, 3,
                            2, 3, 3, 2, 4, 3, 7, 4, 3, 2, 4, 1, 1, 2, 1, 1, 1, 3, 1, 1, 2,
                            3, 3, 2, 1, 2, 1, 1, 1, 1, 1, 1, 1, 2, 1, 1, 3, 2, 4, 1, 2, 1,
                            1, 1, 1, 1, 1, 2, 1, 4, 2, 3, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 2,
                            1, 2, 3, 3, 2, 1, 1, 3, 1, 1, 1, 2, 1, 1, 4, 2, 3, 4, 7, 3, 4,
                            2, 3, 3, 2, 3, 4, 2, 1, 1, 1, 1, 1, 3, 4, 2, 1, 1, 1, 2, 1, 2,
                            1, 1, 1, 1, 2, 2, 3, 1, 3, 1, 2, 1, 1, 3, 2, 1, 1, 1, 1, 1, 1,
                            3, 2, 1, 2, 2, 1, 1, 1, 4, 1, 1, 1, 1, 1, 1, 3, 1, 2, 1, 4, 1,
                            1, 1, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
                            1, 1, 1};

unsigned FacePoints[6][6] =
  {{1, 1, 6, 2, 5, 60},
   {2, 2, 7, 3, 6, 252},
   {3, 4, 7, 3, 8, 672},
   {4, 1, 8, 4, 5, 160},
   {5, 1, 3, 2, 4, 24},
   {6, 5, 7, 6, 8, 1680}};

unsigned edges2Row0[] = {0};
unsigned edges2Row1[] = {0};
unsigned edges2Row2[] = {0};
unsigned edges2Row3[] = {0};
unsigned edges2Row4[] = {2, 11, 3, 4, 9, 1, 2, 11, 1, 11, 9, 1, 11, 4, 9, 11, 3, 4};
unsigned edges2Row5[] = {0};
unsigned edges2Row6[] = {0};
unsigned edges2Row7[] = {0};
unsigned edges2Row8[] = {0};
unsigned edges2Row9[] = {1, 10, 2, 3, 12, 4, 1, 10, 4, 10, 12, 4, 10, 3, 12, 10, 2, 3};
unsigned edges2Row10[] = {0};
unsigned edges2Row11[] = {0};
unsigned edges2Row12[] = {0};
unsigned edges2Row13[] = {0};
unsigned edges2Row14[] = {0};
unsigned edges2Row15[] = {0};
unsigned edges2Row16[] = {0};
unsigned edges2Row17[] = {10, 2, 1, 9, 8, 5, 10, 2, 5, 2, 8, 5, 2, 9, 8, 2, 1, 9};
unsigned edges2Row18[] = {0};
unsigned edges2Row19[] = {2, 11, 3, 9, 8, 5, 2, 9, 3, 9, 8, 3, 11, 3, 8, 2, 11, 5, 2, 5, 9, 11, 8, 5};
unsigned edges2Row20[] = {4, 8, 1, 8, 5, 1, 2, 11, 3, 4, 8, 3, 8, 11, 3, 8, 5, 11, 2, 11, 5, 2, 5, 1, 4, 1, 2, 4, 2, 3, 3, 2, 11, 4, 8, 3, 8, 11, 3, 8, 5, 11, 2, 11, 5, 2, 5, 1};
unsigned edges2Row21[] = {10, 11, 1, 11, 3, 1, 9, 8, 5, 10, 11, 5, 11, 8, 5, 11, 3, 8, 9, 8, 3, 9, 3, 1, 10, 1, 9, 10, 9, 5, 5, 9, 8, 10, 11, 5, 11, 8, 5, 11, 3, 8, 9, 8, 3, 9, 3, 1};
unsigned edges2Row22[] = {0};
unsigned edges2Row23[] = {8, 5, 9, 4, 3, 12, 8, 5, 12, 5, 3, 12, 5, 4, 3, 5, 9, 4};
unsigned edges2Row24[] = {0};
unsigned edges2Row25[] = {2, 1, 10, 4, 3, 12, 9, 8, 5, 2, 1, 10, 4, 5, 9, 4, 3, 5, 8, 5, 3, 8, 3, 12, 4, 3, 12, 2, 1, 9, 2, 9, 8, 2, 5, 10, 2, 8, 5, 9, 8, 5, 2, 3, 12, 2, 12, 10, 10, 12, 4, 10, 4, 1, 2, 13, 10, 10, 13, 5, 8, 5, 13, 8, 13, 12, 12, 13, 3, 4, 3, 13, 4, 13, 9, 9, 13, 1, 2, 1, 13, 2, 13, 10, 2, 13, 3, 12, 13, 3, 8, 13, 12, 8, 5, 13, 9, 5, 13, 4, 13, 9, 4, 1, 13, 10, 13, 1, 8, 5, 13, 10, 13, 5, 2, 13, 10, 2, 3, 13, 12, 13, 3, 4, 13, 12, 4, 1, 13, 9, 13, 1, 9, 8, 13, 2, 3, 12, 2, 12,
   5, 2, 5, 10, 8, 5, 12, 4, 1, 9, 2, 3, 1, 4, 1, 3, 4, 3, 12, 4, 12, 8, 4, 8, 9, 9, 8, 5, 9, 5, 1, 10, 1, 5, 2, 1, 10};
unsigned edges2Row26[] = {0};
unsigned edges2Row27[] = {4, 2, 12, 2, 11, 12, 8, 5, 9, 4, 2, 9, 2, 5, 9, 2, 11, 5, 8, 5, 11, 8, 11, 12, 4, 12, 8, 4, 8, 9, 9, 8, 5, 4, 2, 9, 2, 5, 9, 2, 11, 5, 8, 5, 11, 8, 11, 12};
unsigned edges2Row28[] = {0};
unsigned edges2Row29[] = {8, 5, 12, 5, 10, 12, 4, 1, 9, 12, 10, 11, 8, 4, 9, 8, 12, 4, 4, 11, 12, 4, 1, 11, 5, 10, 1, 5, 1, 9, 8, 5, 9, 1, 10, 11, 8, 5, 13, 5, 9, 13, 4, 13, 9, 1, 10, 13, 4, 1, 13, 11, 13, 10, 12, 13, 11, 8, 12, 13, 1, 9, 13, 8, 13, 9, 8, 5, 13, 5, 10, 13, 11, 13, 10, 12, 11, 13, 4, 13, 12, 4, 1, 13, 8, 5, 9, 4, 1, 10, 4, 10, 12, 12, 10, 11};
unsigned edges2Row30[] = {0};
unsigned edges2Row31[] = {0};
unsigned edges2Row32[] = {5, 6, 10, 1, 4, 9, 5, 6, 9, 6, 4, 9, 6, 1, 4, 6, 10, 1};
unsigned edges2Row33[] = {0};
unsigned edges2Row34[] = {0};
unsigned edges2Row35[] = {10, 5, 6, 11, 3, 2, 10, 5, 2, 5, 3, 2, 5, 11, 3, 5, 6, 11};
unsigned edges2Row36[] = {6, 10, 5, 2, 11, 3, 1, 4, 9, 6, 10, 5, 2, 9, 1, 2, 11, 9, 4, 9, 11, 4, 11, 3, 2, 11, 3, 6, 10, 1, 6, 1, 4, 6, 9, 5, 6, 4, 9, 1, 4, 9, 6, 11, 3, 6, 3, 5, 5, 3, 2, 5, 2, 10, 6, 13, 5, 5, 13, 9, 4, 9, 13, 4, 13, 3, 3, 13, 11, 2, 11, 13, 2, 13, 1, 1, 13, 10, 6, 10, 13, 6, 13, 5, 6, 13, 11, 3, 13, 11, 4, 13, 3, 4, 9, 13, 1, 9, 13, 2, 13, 1, 2, 10, 13, 5, 13, 10, 4, 9, 13, 5, 13, 9, 6, 13, 5, 6, 11, 13, 3, 13, 11, 2, 13, 3, 2, 10, 13, 1, 13, 10, 1, 4, 13, 6, 11, 3, 6, 3, 9,
   6, 9, 5, 4, 9, 3, 2, 10, 1, 6, 11, 10, 2, 10, 11, 2, 11, 3, 2, 3, 4, 2, 4, 1, 1, 4, 9, 1, 9, 10, 5, 10, 9, 6, 10, 5};
unsigned edges2Row37[] = {0};
unsigned edges2Row38[] = {0};
unsigned edges2Row39[] = {6, 10, 5, 12, 4, 3, 6, 12, 5, 12, 4, 5, 10, 5, 4, 6, 10, 3, 6, 3, 12, 10, 4, 3};
unsigned edges2Row40[] = {1, 3, 9, 3, 12, 9, 5, 6, 10, 1, 3, 10, 3, 6, 10, 3, 12, 6, 5, 6, 12, 5, 12, 9, 1, 9, 5, 1, 5, 10, 10, 5, 6, 1, 3, 10, 3, 6, 10, 3, 12, 6, 5, 6, 12, 5, 12, 9};
unsigned edges2Row41[] = {1, 5, 2, 5, 6, 2, 3, 12, 4, 1, 5, 4, 5, 12, 4, 5, 6, 12, 3, 12, 6, 3, 6, 2, 1, 2, 3, 1, 3, 4, 4, 3, 12, 1, 5, 4, 5, 12, 4, 5, 6, 12, 3, 12, 6, 3, 6, 2};
unsigned edges2Row42[] = {0};
unsigned edges2Row43[] = {11, 12, 2, 12, 4, 2, 10, 5, 6, 11, 12, 6, 12, 5, 6, 12, 4, 5, 10, 5, 4, 10, 4, 2, 11, 2, 10, 11, 10, 6, 6, 10, 5, 11, 12, 6, 12, 5, 6, 12, 4, 5, 10, 5, 4, 10, 4, 2};
unsigned edges2Row44[] = {2, 11, 1, 1, 11, 9, 6, 10, 5, 11, 12, 9, 2, 10, 6, 2, 6, 11, 6, 11, 12, 6, 12, 5, 1, 5, 9, 1, 10, 5, 2, 10, 1, 5, 12, 9, 2, 13, 1, 1, 13, 10, 6, 10, 13, 5, 13, 9, 6, 13, 5, 12, 9, 13, 11, 12, 13, 2, 13, 11, 5, 13, 10, 2, 10, 13, 2, 13, 1, 1, 13, 9, 12, 9, 13, 11, 13, 12, 6, 11, 13, 6, 13, 5, 2, 10, 1, 6, 9, 5, 6, 11, 9, 11, 12, 9};
unsigned edges2Row45[] = {0};
unsigned edges2Row46[] = {0};
unsigned edges2Row47[] = {0};
unsigned edges2Row48[] = {0};
unsigned edges2Row49[] = {0};
unsigned edges2Row50[] = {0};
unsigned edges2Row51[] = {10, 9, 6, 9, 8, 6, 11, 3, 2, 10, 9, 2, 9, 3, 2, 9, 8, 3, 11, 3, 8, 11, 8, 6, 10, 6, 11, 10, 11, 2, 2, 11, 3, 10, 9, 2, 9, 3, 2, 9, 8, 3, 11, 3, 8, 11, 8, 6};
unsigned edges2Row52[] = {1, 4, 10, 10, 4, 6, 3, 2, 11, 4, 8, 6, 1, 2, 3, 1, 3, 4, 3, 4, 8, 3, 8, 11, 10, 11, 6, 10, 2, 11, 1, 2, 10, 11, 8, 6, 1, 13, 10, 10, 13, 2, 3, 2, 13, 11, 13, 6, 3, 13, 11, 8, 6, 13, 4, 8, 13, 1, 13, 4, 11, 13, 2, 1, 2, 13, 1, 13, 10, 10, 13, 6, 8, 6, 13, 4, 13, 8, 3, 4, 13, 3, 13, 11, 1, 2, 10, 3, 6, 11, 3, 4, 6, 4, 8, 6};
unsigned edges2Row53[] = {0};
unsigned edges2Row54[] = {0};
unsigned edges2Row55[] = {8, 6, 9, 6, 10, 9, 4, 3, 12, 8, 6, 12, 6, 3, 12, 6, 10, 3, 4, 3, 10, 4, 10, 9, 8, 9, 4, 8, 4, 12, 12, 4, 3, 8, 6, 12, 6, 3, 12, 6, 10, 3, 4, 3, 10, 4, 10, 9};
unsigned edges2Row56[] = {0};
unsigned edges2Row57[] = {9, 8, 1, 1, 8, 2, 12, 4, 3, 8, 6, 2, 9, 4, 12, 9, 12, 8, 12, 8, 6, 12, 6, 3, 1, 3, 2, 1, 4, 3, 9, 4, 1, 3, 6, 2, 9, 13, 1, 1, 13, 4, 12, 4, 13, 3, 13, 2, 12, 13, 3, 6, 2, 13, 8, 6, 13, 9, 13, 8, 3, 13, 4, 9, 4, 13, 9, 13, 1, 1, 13, 2, 6, 2, 13, 8, 13, 6, 12, 8, 13, 12, 13, 3, 9, 4, 1, 12, 2, 3, 12, 8, 2, 8, 6, 2};
unsigned edges2Row58[] = {0};
unsigned edges2Row59[] = {2, 11, 4, 10, 9, 6, 6, 9, 8, 11, 12, 4, 2, 11, 6, 2, 6, 10, 6, 11, 12, 6, 12, 8, 4, 12, 9, 9, 12, 8, 2, 10, 9, 2, 9, 4, 2, 10, 13, 2, 13, 4, 4, 13, 12, 11, 12, 13, 6, 11, 13, 6, 13, 8, 9, 8, 13, 10, 9, 13, 4, 13, 9, 2, 13, 4, 2, 11, 13, 11, 12, 13, 8, 13, 12, 6, 13, 8, 10, 13, 6, 10, 9, 13, 2, 10, 4, 10, 9, 4, 6, 11, 12, 6, 12, 8};
unsigned edges2Row60[] = {6, 11, 8, 8, 11, 12, 2, 10, 1, 6, 10, 8, 8, 10, 1, 8, 1, 12, 2, 12, 1, 2, 11, 12, 6, 2, 11, 6, 10, 2, 10, 1, 2, 6, 10, 8, 8, 10, 1, 8, 1, 12, 2, 12, 1, 2, 11, 12};
unsigned edges2Row61[] = {12, 8, 11, 11, 8, 6, 9, 4, 1, 12, 4, 11, 11, 4, 1, 11, 1, 6, 9, 6, 1, 9, 8, 6, 12, 9, 8, 12, 4, 9, 4, 1, 9, 12, 4, 11, 11, 4, 1, 11, 1, 6, 9, 6, 1, 9, 8, 6};
unsigned edges2Row62[] = {0};
unsigned edges2Row63[] = {0};
unsigned edges2Row64[] = {6, 7, 11, 1, 4, 9, 6, 1, 11, 1, 4, 11, 7, 11, 4, 6, 7, 9, 6, 9, 1, 7, 4, 9};
unsigned edges2Row65[] = {6, 7, 11, 2, 1, 10, 6, 7, 10, 7, 1, 10, 7, 2, 1, 7, 11, 2};
unsigned edges2Row66[] = {2, 4, 10, 4, 9, 10, 6, 7, 11, 2, 4, 11, 4, 7, 11, 4, 9, 7, 6, 7, 9, 6, 9, 10, 2, 10, 6, 2, 6, 11, 11, 6, 7, 2, 4, 11, 4, 7, 11, 4, 9, 7, 6, 7, 9, 6, 9, 10};
unsigned edges2Row67[] = {0};
unsigned edges2Row68[] = {2, 6, 3, 6, 7, 3, 4, 9, 1, 2, 6, 1, 6, 9, 1, 6, 7, 9, 4, 9, 7, 4, 7, 3, 2, 3, 4, 2, 4, 1, 1, 4, 9, 2, 6, 1, 6, 9, 1, 6, 7, 9, 4, 9, 7, 4, 7, 3};
unsigned edges2Row69[] = {0};
unsigned edges2Row70[] = {0};
unsigned edges2Row71[] = {12, 4, 3, 11, 6, 7, 12, 4, 7, 4, 6, 7, 4, 11, 6, 4, 3, 11};
unsigned edges2Row72[] = {12, 9, 3, 9, 1, 3, 11, 6, 7, 12, 9, 7, 9, 6, 7, 9, 1, 6, 11, 6, 1, 11, 1, 3, 12, 3, 11, 12, 11, 7, 7, 11, 6, 12, 9, 7, 9, 6, 7, 9, 1, 6, 11, 6, 1, 11, 1, 3};
unsigned edges2Row73[] = {4, 3, 12, 2, 1, 10, 11, 6, 7, 4, 3, 12, 2, 7, 11, 2, 1, 7, 6, 7, 1, 6, 1, 10, 2, 1, 10, 4, 3, 11, 4, 11, 6, 4, 7, 12, 4, 6, 7, 11, 6, 7, 4, 1, 10, 4, 10, 12, 12, 10, 2, 12, 2, 3, 4, 13, 12, 12, 13, 7, 6, 7, 13, 6, 13, 10, 10, 13, 1, 2, 1, 13, 2, 13, 11, 11, 13, 3, 4, 3, 13, 4, 13, 12, 4, 13, 1, 10, 13, 1, 6, 13, 10, 6, 7, 13, 11, 7, 13, 2, 13, 11, 2, 3, 13, 12, 13, 3, 6, 7, 13, 12, 13, 7, 4, 13, 12, 4, 1, 13, 10, 13, 1, 2, 13, 10, 2, 3, 13, 11, 13, 3, 11, 6, 13, 4, 1,
   10, 4, 10, 7, 4, 7, 12, 6, 7, 10, 2, 3, 11, 4, 1, 3, 2, 3, 1, 2, 1, 10, 2, 10, 6, 2, 6, 11, 11, 6, 7, 11, 7, 3, 12, 3, 7, 4, 3, 12};
unsigned edges2Row74[] = {6, 7, 10, 7, 12, 10, 2, 3, 11, 10, 12, 9, 6, 2, 11, 6, 10, 2, 2, 9, 10, 2, 3, 9, 7, 12, 3, 7, 3, 11, 6, 7, 11, 3, 12, 9, 6, 7, 13, 7, 11, 13, 2, 13, 11, 3, 12, 13, 2, 3, 13, 9, 13, 12, 10, 13, 9, 6, 10, 13, 3, 11, 13, 6, 13, 11, 6, 7, 13, 7, 12, 13, 9, 13, 12, 10, 9, 13, 2, 13, 10, 2, 3, 13, 6, 7, 11, 2, 3, 12, 2, 12, 10, 10, 12, 9};
unsigned edges2Row75[] = {0};
unsigned edges2Row76[] = {0};
unsigned edges2Row77[] = {0};
unsigned edges2Row78[] = {0};
unsigned edges2Row79[] = {7, 11, 6, 5, 9, 8, 7, 11, 8, 11, 9, 8, 11, 5, 9, 11, 6, 5};
unsigned edges2Row80[] = {5, 1, 8, 1, 4, 8, 7, 11, 6, 5, 1, 6, 1, 11, 6, 1, 4, 11, 7, 11, 4, 7, 4, 8, 5, 8, 7, 5, 7, 6, 6, 7, 11, 5, 1, 6, 1, 11, 6, 1, 4, 11, 7, 11, 4, 7, 4, 8};
unsigned edges2Row81[] = {8, 5, 9, 6, 7, 11, 10, 2, 1, 8, 5, 9, 6, 1, 10, 6, 7, 1, 2, 1, 7, 2, 7, 11, 6, 7, 11, 8, 5, 10, 8, 10, 2, 8, 1, 9, 8, 2, 1, 10, 2, 1, 8, 7, 11, 8, 11, 9, 9, 11, 6, 9, 6, 5, 8, 13, 9, 9, 13, 1, 2, 1, 13, 2, 13, 11, 11, 13, 7, 6, 7, 13, 6, 13, 10, 10, 13, 5, 8, 5, 13, 8, 13, 9, 8, 13, 7, 11, 13, 7, 2, 13, 11, 2, 1, 13, 10, 1, 13, 6, 13, 10, 6, 5, 13, 9, 13, 5, 2, 1, 13, 9, 13, 1, 8, 13, 9, 8, 7, 13, 11, 13, 7, 6, 13, 11, 6, 5, 13, 10, 13, 5, 10, 2, 13, 8, 7, 11, 8, 11,
   1, 8, 1, 9, 2, 1, 11, 6, 5, 10, 8, 7, 5, 6, 5, 7, 6, 7, 11, 6, 11, 2, 6, 2, 10, 10, 2, 1, 10, 1, 5, 9, 5, 1, 8, 5, 9};
unsigned edges2Row82[] = {10, 2, 5, 5, 2, 8, 11, 6, 7, 2, 4, 8, 10, 6, 11, 10, 11, 2, 11, 2, 4, 11, 4, 7, 5, 7, 8, 5, 6, 7, 10, 6, 5, 7, 4, 8, 10, 13, 5, 5, 13, 6, 11, 6, 13, 7, 13, 8, 11, 13, 7, 4, 8, 13, 2, 4, 13, 10, 13, 2, 7, 13, 6, 10, 6, 13, 10, 13, 5, 5, 13, 8, 4, 8, 13, 2, 13, 4, 11, 2, 13, 11, 13, 7, 10, 6, 5, 11, 8, 7, 11, 2, 8, 2, 4, 8};
unsigned edges2Row83[] = {7, 3, 6, 3, 2, 6, 5, 9, 8, 7, 3, 8, 3, 9, 8, 3, 2, 9, 5, 9, 2, 5, 2, 6, 7, 6, 5, 7, 5, 8, 8, 5, 9, 7, 3, 8, 3, 9, 8, 3, 2, 9, 5, 9, 2, 5, 2, 6};
unsigned edges2Row84[] = {6, 7, 2, 5, 1, 8, 8, 1, 4, 7, 3, 2, 6, 7, 8, 6, 8, 5, 8, 7, 3, 8, 3, 4, 2, 3, 1, 1, 3, 4, 6, 5, 1, 6, 1, 2, 6, 5, 13, 6, 13, 2, 2, 13, 3, 7, 3, 13, 8, 7, 13, 8, 13, 4, 1, 4, 13, 5, 1, 13, 2, 13, 1, 6, 13, 2, 6, 7, 13, 7, 3, 13, 4, 13, 3, 8, 13, 4, 5, 13, 8, 5, 1, 13, 6, 5, 2, 5, 1, 2, 8, 7, 3, 8, 3, 4};
unsigned edges2Row85[] = {6, 7, 10, 10, 7, 1, 8, 5, 9, 7, 3, 1, 6, 5, 8, 6, 8, 7, 8, 7, 3, 8, 3, 9, 10, 9, 1, 10, 5, 9, 6, 5, 10, 9, 3, 1, 6, 13, 10, 10, 13, 5, 8, 5, 13, 9, 13, 1, 8, 13, 9, 3, 1, 13, 7, 3, 13, 6, 13, 7, 9, 13, 5, 6, 5, 13, 6, 13, 10, 10, 13, 1, 3, 1, 13, 7, 13, 3, 8, 7, 13, 8, 13, 9, 6, 5, 10, 8, 1, 9, 8, 7, 1, 7, 3, 1};
unsigned edges2Row86[] = {8, 7, 4, 4, 7, 3, 6, 5, 10, 8, 5, 4, 4, 5, 10, 4, 10, 3, 6, 3, 10, 6, 7, 3, 8, 6, 7, 8, 5, 6, 5, 10, 6, 8, 5, 4, 4, 5, 10, 4, 10, 3, 6, 3, 10, 6, 7, 3};
unsigned edges2Row87[] = {6, 7, 11, 8, 5, 9, 12, 4, 3, 6, 7, 11, 8, 3, 12, 8, 5, 3, 4, 3, 5, 4, 5, 9, 8, 5, 9, 6, 7, 12, 6, 12, 4, 6, 3, 11, 6, 4, 3, 12, 4, 3, 6, 5, 9, 6, 9, 11, 11, 9, 8, 11, 8, 7, 6, 13, 11, 11, 13, 3, 4, 3, 13, 4, 13, 9, 9, 13, 5, 8, 5, 13, 8, 13, 12, 12, 13, 7, 6, 7, 13, 6, 13, 11, 6, 13, 5, 9, 13, 5, 4, 13, 9, 4, 3, 13, 12, 3, 13, 8, 13, 12, 8, 7, 13, 11, 13, 7, 4, 3, 13, 11, 13, 3, 6, 13, 11, 6, 5, 13, 9, 13, 5, 8, 13, 9, 8, 7, 13, 12, 13, 7, 12, 4, 13, 6, 5, 9, 6, 9, 3,
   6, 3, 11, 4, 3, 9, 8, 7, 12, 6, 5, 7, 8, 7, 5, 8, 5, 9, 8, 9, 4, 8, 4, 12, 12, 4, 3, 12, 3, 7, 11, 7, 3, 6, 7, 11};
unsigned edges2Row88[] = {8, 5, 12, 12, 5, 3, 6, 7, 11, 5, 1, 3, 8, 7, 6, 8, 6, 5, 6, 5, 1, 6, 1, 11, 12, 11, 3, 12, 7, 11, 8, 7, 12, 11, 1, 3, 8, 13, 12, 12, 13, 7, 6, 7, 13, 11, 13, 3, 6, 13, 11, 1, 3, 13, 5, 1, 13, 8, 13, 5, 11, 13, 7, 8, 7, 13, 8, 13, 12, 12, 13, 3, 1, 3, 13, 5, 13, 1, 6, 5, 13, 6, 13, 11, 8, 7, 12, 6, 3, 11, 6, 5, 3, 5, 1, 3};
unsigned edges2Row89[] = {8, 7, 12, 10, 5, 6, 2, 3, 11, 4, 1, 9, 10, 5, 6, 8, 7, 12, 3, 11, 4, 4, 9, 11, 11, 2, 9, 9, 1, 2, 2, 3, 11, 8, 7, 12, 1, 4, 10, 10, 6, 4, 4, 9, 6, 6, 5, 9, 4, 1, 9, 2, 3, 11, 5, 10, 8, 8, 12, 10, 10, 6, 12, 12, 7, 6, 4, 1, 9, 10, 5, 6, 7, 8, 11, 11, 2, 8, 8, 12, 2, 2, 3, 12, 4, 1, 9, 8, 7, 12, 10, 2, 5, 5, 3, 2, 5, 6, 3, 3, 11, 6, 10, 5, 6, 11, 3, 2, 4, 12, 1, 1, 7, 12, 1, 9, 7, 7, 8, 9, 8, 7, 12, 13, 5, 6, 13, 9, 5, 13, 4, 9, 13, 3, 4, 13, 11, 3, 13, 2, 11, 13, 1, 2,
   13, 10, 1, 13, 6, 10, 10, 5, 6, 13, 1, 9, 13, 2, 1, 13, 11, 2, 13, 7, 11, 13, 8, 7, 13, 12, 8, 13, 3, 12, 13, 4, 3, 13, 9, 4, 8, 7, 12, 13, 4, 9, 13, 3, 4, 13, 11, 3, 13, 6, 11, 13, 5, 6, 13, 10, 5, 13, 2, 10, 13, 1, 2, 13, 9, 1, 10, 5, 6, 13, 2, 11, 13, 1, 2, 13, 9, 1, 13, 8, 9, 13, 7, 8, 13, 12, 7, 13, 4, 12, 13, 3, 4, 13, 11, 3, 2, 3, 11, 13, 7, 12, 13, 6, 7, 13, 10, 6, 13, 1, 10, 13, 4, 1, 13, 9, 4, 13, 5, 9, 13, 8, 5, 13, 12, 8, 8, 7, 12, 13, 9, 4, 13, 5, 9, 13, 6, 5, 13, 11, 6, 13, 3,
   11, 13, 2, 3, 13, 10, 2, 13, 1, 10, 13, 4, 1, 2, 3, 11, 13, 10, 6, 13, 1, 10, 13, 4, 1, 13, 12, 4, 13, 7, 12, 13, 8, 7, 13, 9, 8, 13, 5, 9, 13, 6, 5, 4, 1, 9, 13, 3, 2, 13, 12, 3, 13, 8, 12, 13, 5, 8, 13, 10, 5, 13, 6, 10, 13, 7, 6, 13, 11, 7, 13, 2, 11, 4, 1, 9, 13, 8, 12, 13, 5, 8, 13, 10, 5, 13, 2, 10, 13, 3, 2, 13, 11, 3, 13, 6, 11, 13, 7, 6, 13, 12, 7, 2, 3, 11, 13, 6, 10, 13, 7, 6, 13, 12, 7, 13, 4, 12, 13, 1, 4, 13, 9, 1, 13, 8, 9, 13, 5, 8, 13, 10, 5, 4, 1, 9, 13, 12, 8, 13, 3, 12,
   13, 2, 3, 13, 10, 2, 13, 5, 10, 13, 6, 5, 13, 11, 6, 13, 7, 11, 13, 8, 7, 10, 5, 6, 13, 11, 2, 13, 7, 11, 13, 8, 7, 13, 9, 8, 13, 1, 9, 13, 4, 1, 13, 12, 4, 13, 3, 12, 13, 2, 3, 13, 5, 6, 13, 9, 5, 13, 8, 9, 13, 7, 8, 13, 12, 7, 13, 4, 12, 13, 3, 4, 13, 11, 3, 13, 2, 11, 13, 1, 2, 13, 10, 1, 13, 6, 10, 13, 7, 11, 13, 8, 7, 13, 12, 8, 13, 3, 12, 13, 4, 3, 13, 9, 4, 13, 1, 9, 13, 2, 1, 13, 10, 2, 13, 5, 10, 13, 6, 5, 13, 11, 6, 13, 1, 10, 13, 4, 1, 13, 9, 4, 13, 5, 9, 13, 8, 5, 13, 12, 8,
   13, 7, 12, 13, 6, 7, 13, 11, 6, 13, 3, 11, 13, 2, 3, 13, 10, 2, 13, 3, 2, 13, 12, 3, 13, 4, 12, 13, 1, 4, 13, 9, 1, 13, 8, 9, 13, 5, 8, 13, 10, 5, 13, 6, 10, 13, 7, 6, 13, 11, 7, 13, 2, 11, 8, 7, 12, 10, 1, 2, 6, 5, 11, 11, 9, 5, 11, 3, 9, 9, 4, 3, 6, 5, 10, 12, 3, 4, 11, 7, 2, 2, 8, 7, 2, 1, 8, 8, 9, 1, 2, 3, 11, 9, 5, 8, 10, 1, 6, 6, 4, 1, 6, 7, 4, 4, 12, 7, 4, 1, 9, 11, 7, 6, 2, 3, 10, 10, 12, 3, 10, 5, 12, 12, 8, 5, 2, 1, 10, 12, 3, 4, 12, 11, 3, 12, 7, 11, 11, 6, 7, 7, 5, 6, 7, 8, 5,
   5, 9, 8, 8, 12, 9, 9, 4, 12, 12, 3, 4, 6, 7, 11, 6, 8, 7, 6, 5, 8, 8, 9, 5, 5, 1, 9, 5, 10, 1, 1, 2, 10, 10, 6, 2, 2, 11, 6, 9, 5, 8, 2, 1, 10, 2, 4, 1, 2, 3, 4, 4, 12, 3, 3, 7, 12, 3, 11, 7, 7, 6, 11, 11, 2, 6, 6, 10, 2, 6, 7, 11, 9, 5, 8, 9, 10, 5, 9, 1, 10, 10, 2, 1, 1, 3, 2, 1, 4, 3, 4, 12, 3, 4, 9, 12, 12, 8, 9};
unsigned edges2Row90[] = {12, 8, 7, 11, 2, 3, 6, 5, 10, 12, 8, 7, 11, 6, 5, 11, 5, 3, 10, 3, 5, 10, 2, 3, 11, 2, 3, 12, 6, 7, 12, 10, 6, 12, 8, 5, 12, 5, 10, 6, 5, 10, 12, 2, 3, 12, 8, 2, 8, 11, 2, 8, 7, 11, 12, 8, 13, 8, 5, 13, 10, 13, 5, 10, 2, 13, 2, 3, 13, 11, 13, 3, 11, 6, 13, 6, 7, 13, 12, 13, 7, 12, 8, 13, 12, 3, 13, 2, 3, 13, 10, 2, 13, 10, 13, 5, 6, 13, 5, 11, 6, 13, 11, 13, 7, 8, 7, 13, 10, 13, 5, 8, 5, 13, 12, 8, 13, 12, 13, 3, 2, 3, 13, 11, 2, 13, 11, 13, 7, 6, 7, 13, 6, 13, 10, 12,
   2, 3, 12, 5, 2, 12, 8, 5, 10, 2, 5, 11, 6, 7, 12, 7, 3, 11, 3, 7, 11, 2, 3, 11, 10, 2, 11, 6, 10, 6, 5, 10, 6, 7, 5, 8, 5, 7, 12, 8, 7};
unsigned edges2Row91[] = {12, 4, 7, 7, 4, 6, 9, 8, 5, 4, 2, 6, 12, 8, 9, 12, 9, 4, 9, 4, 2, 9, 2, 5, 7, 5, 6, 7, 8, 5, 12, 8, 7, 5, 2, 6, 12, 13, 7, 7, 13, 8, 9, 8, 13, 5, 13, 6, 9, 13, 5, 2, 6, 13, 4, 2, 13, 12, 13, 4, 5, 13, 8, 12, 8, 13, 12, 13, 7, 7, 13, 6, 2, 6, 13, 4, 13, 2, 9, 4, 13, 9, 13, 5, 12, 8, 7, 9, 6, 5, 9, 4, 6, 4, 2, 6};
unsigned edges2Row92[] = {6, 5, 2, 2, 5, 1, 8, 7, 12, 6, 7, 2, 2, 7, 12, 2, 12, 1, 8, 1, 12, 8, 5, 1, 6, 8, 5, 6, 7, 8, 7, 12, 8, 6, 7, 2, 2, 7, 12, 2, 12, 1, 8, 1, 12, 8, 5, 1};
unsigned edges2Row93[] = {7, 12, 8, 5, 10, 6, 9, 4, 1, 7, 12, 8, 5, 9, 4, 5, 4, 6, 1, 6, 4, 1, 10, 6, 5, 10, 6, 7, 9, 8, 7, 1, 9, 7, 12, 4, 7, 4, 1, 9, 4, 1, 7, 10, 6, 7, 12, 10, 12, 5, 10, 12, 8, 5, 7, 12, 13, 12, 4, 13, 1, 13, 4, 1, 10, 13, 10, 6, 13, 5, 13, 6, 5, 9, 13, 9, 8, 13, 7, 13, 8, 7, 12, 13, 7, 6, 13, 10, 6, 13, 1, 10, 13, 1, 13, 4, 9, 13, 4, 5, 9, 13, 5, 13, 8, 12, 8, 13, 1, 13, 4, 12, 4, 13, 7, 12, 13, 7, 13, 6, 10, 6, 13, 5, 10, 13, 5, 13, 8, 9, 8, 13, 9, 13, 1, 7, 10, 6, 7, 4,
   10, 7, 12, 4, 1, 10, 4, 5, 9, 8, 7, 8, 6, 5, 6, 8, 5, 10, 6, 5, 1, 10, 5, 9, 1, 9, 4, 1, 9, 8, 4, 12, 4, 8, 7, 12, 8};
unsigned edges2Row94[] = {8, 7, 12, 6, 5, 10, 8, 5, 12, 12, 5, 10, 12, 10, 6, 12, 6, 7};
unsigned edges2Row95[] = {0};
unsigned edges2Row96[] = {5, 7, 10, 7, 11, 10, 1, 4, 9, 5, 7, 9, 7, 4, 9, 7, 11, 4, 1, 4, 11, 1, 11, 10, 5, 10, 1, 5, 1, 9, 9, 1, 4, 5, 7, 9, 7, 4, 9, 7, 11, 4, 1, 4, 11, 1, 11, 10};
unsigned edges2Row97[] = {0};
unsigned edges2Row98[] = {0};
unsigned edges2Row99[] = {0};
unsigned edges2Row100[] = {4, 9, 3, 9, 5, 3, 2, 10, 1, 3, 5, 7, 4, 2, 1, 4, 3, 2, 2, 7, 3, 2, 10, 7, 9, 5, 10, 9, 10, 1, 4, 9, 1, 10, 5, 7, 4, 9, 13, 9, 1, 13, 2, 13, 1, 10, 5, 13, 2, 10, 13, 7, 13, 5, 3, 13, 7, 4, 3, 13, 10, 1, 13, 4, 13, 1, 4, 9, 13, 9, 5, 13, 7, 13, 5, 3, 7, 13, 2, 13, 3, 2, 10, 13, 4, 9, 1, 2, 10, 5, 2, 5, 3, 3, 5, 7};
unsigned edges2Row101[] = {0};
unsigned edges2Row102[] = {0};
unsigned edges2Row103[] = {11, 10, 7, 10, 5, 7, 12, 4, 3, 11, 10, 3, 10, 4, 3, 10, 5, 4, 12, 4, 5, 12, 5, 7, 11, 7, 12, 11, 12, 3, 3, 12, 4, 11, 10, 3, 10, 4, 3, 10, 5, 4, 12, 4, 5, 12, 5, 7};
unsigned edges2Row104[] = {9, 1, 12, 5, 7, 10, 10, 7, 11, 1, 3, 12, 9, 1, 10, 9, 10, 5, 10, 1, 3, 10, 3, 11, 12, 3, 7, 7, 3, 11, 9, 5, 7, 9, 7, 12, 9, 5, 13, 9, 13, 12, 12, 13, 3, 1, 3, 13, 10, 1, 13, 10, 13, 11, 7, 11, 13, 5, 7, 13, 12, 13, 7, 9, 13, 12, 9, 1, 13, 1, 3, 13, 11, 13, 3, 10, 13, 11, 5, 13, 10, 5, 7, 13, 9, 5, 12, 5, 7, 12, 10, 1, 3, 10, 3, 11};
unsigned edges2Row105[] = {2, 1, 11, 11, 1, 7, 4, 3, 12, 1, 5, 7, 2, 3, 4, 2, 4, 1, 4, 1, 5, 4, 5, 12, 11, 12, 7, 11, 3, 12, 2, 3, 11, 12, 5, 7, 2, 13, 11, 11, 13, 3, 4, 3, 13, 12, 13, 7, 4, 13, 12, 5, 7, 13, 1, 5, 13, 2, 13, 1, 12, 13, 3, 2, 3, 13, 2, 13, 11, 11, 13, 7, 5, 7, 13, 1, 13, 5, 4, 1, 13, 4, 13, 12, 2, 3, 11, 4, 7, 12, 4, 1, 7, 1, 5, 7};
unsigned edges2Row106[] = {7, 12, 5, 5, 12, 9, 3, 11, 2, 7, 11, 5, 5, 11, 2, 5, 2, 9, 3, 9, 2, 3, 12, 9, 7, 3, 12, 7, 11, 3, 11, 2, 3, 7, 11, 5, 5, 11, 2, 5, 2, 9, 3, 9, 2, 3, 12, 9};
unsigned edges2Row107[] = {0};
unsigned edges2Row108[] = {9, 5, 12, 12, 5, 7, 10, 1, 2, 9, 1, 12, 12, 1, 2, 12, 2, 7, 10, 7, 2, 10, 5, 7, 9, 10, 5, 9, 1, 10, 1, 2, 10, 9, 1, 12, 12, 1, 2, 12, 2, 7, 10, 7, 2, 10, 5, 7};
unsigned edges2Row109[] = {0};
unsigned edges2Row110[] = {0};
unsigned edges2Row111[] = {0};
unsigned edges2Row112[] = {0};
unsigned edges2Row113[] = {0};
unsigned edges2Row114[] = {0};
unsigned edges2Row115[] = {0};
unsigned edges2Row116[] = {3, 4, 7, 7, 4, 8, 1, 2, 10, 3, 2, 7, 7, 2, 10, 7, 10, 8, 1, 8, 10, 1, 4, 8, 3, 1, 4, 3, 2, 1, 2, 10, 1, 3, 2, 7, 7, 2, 10, 7, 10, 8, 1, 8, 10, 1, 4, 8};
unsigned edges2Row117[] = {0};
unsigned edges2Row118[] = {0};
unsigned edges2Row119[] = {4, 3, 9, 3, 11, 9, 8, 7, 12, 9, 11, 10, 4, 8, 12, 4, 9, 8, 8, 10, 9, 8, 7, 10, 3, 11, 7, 3, 7, 12, 4, 3, 12, 7, 11, 10, 4, 3, 13, 3, 12, 13, 8, 13, 12, 7, 11, 13, 8, 7, 13, 10, 13, 11, 9, 13, 10, 4, 9, 13, 7, 12, 13, 4, 13, 12, 4, 3, 13, 3, 11, 13, 10, 13, 11, 9, 10, 13, 8, 13, 9, 8, 7, 13, 4, 3, 12, 8, 7, 11, 8, 11, 9, 9, 11, 10};
unsigned edges2Row120[] = {3, 11, 1, 1, 11, 10, 7, 12, 8, 3, 12, 1, 1, 12, 8, 1, 8, 10, 7, 10, 8, 7, 11, 10, 3, 7, 11, 3, 12, 7, 12, 8, 7, 3, 12, 1, 1, 12, 8, 1, 8, 10, 7, 10, 8, 7, 11, 10};
unsigned edges2Row121[] = {8, 7, 12, 4, 1, 9, 3, 11, 2, 8, 7, 12, 4, 3, 11, 4, 11, 9, 2, 9, 11, 2, 1, 9, 4, 1, 9, 8, 3, 12, 8, 2, 3, 8, 7, 11, 8, 11, 2, 3, 11, 2, 8, 1, 9, 8, 7, 1, 7, 4, 1, 7, 12, 4, 8, 7, 13, 7, 11, 13, 2, 13, 11, 2, 1, 13, 1, 9, 13, 4, 13, 9, 4, 3, 13, 3, 12, 13, 8, 13, 12, 8, 7, 13, 8, 9, 13, 1, 9, 13, 2, 1, 13, 2, 13, 11, 3, 13, 11, 4, 3, 13, 4, 13, 12, 7, 12, 13, 2, 13, 11, 7, 11, 13, 8, 7, 13, 8, 13, 9, 1, 9, 13, 4, 1, 13, 4, 13, 12, 3, 12, 13, 3, 13, 2, 8, 1, 9, 8, 11,
   1, 8, 7, 11, 2, 1, 11, 4, 3, 12, 8, 12, 9, 4, 9, 12, 4, 1, 9, 4, 2, 1, 4, 3, 2, 3, 11, 2, 3, 12, 11, 7, 11, 12, 8, 7, 12};
unsigned edges2Row122[] = {3, 11, 2, 7, 12, 8, 3, 12, 2, 2, 12, 8, 2, 8, 7, 2, 7, 11};
unsigned edges2Row123[] = {9, 4, 10, 10, 4, 2, 12, 8, 7, 9, 8, 10, 10, 8, 7, 10, 7, 2, 12, 2, 7, 12, 4, 2, 9, 12, 4, 9, 8, 12, 8, 7, 12, 9, 8, 10, 10, 8, 7, 10, 7, 2, 12, 2, 7, 12, 4, 2};
unsigned edges2Row124[] = {8, 7, 12, 10, 1, 2, 8, 7, 10, 10, 7, 2, 12, 2, 7, 8, 1, 12, 8, 10, 1, 12, 1, 2};
unsigned edges2Row125[] = {9, 4, 1, 12, 8, 7, 9, 8, 1, 1, 8, 7, 1, 7, 12, 1, 12, 4};
unsigned edges2Row126[] = {0};
unsigned edges2Row127[] = {0};
unsigned edges2Row128[] = {9, 1, 4, 12, 7, 8, 9, 1, 8, 1, 7, 8, 1, 12, 7, 1, 4, 12};
unsigned edges2Row129[] = {8, 12, 7, 10, 2, 1, 8, 10, 7, 10, 2, 7, 12, 7, 2, 8, 12, 1, 8, 1, 10, 12, 2, 1};
unsigned edges2Row130[] = {9, 10, 4, 10, 2, 4, 12, 7, 8, 9, 10, 8, 10, 7, 8, 10, 2, 7, 12, 7, 2, 12, 2, 4, 9, 4, 12, 9, 12, 8, 8, 12, 7, 9, 10, 8, 10, 7, 8, 10, 2, 7, 12, 7, 2, 12, 2, 4};
unsigned edges2Row131[] = {3, 2, 11, 7, 8, 12, 3, 2, 12, 2, 8, 12, 2, 7, 8, 2, 11, 7};
unsigned edges2Row132[] = {8, 12, 7, 4, 9, 1, 3, 2, 11, 8, 12, 7, 4, 11, 3, 4, 9, 11, 2, 11, 9, 2, 9, 1, 4, 9, 1, 8, 12, 3, 8, 3, 2, 8, 11, 7, 8, 2, 11, 3, 2, 11, 8, 9, 1, 8, 1, 7, 7, 1, 4, 7, 4, 12, 8, 13, 7, 7, 13, 11, 2, 11, 13, 2, 13, 1, 1, 13, 9, 4, 9, 13, 4, 13, 3, 3, 13, 12, 8, 12, 13, 8, 13, 7, 8, 13, 9, 1, 13, 9, 2, 13, 1, 2, 11, 13, 3, 11, 13, 4, 13, 3, 4, 12, 13, 7, 13, 12, 2, 11, 13, 7, 13, 11, 8, 13, 7, 8, 9, 13, 1, 13, 9, 4, 13, 1, 4, 12, 13, 3, 13, 12, 3, 2, 13, 8, 9, 1, 8, 1,
   11, 8, 11, 7, 2, 11, 1, 4, 12, 3, 8, 9, 12, 4, 12, 9, 4, 9, 1, 4, 1, 2, 4, 2, 3, 3, 2, 11, 3, 11, 12, 7, 12, 11, 8, 12, 7};
unsigned edges2Row133[] = {3, 1, 11, 1, 10, 11, 7, 8, 12, 3, 1, 12, 1, 8, 12, 1, 10, 8, 7, 8, 10, 7, 10, 11, 3, 11, 7, 3, 7, 12, 12, 7, 8, 3, 1, 12, 1, 8, 12, 1, 10, 8, 7, 8, 10, 7, 10, 11};
unsigned edges2Row134[] = {4, 9, 3, 3, 9, 11, 8, 12, 7, 9, 10, 11, 4, 12, 8, 4, 8, 9, 8, 9, 10, 8, 10, 7, 3, 7, 11, 3, 12, 7, 4, 12, 3, 7, 10, 11, 4, 13, 3, 3, 13, 12, 8, 12, 13, 7, 13, 11, 8, 13, 7, 10, 11, 13, 9, 10, 13, 4, 13, 9, 7, 13, 12, 4, 12, 13, 4, 13, 3, 3, 13, 11, 10, 11, 13, 9, 13, 10, 8, 9, 13, 8, 13, 7, 4, 12, 3, 8, 11, 7, 8, 9, 11, 9, 10, 11};
unsigned edges2Row135[] = {0};
unsigned edges2Row136[] = {0};
unsigned edges2Row137[] = {3, 7, 4, 7, 8, 4, 1, 10, 2, 3, 7, 2, 7, 10, 2, 7, 8, 10, 1, 10, 8, 1, 8, 4, 3, 4, 1, 3, 1, 2, 2, 1, 10, 3, 7, 2, 7, 10, 2, 7, 8, 10, 1, 10, 8, 1, 8, 4};
unsigned edges2Row138[] = {0};
unsigned edges2Row139[] = {0};
unsigned edges2Row140[] = {0};
unsigned edges2Row141[] = {0};
unsigned edges2Row142[] = {0};
unsigned edges2Row143[] = {0};
unsigned edges2Row144[] = {0};
unsigned edges2Row145[] = {9, 12, 5, 12, 7, 5, 10, 2, 1, 9, 12, 1, 12, 2, 1, 12, 7, 2, 10, 2, 7, 10, 7, 5, 9, 5, 10, 9, 10, 1, 1, 10, 2, 9, 12, 1, 12, 2, 1, 12, 7, 2, 10, 2, 7, 10, 7, 5};
unsigned edges2Row146[] = {0};
unsigned edges2Row147[] = {7, 5, 12, 5, 9, 12, 3, 2, 11, 7, 5, 11, 5, 2, 11, 5, 9, 2, 3, 2, 9, 3, 9, 12, 7, 12, 3, 7, 3, 11, 11, 3, 2, 7, 5, 11, 5, 2, 11, 5, 9, 2, 3, 2, 9, 3, 9, 12};
unsigned edges2Row148[] = {2, 11, 1, 11, 7, 1, 4, 12, 3, 1, 7, 5, 2, 4, 3, 2, 1, 4, 4, 5, 1, 4, 12, 5, 11, 7, 12, 11, 12, 3, 2, 11, 3, 12, 7, 5, 2, 11, 13, 11, 3, 13, 4, 13, 3, 12, 7, 13, 4, 12, 13, 5, 13, 7, 1, 13, 5, 2, 1, 13, 12, 3, 13, 2, 13, 3, 2, 11, 13, 11, 7, 13, 5, 13, 7, 1, 5, 13, 4, 13, 1, 4, 12, 13, 2, 11, 3, 4, 12, 7, 4, 7, 1, 1, 7, 5};
unsigned edges2Row149[] = {9, 12, 1, 5, 10, 7, 10, 11, 7, 1, 12, 3, 9, 10, 1, 9, 5, 10, 10, 3, 1, 10, 11, 3, 12, 7, 3, 7, 11, 3, 9, 7, 5, 9, 12, 7, 9, 13, 5, 9, 12, 13, 12, 3, 13, 1, 13, 3, 10, 13, 1, 10, 11, 13, 7, 13, 11, 5, 13, 7, 12, 7, 13, 9, 12, 13, 9, 13, 1, 1, 13, 3, 11, 3, 13, 10, 11, 13, 5, 10, 13, 5, 13, 7, 9, 12, 5, 5, 12, 7, 10, 3, 1, 10, 11, 3};
unsigned edges2Row150[] = {11, 7, 10, 10, 7, 5, 12, 3, 4, 11, 3, 10, 10, 3, 4, 10, 4, 5, 12, 5, 4, 12, 7, 5, 11, 12, 7, 11, 3, 12, 3, 4, 12, 11, 3, 10, 10, 3, 4, 10, 4, 5, 12, 5, 4, 12, 7, 5};
unsigned edges2Row151[] = {0};
unsigned edges2Row152[] = {0};
unsigned edges2Row153[] = {4, 3, 9, 9, 3, 5, 2, 1, 10, 3, 7, 5, 4, 1, 2, 4, 2, 3, 2, 3, 7, 2, 7, 10, 9, 10, 5, 9, 1, 10, 4, 1, 9, 10, 7, 5, 4, 13, 9, 9, 13, 1, 2, 1, 13, 10, 13, 5, 2, 13, 10, 7, 5, 13, 3, 7, 13, 4, 13, 3, 10, 13, 1, 4, 1, 13, 4, 13, 9, 9, 13, 5, 7, 5, 13, 3, 13, 7, 2, 3, 13, 2, 13, 10, 4, 1, 9, 2, 5, 10, 2, 3, 5, 3, 7, 5};
unsigned edges2Row154[] = {0};
unsigned edges2Row155[] = {0};
unsigned edges2Row156[] = {0};
unsigned edges2Row157[] = {5, 10, 7, 7, 10, 11, 1, 9, 4, 5, 9, 7, 7, 9, 4, 7, 4, 11, 1, 11, 4, 1, 10, 11, 5, 1, 10, 5, 9, 1, 9, 4, 1, 5, 9, 7, 7, 9, 4, 7, 4, 11, 1, 11, 4, 1, 10, 11};
unsigned edges2Row158[] = {0};
unsigned edges2Row159[] = {8, 12, 7, 6, 10, 5, 8, 12, 5, 12, 10, 5, 12, 6, 10, 12, 7, 6};
unsigned edges2Row160[] = {7, 8, 12, 5, 6, 10, 9, 1, 4, 7, 8, 12, 5, 4, 9, 5, 6, 4, 1, 4, 6, 1, 6, 10, 5, 6, 10, 7, 8, 9, 7, 9, 1, 7, 4, 12, 7, 1, 4, 9, 1, 4, 7, 6, 10, 7, 10, 12, 12, 10, 5, 12, 5, 8, 7, 13, 12, 12, 13, 4, 1, 4, 13, 1, 13, 10, 10, 13, 6, 5, 6, 13, 5, 13, 9, 9, 13, 8, 7, 8, 13, 7, 13, 12, 7, 13, 6, 10, 13, 6, 1, 13, 10, 1, 4, 13, 9, 4, 13, 5, 13, 9, 5, 8, 13, 12, 13, 8, 1, 4, 13, 12, 13, 4, 7, 13, 12, 7, 6, 13, 10, 13, 6, 5, 13, 10, 5, 8, 13, 9, 13, 8, 9, 1, 13, 7, 6, 10, 7, 10,
   4, 7, 4, 12, 1, 4, 10, 5, 8, 9, 7, 6, 8, 5, 8, 6, 5, 6, 10, 5, 10, 1, 5, 1, 9, 9, 1, 4, 9, 4, 8, 12, 8, 4, 7, 8, 12};
unsigned edges2Row161[] = {6, 2, 5, 2, 1, 5, 8, 12, 7, 6, 2, 7, 2, 12, 7, 2, 1, 12, 8, 12, 1, 8, 1, 5, 6, 5, 8, 6, 8, 7, 7, 8, 12, 6, 2, 7, 2, 12, 7, 2, 1, 12, 8, 12, 1, 8, 1, 5};
unsigned edges2Row162[] = {12, 7, 4, 7, 6, 4, 9, 5, 8, 4, 6, 2, 12, 9, 8, 12, 4, 9, 9, 2, 4, 9, 5, 2, 7, 6, 5, 7, 5, 8, 12, 7, 8, 5, 6, 2, 12, 7, 13, 7, 8, 13, 9, 13, 8, 5, 6, 13, 9, 5, 13, 2, 13, 6, 4, 13, 2, 12, 4, 13, 5, 8, 13, 12, 13, 8, 12, 7, 13, 7, 6, 13, 2, 13, 6, 4, 2, 13, 9, 13, 4, 9, 5, 13, 12, 7, 8, 9, 5, 6, 9, 6, 4, 4, 6, 2};
unsigned edges2Row163[] = {12, 7, 8, 11, 3, 2, 6, 10, 5, 12, 7, 8, 11, 5, 6, 11, 3, 5, 10, 5, 3, 10, 3, 2, 11, 3, 2, 12, 7, 6, 12, 6, 10, 12, 5, 8, 12, 10, 5, 6, 10, 5, 12, 3, 2, 12, 2, 8, 8, 2, 11, 8, 11, 7, 12, 13, 8, 8, 13, 5, 10, 5, 13, 10, 13, 2, 2, 13, 3, 11, 3, 13, 11, 13, 6, 6, 13, 7, 12, 7, 13, 12, 13, 8, 12, 13, 3, 2, 13, 3, 10, 13, 2, 10, 5, 13, 6, 5, 13, 11, 13, 6, 11, 7, 13, 8, 13, 7, 10, 5, 13, 8, 13, 5, 12, 13, 8, 12, 3, 13, 2, 13, 3, 11, 13, 2, 11, 7, 13, 6, 13, 7, 6, 10, 13,
   12, 3, 2, 12, 2, 5, 12, 5, 8, 10, 5, 2, 11, 7, 6, 12, 3, 7, 11, 7, 3, 11, 3, 2, 11, 2, 10, 11, 10, 6, 6, 10, 5, 6, 5, 7, 8, 7, 5, 12, 7, 8};
unsigned edges2Row164[] = {8, 12, 7, 10, 6, 5, 2, 11, 3, 4, 9, 1, 10, 6, 5, 8, 12, 7, 3, 4, 11, 4, 11, 9, 11, 9, 2, 9, 2, 1, 2, 11, 3, 8, 12, 7, 1, 10, 4, 10, 4, 6, 4, 6, 9, 6, 9, 5, 4, 9, 1, 2, 11, 3, 5, 8, 10, 8, 10, 12, 10, 12, 6, 12, 6, 7, 4, 9, 1, 10, 6, 5, 7, 11, 8, 11, 8, 2, 8, 2, 12, 2, 12, 3, 4, 9, 1, 8, 12, 7, 10, 5, 2, 5, 2, 3, 5, 3, 6, 3, 6, 11, 10, 6, 5, 11, 2, 3, 4, 1, 12, 1, 12, 7, 1, 7, 9, 7, 9, 8, 8, 12, 7, 13, 6, 5, 13, 5, 9, 13, 9, 4, 13, 4, 3, 13, 3, 11, 13, 11, 2, 13, 2, 1,
   13, 1, 10, 13, 10, 6, 10, 6, 5, 13, 9, 1, 13, 1, 2, 13, 2, 11, 13, 11, 7, 13, 7, 8, 13, 8, 12, 13, 12, 3, 13, 3, 4, 13, 4, 9, 8, 12, 7, 13, 9, 4, 13, 4, 3, 13, 3, 11, 13, 11, 6, 13, 6, 5, 13, 5, 10, 13, 10, 2, 13, 2, 1, 13, 1, 9, 10, 6, 5, 13, 11, 2, 13, 2, 1, 13, 1, 9, 13, 9, 8, 13, 8, 7, 13, 7, 12, 13, 12, 4, 13, 4, 3, 13, 3, 11, 2, 11, 3, 13, 12, 7, 13, 7, 6, 13, 6, 10, 13, 10, 1, 13, 1, 4, 13, 4, 9, 13, 9, 5, 13, 5, 8, 13, 8, 12, 8, 12, 7, 13, 4, 9, 13, 9, 5, 13, 5, 6, 13, 6, 11, 13, 11,
   3, 13, 3, 2, 13, 2, 10, 13, 10, 1, 13, 1, 4, 2, 11, 3, 13, 6, 10, 13, 10, 1, 13, 1, 4, 13, 4, 12, 13, 12, 7, 13, 7, 8, 13, 8, 9, 13, 9, 5, 13, 5, 6, 4, 9, 1, 13, 2, 3, 13, 3, 12, 13, 12, 8, 13, 8, 5, 13, 5, 10, 13, 10, 6, 13, 6, 7, 13, 7, 11, 13, 11, 2, 4, 9, 1, 13, 12, 8, 13, 8, 5, 13, 5, 10, 13, 10, 2, 13, 2, 3, 13, 3, 11, 13, 11, 6, 13, 6, 7, 13, 7, 12, 2, 11, 3, 13, 10, 6, 13, 6, 7, 13, 7, 12, 13, 12, 4, 13, 4, 1, 13, 1, 9, 13, 9, 8, 13, 8, 5, 13, 5, 10, 4, 9, 1, 13, 8, 12, 13, 12, 3,
   13, 3, 2, 13, 2, 10, 13, 10, 5, 13, 5, 6, 13, 6, 11, 13, 11, 7, 13, 7, 8, 10, 6, 5, 13, 2, 11, 13, 11, 7, 13, 7, 8, 13, 8, 9, 13, 9, 1, 13, 1, 4, 13, 4, 12, 13, 12, 3, 13, 3, 2, 13, 6, 5, 13, 5, 9, 13, 9, 8, 13, 8, 7, 13, 7, 12, 13, 12, 4, 13, 4, 3, 13, 3, 11, 13, 11, 2, 13, 2, 1, 13, 1, 10, 13, 10, 6, 13, 11, 7, 13, 7, 8, 13, 8, 12, 13, 12, 3, 13, 3, 4, 13, 4, 9, 13, 9, 1, 13, 1, 2, 13, 2, 10, 13, 10, 5, 13, 5, 6, 13, 6, 11, 13, 10, 1, 13, 1, 4, 13, 4, 9, 13, 9, 5, 13, 5, 8, 13, 8, 12,
   13, 12, 7, 13, 7, 6, 13, 6, 11, 13, 11, 3, 13, 3, 2, 13, 2, 10, 13, 2, 3, 13, 3, 12, 13, 12, 4, 13, 4, 1, 13, 1, 9, 13, 9, 8, 13, 8, 5, 13, 5, 10, 13, 10, 6, 13, 6, 7, 13, 7, 11, 13, 11, 2, 8, 12, 7, 10, 2, 1, 6, 11, 5, 11, 5, 9, 11, 9, 3, 9, 3, 4, 6, 10, 5, 12, 4, 3, 11, 2, 7, 2, 7, 8, 2, 8, 1, 8, 1, 9, 2, 11, 3, 9, 8, 5, 10, 6, 1, 6, 1, 4, 6, 4, 7, 4, 7, 12, 4, 9, 1, 11, 6, 7, 2, 10, 3, 10, 3, 12, 10, 12, 5, 12, 5, 8, 2, 10, 1, 12, 4, 3, 12, 3, 11, 12, 11, 7, 11, 7, 6, 7, 6, 5, 7, 5, 8,
   5, 8, 9, 8, 9, 12, 9, 12, 4, 12, 4, 3, 6, 11, 7, 6, 7, 8, 6, 8, 5, 8, 5, 9, 5, 9, 1, 5, 1, 10, 1, 10, 2, 10, 2, 6, 2, 6, 11, 9, 8, 5, 2, 10, 1, 2, 1, 4, 2, 4, 3, 4, 3, 12, 3, 12, 7, 3, 7, 11, 7, 11, 6, 11, 6, 2, 6, 2, 10, 6, 11, 7, 9, 8, 5, 9, 5, 10, 9, 10, 1, 10, 1, 2, 1, 2, 3, 1, 3, 4, 4, 3, 12, 4, 12, 9, 12, 9, 8};
unsigned edges2Row165[] = {8, 12, 5, 12, 3, 5, 6, 11, 7, 5, 3, 1, 8, 6, 7, 8, 5, 6, 6, 1, 5, 6, 11, 1, 12, 3, 11, 12, 11, 7, 8, 12, 7, 11, 3, 1, 8, 12, 13, 12, 7, 13, 6, 13, 7, 11, 3, 13, 6, 11, 13, 1, 13, 3, 5, 13, 1, 8, 5, 13, 11, 7, 13, 8, 13, 7, 8, 12, 13, 12, 3, 13, 1, 13, 3, 5, 1, 13, 6, 13, 5, 6, 11, 13, 8, 12, 7, 6, 11, 3, 6, 3, 5, 5, 3, 1};
unsigned edges2Row166[] = {6, 11, 7, 8, 9, 5, 12, 3, 4, 6, 11, 7, 8, 12, 3, 8, 3, 5, 4, 5, 3, 4, 9, 5, 8, 9, 5, 6, 12, 7, 6, 4, 12, 6, 11, 3, 6, 3, 4, 12, 3, 4, 6, 9, 5, 6, 11, 9, 11, 8, 9, 11, 7, 8, 6, 11, 13, 11, 3, 13, 4, 13, 3, 4, 9, 13, 9, 5, 13, 8, 13, 5, 8, 12, 13, 12, 7, 13, 6, 13, 7, 6, 11, 13, 6, 5, 13, 9, 5, 13, 4, 9, 13, 4, 13, 3, 12, 13, 3, 8, 12, 13, 8, 13, 7, 11, 7, 13, 4, 13, 3, 11, 3, 13, 6, 11, 13, 6, 13, 5, 9, 5, 13, 8, 9, 13, 8, 13, 7, 12, 7, 13, 12, 13, 4, 6, 9, 5, 6, 3, 9,
   6, 11, 3, 4, 9, 3, 8, 12, 7, 6, 7, 5, 8, 5, 7, 8, 9, 5, 8, 4, 9, 8, 12, 4, 12, 3, 4, 12, 7, 3, 11, 3, 7, 6, 11, 7};
unsigned edges2Row167[] = {8, 4, 7, 4, 3, 7, 6, 10, 5, 8, 4, 5, 4, 10, 5, 4, 3, 10, 6, 10, 3, 6, 3, 7, 8, 7, 6, 8, 6, 5, 5, 6, 10, 8, 4, 5, 4, 10, 5, 4, 3, 10, 6, 10, 3, 6, 3, 7};
unsigned edges2Row168[] = {6, 10, 7, 10, 1, 7, 8, 9, 5, 7, 1, 3, 6, 8, 5, 6, 7, 8, 8, 3, 7, 8, 9, 3, 10, 1, 9, 10, 9, 5, 6, 10, 5, 9, 1, 3, 6, 10, 13, 10, 5, 13, 8, 13, 5, 9, 1, 13, 8, 9, 13, 3, 13, 1, 7, 13, 3, 6, 7, 13, 9, 5, 13, 6, 13, 5, 6, 10, 13, 10, 1, 13, 3, 13, 1, 7, 3, 13, 8, 13, 7, 8, 9, 13, 6, 10, 5, 8, 9, 1, 8, 1, 7, 7, 1, 3};
unsigned edges2Row169[] = {6, 2, 7, 5, 8, 1, 8, 4, 1, 7, 2, 3, 6, 8, 7, 6, 5, 8, 8, 3, 7, 8, 4, 3, 2, 1, 3, 1, 4, 3, 6, 1, 5, 6, 2, 1, 6, 13, 5, 6, 2, 13, 2, 3, 13, 7, 13, 3, 8, 13, 7, 8, 4, 13, 1, 13, 4, 5, 13, 1, 2, 1, 13, 6, 2, 13, 6, 13, 7, 7, 13, 3, 4, 3, 13, 8, 4, 13, 5, 8, 13, 5, 13, 1, 6, 2, 5, 5, 2, 1, 8, 3, 7, 8, 4, 3};
unsigned edges2Row170[] = {7, 6, 3, 3, 6, 2, 5, 8, 9, 7, 8, 3, 3, 8, 9, 3, 9, 2, 5, 2, 9, 5, 6, 2, 7, 5, 6, 7, 8, 5, 8, 9, 5, 7, 8, 3, 3, 8, 9, 3, 9, 2, 5, 2, 9, 5, 6, 2};
unsigned edges2Row171[] = {10, 5, 2, 5, 8, 2, 11, 7, 6, 2, 8, 4, 10, 11, 6, 10, 2, 11, 11, 4, 2, 11, 7, 4, 5, 8, 7, 5, 7, 6, 10, 5, 6, 7, 8, 4, 10, 5, 13, 5, 6, 13, 11, 13, 6, 7, 8, 13, 11, 7, 13, 4, 13, 8, 2, 13, 4, 10, 2, 13, 7, 6, 13, 10, 13, 6, 10, 5, 13, 5, 8, 13, 4, 13, 8, 2, 4, 13, 11, 13, 2, 11, 7, 13, 10, 5, 6, 11, 7, 8, 11, 8, 2, 2, 8, 4};
unsigned edges2Row172[] = {8, 9, 5, 6, 11, 7, 10, 1, 2, 8, 9, 5, 6, 10, 1, 6, 1, 7, 2, 7, 1, 2, 11, 7, 6, 11, 7, 8, 10, 5, 8, 2, 10, 8, 9, 1, 8, 1, 2, 10, 1, 2, 8, 11, 7, 8, 9, 11, 9, 6, 11, 9, 5, 6, 8, 9, 13, 9, 1, 13, 2, 13, 1, 2, 11, 13, 11, 7, 13, 6, 13, 7, 6, 10, 13, 10, 5, 13, 8, 13, 5, 8, 9, 13, 8, 7, 13, 11, 7, 13, 2, 11, 13, 2, 13, 1, 10, 13, 1, 6, 10, 13, 6, 13, 5, 9, 5, 13, 2, 13, 1, 9, 1, 13, 8, 9, 13, 8, 13, 7, 11, 7, 13, 6, 11, 13, 6, 13, 5, 10, 5, 13, 10, 13, 2, 8, 11, 7, 8, 1,
   11, 8, 9, 1, 2, 11, 1, 6, 10, 5, 8, 5, 7, 6, 7, 5, 6, 11, 7, 6, 2, 11, 6, 10, 2, 10, 1, 2, 10, 5, 1, 9, 1, 5, 8, 9, 5};
unsigned edges2Row173[] = {5, 8, 1, 1, 8, 4, 7, 6, 11, 5, 6, 1, 1, 6, 11, 1, 11, 4, 7, 4, 11, 7, 8, 4, 5, 7, 8, 5, 6, 7, 6, 11, 7, 5, 6, 1, 1, 6, 11, 1, 11, 4, 7, 4, 11, 7, 8, 4};
unsigned edges2Row174[] = {7, 6, 11, 5, 8, 9, 7, 8, 11, 11, 8, 9, 11, 9, 5, 11, 5, 6};
unsigned edges2Row175[] = {0};
unsigned edges2Row176[] = {0};
unsigned edges2Row177[] = {0};
unsigned edges2Row178[] = {0};
unsigned edges2Row179[] = {6, 10, 7, 7, 10, 12, 2, 11, 3, 10, 9, 12, 6, 11, 2, 6, 2, 10, 2, 10, 9, 2, 9, 3, 7, 3, 12, 7, 11, 3, 6, 11, 7, 3, 9, 12, 6, 13, 7, 7, 13, 11, 2, 11, 13, 3, 13, 12, 2, 13, 3, 9, 12, 13, 10, 9, 13, 6, 13, 10, 3, 13, 11, 6, 11, 13, 6, 13, 7, 7, 13, 12, 9, 12, 13, 10, 13, 9, 2, 10, 13, 2, 13, 3, 6, 11, 7, 2, 12, 3, 2, 10, 12, 10, 9, 12};
unsigned edges2Row180[] = {4, 12, 3, 2, 10, 1, 11, 7, 6, 4, 12, 3, 2, 11, 7, 2, 7, 1, 6, 1, 7, 6, 10, 1, 2, 10, 1, 4, 11, 3, 4, 6, 11, 4, 12, 7, 4, 7, 6, 11, 7, 6, 4, 10, 1, 4, 12, 10, 12, 2, 10, 12, 3, 2, 4, 12, 13, 12, 7, 13, 6, 13, 7, 6, 10, 13, 10, 1, 13, 2, 13, 1, 2, 11, 13, 11, 3, 13, 4, 13, 3, 4, 12, 13, 4, 1, 13, 10, 1, 13, 6, 10, 13, 6, 13, 7, 11, 13, 7, 2, 11, 13, 2, 13, 3, 12, 3, 13, 6, 13, 7, 12, 7, 13, 4, 12, 13, 4, 13, 1, 10, 1, 13, 2, 10, 13, 2, 13, 3, 11, 3, 13, 11, 13, 6, 4,
   10, 1, 4, 7, 10, 4, 12, 7, 6, 10, 7, 2, 11, 3, 4, 3, 1, 2, 1, 3, 2, 10, 1, 2, 6, 10, 2, 11, 6, 11, 7, 6, 11, 3, 7, 12, 7, 3, 4, 12, 3};
unsigned edges2Row181[] = {12, 3, 9, 9, 3, 1, 11, 7, 6, 12, 7, 9, 9, 7, 6, 9, 6, 1, 11, 1, 6, 11, 3, 1, 12, 11, 3, 12, 7, 11, 7, 6, 11, 12, 7, 9, 9, 7, 6, 9, 6, 1, 11, 1, 6, 11, 3, 1};
unsigned edges2Row182[] = {12, 3, 4, 11, 7, 6, 12, 7, 4, 4, 7, 6, 4, 6, 11, 4, 11, 3};
unsigned edges2Row183[] = {0};
unsigned edges2Row184[] = {0};
unsigned edges2Row185[] = {2, 3, 6, 6, 3, 7, 4, 1, 9, 2, 1, 6, 6, 1, 9, 6, 9, 7, 4, 7, 9, 4, 3, 7, 2, 4, 3, 2, 1, 4, 1, 9, 4, 2, 1, 6, 6, 1, 9, 6, 9, 7, 4, 7, 9, 4, 3, 7};
unsigned edges2Row186[] = {0};
unsigned edges2Row187[] = {2, 10, 4, 4, 10, 9, 6, 11, 7, 2, 11, 4, 4, 11, 7, 4, 7, 9, 6, 9, 7, 6, 10, 9, 2, 6, 10, 2, 11, 6, 11, 7, 6, 2, 11, 4, 4, 11, 7, 4, 7, 9, 6, 9, 7, 6, 10, 9};
unsigned edges2Row188[] = {6, 11, 7, 2, 10, 1, 6, 10, 7, 7, 10, 1, 7, 1, 2, 7, 2, 11};
unsigned edges2Row189[] = {6, 11, 7, 1, 9, 4, 6, 11, 1, 1, 11, 4, 7, 4, 11, 6, 9, 7, 6, 1, 9, 7, 9, 4};
unsigned edges2Row190[] = {0};
unsigned edges2Row191[] = {0};
unsigned edges2Row192[] = {12, 11, 8, 11, 6, 8, 9, 1, 4, 12, 11, 4, 11, 1, 4, 11, 6, 1, 9, 1, 6, 9, 6, 8, 12, 8, 9, 12, 9, 4, 4, 9, 1, 12, 11, 4, 11, 1, 4, 11, 6, 1, 9, 1, 6, 9, 6, 8};
unsigned edges2Row193[] = {6, 8, 11, 8, 12, 11, 2, 1, 10, 6, 8, 10, 8, 1, 10, 8, 12, 1, 2, 1, 12, 2, 12, 11, 6, 11, 2, 6, 2, 10, 10, 2, 1, 6, 8, 10, 8, 1, 10, 8, 12, 1, 2, 1, 12, 2, 12, 11};
unsigned edges2Row194[] = {2, 4, 11, 10, 6, 9, 6, 8, 9, 11, 4, 12, 2, 6, 11, 2, 10, 6, 6, 12, 11, 6, 8, 12, 4, 9, 12, 9, 8, 12, 2, 9, 10, 2, 4, 9, 2, 13, 10, 2, 4, 13, 4, 12, 13, 11, 13, 12, 6, 13, 11, 6, 8, 13, 9, 13, 8, 10, 13, 9, 4, 9, 13, 2, 4, 13, 2, 13, 11, 11, 13, 12, 8, 12, 13, 6, 8, 13, 10, 6, 13, 10, 13, 9, 2, 4, 10, 10, 4, 9, 6, 12, 11, 6, 8, 12};
unsigned edges2Row195[] = {0};
unsigned edges2Row196[] = {9, 1, 8, 1, 2, 8, 12, 3, 4, 8, 2, 6, 9, 12, 4, 9, 8, 12, 12, 6, 8, 12, 3, 6, 1, 2, 3, 1, 3, 4, 9, 1, 4, 3, 2, 6, 9, 1, 13, 1, 4, 13, 12, 13, 4, 3, 2, 13, 12, 3, 13, 6, 13, 2, 8, 13, 6, 9, 8, 13, 3, 4, 13, 9, 13, 4, 9, 1, 13, 1, 2, 13, 6, 13, 2, 8, 6, 13, 12, 13, 8, 12, 3, 13, 9, 1, 4, 12, 3, 2, 12, 2, 8, 8, 2, 6};
unsigned edges2Row197[] = {0};
unsigned edges2Row198[] = {8, 9, 6, 6, 9, 10, 4, 12, 3, 8, 12, 6, 6, 12, 3, 6, 3, 10, 4, 10, 3, 4, 9, 10, 8, 4, 9, 8, 12, 4, 12, 3, 4, 8, 12, 6, 6, 12, 3, 6, 3, 10, 4, 10, 3, 4, 9, 10};
unsigned edges2Row199[] = {0};
unsigned edges2Row200[] = {0};
unsigned edges2Row201[] = {1, 10, 4, 10, 6, 4, 3, 11, 2, 4, 6, 8, 1, 3, 2, 1, 4, 3, 3, 8, 4, 3, 11, 8, 10, 6, 11, 10, 11, 2, 1, 10, 2, 11, 6, 8, 1, 10, 13, 10, 2, 13, 3, 13, 2, 11, 6, 13, 3, 11, 13, 8, 13, 6, 4, 13, 8, 1, 4, 13, 11, 2, 13, 1, 13, 2, 1, 10, 13, 10, 6, 13, 8, 13, 6, 4, 8, 13, 3, 13, 4, 3, 11, 13, 1, 10, 2, 3, 11, 6, 3, 6, 4, 4, 6, 8};
unsigned edges2Row202[] = {10, 6, 9, 9, 6, 8, 11, 2, 3, 10, 2, 9, 9, 2, 3, 9, 3, 8, 11, 8, 3, 11, 6, 8, 10, 11, 6, 10, 2, 11, 2, 3, 11, 10, 2, 9, 9, 2, 3, 9, 3, 8, 11, 8, 3, 11, 6, 8};
unsigned edges2Row203[] = {0};
unsigned edges2Row204[] = {0};
unsigned edges2Row205[] = {0};
unsigned edges2Row206[] = {0};
unsigned edges2Row207[] = {0};
unsigned edges2Row208[] = {0};
unsigned edges2Row209[] = {2, 1, 11, 1, 9, 11, 6, 5, 10, 11, 9, 12, 2, 6, 10, 2, 11, 6, 6, 12, 11, 6, 5, 12, 1, 9, 5, 1, 5, 10, 2, 1, 10, 5, 9, 12, 2, 1, 13, 1, 10, 13, 6, 13, 10, 5, 9, 13, 6, 5, 13, 12, 13, 9, 11, 13, 12, 2, 11, 13, 5, 10, 13, 2, 13, 10, 2, 1, 13, 1, 9, 13, 12, 13, 9, 11, 12, 13, 6, 13, 11, 6, 5, 13, 2, 1, 10, 6, 5, 9, 6, 9, 11, 11, 9, 12};
unsigned edges2Row210[] = {11, 2, 12, 12, 2, 4, 10, 6, 5, 11, 6, 12, 12, 6, 5, 12, 5, 4, 10, 4, 5, 10, 2, 4, 11, 10, 2, 11, 6, 10, 6, 5, 10, 11, 6, 12, 12, 6, 5, 12, 5, 4, 10, 4, 5, 10, 2, 4};
unsigned edges2Row211[] = {0};
unsigned edges2Row212[] = {1, 2, 5, 5, 2, 6, 3, 4, 12, 1, 4, 5, 5, 4, 12, 5, 12, 6, 3, 6, 12, 3, 2, 6, 1, 3, 2, 1, 4, 3, 4, 12, 3, 1, 4, 5, 5, 4, 12, 5, 12, 6, 3, 6, 12, 3, 2, 6};
unsigned edges2Row213[] = {1, 9, 3, 3, 9, 12, 5, 10, 6, 1, 10, 3, 3, 10, 6, 3, 6, 12, 5, 12, 6, 5, 9, 12, 1, 5, 9, 1, 10, 5, 10, 6, 5, 1, 10, 3, 3, 10, 6, 3, 6, 12, 5, 12, 6, 5, 9, 12};
unsigned edges2Row214[] = {6, 5, 10, 12, 3, 4, 6, 5, 12, 12, 5, 4, 10, 4, 5, 6, 3, 10, 6, 12, 3, 10, 3, 4};
unsigned edges2Row215[] = {0};
unsigned edges2Row216[] = {0};
unsigned edges2Row217[] = {6, 5, 10, 2, 3, 11, 1, 9, 4, 6, 5, 10, 2, 1, 9, 2, 9, 11, 4, 11, 9, 4, 3, 11, 2, 3, 11, 6, 1, 10, 6, 4, 1, 6, 5, 9, 6, 9, 4, 1, 9, 4, 6, 3, 11, 6, 5, 3, 5, 2, 3, 5, 10, 2, 6, 5, 13, 5, 9, 13, 4, 13, 9, 4, 3, 13, 3, 11, 13, 2, 13, 11, 2, 1, 13, 1, 10, 13, 6, 13, 10, 6, 5, 13, 6, 11, 13, 3, 11, 13, 4, 3, 13, 4, 13, 9, 1, 13, 9, 2, 1, 13, 2, 13, 10, 5, 10, 13, 4, 13, 9, 5, 9, 13, 6, 5, 13, 6, 13, 11, 3, 11, 13, 2, 3, 13, 2, 13, 10, 1, 10, 13, 1, 13, 4, 6, 3, 11, 6, 9, 3,
   6, 5, 9, 4, 3, 9, 2, 1, 10, 6, 10, 11, 2, 11, 10, 2, 3, 11, 2, 4, 3, 2, 1, 4, 1, 9, 4, 1, 10, 9, 5, 9, 10, 6, 5, 10};
unsigned edges2Row218[] = {10, 6, 5, 11, 2, 3, 10, 2, 5, 5, 2, 3, 5, 3, 11, 5, 11, 6};
unsigned edges2Row219[] = {0};
unsigned edges2Row220[] = {0};
unsigned edges2Row221[] = {5, 10, 6, 1, 9, 4, 5, 9, 6, 6, 9, 4, 6, 4, 1, 6, 1, 10};
unsigned edges2Row222[] = {0};
unsigned edges2Row223[] = {0};
unsigned edges2Row224[] = {8, 12, 5, 5, 12, 10, 4, 9, 1, 12, 11, 10, 8, 9, 4, 8, 4, 12, 4, 12, 11, 4, 11, 1, 5, 1, 10, 5, 9, 1, 8, 9, 5, 1, 11, 10, 8, 13, 5, 5, 13, 9, 4, 9, 13, 1, 13, 10, 4, 13, 1, 11, 10, 13, 12, 11, 13, 8, 13, 12, 1, 13, 9, 8, 9, 13, 8, 13, 5, 5, 13, 10, 11, 10, 13, 12, 13, 11, 4, 12, 13, 4, 13, 1, 8, 9, 5, 4, 10, 1, 4, 12, 10, 12, 11, 10};
unsigned edges2Row225[] = {0};
unsigned edges2Row226[] = {4, 12, 2, 2, 12, 11, 8, 9, 5, 4, 9, 2, 2, 9, 5, 2, 5, 11, 8, 11, 5, 8, 12, 11, 4, 8, 12, 4, 9, 8, 9, 5, 8, 4, 9, 2, 2, 9, 5, 2, 5, 11, 8, 11, 5, 8, 12, 11};
unsigned edges2Row227[] = {0};
unsigned edges2Row228[] = {2, 10, 1, 4, 12, 3, 9, 5, 8, 2, 10, 1, 4, 9, 5, 4, 5, 3, 8, 3, 5, 8, 12, 3, 4, 12, 3, 2, 9, 1, 2, 8, 9, 2, 10, 5, 2, 5, 8, 9, 5, 8, 2, 12, 3, 2, 10, 12, 10, 4, 12, 10, 1, 4, 2, 10, 13, 10, 5, 13, 8, 13, 5, 8, 12, 13, 12, 3, 13, 4, 13, 3, 4, 9, 13, 9, 1, 13, 2, 13, 1, 2, 10, 13, 2, 3, 13, 12, 3, 13, 8, 12, 13, 8, 13, 5, 9, 13, 5, 4, 9, 13, 4, 13, 1, 10, 1, 13, 8, 13, 5, 10, 5, 13, 2, 10, 13, 2, 13, 3, 12, 3, 13, 4, 12, 13, 4, 13, 1, 9, 1, 13, 9, 13, 8, 2, 12, 3, 2, 5,
   12, 2, 10, 5, 8, 12, 5, 4, 9, 1, 2, 1, 3, 4, 3, 1, 4, 12, 3, 4, 8, 12, 4, 9, 8, 9, 5, 8, 9, 1, 5, 10, 5, 1, 2, 10, 1};
unsigned edges2Row229[] = {0};
unsigned edges2Row230[] = {8, 9, 5, 4, 12, 3, 8, 12, 5, 5, 12, 3, 5, 3, 4, 5, 4, 9};
unsigned edges2Row231[] = {0};
unsigned edges2Row232[] = {10, 1, 11, 11, 1, 3, 9, 5, 8, 10, 5, 11, 11, 5, 8, 11, 8, 3, 9, 3, 8, 9, 1, 3, 10, 9, 1, 10, 5, 9, 5, 8, 9, 10, 5, 11, 11, 5, 8, 11, 8, 3, 9, 3, 8, 9, 1, 3};
unsigned edges2Row233[] = {4, 1, 8, 8, 1, 5, 2, 3, 11, 4, 3, 8, 8, 3, 11, 8, 11, 5, 2, 5, 11, 2, 1, 5, 4, 2, 1, 4, 3, 2, 3, 11, 2, 4, 3, 8, 8, 3, 11, 8, 11, 5, 2, 5, 11, 2, 1, 5};
unsigned edges2Row234[] = {2, 3, 11, 9, 5, 8, 2, 3, 9, 9, 3, 8, 11, 8, 3, 2, 5, 11, 2, 9, 5, 11, 5, 8};
unsigned edges2Row235[] = {0};
unsigned edges2Row236[] = {10, 1, 2, 9, 5, 8, 10, 5, 2, 2, 5, 8, 2, 8, 9, 2, 9, 1};
unsigned edges2Row237[] = {0};
unsigned edges2Row238[] = {0};
unsigned edges2Row239[] = {0};
unsigned edges2Row240[] = {0};
unsigned edges2Row241[] = {0};
unsigned edges2Row242[] = {0};
unsigned edges2Row243[] = {0};
unsigned edges2Row244[] = {1, 2, 10, 3, 4, 12, 1, 4, 10, 10, 4, 12, 10, 12, 3, 10, 3, 2};
unsigned edges2Row245[] = {0};
unsigned edges2Row246[] = {0};
unsigned edges2Row247[] = {0};
unsigned edges2Row248[] = {0};
unsigned edges2Row249[] = {2, 3, 11, 4, 1, 9, 2, 1, 11, 11, 1, 9, 11, 9, 4, 11, 4, 3};
unsigned edges2Row250[] = {0};
unsigned edges2Row251[] = {0};
unsigned edges2Row252[] = {0};
unsigned edges2Row253[] = {0};
unsigned (*Edges2[])[] = {&edges2Row0, &edges2Row1, &edges2Row2, &edges2Row3, &edges2Row4, &edges2Row5, &edges2Row6, &edges2Row7, &edges2Row8, &edges2Row9, &edges2Row10, &edges2Row11, &edges2Row12, &edges2Row13, &edges2Row14, &edges2Row15, &edges2Row16, &edges2Row17, &edges2Row18, &edges2Row19, &edges2Row20, &edges2Row21, &edges2Row22, &edges2Row23, &edges2Row24, &edges2Row25, &edges2Row26, &edges2Row27, &edges2Row28, &edges2Row29, &edges2Row30, &edges2Row31, &edges2Row32, &edges2Row33,
   &edges2Row34, &edges2Row35, &edges2Row36, &edges2Row37, &edges2Row38, &edges2Row39, &edges2Row40, &edges2Row41, &edges2Row42, &edges2Row43, &edges2Row44, &edges2Row45, &edges2Row46, &edges2Row47, &edges2Row48, &edges2Row49, &edges2Row50, &edges2Row51, &edges2Row52, &edges2Row53, &edges2Row54, &edges2Row55, &edges2Row56, &edges2Row57, &edges2Row58, &edges2Row59, &edges2Row60, &edges2Row61, &edges2Row62, &edges2Row63, &edges2Row64, &edges2Row65, &edges2Row66, &edges2Row67, &edges2Row68,
   &edges2Row69, &edges2Row70, &edges2Row71, &edges2Row72, &edges2Row73, &edges2Row74, &edges2Row75, &edges2Row76, &edges2Row77, &edges2Row78, &edges2Row79, &edges2Row80, &edges2Row81, &edges2Row82, &edges2Row83, &edges2Row84, &edges2Row85, &edges2Row86, &edges2Row87, &edges2Row88, &edges2Row89, &edges2Row90, &edges2Row91, &edges2Row92, &edges2Row93, &edges2Row94, &edges2Row95, &edges2Row96, &edges2Row97, &edges2Row98, &edges2Row99, &edges2Row100, &edges2Row101, &edges2Row102, &edges2Row103,
   &edges2Row104, &edges2Row105, &edges2Row106, &edges2Row107, &edges2Row108, &edges2Row109, &edges2Row110, &edges2Row111, &edges2Row112, &edges2Row113, &edges2Row114, &edges2Row115, &edges2Row116, &edges2Row117, &edges2Row118, &edges2Row119, &edges2Row120, &edges2Row121, &edges2Row122, &edges2Row123, &edges2Row124, &edges2Row125, &edges2Row126, &edges2Row127, &edges2Row128, &edges2Row129, &edges2Row130, &edges2Row131, &edges2Row132, &edges2Row133, &edges2Row134, &edges2Row135, &edges2Row136,
   &edges2Row137, &edges2Row138, &edges2Row139, &edges2Row140, &edges2Row141, &edges2Row142, &edges2Row143, &edges2Row144, &edges2Row145, &edges2Row146, &edges2Row147, &edges2Row148, &edges2Row149, &edges2Row150, &edges2Row151, &edges2Row152, &edges2Row153, &edges2Row154, &edges2Row155, &edges2Row156, &edges2Row157, &edges2Row158, &edges2Row159, &edges2Row160, &edges2Row161, &edges2Row162, &edges2Row163, &edges2Row164, &edges2Row165, &edges2Row166, &edges2Row167, &edges2Row168,
   &edges2Row169, &edges2Row170, &edges2Row171, &edges2Row172, &edges2Row173, &edges2Row174, &edges2Row175, &edges2Row176, &edges2Row177, &edges2Row178, &edges2Row179, &edges2Row180, &edges2Row181, &edges2Row182, &edges2Row183, &edges2Row184, &edges2Row185, &edges2Row186, &edges2Row187, &edges2Row188, &edges2Row189, &edges2Row190, &edges2Row191, &edges2Row192, &edges2Row193, &edges2Row194, &edges2Row195, &edges2Row196, &edges2Row197, &edges2Row198, &edges2Row199, &edges2Row200,
   &edges2Row201, &edges2Row202, &edges2Row203, &edges2Row204, &edges2Row205, &edges2Row206, &edges2Row207, &edges2Row208, &edges2Row209, &edges2Row210, &edges2Row211, &edges2Row212, &edges2Row213, &edges2Row214, &edges2Row215, &edges2Row216, &edges2Row217, &edges2Row218, &edges2Row219, &edges2Row220, &edges2Row221, &edges2Row222, &edges2Row223, &edges2Row224, &edges2Row225, &edges2Row226, &edges2Row227, &edges2Row228, &edges2Row229, &edges2Row230, &edges2Row231, &edges2Row232,
   &edges2Row233, &edges2Row234, &edges2Row235, &edges2Row236, &edges2Row237, &edges2Row238, &edges2Row239, &edges2Row240, &edges2Row241, &edges2Row242, &edges2Row243, &edges2Row244, &edges2Row245, &edges2Row246, &edges2Row247, &edges2Row248, &edges2Row249, &edges2Row250, &edges2Row251, &edges2Row252, &edges2Row253};

unsigned Edges2Sizes[254] = { 1, 1, 1, 1, 18, 1, 1, 1, 1, 18, 1, 1, 1, 1, 1, 1, 1, 18, 1,
                              24, 48, 48, 1, 18, 1, 177, 1, 48, 1, 96, 1, 1, 18, 1, 1, 18,
                              177, 1, 1, 24, 48, 48, 1, 48, 96, 1, 1, 1, 1, 1, 1, 48, 96, 1,
                              1, 48, 1, 96, 1, 96, 48, 48, 1, 1, 24, 18, 48, 1, 48, 1, 1, 18,
                              48, 177, 96, 1, 1, 1, 1, 18, 48, 177, 96, 48, 96, 96, 48, 177,
                              96, 816, 177, 96, 48, 177, 18, 1, 48, 1, 1, 1, 96, 1, 1, 48,
                              96, 96, 48, 1, 48, 1, 1, 1, 1, 1, 1, 1, 48, 1, 1, 96, 48, 177,
                              18, 48, 24, 18, 1, 1, 18, 24, 48, 18, 177, 48, 96, 1, 1, 48,
                              1, 1, 1, 1, 1, 1, 1, 48, 1, 48, 96, 96, 48, 1, 1, 96, 1, 1, 1,
                              48, 1, 18, 177, 48, 96, 177, 816, 96, 177, 48, 96, 96, 48, 96,
                              177, 48, 18, 1, 1, 1, 1, 96, 177, 48, 18, 1, 1, 48, 1, 48, 18,
                              24, 1, 1, 48, 48, 96, 1, 96, 1, 48, 1, 1, 96, 48, 1, 1, 1, 1,
                              1, 1, 96, 48, 1, 48, 48, 24, 1, 1, 177, 18, 1, 1, 18, 1, 1, 96,
                              1, 48, 1, 177, 1, 18, 1, 48, 48, 24, 1, 18, 1, 1, 1, 1, 1, 1,
                              1, 18, 1, 1, 1, 1, 18, 1, 1, 1, 1};


unsigned special_name[7] = {3, 4, 6, 7, 10, 12, 13};
unsigned special_nface[7] = {1, 1, 2, 4, 3, 3, 7};
unsigned special_nedge[7] = {18, 24, 48, 177, 96, 96, 816};
unsigned special_indSizes[7] = {2, 2, 4, 16, 8, 8, 31};

unsigned specialindRow0[] = {0, 1};
unsigned specialindRow1[] = {0, 1};
unsigned specialindRow2[] = {0, 2, 1, 3};
unsigned specialindRow3[] = {0, 8, 4, 12, 2, 10, 1, 9, 6, 14, 5, 13, 3, 11, 15, 7};
unsigned specialindRow4[] = {0, 4, 1, 5, 2, 6, 3, 7};
unsigned specialindRow5[] = {0, 4, 2, 6, 1, 5, 3, 7};
unsigned specialindRow6[] = {0, 1, 2, 4, 8, 16, 32, 3, 9, 17, 33, 6, 18, 34, 12, 20, 36, 24, 40, 35, 25, 22, 44, 19, 41, 38, 28, 83, 105, 102, 92};
unsigned (*special_ind[])[] = {&specialindRow0, &specialindRow1, &specialindRow2, &specialindRow3, &specialindRow4, &specialindRow5, &specialindRow6};

unsigned specialpos0Row0[] = {1, 2, 3, 4, 5, 6};
unsigned specialpos0Row1[] = {7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18};
unsigned (*specialpos0[])[] = {&specialpos0Row0, &specialpos0Row1};
unsigned specialpos1Row0[] = {1, 2, 3, 4, 5, 6};
unsigned specialpos1Row1[] = {7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24};
unsigned (*specialpos1[])[] = {&specialpos1Row0, &specialpos1Row1};
unsigned specialpos2Row0[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
unsigned specialpos2Row1[] = {10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33};
unsigned specialpos2Row2[] = {34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48};
unsigned specialpos2Row3[] = {34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48};
unsigned (*specialpos2[])[] = {&specialpos2Row0, &specialpos2Row1, &specialpos2Row2, &specialpos2Row3};
unsigned specialpos3Row0[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
unsigned specialpos3Row1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
unsigned specialpos3Row2[] = {10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24};
unsigned specialpos3Row3[] = {10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24};
unsigned specialpos3Row4[] = {25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39};
unsigned specialpos3Row5[] = {25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39};
unsigned specialpos3Row6[] = {40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54};
unsigned specialpos3Row7[] = {40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54};
unsigned specialpos3Row8[] = {55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81};
unsigned specialpos3Row9[] = {55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81};
unsigned specialpos3Row10[] = {82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108};
unsigned specialpos3Row11[] = {82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108};
unsigned specialpos3Row12[] = {109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135};
unsigned specialpos3Row13[] = {109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135};
unsigned specialpos3Row14[] = {136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150};
unsigned specialpos3Row15[] = {151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177};
unsigned (*specialpos3[])[] = {&specialpos3Row0, &specialpos3Row1, &specialpos3Row2, &specialpos3Row3, &specialpos3Row4, &specialpos3Row5, &specialpos3Row6, &specialpos3Row7, &specialpos3Row8, &specialpos3Row9, &specialpos3Row10, &specialpos3Row11, &specialpos3Row12, &specialpos3Row13, &specialpos3Row14, &specialpos3Row15};
unsigned specialpos4Row0[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
unsigned specialpos4Row1[] = {13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36};
unsigned specialpos4Row2[] = {37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60};
unsigned specialpos4Row3[] = {37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60};
unsigned specialpos4Row4[] = {61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84};
unsigned specialpos4Row5[] = {61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84};
unsigned specialpos4Row6[] = {85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96};
unsigned specialpos4Row7[] = {85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96};
unsigned (*specialpos4[])[] = {&specialpos4Row0, &specialpos4Row1, &specialpos4Row2, &specialpos4Row3, &specialpos4Row4, &specialpos4Row5, &specialpos4Row6, &specialpos4Row7};
unsigned specialpos5Row0[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
unsigned specialpos5Row1[] = {13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36};
unsigned specialpos5Row2[] = {37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60};
unsigned specialpos5Row3[] = {37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60};
unsigned specialpos5Row4[] = {61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84};
unsigned specialpos5Row5[] = {61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84};
unsigned specialpos5Row6[] = {85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96};
unsigned specialpos5Row7[] = {85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96};
unsigned (*specialpos5[])[] = {&specialpos5Row0, &specialpos5Row1, &specialpos5Row2, &specialpos5Row3, &specialpos5Row4, &specialpos5Row5, &specialpos5Row6, &specialpos5Row7};
unsigned specialpos6Row0[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
unsigned specialpos6Row1[] = {13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30};
unsigned specialpos6Row2[] = {31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48};
unsigned specialpos6Row3[] = {49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66};
unsigned specialpos6Row4[] = {67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84};
unsigned specialpos6Row5[] = {85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102};
unsigned specialpos6Row6[] = {103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120};
unsigned specialpos6Row7[] = {121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150};
unsigned specialpos6Row8[] = {151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180};
unsigned specialpos6Row9[] = {181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210};
unsigned specialpos6Row10[] = {211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240};
unsigned specialpos6Row11[] = {241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270};
unsigned specialpos6Row12[] = {271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281, 282, 283, 284, 285, 286, 287, 288, 289, 290, 291, 292, 293, 294, 295, 296, 297, 298, 299, 300};
unsigned specialpos6Row13[] = {301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312, 313, 314, 315, 316, 317, 318, 319, 320, 321, 322, 323, 324, 325, 326, 327, 328, 329, 330};
unsigned specialpos6Row14[] = {331, 332, 333, 334, 335, 336, 337, 338, 339, 340, 341, 342, 343, 344, 345, 346, 347, 348, 349, 350, 351, 352, 353, 354, 355, 356, 357, 358, 359, 360};
unsigned specialpos6Row15[] = {361, 362, 363, 364, 365, 366, 367, 368, 369, 370, 371, 372, 373, 374, 375, 376, 377, 378, 379, 380, 381, 382, 383, 384, 385, 386, 387, 388, 389, 390};
unsigned specialpos6Row16[] = {391, 392, 393, 394, 395, 396, 397, 398, 399, 400, 401, 402, 403, 404, 405, 406, 407, 408, 409, 410, 411, 412, 413, 414, 415, 416, 417, 418, 419, 420};
unsigned specialpos6Row17[] = {421, 422, 423, 424, 425, 426, 427, 428, 429, 430, 431, 432, 433, 434, 435, 436, 437, 438, 439, 440, 441, 442, 443, 444, 445, 446, 447, 448, 449, 450};
unsigned specialpos6Row18[] = {451, 452, 453, 454, 455, 456, 457, 458, 459, 460, 461, 462, 463, 464, 465, 466, 467, 468, 469, 470, 471, 472, 473, 474, 475, 476, 477, 478, 479, 480};
unsigned specialpos6Row19[] = {481, 482, 483, 484, 485, 486, 487, 488, 489, 490, 491, 492, 493, 494, 495, 496, 497, 498, 499, 500, 501, 502, 503, 504, 505, 506, 507, 508, 509, 510, 511, 512, 513, 514, 515, 516};
unsigned specialpos6Row20[] = {517, 518, 519, 520, 521, 522, 523, 524, 525, 526, 527, 528, 529, 530, 531, 532, 533, 534, 535, 536, 537, 538, 539, 540, 541, 542, 543, 544, 545, 546, 547, 548, 549, 550, 551, 552};
unsigned specialpos6Row21[] = {553, 554, 555, 556, 557, 558, 559, 560, 561, 562, 563, 564, 565, 566, 567, 568, 569, 570, 571, 572, 573, 574, 575, 576, 577, 578, 579, 580, 581, 582, 583, 584, 585, 586, 587, 588};
unsigned specialpos6Row22[] = {589, 590, 591, 592, 593, 594, 595, 596, 597, 598, 599, 600, 601, 602, 603, 604, 605, 606, 607, 608, 609, 610, 611, 612, 613, 614, 615, 616, 617, 618, 619, 620, 621, 622, 623, 624};
unsigned specialpos6Row23[] = {625, 626, 627, 628, 629, 630, 631, 632, 633, 634, 635, 636, 637, 638, 639, 640, 641, 642};
unsigned specialpos6Row24[] = {643, 644, 645, 646, 647, 648, 649, 650, 651, 652, 653, 654, 655, 656, 657, 658, 659, 660};
unsigned specialpos6Row25[] = {661, 662, 663, 664, 665, 666, 667, 668, 669, 670, 671, 672, 673, 674, 675, 676, 677, 678};
unsigned specialpos6Row26[] = {679, 680, 681, 682, 683, 684, 685, 686, 687, 688, 689, 690, 691, 692, 693, 694, 695, 696};
unsigned specialpos6Row27[] = {697, 698, 699, 700, 701, 702, 703, 704, 705, 706, 707, 708, 709, 710, 711, 712, 713, 714, 715, 716, 717, 718, 719, 720, 721, 722, 723, 724, 725, 726};
unsigned specialpos6Row28[] = {727, 728, 729, 730, 731, 732, 733, 734, 735, 736, 737, 738, 739, 740, 741, 742, 743, 744, 745, 746, 747, 748, 749, 750, 751, 752, 753, 754, 755, 756};
unsigned specialpos6Row29[] = {757, 758, 759, 760, 761, 762, 763, 764, 765, 766, 767, 768, 769, 770, 771, 772, 773, 774, 775, 776, 777, 778, 779, 780, 781, 782, 783, 784, 785, 786};
unsigned specialpos6Row30[] = {787, 788, 789, 790, 791, 792, 793, 794, 795, 796, 797, 798, 799, 800, 801, 802, 803, 804, 805, 806, 807, 808, 809, 810, 811, 812, 813, 814, 815, 816};
unsigned (*specialpos6[])[] = {&specialpos6Row0, &specialpos6Row1, &specialpos6Row2, &specialpos6Row3, &specialpos6Row4, &specialpos6Row5, &specialpos6Row6, &specialpos6Row7, &specialpos6Row8, &specialpos6Row9, &specialpos6Row10, &specialpos6Row11, &specialpos6Row12, &specialpos6Row13, &specialpos6Row14, &specialpos6Row15, &specialpos6Row16, &specialpos6Row17, &specialpos6Row18, &specialpos6Row19, &specialpos6Row20, &specialpos6Row21, &specialpos6Row22, &specialpos6Row23, &specialpos6Row24,
   &specialpos6Row25, &specialpos6Row26, &specialpos6Row27, &specialpos6Row28, &specialpos6Row29, &specialpos6Row30};
unsigned (*(*special_pos[])[])[] = {&specialpos0, &specialpos1, &specialpos2, &specialpos3, &specialpos4, &specialpos5, &specialpos6};

unsigned specialposSize0Row0 = 6;
unsigned specialposSize0Row1 = 12;
unsigned* specialposSize0[] = {&specialposSize0Row0, &specialposSize0Row1};
unsigned specialposSize1Row0 = 6;
unsigned specialposSize1Row1 = 18;
unsigned* specialposSize1[] = {&specialposSize1Row0, &specialposSize1Row1};
unsigned specialposSize2Row0 = 9;
unsigned specialposSize2Row1 = 24;
unsigned specialposSize2Row2 = 15;
unsigned specialposSize2Row3 = 15;
unsigned* specialposSize2[] = {&specialposSize2Row0, &specialposSize2Row1, &specialposSize2Row2, &specialposSize2Row3};
unsigned specialposSize3Row0 = 9;
unsigned specialposSize3Row1 = 9;
unsigned specialposSize3Row2 = 15;
unsigned specialposSize3Row3 = 15;
unsigned specialposSize3Row4 = 15;
unsigned specialposSize3Row5 = 15;
unsigned specialposSize3Row6 = 15;
unsigned specialposSize3Row7 = 15;
unsigned specialposSize3Row8 = 27;
unsigned specialposSize3Row9 = 27;
unsigned specialposSize3Row10 = 27;
unsigned specialposSize3Row11 = 27;
unsigned specialposSize3Row12 = 27;
unsigned specialposSize3Row13 = 27;
unsigned specialposSize3Row14 = 15;
unsigned specialposSize3Row15 = 27;
unsigned* specialposSize3[] = {&specialposSize3Row0, &specialposSize3Row1, &specialposSize3Row2, &specialposSize3Row3, &specialposSize3Row4, &specialposSize3Row5, &specialposSize3Row6, &specialposSize3Row7, &specialposSize3Row8, &specialposSize3Row9, &specialposSize3Row10, &specialposSize3Row11, &specialposSize3Row12, &specialposSize3Row13, &specialposSize3Row14, &specialposSize3Row15};
unsigned specialposSize4Row0 = 12;
unsigned specialposSize4Row1 = 24;
unsigned specialposSize4Row2 = 24;
unsigned specialposSize4Row3 = 24;
unsigned specialposSize4Row4 = 24;
unsigned specialposSize4Row5 = 24;
unsigned specialposSize4Row6 = 12;
unsigned specialposSize4Row7 = 12;
unsigned* specialposSize4[] = {&specialposSize4Row0, &specialposSize4Row1, &specialposSize4Row2, &specialposSize4Row3, &specialposSize4Row4, &specialposSize4Row5, &specialposSize4Row6, &specialposSize4Row7};
unsigned specialposSize5Row0 = 12;
unsigned specialposSize5Row1 = 24;
unsigned specialposSize5Row2 = 24;
unsigned specialposSize5Row3 = 24;
unsigned specialposSize5Row4 = 24;
unsigned specialposSize5Row5 = 24;
unsigned specialposSize5Row6 = 12;
unsigned specialposSize5Row7 = 12;
unsigned* specialposSize5[] = {&specialposSize5Row0, &specialposSize5Row1, &specialposSize5Row2, &specialposSize5Row3, &specialposSize5Row4, &specialposSize5Row5, &specialposSize5Row6, &specialposSize5Row7};
unsigned specialposSize6Row0 = 12;
unsigned specialposSize6Row1 = 18;
unsigned specialposSize6Row2 = 18;
unsigned specialposSize6Row3 = 18;
unsigned specialposSize6Row4 = 18;
unsigned specialposSize6Row5 = 18;
unsigned specialposSize6Row6 = 18;
unsigned specialposSize6Row7 = 30;
unsigned specialposSize6Row8 = 30;
unsigned specialposSize6Row9 = 30;
unsigned specialposSize6Row10 = 30;
unsigned specialposSize6Row11 = 30;
unsigned specialposSize6Row12 = 30;
unsigned specialposSize6Row13 = 30;
unsigned specialposSize6Row14 = 30;
unsigned specialposSize6Row15 = 30;
unsigned specialposSize6Row16 = 30;
unsigned specialposSize6Row17 = 30;
unsigned specialposSize6Row18 = 30;
unsigned specialposSize6Row19 = 36;
unsigned specialposSize6Row20 = 36;
unsigned specialposSize6Row21 = 36;
unsigned specialposSize6Row22 = 36;
unsigned specialposSize6Row23 = 18;
unsigned specialposSize6Row24 = 18;
unsigned specialposSize6Row25 = 18;
unsigned specialposSize6Row26 = 18;
unsigned specialposSize6Row27 = 30;
unsigned specialposSize6Row28 = 30;
unsigned specialposSize6Row29 = 30;
unsigned specialposSize6Row30 = 30;
unsigned* specialposSize6[] = {&specialposSize6Row0, &specialposSize6Row1, &specialposSize6Row2, &specialposSize6Row3, &specialposSize6Row4, &specialposSize6Row5, &specialposSize6Row6, &specialposSize6Row7, &specialposSize6Row8, &specialposSize6Row9, &specialposSize6Row10, &specialposSize6Row11, &specialposSize6Row12, &specialposSize6Row13, &specialposSize6Row14, &specialposSize6Row15, &specialposSize6Row16, &specialposSize6Row17, &specialposSize6Row18, &specialposSize6Row19, &specialposSize6Row20, &specialposSize6Row21, &specialposSize6Row22, &specialposSize6Row23, &specialposSize6Row24, &specialposSize6Row25, &specialposSize6Row26, &specialposSize6Row27, &specialposSize6Row28, &specialposSize6Row29, &specialposSize6Row30};
unsigned* (*(special_posSize)[])[] = {&specialposSize0, &specialposSize1, &specialposSize2, &specialposSize3, &specialposSize4, &specialposSize5, &specialposSize6};
