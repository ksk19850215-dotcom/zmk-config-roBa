#pragma once
#include <dt-bindings/zmk/keys.h>

// Shift+数字
#define EXCL     LS(N1)   // !
#define AT_      LS(N2)   // @ 
#define HASH_SYM LS(N3)   // #
#define DOLL     LS(N4)   // $
#define PERC     LS(N5)   // %
#define CARET    LS(N6)   // ^
#define AMPS     LS(N7)   // &
#define STAR     LS(N8)   // *
#define LPAR     LS(N9)   // (
#define RPAR     LS(N0)   // )

// ブラケット／記号
#define LB       LBKT           // [
#define RB       RBKT           // ]
#define LCB      LS(LBKT)       // {
#define RCB      LS(RBKT)       // }
#define EQLS     EQUAL          // =
#define PLUS     LS(EQUAL)      // +
#define BSLH     BACKSLASH      // \ （JISなら RO に差し替え可）

#define SEMI     SEMI           // ;
#define COLN     LS(SEMI)       // :
#define COMM     COMMA          // ,
#define DOTK     DOT            // .
#define LT_      LS(COMMA)      // <
#define GT_      LS(DOT)        // >
#define SLH      SLASH          // /
#define QMARK    LS(SLASH)      // ?

#define SQT      APOSTROPHE     // '
#define DQT      LS(APOSTROPHE) // "

// JIS系
#define RO__     RO             // Ro
#define SRO_     LS(RO)         // Shift+Ro
#define YEN      BACKSLASH      // ￥（必要なら RO に）

