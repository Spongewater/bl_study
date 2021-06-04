/**
 * @file main.c
 * @brief 
 * 
 * Copyright (c) 2021 Bouffalolab team
 * 
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.  The
 * ASF licenses this file to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance with the
 * License.  You may obtain a copy of the License at
 * 
 *   http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.  See the
 * License for the specific language governing permissions and limitations
 * under the License.
 * 
 */
#include "hal_sec_dsa.h"

/** @addtogroup  BFLB_Peripheral_Case
 *  @{
 */

/** @addtogroup  SEC_DSA
 *  @{
 */

/** @defgroup  SEC_DSA_Private_Macros
 *  @{
 */

/*@} end of group SEC_DSA_Private_Macros */

/** @defgroup  SEC_DSA_Private_Types
 *  @{
 */

/*@} end of group SEC_DSA_Private_Types */

/** @defgroup  SEC_DSA_Private_Variables
 *  @{
 */

/*@} end of group SEC_DSA_Private_Variables */

/** @defgroup  SEC_DSA_Global_Variables
 *  @{
 */

/*@} end of group SEC_DSA_Global_Variables */

/** @defgroup  SEC_DSA_Private_Fun_Declaration
 *  @{
 */

/*@} end of group SEC_DSA_Private_Fun_Declaration */

/** @defgroup  SEC_DSA_Private_Functions
 *  @{
 */

