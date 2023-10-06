
// ****************************************************************************
//
//                         SSI synchronous serial interface
//
// ****************************************************************************
// PicoLibSDK - Alternative SDK library for Raspberry Pico and RP2040
// Copyright (c) 2023 Miroslav Nemecek, Panda38@seznam.cz, hardyplotter2@gmail.com
// 	https://github.com/Panda381/PicoLibSDK
//	https://www.breatharian.eu/hw/picolibsdk/index_en.html
//	https://github.com/pajenicko/picopad
//	https://picopad.eu/en/
// License:
//	This source code is freely available for any purpose, including commercial.
//	It is possible to take and modify the code or parts of it, without restriction.

// SSI (synchronous serial interface) is used to communicate with external Flash
// device using 6 pins: QSPI_SCLK, QSPI_SS, QSPI_SD0..QSP_SD3.

#ifndef _SDK_SSI_H
#define _SDK_SSI_H

#include "../sdk_addressmap.h"		// Register address offsets

#ifdef __cplusplus
extern "C" {
#endif

// === SSI control registers

//#define XIP_SSI_BASE		0x18000000	// SSI flash interface
#define SSI_CTRLR0	((volatile u32*)(XIP_SSI_BASE+0))	// control register 0
#define SSI_CTRLR1	((volatile u32*)(XIP_SSI_BASE+4))	// master control register 1
#define SSI_SSIENR	((volatile u32*)(XIP_SSI_BASE+8))	// SSI enable
#define SSI_MWCR	((volatile u32*)(XIP_SSI_BASE+0x0C))	// Microwire control
#define SSI_SER		((volatile u32*)(XIP_SSI_BASE+0x10))	// slave enable
#define SSI_BAUDR	((volatile u32*)(XIP_SSI_BASE+0x14))	// baud rate
#define SSI_TXFTLR	((volatile u32*)(XIP_SSI_BASE+0x18))	// TX FIFO threshold level
#define SSI_RXFTLR	((volatile u32*)(XIP_SSI_BASE+0x1C))	// RX FIFO threshold level
#define SSI_TXFLR	((volatile u32*)(XIP_SSI_BASE+0x20))	// TX FIFO level
#define SSI_RXFLR	((volatile u32*)(XIP_SSI_BASE+0x24))	// RX FIFO level
#define SSI_SR		((volatile u32*)(XIP_SSI_BASE+0x28))	// status register
#define SSI_IMR		((volatile u32*)(XIP_SSI_BASE+0x2C))	// interrupt mask
#define SSI_ISR		((volatile u32*)(XIP_SSI_BASE+0x30))	// interrupt status
#define SSI_RISR	((volatile u32*)(XIP_SSI_BASE+0x34))	// raw interrupt status
#define SSI_TXOICR	((volatile u32*)(XIP_SSI_BASE+0x38))	// TX FIFO overflow interrupt clear
#define SSI_RXOICR	((volatile u32*)(XIP_SSI_BASE+0x3C))	// RX FIFO overflow interrupt clear
#define SSI_RXUICR	((volatile u32*)(XIP_SSI_BASE+0x40))	// RX FIFO underflow interrupt clear
#define SSI_MSTICR	((volatile u32*)(XIP_SSI_BASE+0x44))	// multi-master interrupt clear
#define SSI_ICR		((volatile u32*)(XIP_SSI_BASE+0x48))	// interrupt clear
#define SSI_DMACR	((volatile u32*)(XIP_SSI_BASE+0x4C))	// DMA control
#define SSI_DMATDLR	((volatile u32*)(XIP_SSI_BASE+0x50))	// DMA TX data level
#define SSI_DMARDLR	((volatile u32*)(XIP_SSI_BASE+0x54))	// DMA RX data level
#define SSI_IDR		((volatile u32*)(XIP_SSI_BASE+0x58))	// identification register
#define SSI_VERSION_ID	((volatile u32*)(XIP_SSI_BASE+0x5C))	// version ID
#define SSI_DR0		((volatile u32*)(XIP_SSI_BASE+0x60))	// data register 0 (od 36)
#define SSI_RX_SAMP_DLY	((volatile u32*)(XIP_SSI_BASE+0xF0))	// RX sample delay
#define SSI_SPI_CTRLR0	((volatile u32*)(XIP_SSI_BASE+0xF4))	// SPI control
#define SSI_TX_DRV_EDGE	((volatile u32*)(XIP_SSI_BASE+0xF8))	// TX drive edge

typedef struct {
	io32	ctrlr0;		// control register 0
	io32	ctrlr1;		// master control register 1
	io32	ssienr;		// SSI enable
	io32	mwcr;		// Microwire control
	io32	ser;		// slave enable
	io32	baudr;		// baud rate
	io32	txftlr;		// TX FIFO threshold level
	io32	rxftlr;		// RX FIFO threshold level
	io32	txflr;		// TX FIFO level
	io32	rxflr;		// RX FIFO level
	io32	sr;		// status register
	io32	imr;		// interrupt mask
	io32	isr;		// interrupt status
	io32	risr;		// raw interrupt status
	io32	txoicr;		// TX FIFO overflow interrupt clear
	io32	rxoicr;		// RX FIFO overflow interrupt clear
	io32	rxuicr;		// RX FIFO underflow interrupt clear
	io32	msticr;		// multi-master interrupt clear
	io32	icr;		// interrupt clear
	io32	dmacr;		// DMA control
	io32	dmatdlr;	// DMA TX data level
	io32	dmardlr;	// DMA RX data level
	io32	idr;		// identification register
	io32	version_id;	// version ID
	io32	dr0;		// data register 0 (od 36)
	io32	dr[35];		// ... other data registers are not used
	io32	rx_sample_dly;	// RX sample delay
	io32	spi_ctrlr0;	// SPI control
	io32	txd_drive_edge;	// TX drive edge
} ssi_hw_t;

#define ssi_hw ((ssi_hw_t*)XIP_SSI_BASE)

// set flash to fast QSPI mode (clkdiv = clock divider, must be even number, FLASHQSPI_CLKDIV_DEF=4 is default)
//   Supported devices: Winbond W25Q080, W25Q16JV, AT25SF081, S25FL132K0
//   Raspberry Pico cointains W25Q16JVUXIQ
#define FLASHQSPI_CLKDIV_DEF	4
void NOFLASH(SSI_FlashQspi)(int clkdiv);

// initialize Flash interface (clkdiv = clock divider, must be even number, FLASHQSPI_CLKDIV_DEF=4 is default)
//   Supported devices: Winbond W25Q080, W25Q16JV, AT25SF081, S25FL132K0
//   Raspberry Pico cointains W25Q16JVUXIQ
void NOFLASH(SSI_InitFlash)(int clkdiv);

#ifdef __cplusplus
}
#endif

#endif // _SDK_SSI_H
