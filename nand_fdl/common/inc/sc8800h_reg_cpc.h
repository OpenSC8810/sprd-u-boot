/******************************************************************************
 ** File Name:    sc8800h_reg_cpc.h                                           *
 ** Author:       Aiguo.Miao	                                              *
 ** DATE:         08/28/2007                                                  *
 ** Description:                                                              *
 ******************************************************************************/
/******************************************************************************
 **                   Edit    History                                         *
 **---------------------------------------------------------------------------* 
 ** DATE          NAME            DESCRIPTION                                 * 
 ** 08/28/2007    Aiguo.Miao      Create.                                     *
 ******************************************************************************/
#ifndef _SC8800H_REG_CPC_H_
    #define _SC8800H_REG_CPC_H_
/*----------------------------------------------------------------------------*
 **                         Dependencies                                      *
 **-------------------------------------------------------------------------- */

/**---------------------------------------------------------------------------*
 **                             Compiler Flag                                 *
 **---------------------------------------------------------------------------*/
#ifdef   __cplusplus
    extern   "C" 
    {
#endif
/**----------------------------------------------------------------------------*
**                               Micro Define                                 **
**----------------------------------------------------------------------------*/
#define PIN_CTL_BASE            		0x8C000000

#define CPC_SIMCLK0_REG                 (PIN_CTL_BASE + 0x0000)
#define CPC_SIMDA0_REG             		(PIN_CTL_BASE + 0x0004)
#define CPC_SIMRST0_REG            		(PIN_CTL_BASE + 0x0008)
#define CPC_SIMCLK1_REG            		(PIN_CTL_BASE + 0x000C)
#define CPC_SIMDA1_REG            		(PIN_CTL_BASE + 0x0010)
#define CPC_SIMRST1_REG            		(PIN_CTL_BASE + 0x0014)

#define CPC_SD0_CLK_REG            		(PIN_CTL_BASE + 0x0018)
#define CPC_SD0_CMD_REG            		(PIN_CTL_BASE + 0x001C)
#define CPC_SD0_D0_REG            		(PIN_CTL_BASE + 0x0020)
#define CPC_SD0_D1_REG            		(PIN_CTL_BASE + 0x0024)
#define CPC_SD0_D2_REG           		(PIN_CTL_BASE + 0x0028)
#define CPC_SD0_D3_REG           		(PIN_CTL_BASE + 0x002C)
#define CPC_SD1_CLK_REG           		(PIN_CTL_BASE + 0x0030)
#define CPC_SD1_CMD_REG           		(PIN_CTL_BASE + 0x0034)
#define CPC_SD1_D0_REG           		(PIN_CTL_BASE + 0x0038)
#define CPC_SD1_D1_REG           		(PIN_CTL_BASE + 0x003C)
#define CPC_SD1_D2_REG           		(PIN_CTL_BASE + 0x0040)
#define CPC_SD1_D3_REG           		(PIN_CTL_BASE + 0x0044)

#define CPC_KEYOUT0_REG           		(PIN_CTL_BASE + 0x0048)
#define CPC_KEYOUT1_REG           		(PIN_CTL_BASE + 0x004C)
#define CPC_KEYOUT2_REG           		(PIN_CTL_BASE + 0x0050)
#define CPC_KEYOUT3_REG                 (PIN_CTL_BASE + 0x0054)
#define CPC_KEYOUT4_REG                 (PIN_CTL_BASE + 0x0058)
#define CPC_KEYOUT5_REG            		(PIN_CTL_BASE + 0x005C)
#define CPC_KEYIN0_REG           		(PIN_CTL_BASE + 0x0060)
#define CPC_KEYIN1_REG           		(PIN_CTL_BASE + 0x0064)
#define CPC_KEYIN2_REG           		(PIN_CTL_BASE + 0x0068)
#define CPC_KEYIN3_REG           		(PIN_CTL_BASE + 0x006C)
#define CPC_KEYIN4_REG                  (PIN_CTL_BASE + 0x0070)

#define CPC_XTLEN_REG           		(PIN_CTL_BASE + 0x0074)

#define CPC_MTDO_REG            		(PIN_CTL_BASE + 0x0078)
#define CPC_MTDI_REG            		(PIN_CTL_BASE + 0x007C)
#define CPC_MTCK_REG            		(PIN_CTL_BASE + 0x0080)
#define CPC_MTMS_REG            		(PIN_CTL_BASE + 0x0084)
#define CPC_MTRST_REG           		(PIN_CTL_BASE + 0x0088)

#define CPC_ARMCLK_REG           		(PIN_CTL_BASE + 0x008C)

#define CPC_U0TXD_REG           	    (PIN_CTL_BASE + 0x0090)
#define CPC_U0RXD_REG           		(PIN_CTL_BASE + 0x0094)

#define CPC_SCL_REG           		    (PIN_CTL_BASE + 0x0098)
#define CPC_SDA_REG           		    (PIN_CTL_BASE + 0x009C)

#define CPC_U1TXD_REG           		(PIN_CTL_BASE + 0x00A0)
#define CPC_U1RXD_REG           		(PIN_CTL_BASE + 0x00A4)

//#define CPC_REV_REG           		(PIN_CTL_BASE + 0x00A8)
//#define CPC_REV_REG           		(PIN_CTL_BASE + 0x00AC)

#define CPC_IISDI0_REG           		(PIN_CTL_BASE + 0x00B0)
#define CPC_IISDO0_REG            		(PIN_CTL_BASE + 0x00B4)
#define CPC_IISCLK0_REG            		(PIN_CTL_BASE + 0x00B8)
#define CPC_IISLRCK0_REG           		(PIN_CTL_BASE + 0x00BC)
#define CPC_IISMCK0_REG            		(PIN_CTL_BASE + 0x00C0)
#define CPC_IISDI1_REG            		(PIN_CTL_BASE + 0x00C4)
#define CPC_IISDO1_REG            		(PIN_CTL_BASE + 0x00C8)
#define CPC_IISCLK1_REG            		(PIN_CTL_BASE + 0x00CC)
#define CPC_IISLRCK1_REG            	(PIN_CTL_BASE + 0x00D0)
#define CPC_IISMCK1_REG            		(PIN_CTL_BASE + 0x00D4)

#define CPC_PBINT_REG            		(PIN_CTL_BASE + 0x00D8)

//#define CPC_REV_REG           		(PIN_CTL_BASE + 0x00DC)
//#define CPC_REV_REG           		(PIN_CTL_BASE + 0x00E0)
//#define CPC_REV_REG           		(PIN_CTL_BASE + 0x00E4)
//#define CPC_REV_REG           		(PIN_CTL_BASE + 0x00E8)

#define CPC_EMA0_REG            		(PIN_CTL_BASE + 0x00EC)
#define CPC_EMA1_REG             		(PIN_CTL_BASE + 0x00F0)
#define CPC_EMA2_REG             		(PIN_CTL_BASE + 0x00F4)
#define CPC_EMA3_REG            		(PIN_CTL_BASE + 0x00F8)
#define CPC_EMA4_REG             		(PIN_CTL_BASE + 0x00FC)
#define CPC_EMA5_REG             		(PIN_CTL_BASE + 0x0100)
#define CPC_EMA6_REG            		(PIN_CTL_BASE + 0x0104)
#define CPC_EMA7_REG            		(PIN_CTL_BASE + 0x0108)
#define CPC_EMA8_REG            		(PIN_CTL_BASE + 0x010C)
#define CPC_EMA9_REG            		(PIN_CTL_BASE + 0x0110)
#define CPC_EMA10_REG            		(PIN_CTL_BASE + 0x0114)
#define CPC_EMA11_REG            		(PIN_CTL_BASE + 0x0118)
#define CPC_EMA12_REG            		(PIN_CTL_BASE + 0x011C)
#define CPC_EMD16_REG            		(PIN_CTL_BASE + 0x0120)
#define CPC_EMD17_REG            		(PIN_CTL_BASE + 0x0124)
#define CPC_EMD18_REG            		(PIN_CTL_BASE + 0x0128)
#define CPC_EMD19_REG            		(PIN_CTL_BASE + 0x012C)
#define CPC_EMD20_REG            		(PIN_CTL_BASE + 0x0130)
#define CPC_EMD21_REG            		(PIN_CTL_BASE + 0x0134)
#define CPC_EMD22_REG            		(PIN_CTL_BASE + 0x0138)
#define CPC_EMD23_REG            		(PIN_CTL_BASE + 0x013C)
#define CPC_EMD24_REG            		(PIN_CTL_BASE + 0x0140)
#define CPC_EMD25_REG            		(PIN_CTL_BASE + 0x0144)
#define CPC_EMD26_REG            		(PIN_CTL_BASE + 0x0148)
#define CPC_EMD27_REG            		(PIN_CTL_BASE + 0x014C)
#define CPC_EMD28_REG             		(PIN_CTL_BASE + 0x0150)
#define CPC_EMD29_REG             		(PIN_CTL_BASE + 0x0154)
#define CPC_EMD30_REG            		(PIN_CTL_BASE + 0x0158)
#define CPC_EMD31_REG            		(PIN_CTL_BASE + 0x015C)
#define CPC_EMRAS_N_REG            		(PIN_CTL_BASE + 0x0160)
#define CPC_EMCAS_N_REG             	(PIN_CTL_BASE + 0x0164)
#define CPC_EMWE_N_REG            		(PIN_CTL_BASE + 0x0168)
#define CPC_CLKDPMEM_REG          		(PIN_CTL_BASE + 0x016C)
#define CPC_CLKDMMEM_REG            	(PIN_CTL_BASE + 0x0170)
#define CPC_EMDQM0_REG            		(PIN_CTL_BASE + 0x0174)
#define CPC_EMDQM1_REG            		(PIN_CTL_BASE + 0x0178)
#define CPC_EMDQM2_REG            		(PIN_CTL_BASE + 0x017C)
#define CPC_EMDQM3_REG            		(PIN_CTL_BASE + 0x0180)
#define CPC_EMCS_N0_REG           		(PIN_CTL_BASE + 0x0184)
#define CPC_EMCS_N1_REG           		(PIN_CTL_BASE + 0x0188)
#define CPC_EMCS_N2_REG          		(PIN_CTL_BASE + 0x018C)
#define CPC_EMCS_N3_REG          		(PIN_CTL_BASE + 0x0190)
#define CPC_EMCKE0_REG           		(PIN_CTL_BASE + 0x0194)
#define CPC_EMCKE1_REG           		(PIN_CTL_BASE + 0x0198)
#define CPC_EMBA0_REG            		(PIN_CTL_BASE + 0x019C)
#define CPC_EMBA1_REG            		(PIN_CTL_BASE + 0x01A0)
#define CPC_EMDQS0_REG            		(PIN_CTL_BASE + 0x01A4)
#define CPC_EMDQS1_REG            		(PIN_CTL_BASE + 0x01A8)
#define CPC_EMDQS2_REG            		(PIN_CTL_BASE + 0x01AC)
#define CPC_EMDQS3_REG            		(PIN_CTL_BASE + 0x01B0)
#define CPC_EMD0_REG            		(PIN_CTL_BASE + 0x01B4)
#define CPC_EMD1_REG            		(PIN_CTL_BASE + 0x01B8)
#define CPC_EMD2_REG            		(PIN_CTL_BASE + 0x01BC)
#define CPC_EMD3_REG                    (PIN_CTL_BASE + 0x01C0)
#define CPC_EMD4_REG            		(PIN_CTL_BASE + 0x01C4)
#define CPC_EMD5_REG            		(PIN_CTL_BASE + 0x01C8)
#define CPC_EMD6_REG            		(PIN_CTL_BASE + 0x01CC)
#define CPC_EMD7_REG                    (PIN_CTL_BASE + 0x01D0)
#define CPC_EMD8_REG            		(PIN_CTL_BASE + 0x01D4)
#define CPC_EMD9_REG            		(PIN_CTL_BASE + 0x01D8)
#define CPC_EMD10_REG            		(PIN_CTL_BASE + 0x01DC)
#define CPC_EMD11_REG                   (PIN_CTL_BASE + 0x01E0)
#define CPC_EMD12_REG            		(PIN_CTL_BASE + 0x01E4)
#define CPC_EMD13_REG            		(PIN_CTL_BASE + 0x01E8)
#define CPC_EMD14_REG            		(PIN_CTL_BASE + 0x01EC)
#define CPC_EMD15_REG                   (PIN_CTL_BASE + 0x01F0)

#define CPC_NFWPN_REG            		(PIN_CTL_BASE + 0x01F4)
#define CPC_LCMRSTN_REG            		(PIN_CTL_BASE + 0x01F8)
#define CPC_NFRB_REG            		(PIN_CTL_BASE + 0x01FC)
#define CPC_LCMCD_REG             		(PIN_CTL_BASE + 0x0200)
#define CPC_NFCLE_REG            		(PIN_CTL_BASE + 0x0204)
#define CPC_NFALE_REG            		(PIN_CTL_BASE + 0x0208)
#define CPC_NFCEN_REG            		(PIN_CTL_BASE + 0x020C)
#define CPC_NFWEN_REG            		(PIN_CTL_BASE + 0x0210)
#define CPC_NFREN_REG            		(PIN_CTL_BASE + 0x0214)
#define CPC_NFD0_REG            		(PIN_CTL_BASE + 0x0218)
#define CPC_NFD1_REG            		(PIN_CTL_BASE + 0x021C)
#define CPC_NFD2_REG            		(PIN_CTL_BASE + 0x0220)
#define CPC_NFD3_REG            		(PIN_CTL_BASE + 0x0224)
#define CPC_NFD4_REG            		(PIN_CTL_BASE + 0x0228)
#define CPC_NFD5_REG            		(PIN_CTL_BASE + 0x022C)
#define CPC_NFD6_REG            		(PIN_CTL_BASE + 0x0230)
#define CPC_NFD7_REG            		(PIN_CTL_BASE + 0x0234)
#define CPC_NFD8_REG            		(PIN_CTL_BASE + 0x0238)

#define CPC_LCMCSN0_REG            		(PIN_CTL_BASE + 0x023C)
#define CPC_LCMCSN1_REG            		(PIN_CTL_BASE + 0x0240)
#define CPC_LCD_RSTN_REG           		(PIN_CTL_BASE + 0x0244)
#define CPC_LCD_EN_REG            		(PIN_CTL_BASE + 0x0248)
#define CPC_LCD_D0_REG            		(PIN_CTL_BASE + 0x024C)
#define CPC_LCD_D1_REG             		(PIN_CTL_BASE + 0x0250)
#define CPC_LCD_D2_REG             		(PIN_CTL_BASE + 0x0254)
#define CPC_LCD_D3_REG            		(PIN_CTL_BASE + 0x0258)
#define CPC_LCD_D4_REG            		(PIN_CTL_BASE + 0x025C)
#define CPC_LCD_D5_REG            		(PIN_CTL_BASE + 0x0260)
#define CPC_LCD_D6_REG               	(PIN_CTL_BASE + 0x0264)
#define CPC_LCD_D7_REG            		(PIN_CTL_BASE + 0x0268)
#define CPC_LCD_D8_REG          		(PIN_CTL_BASE + 0x026C)
#define CPC_LCD_HS_REG            	    (PIN_CTL_BASE + 0x0270)
#define CPC_LCD_VS_REG            		(PIN_CTL_BASE + 0x0274)
#define CPC_CLK_LCD_REG            		(PIN_CTL_BASE + 0x0278)


//#define CPC_RSV_REG            		(PIN_CTL_BASE + 0x027C)

#define CPC_CCIRCK_REG            		(PIN_CTL_BASE + 0x0280)
#define CPC_CCIRHS_REG           		(PIN_CTL_BASE + 0x0284)
#define CPC_CCIRVS_REG           		(PIN_CTL_BASE + 0x0288)
#define CPC_CCIRD0_REG          		(PIN_CTL_BASE + 0x028C)
#define CPC_CCIRD1_REG          		(PIN_CTL_BASE + 0x0290)
#define CPC_CCIRD2_REG           		(PIN_CTL_BASE + 0x0294)
#define CPC_CCIRD3_REG           		(PIN_CTL_BASE + 0x0298)
#define CPC_CCIRD4_REG            		(PIN_CTL_BASE + 0x029C)
#define CPC_CCIRD5_REG            		(PIN_CTL_BASE + 0x02A0)
#define CPC_CCIRD6_REG            		(PIN_CTL_BASE + 0x02A4)
#define CPC_CCIRD7_REG            		(PIN_CTL_BASE + 0x02A8)
#define CPC_CCIRD8_REG            		(PIN_CTL_BASE + 0x02AC)
#define CPC_CCIRD9_REG            		(PIN_CTL_BASE + 0x02B0)
#define CPC_CCIRRST_REG            		(PIN_CTL_BASE + 0x02B4)
#define CPC_CCIRPD_REG            		(PIN_CTL_BASE + 0x02B8)

#define CPC_HRESET_N_REG           		(PIN_CTL_BASE + 0x02BC)

#define CPC_RFSDA0_REG                  (PIN_CTL_BASE + 0x02C0)
#define CPC_RFSCK0_REG            		(PIN_CTL_BASE + 0x02C4)
#define CPC_RFSEN0_0_REG           		(PIN_CTL_BASE + 0x02C8)
#define CPC_RFSEN0_1_REG           		(PIN_CTL_BASE + 0x02CC)
#define CPC_RFSDA1_REG                  (PIN_CTL_BASE + 0x02D0)
#define CPC_RFSCK1_REG            		(PIN_CTL_BASE + 0x02D4)
#define CPC_RFSEN1_0_REG            	(PIN_CTL_BASE + 0x02D8)
#define CPC_RFSEN1_1_REG            	(PIN_CTL_BASE + 0x02DC)
#define CPC_RFCTL0_REG                  (PIN_CTL_BASE + 0x02E0)
#define CPC_RFCTL1_REG            		(PIN_CTL_BASE + 0x02E4)
#define CPC_RFCTL2_REG            		(PIN_CTL_BASE + 0x02E8)
#define CPC_RFCTL3_REG            		(PIN_CTL_BASE + 0x02EC)
#define CPC_RFCTL4_REG                  (PIN_CTL_BASE + 0x02F0)
#define CPC_RFCTL5_REG            		(PIN_CTL_BASE + 0x02F4)
#define CPC_RFCTL6_REG            		(PIN_CTL_BASE + 0x02F8)
#define CPC_RFCTL7_REG            		(PIN_CTL_BASE + 0x02FC)
#define CPC_RFCTL8_REG             		(PIN_CTL_BASE + 0x0300)
#define CPC_RFCTL9_REG            		(PIN_CTL_BASE + 0x0304)
#define CPC_RFCTL10_REG            		(PIN_CTL_BASE + 0x0308)
#define CPC_RFCTL11_REG            		(PIN_CTL_BASE + 0x030C)
#define CPC_RFCTL12_REG            		(PIN_CTL_BASE + 0x0310)
#define CPC_RFCTL13_REG            		(PIN_CTL_BASE + 0x0314)
#define CPC_RFCTL14_REG            		(PIN_CTL_BASE + 0x0318)
#define CPC_RFCTL15_REG            		(PIN_CTL_BASE + 0x031C)

#define CPC_CCIR_SEL_REG            	(PIN_CTL_BASE + 0x0320)

#define CPC_SD_SEL_REG            		(PIN_CTL_BASE + 0x0324)

#define CPC_KEYOUT6_REG            		(PIN_CTL_BASE + 0x0328)
#define CPC_KEYOUT7_REG            		(PIN_CTL_BASE + 0x032C)

//#define CPC_RSV_REG            		(PIN_CTL_BASE + 0x0330)
//#define CPC_RSV_REG            		(PIN_CTL_BASE + 0x0334)

#define CPC_LCD_D9_REG            		(PIN_CTL_BASE + 0x0338)
#define CPC_LCD_D10_REG            		(PIN_CTL_BASE + 0x033C)
#define CPC_LCD_D11_REG            		(PIN_CTL_BASE + 0x0340)
#define CPC_LCD_D12_REG            		(PIN_CTL_BASE + 0x0344)
#define CPC_LCD_D13_REG            		(PIN_CTL_BASE + 0x0348)
#define CPC_LCD_D14_REG            		(PIN_CTL_BASE + 0x034C)
#define CPC_LCD_D15_REG             	(PIN_CTL_BASE + 0x0350)
#define CPC_LCD_D16_REG             	(PIN_CTL_BASE + 0x0354)
#define CPC_LCD_D17_REG            		(PIN_CTL_BASE + 0x0358)
#define CPC_SD1_D4_REG            		(PIN_CTL_BASE + 0x035C)
#define CPC_SD1_D5_REG            		(PIN_CTL_BASE + 0x0360)
#define CPC_SD1_D6_REG             	    (PIN_CTL_BASE + 0x0364)
#define CPC_SD1_D7_REG            		(PIN_CTL_BASE + 0x0368)


/**----------------------------------------------------------------------------*
**                             Data Prototype                                 **
**----------------------------------------------------------------------------*/

/**----------------------------------------------------------------------------*
**                         Local Function Prototype                           **
**----------------------------------------------------------------------------*/

/**----------------------------------------------------------------------------*
**                           Function Prototype                               **
**----------------------------------------------------------------------------*/


/**----------------------------------------------------------------------------*
**                         Compiler Flag                                      **
**----------------------------------------------------------------------------*/
#ifdef   __cplusplus
    }
#endif
/**---------------------------------------------------------------------------*/
#endif
// End 