int main(void)
{
    /* following case is from openssl */
#if 0
    p=int("00c952a3180f7bca497bc5ad1e9b5818b233702ac9ab43f744f451a4a241fcda5b9eff815351c45d046ee4262ac28f7f3df226ac2e949d1fe8d5b6923f33f1a641",16)
    q=int("00c225091c9a663843dd18cce92409581c2365d0fcbc956bf1152e11004bde53c99843f1f149a76a33fb46edb957f19e8720003b0345633f2840b35e3b302dec79",16)
    n=int("98adbfb43467d4a5df25d388e5605f12840ea66299cbdf3a807bbd99817798eb4a64a6885ba5494dba2fc00005fe87f5ec6585d1ba53dea9d48e48cfe6031843d84057a0c6233a598cb8a7d399eea7bce81e07ea574c26e44b4a925db3a9372d73c97bbe143c747ffc1123c2e0e57681e95462a81b7224e814270363bbe880b9",16)
    e=65537
    d=int("2a99a039b9bd96d9c94f969c45d403f2f8a1d5cf01369f4c857901480995c3373384adeab217864287c6b6fdcaae60653fd67be62ee523e5a307284dc9d1e73ce88bbd38e711536e48b181c1b5735d76675700fc2ddd89b7df67a8fb16eb4c1dde354fbc04f7c4c18975f5cba4f36ec7120b00bdd838d488ce37a9452e574401",16)
    dP=int("c2a434aed4797890272c6d3e042ede619bbdbc809226f9f01eceb87f6f9109843f6b041c0c17ef5e93dfdccec6a07a02e8155faf015c1037ca37e3995b9d2c81",16)
    dQ=int("161295dd9da43f835fb0c1234488976ee38b60de4b2685d62bfd47cb8bd4a41c0866b92c209e9b117be10d8803faa176656a014b96e8f8b63fdce4babff888a9",16)
    qInv=int("49727f7416d2e019b5436ffeb01b817cd57bb67aece0e56a7777db1547c197d1b00d088c436721a31eba5387b8d48394e47c806d3d1b546b03fd3e6c3ead5fda",16)
#endif
    uint8_t p[64]={0xc9,0x52,0xa3,0x18,0x0f,0x7b,0xca,0x49,0x7b,0xc5,0xad,0x1e,0x9b,0x58,0x18,0xb2,
                   0x33,0x70,0x2a,0xc9,0xab,0x43,0xf7,0x44,0xf4,0x51,0xa4,0xa2,0x41,0xfc,0xda,0x5b,
                   0x9e,0xff,0x81,0x53,0x51,0xc4,0x5d,0x04,0x6e,0xe4,0x26,0x2a,0xc2,0x8f,0x7f,0x3d,
                   0xf2,0x26,0xac,0x2e,0x94,0x9d,0x1f,0xe8,0xd5,0xb6,0x92,0x3f,0x33,0xf1,0xa6,0x41};

    uint8_t q[64]={0xc2,0x25,0x09,0x1c,0x9a,0x66,0x38,0x43,0xdd,0x18,0xcc,0xe9,0x24,0x09,0x58,0x1c,
                   0x23,0x65,0xd0,0xfc,0xbc,0x95,0x6b,0xf1,0x15,0x2e,0x11,0x00,0x4b,0xde,0x53,0xc9,
                   0x98,0x43,0xf1,0xf1,0x49,0xa7,0x6a,0x33,0xfb,0x46,0xed,0xb9,0x57,0xf1,0x9e,0x87,
                   0x20,0x00,0x3b,0x03,0x45,0x63,0x3f,0x28,0x40,0xb3,0x5e,0x3b,0x30,0x2d,0xec,0x79};
    uint8_t n[128]={0x98,0xad,0xbf,0xb4,0x34,0x67,0xd4,0xa5,0xdf,0x25,0xd3,0x88,0xe5,0x60,0x5f,0x12,
                   0x84,0x0e,0xa6,0x62,0x99,0xcb,0xdf,0x3a,0x80,0x7b,0xbd,0x99,0x81,0x77,0x98,0xeb,
                   0x4a,0x64,0xa6,0x88,0x5b,0xa5,0x49,0x4d,0xba,0x2f,0xc0,0x00,0x05,0xfe,0x87,0xf5,
                   0xec,0x65,0x85,0xd1,0xba,0x53,0xde,0xa9,0xd4,0x8e,0x48,0xcf,0xe6,0x03,0x18,0x43,
                   0xd8,0x40,0x57,0xa0,0xc6,0x23,0x3a,0x59,0x8c,0xb8,0xa7,0xd3,0x99,0xee,0xa7,0xbc,
                   0xe8,0x1e,0x07,0xea,0x57,0x4c,0x26,0xe4,0x4b,0x4a,0x92,0x5d,0xb3,0xa9,0x37,0x2d,
                   0x73,0xc9,0x7b,0xbe,0x14,0x3c,0x74,0x7f,0xfc,0x11,0x23,0xc2,0xe0,0xe5,0x76,0x81,
                   0xe9,0x54,0x62,0xa8,0x1b,0x72,0x24,0xe8,0x14,0x27,0x03,0x63,0xbb,0xe8,0x80,0xb9};
    uint8_t e[128]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
                    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
                    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
                    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
                    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
                    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
                    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
                    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x01};
    uint8_t d[128]={0x2a,0x99,0xa0,0x39,0xb9,0xbd,0x96,0xd9,0xc9,0x4f,0x96,0x9c,0x45,0xd4,0x03,0xf2,
                   0xf8,0xa1,0xd5,0xcf,0x01,0x36,0x9f,0x4c,0x85,0x79,0x01,0x48,0x09,0x95,0xc3,0x37,
                   0x33,0x84,0xad,0xea,0xb2,0x17,0x86,0x42,0x87,0xc6,0xb6,0xfd,0xca,0xae,0x60,0x65,
                   0x3f,0xd6,0x7b,0xe6,0x2e,0xe5,0x23,0xe5,0xa3,0x07,0x28,0x4d,0xc9,0xd1,0xe7,0x3c,
                   0xe8,0x8b,0xbd,0x38,0xe7,0x11,0x53,0x6e,0x48,0xb1,0x81,0xc1,0xb5,0x73,0x5d,0x76,
                   0x67,0x57,0x00,0xfc,0x2d,0xdd,0x89,0xb7,0xdf,0x67,0xa8,0xfb,0x16,0xeb,0x4c,0x1d,
                   0xde,0x35,0x4f,0xbc,0x04,0xf7,0xc4,0xc1,0x89,0x75,0xf5,0xcb,0xa4,0xf3,0x6e,0xc7,
                   0x12,0x0b,0x00,0xbd,0xd8,0x38,0xd4,0x88,0xce,0x37,0xa9,0x45,0x2e,0x57,0x44,0x01};
    uint8_t dP[64]={0xc2,0xa4,0x34,0xae,0xd4,0x79,0x78,0x90,0x27,0x2c,0x6d,0x3e,0x04,0x2e,0xde,0x61,
                    0x9b,0xbd,0xbc,0x80,0x92,0x26,0xf9,0xf0,0x1e,0xce,0xb8,0x7f,0x6f,0x91,0x09,0x84,
                    0x3f,0x6b,0x04,0x1c,0x0c,0x17,0xef,0x5e,0x93,0xdf,0xdc,0xce,0xc6,0xa0,0x7a,0x02,
                    0xe8,0x15,0x5f,0xaf,0x01,0x5c,0x10,0x37,0xca,0x37,0xe3,0x99,0x5b,0x9d,0x2c,0x81};
    uint8_t dQ[64]={0x16,0x12,0x95,0xdd,0x9d,0xa4,0x3f,0x83,0x5f,0xb0,0xc1,0x23,0x44,0x88,0x97,0x6e,
                    0xe3,0x8b,0x60,0xde,0x4b,0x26,0x85,0xd6,0x2b,0xfd,0x47,0xcb,0x8b,0xd4,0xa4,0x1c,
                    0x08,0x66,0xb9,0x2c,0x20,0x9e,0x9b,0x11,0x7b,0xe1,0x0d,0x88,0x03,0xfa,0xa1,0x76,
                    0x65,0x6a,0x01,0x4b,0x96,0xe8,0xf8,0xb6,0x3f,0xdc,0xe4,0xba,0xbf,0xf8,0x88,0xa9};
    uint8_t qInv[64]={0x49,0x72,0x7f,0x74,0x16,0xd2,0xe0,0x19,0xb5,0x43,0x6f,0xfe,0xb0,0x1b,0x81,0x7c,
                      0xd5,0x7b,0xb6,0x7a,0xec,0xe0,0xe5,0x6a,0x77,0x77,0xdb,0x15,0x47,0xc1,0x97,0xd1,
                      0xb0,0x0d,0x08,0x8c,0x43,0x67,0x21,0xa3,0x1e,0xba,0x53,0x87,0xb8,0xd4,0x83,0x94,
                      0xe4,0x7c,0x80,0x6d,0x3d,0x1b,0x54,0x6b,0x03,0xfd,0x3e,0x6c,0x3e,0xad,0x5f,0xda};
    uint8_t invR_p[64]={0x74,0xc9,0x11,0x9b,0x94,0x7c,0xc7,0x0c,0xd9,0x39,0x31,0x06,0x2c,0x89,0x7f,0x90,
                        0x83,0xec,0xdd,0x9e,0xd1,0x53,0x85,0xb1,0x2e,0x01,0xc0,0x7a,0xce,0x44,0x56,0x77,
                        0x4d,0xbe,0x96,0xbe,0xf2,0x1d,0x03,0x09,0x97,0x7a,0xd5,0xa5,0x5f,0x2e,0x32,0xdb,
                        0xd9,0xdd,0x80,0x3c,0x08,0x52,0x8e,0x72,0x14,0xfd,0x09,0x6c,0x6a,0x0a,0x40,0x91};
    uint8_t primeN_p[64]={0x94,0x80,0xcd,0xff,0x86,0x44,0x04,0x7a,0xa9,0x62,0x10,0x8c,0x4f,0x9d,0xee,0x0e,
                          0x70,0x56,0xfc,0xaf,0x12,0xaa,0x05,0xb0,0x3c,0x0c,0x8c,0xc1,0xef,0xc5,0x70,0xc8,
                          0x40,0x76,0xa2,0xca,0x4e,0xe0,0xae,0x6d,0x3c,0xbc,0x3b,0xed,0x85,0xdf,0x44,0x39,
                          0xcd,0x89,0x45,0x2a,0x3b,0x4b,0x12,0x2d,0x34,0xef,0xa5,0x05,0x04,0x9e,0x96,0x3f};
    uint8_t invR_q[64]=  {0x07,0x2d,0x7c,0xa1,0x7d,0xe7,0xab,0x44,0x8d,0xf0,0xe1,0xf0,0xd0,0x54,0xb1,0x7b,
                          0x74,0x74,0xac,0x42,0xc2,0x49,0x56,0xab,0xbd,0x94,0xe7,0x5c,0x6b,0x06,0x39,0x2e,
                          0xc7,0x75,0xd3,0xdc,0x6c,0x8b,0xd8,0x19,0x7e,0x6d,0x59,0x58,0xc7,0x95,0x71,0x9e,
                          0x10,0x1a,0xab,0x07,0x6f,0xf1,0x81,0x37,0x68,0x88,0x6c,0xdd,0x9d,0xd8,0x74,0x82};
    uint8_t primeN_q[64]={0x09,0x76,0xeb,0x06,0xf9,0x4b,0xb4,0xb8,0xef,0x02,0x17,0xf3,0xa5,0xa1,0x12,0xbc,
                          0x85,0xda,0x82,0x91,0x31,0xd4,0x07,0x49,0xdf,0xef,0x6a,0x4a,0x71,0x0e,0xe0,0x8f,
                          0x14,0xc7,0x71,0x3f,0x92,0xa8,0x40,0xd2,0x9c,0xf8,0x76,0x51,0xaf,0xe0,0xbd,0xbc,
                          0x09,0x21,0x2a,0x68,0xab,0x4a,0xfa,0x5a,0xeb,0x6f,0xb6,0x65,0x67,0xc3,0x42,0x37};
    uint8_t c[32]={ 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
                    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x12,0x34,0x56,0x78};
    uint8_t m[128]={0x94,0x56,0x39,0x91,0x66,0x79,0x4b,0x55,0x36,0x55,0x13,0x90,0x9d,0x6c,0x40,0x02,
                    0xf8,0xd5,0xb3,0xae,0x15,0x90,0xcd,0xcf,0x7b,0x18,0xe2,0x03,0x2b,0xf2,0x65,0x08,
                    0xfc,0xc8,0xbf,0xc2,0x47,0xc4,0x72,0x55,0x8a,0x50,0x26,0x5e,0x73,0x7f,0x18,0x1e,
                    0x6f,0x64,0x8f,0x42,0xd0,0x1b,0x92,0x0e,0xe3,0x1e,0x39,0xea,0x38,0x76,0x0b,0xf8,
                    0x0f,0x25,0x5d,0x5d,0x5d,0x52,0xf4,0x7f,0x74,0x27,0xdf,0x4a,0x89,0xc4,0xa3,0xa7,
                    0xf8,0xd3,0xf9,0x3a,0xaa,0x6a,0x34,0x42,0xb3,0x5e,0x5b,0x68,0x96,0xc7,0xc4,0xfa,
                    0x22,0x95,0x8a,0xbf,0xa6,0xf3,0x54,0x2e,0xcf,0x66,0x0f,0x62,0xef,0xac,0x11,0xc1,
                    0x69,0xb2,0x64,0xf9,0xcc,0x75,0x68,0x50,0x8f,0xf1,0xfe,0x5c,0xfa,0x27,0x6c,0x7b};
    uint32_t dsa_tmp[32];
    uint32_t i=0;
    uint8_t *k;
    sec_dsa_handle_t dsa_handle;

    bflb_platform_init(2000000);
    MSG("DSA Case\r\n");

    sec_dsa_init(&dsa_handle,1024);
    dsa_handle.n=(uint32_t *)n;
    dsa_handle.e=(uint32_t *)e;
    dsa_handle.d=(uint32_t *)d;
    dsa_handle.crtCfg.dP=(uint32_t*)dP;
    dsa_handle.crtCfg.dQ=(uint32_t*)dQ;
    dsa_handle.crtCfg.qInv=(uint32_t*)qInv;
    dsa_handle.crtCfg.p=(uint32_t*)p;
    dsa_handle.crtCfg.invR_p=(uint32_t *)invR_p;
    dsa_handle.crtCfg.primeN_p=(uint32_t*)primeN_p;
    dsa_handle.crtCfg.q=(uint32_t*)q;
    dsa_handle.crtCfg.invR_q=(uint32_t *)invR_q;
    dsa_handle.crtCfg.primeN_q=(uint32_t*)primeN_q;

    bflb_platform_clear_time();
    if(0!=sec_dsa_sign(&dsa_handle,(uint32_t*)c,8,dsa_tmp)){
        MSG("Sign Fail\r\n");
        BL_CASE_FAIL;
    }
    MSG("DSA sign time=%dms\r\n",(unsigned int)bflb_platform_get_time_ms());

    MSG("Check sign\r\n");
    k=(uint8_t *)(dsa_tmp);
    for(i=0;i<sizeof(m);i++){
        if(k[i]!=m[i]){
            MSG("DSA sign fail\r\n");
            while(1);
        }
    }

    bflb_platform_clear_time();
    if(0!=sec_dsa_verify(&dsa_handle,(uint32_t*)c,8,(uint32_t*)m)){
        MSG("DSA verify fail\r\n");
        BL_CASE_FAIL;
    }
    MSG("DSA verify time=%dms\r\n",(unsigned int)bflb_platform_get_time_ms());

    MSG("Finished\r\n");
    BL_CASE_SUCCESS;
}

/*@} end of group SEC_DSA_Private_Functions */

/*@} end of group SEC_DSA */

/*@} end of group BFLB_Peripheral_Case */
