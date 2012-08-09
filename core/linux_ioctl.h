/*
 * core: linux_ioctl.h
 * Copyright (c) 2012 Christina Brooks
 *
 * 
 */

#ifndef core_linux_ioctl_h
#define core_linux_ioctl_h

#define LINUX_TCGETS		0x5401
#define LINUX_TCSETS		0x5402
#define LINUX_TCSETSW		0x5403
#define LINUX_TCSETSF		0x5404
#define LINUX_TCGETA		0x5405
#define LINUX_TCSETA		0x5406
#define LINUX_TCSETAW		0x5407
#define LINUX_TCSETAF		0x5408
#define LINUX_TCSBRK		0x5409
#define LINUX_TCXONC		0x540A
#define LINUX_TCFLSH		0x540B

#define LINUX_TIOCEXCL	0x540C
#define LINUX_TIOCNXCL	0x540D
#define LINUX_TIOCSCTTY	0x540E
#define LINUX_TIOCGPGRP	0x540F
#define LINUX_TIOCSPGRP	0x5410
#define LINUX_TIOCOUTQ	0x5411
#define LINUX_TIOCSTI		0x5412
#define LINUX_TIOCGWINSZ	0x5413
#define LINUX_TIOCSWINSZ	0x5414
#define LINUX_TIOCMGET	0x5415
#define LINUX_TIOCMBIS	0x5416
#define LINUX_TIOCMBIC	0x5417
#define LINUX_TIOCMSET	0x5418

#define LINUX_TIOCGSOFTCAR	0x5419
#define LINUX_TIOCSSOFTCAR	0x541A
#define LINUX_FIONREAD	0x541B
#define LINUX_TIOCINQ		LINUX_FIONREAD
#define LINUX_TIOCLINUX	0x541C
#define LINUX_TIOCCONS	0x541D
#define LINUX_TIOCGSERIAL	0x541E
#define LINUX_TIOCSSERIAL	0x541F
#define LINUX_TIOCPKT		0x5420
#define LINUX_FIONBIO		0x5421
#define LINUX_TIOCNOTTY	0x5422
#define LINUX_TIOCSETD	0x5423
#define LINUX_TIOCGETD	0x5424
#define LINUX_TCSBRKP		0x5425	/* Needed for POSIX tcsendbreak() */
#define LINUX_TIOCSBRK	0x5427  /* BSD compatibility */
#define LINUX_TIOCCBRK	0x5428  /* BSD compatibility */
#define LINUX_TIOCGSID	0x5429  /* Return the session ID of FD */

/* arguments for tcflow() and LINUX_TCXONC */
#define	LINUX_TCOOFF		0
#define	LINUX_TCOON		1
#define	LINUX_TCIOFF		2
#define	LINUX_TCION		3

/* arguments for tcflush() and LINUX_TCFLSH */
#define	LINUX_TCIFLUSH		0
#define	LINUX_TCOFLUSH		1
#define	LINUX_TCIOFLUSH		2

/* line disciplines */
#define	LINUX_N_TTY		0
#define	LINUX_N_SLIP		1
#define	LINUX_N_MOUSE		2
#define	LINUX_N_PPP		3

/* Linux termio c_cc values */
#define	LINUX_VINTR		0
#define	LINUX_VQUIT		1
#define	LINUX_VERASE		2
#define	LINUX_VKILL		3
#define	LINUX_VEOF		4
#define	LINUX_VTIME		5
#define	LINUX_VMIN		6
#define	LINUX_VSWTC		7
#define	LINUX_NCC		8

/* Linux termios c_cc values */
/* In addition to the termio values */
#define	LINUX_VSTART		8
#define	LINUX_VSTOP		9
#define	LINUX_VSUSP 		10
#define	LINUX_VEOL		11
#define	LINUX_VREPRINT		12
#define	LINUX_VDISCARD		13
#define	LINUX_VWERASE		14
#define	LINUX_VLNEXT		15
#define	LINUX_VEOL2		16
#define	LINUX_NCCS		19

#define	LINUX_POSIX_VDISABLE	'\0'

/* Linux c_iflag masks */
#define	LINUX_IGNBRK		0x0000001
#define	LINUX_BRKINT		0x0000002
#define	LINUX_IGNPAR		0x0000004
#define	LINUX_PARMRK		0x0000008
#define	LINUX_INPCK		0x0000010
#define	LINUX_ISTRIP		0x0000020
#define	LINUX_INLCR		0x0000040
#define	LINUX_IGNCR		0x0000080
#define	LINUX_ICRNL		0x0000100

