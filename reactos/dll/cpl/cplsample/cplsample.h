#ifndef __CPL_SAMPLE_H
#define __CPL_SAMPLE_H

typedef struct
{
  int idIcon;
  int idName;
  int idDescription;
  APPLET_PROC AppletProc;
} APPLET, *PAPPLET;

extern HINSTANCE hApplet;

#endif /* __CPL_SAMPLE_H */

/* EOF */
