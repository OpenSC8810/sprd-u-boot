#ifndef _BOOT_MODE_H_
#define _BOOT_MODE_H_

void normal_mode(void);
void recovery_mode(void);
void charge_mode(void);
void dloader_mode(void);
void fastboot_mode(void);
void alarm_mode(void);
void caliberation_mode(void);

#define RECOVERY_MODE   0x77665502
#define FASTBOOT_MODE   0x77665500

#define BOOT_NORAML 0xf1
#define BOOT_FASTBOOT 0xf2
#define BOOT_RECOVERY 0xf3
#define BOOT_CALIBRATE 0xf4
#define BOOT_DLOADER 0xf5
#define BOOT_CHARGE 0xf6

extern unsigned int check_key_boot(unsigned char key);
extern void vlx_nand_boot(char * kernel_pname, char * cmdline);
#endif