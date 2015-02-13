#pragma once

extern DWORD      soundtype;
extern double     g_fClksPerSpkrSample;

void    SpkrDestroy ();
void    SpkrInitialize ();
void    SpkrReinitialize ();
void    SpkrReset();
BOOL    SpkrSetEmulationType (HWND,DWORD);
void    SpkrUpdate (DWORD);
void    SpkrUpdate_Timer();
void    Spkr_SetErrorInc(const int nErrorInc);
void    Spkr_SetErrorMax(const int nErrorMax);
DWORD   SpkrGetVolume();
void    SpkrSetVolume(DWORD dwVolume, DWORD dwVolumeMax);
void    Spkr_Mute();
void    Spkr_Demute();
bool    Spkr_IsActive();
bool    Spkr_DSInit();
void    Spkr_DSUninit();
void    SpkrSetSnapshot_v1(const unsigned __int64 SpkrLastCycle);
void    SpkrGetSnapshot(unsigned __int64& rSpkrLastCycle);
void    SpkrSetSnapshot(const unsigned __int64 SpkrLastCycle);

BYTE __stdcall SpkrToggle (WORD pc, WORD addr, BYTE bWrite, BYTE d, ULONG nCyclesLeft);