#define	LINUX_IUCLC		0x0000200
#define	LINUX_IXON		0x0000400
#define	LINUX_IXANY		0x0000800
#define	LINUX_IXOFF		0x0001000

#define	LINUX_IMAXBEL		0x0002000

/* Linux c_oflag masks */
#define	LINUX_OPOST		0x0000001

#define	LINUX_OLCUC		0x0000002
#define	LINUX_ONLCR		0x0000004

#define	LINUX_OCRNL		0x0000008
#define	LINUX_ONOCR		0x0000010
#define	LINUX_ONLRET		0x0000020
#define	LINUX_OFILL		0x0000040
#define	LINUX_OFDEL		0x0000080

#define	LINUX_NLDLY		0x0000100
#define	LINUX_NL0		0x0000000
#define	LINUX_NL1		0x0000100
#define	LINUX_CRDLY		0x0000600
#define	LINUX_CR0		0x0000000
#define	LINUX_CR1		0x0000200
#define	LINUX_CR2		0x0000400
#define	LINUX_CR3		0x0000600
#define	LINUX_TABDLY		0x0001800
#define	LINUX_TAB0		0x0000000
#define	LINUX_TAB1		0x0000800
#define	LINUX_TAB2		0x0001000
#define	LINUX_TAB3		0x0001800
#define	LINUX_XTABS		0x0001800
#define	LINUX_BSDLY		0x0002000
#define	LINUX_BS0		0x0000000
#define	LINUX_BS1		0x0002000
#define	LINUX_VTDLY		0x0004000
#define	LINUX_VT0		0x0000000
#define	LINUX_VT1		0x0004000
#define	LINUX_FFDLY		0x0008000
#define	LINUX_FF0		0x0000000
#define	LINUX_FF1		0x0008000

#define	LINUX_CBAUD		0x0000100f

#define	LINUX_B0		0x00000000
#define	LINUX_B50		0x00000001
#define	LINUX_B75		0x00000002
#define	LINUX_B110		0x00000003
#define	LINUX_B134		0x00000004
#define	LINUX_B150		0x00000005
#define	LINUX_B200		0x00000006
#define	LINUX_B300		0x00000007
#define	LINUX_B600		0x00000008
#define	LINUX_B1200		0x00000009
#define	LINUX_B1800		0x0000000a
#define	LINUX_B2400		0x0000000b
#define	LINUX_B4800		0x0000000c
#define	LINUX_B9600		0x0000000d
#define	LINUX_B19200		0x0000000e
#define	LINUX_B38400		0x0000000f
#define	LINUX_EXTA		LINUX_B19200
#define	LINUX_EXTB		LINUX_B38400

#define	LINUX_CBAUDEX		0x00001000
#define	LINUX_B57600		0x00001001
#define	LINUX_B115200		0x00001002

#define	LINUX_CSIZE		0x00000030
#define	LINUX_CS5		0x00000000
#define	LINUX_CS6		0x00000010
#define	LINUX_CS7		0x00000020
#define	LINUX_CS8		0x00000030
#define	LINUX_CSTOPB		0x00000040
#define	LINUX_CREAD		0x00000080
#define	LINUX_PARENB		0x00000100
#define	LINUX_PARODD		0x00000200
#define	LINUX_HUPCL		0x00000400
#define	LINUX_CLOCAL		0x00000800

#define	LINUX_CRTSCTS		0x80000000

/* Linux c_lflag masks */
#define	LINUX_ISIG		0x00000001
#define	LINUX_ICANON		0x00000002
#define	LINUX_XCASE		0x00000004
#define	LINUX_ECHO		0x00000008
#define	LINUX_ECHOE		0x00000010
#define	LINUX_ECHOK		0x00000020
#define	LINUX_ECHONL		0x00000040
#define	LINUX_NOFLSH		0x00000080
#define	LINUX_TOSTOP		0x00000100
#define	LINUX_ECHOCTL		0x00000200
#define	LINUX_ECHOPRT		0x00000400
#define	LINUX_ECHOKE		0x00000800
#define	LINUX_FLUSHO		0x00001000
#define	LINUX_PENDIN		0x00002000
#define	LINUX_IEXTEN		0x00008000

#define LINUX_FIONCLEX          0x5450
#define LINUX_FIOCLEX           0x5451
#define LINUX_FIOASYNC          0x5452

#endif