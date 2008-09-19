Calling Structure		-*- text -*-
=================
Toplevel ("left") := The four C functions called from R


wavedecomp			./wavedecomp.c
 |
 |--> convolveC			./convolve.c
 |     \-> reflect	           "
 \--> convolveD		           "
       \-> reflect	           "


waverecons			./waverecons.c
 |
 \--> conbar			./conbar.c
       \-> reflect		 [see above]


StoIDS				./StoIDS.c
 |
 \--> ImageDecomposeStep 	./ImageDecomposeStep.c
       |
       |-> convolveC		 [see above]
       \-> convolveD		 [see above]

StoIRS				./StoIRS.c
 |
 \--> ImageReconstructStep	  "
       |
       \-> conbar		 [see above]
