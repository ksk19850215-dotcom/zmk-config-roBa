#pragma once
#include <dt-bindings/zmk/keys.h>

/* 既存に無い or 衝突しにくい補助名だけ定義する */

#define AT_S   LS(N2)        /* @ : 衝突回避のため AT_S 名 */
#define LCBR   LS(LBKT)      /* { */
#define RCBR   LS(RBKT)      /* } */
#define LT_S   LS(COMMA)     /* < */
#define GT_S   LS(DOT)       /* > */

#define RO__   RO            /* Ro */
#define SRO_   LS(RO)        /* Shift+Ro */

/* 必要なら追加してOK（ZMK既存名は使わないこと） */
