;****************************************
;*    									*
;*	      		AUDIO.INC  				*
;*    									*
;*									 	*
;*    	Audio Equate Definition File 	*
;*										*
;* Copyright (c) 1991 Imagineering, Inc.*
;*										*
;****************************************
;
;
;    Prepared for Imagineering, Inc. by
;
;    	Stuart E. Ross
;    	New Potato Technologies
;    	P.O. Box 187
;    	Danbury, CT  06813
;
;    	TEL:  (203) 746-9040
;    	FAX:  (203) 746-6929
;

;----------------------------------------

:dtym	equ     $c0     	;duty bits mask
:dtyc   equ     dtym^$ff    ;duty bits clear
:dty0   equ     $00     	;duty values, tinniest
:dty1   equ     $40     	;tinny
:dty2   equ     $80     	;deepest
:dty3   equ     $c0     	;deep
					;00x0 0000 continuous(1)/length counter(0)

;:contm  equ     $20     	;continuous/counted sound bit mask
;:contc  equ     contm^$ff  ;countinuous/counted sound bit clear
;:ctn    equ     $20     	;continuous sound bit enable
;:cnt    equ     $00     	;counted sound bit enable
					;000x 0000 envelope(0)/amplitude gain(1)
;:envenm equ     $10     	;envelope/amplitude sound bit mask
;:envenc equ     envenm^$ff ;envelope/amplitude sound bit clear
;:amp    equ     $10     	;amplitude sound bit enable
;:env    equ     $00     	;envelope sound bit enable
					;0000 xxxx a) envelope damping rate
					;		   b) amplitude gain
;:envm   equ     $0f     	;envelope bit mask
;:envc   equ     envm^$ff   ;envelope bit clear
;:ampm   equ     envm    	;amplitude bit mask
;:ampc   equ     ampm^$ff   ;amplitude bit clear
:env00	equ	$00			;envelope values
:env01	equ	$01
:env02	equ	$02
:env03	equ	$03
:env04	equ	$04
:env05	equ	$05
:env06	equ	$06
:env07	equ	$07
:env08	equ	$08
:env09	equ	$09
:env10	equ	$0a
:env11	equ	$0b
:env12	equ	$0c
:env13	equ	$0d
:env14	equ	$0e
:env15	equ	$0f
:amp00	equ	env00	;amplitude values (same as envelope)
:amp01	equ	env01
:amp02	equ	env02
:amp03	equ	env03
:amp04	equ	env04
:amp05	equ	env05
:amp06	equ	env06
:amp07	equ	env07
:amp08	equ	env08
:amp09	equ	env09
:amp10	equ	env10
:amp11	equ	env11
:amp12	equ	env12
:amp13	equ	env13
:amp14	equ	env14
:amp15	equ	env15
;
;----------------------------------------------------------------------------
;:lenm   equ     $f8     ;length counter bit mask
;:lenc   equ     lenm^$ff        ;length counter bit clear
;:len05f equ     $00*8   ;length counter values (decimal frame label)
;:len127f        equ     $01*8
:len10f	equ	$02*8
:len01f	equ	$03*8
:len20f	equ	$04*8
:len02f	equ	$05*8
:len40f	equ	$06*8
:len03f	equ	$07*8
:len80f	equ	$08*8
:len04f	equ	$09*8
:len30f	equ	$0a*8
:len05bf	equ	$0b*8
:len07f	equ	$0c*8
:len06f	equ	$0d*8
:len13f	equ	$0e*8
:len07bf	equ	$0f*8
:len06bf	equ	$10*8	;length counter values (decimal frame label)
:len08f	equ	$11*8
:len12f	equ	$12*8
:len09f	equ	$13*8
:len24f	equ	$14*8
:len10bf	equ	$15*8
:len48f	equ	$16*8
:len11f	equ	$17*8
:len96f	equ	$18*8
:len12bf	equ	$19*8
:len36f	equ	$1a*8
:len13bf	equ	$1b*8
:len08bf	equ	$1c*8
:len14f	equ	$1d*8
:len16f	equ	$1e*8
:len15f	equ	$1f*8
					;0000 0xxx frequency high
:frqhm	equ	$07			;frequency high bit mask
:frqhc	equ	frqhm^$ff	;frequency high bit clear
:fqh0	equ	$00			;frequency high values
:fqh1	equ	$01
:fqh2	equ	$02
:fqh3	equ	$03
:fqh4	equ	$04
:fqh5	equ	$05
:fqh6	equ	$06
:fqh7	equ	$07

:modmask	equ	$80
:modclr	equ	modmask^$ff

;----------------------------------------------------------------------------

;****************************
;* 	driver equates		*
;****************************

:att	equ	$00*$40				;sound stage type equates
:dcy	equ	$01*$40
:sus	equ	$02*$40
:rel	equ	$03*$40

:edr00	equ	(env15+1)/4 * 00	;envelope durations
:edr01	equ	(env15+1)/4 * 01	
:edr02	equ	(env15+1)/4 * 02	
:edr03	equ	(env15+1)/4 * 03	
:edr04	equ	(env15+1)/4 * 04	
:edr05	equ	(env15+1)/4 * 05	
:edr06	equ	(env15+1)/4 * 06	
:edr07	equ	(env15+1)/4 * 07	
:edr08	equ	(env15+1)/4 * 08	
:edr09	equ	(env15+1)/4 * 09	
:edr10	equ	(env15+1)/4 * 10	
:edr11	equ	(env15+1)/4 * 11	
:edr12	equ	(env15+1)/4 * 12	
:edr13	equ	(env15+1)/4 * 13	
:edr14	equ	(env15+1)/4 * 14	
:edr15	equ	(env15+1)/4 * 15 

:att00	equ	$01					;attack speeds
:att01	equ	$02	
:att02	equ	$03	
:att03	equ	$04	
:att04	equ	$05	
:att05	equ	$06	
:att06	equ	$07	
:att07	equ	$08	
:att08	equ	$09	
:att09	equ	$0a	
:att10	equ	$0b	
:att11	equ	$0c	
:att12	equ	$0d	
:att13	equ	$0e	
:att14	equ	$0f	
:att15	equ	$10	

:sustok	equ	$f1					;sustain token byte in envelope stream

;	Pitch frequency values

:an1v   equ     856     			;chromatic pitch values
:as1v   equ     923
:bn1v   equ     986
:cn2v   equ     44      ;2nd octave
:cs2v   equ     157
:dn2v   equ     263
:ds2v   equ     363
:en2v   equ     457
:fn2v   equ     547
:fs2v   equ     631
:gn2v   equ     711
:gs2v   equ     786
:an2v   equ     856
:as2v   equ     923
:bn2v   equ     986
:cn3v   equ     1046    ;3rd octave
:cs3v   equ     1102
:dn3v   equ     1155
:ds3v   equ     1205
:en3v   equ     1253
:fn3v   equ     1297
:fs3v   equ     1339
:gn3v   equ     1379
:gs3v   equ     1417
:an3v   equ     1452
:as3v   equ     1486
:bn3v   equ     1517
:cn4v   equ     1547    ;4th octave
:cs4v   equ     1575
:dn4v   equ     1602
:ds4v   equ     1627
:en4v   equ     1650
:fn4v   equ     1673
:fs4v   equ     1694
:gn4v   equ     1714
:gs4v   equ     1732
:an4v   equ     1750
:as4v   equ     1767
:bn4v   equ     1783
:cn5v   equ     1798    ;5th octave
:cs5v   equ     1812
:dn5v   equ     1825
:ds5v   equ     1837
:en5v   equ     1849
:fn5v   equ     1860
:fs5v   equ     1871
:gn5v   equ     1881
:gs5v   equ     1890
:an5v   equ     1899
:as5v   equ     1907
:bn5v   equ     1915
:cn6v   equ     1923    ;6th octave
:cs6v   equ     1930
:dn6v   equ     1936
:ds6v   equ     1943
:en6v   equ     1949
:fn6v   equ     1954
:fs6v   equ     1959
:gn6v   equ     1964
:gs6v   equ     1969
:an6v   equ     1974
:as6v   equ     1978
:bn6v   equ     1982
:rstv   equ     2046    ;silent rest freq

;	Pitch indexes

:an1	equ	$00	;chromatic pitch values
:as1	equ	$01
:bn1	equ	$02
:cn2	equ	$03	;2nd octave
:cs2	equ	$04
:dn2	equ	$05
:ds2	equ	$06
:en2	equ	$07
:fn2	equ	$08
:fs2	equ	$09
:gn2	equ	$0a
:gs2	equ	$0b
:an2	equ	$0c
:as2	equ	$0d
:bn2	equ	$0e
:cn3	equ	$0f	;3rd octave
:cs3	equ	$10
:dn3	equ	$11
:ds3	equ	$12
:en3	equ	$13
:fn3	equ	$14
:fs3	equ	$15
:gn3	equ	$16
:gs3	equ	$17
:an3	equ	$18
:as3	equ	$19
:bn3	equ	$1a
:cn4	equ	$1b	;4th octave
:cs4	equ	$1c
:dn4	equ	$1d
:ds4	equ	$1e
:en4	equ	$1f
:fn4	equ	$20
:fs4	equ	$21
:gn4	equ	$22
:gs4	equ	$23
:an4	equ	$24
:as4	equ	$25
:bn4	equ	$26
:cn5	equ	$27	;5th octave
:cs5	equ	$28
:dn5	equ	$29
:ds5	equ	$2a
:en5	equ	$2b
:fn5	equ	$2c
:fs5	equ	$2d
:gn5	equ	$2e
:gs5	equ	$2f
:an5	equ	$30
:as5	equ	$31
:bn5	equ	$32
:cn6	equ	$33	;6th octave
:cs6	equ	$34
:dn6	equ	$35
:ds6	equ	$36
:en6	equ	$37
:fn6	equ	$38
:fs6	equ	$39
:gn6	equ	$3a
:gs6	equ	$3b
:an6	equ	$3c
:as6	equ	$3d
:bn6	equ	$3e
:.rst   equ     $3f

:endsng	equ	$00ff
:sloop0	equ	$0000
:sloop1	equ	$0001
:sloop2	equ	$0002
:sloop3	equ	$0003
:mend	equ	$0000
:mloop	equ	$0100

:dt	equ	$01	;duty sweep special effect
:tt	equ	$80	;tie bit (added to pitch)
:ss	equ	$40	;sustain bit (added to pitch)
:prgcng	equ	$ff	;program change event: intrument, effects

:normal		equ	$00	;special effects
:sweep1		equ	$01
:vibrat1	equ	$02	;loose vibrato
:vibrat2	equ	$03
:sweep2		equ	$04
:vibrat3	equ	$05
:tremo1		equ	$06
:pbend1		equ	$07
:pbend2		equ	$08

:violin1	equ	$00
:piano1	equ	$01
:guitar1	equ	$02
:whirl1	equ	$03	;+ vibrato
:flute1	equ	$03
:trump1	equ	$04
:bass1	equ	$06

;
;       DMG sound registers addresses
;

nr10    equ     $FF10           ; sound-1       sweep
nr11    equ     $FF11           ;               duty/length
nr12    equ     $FF12           ;               envelope
nr13    equ     $FF13           ;               frequency (low byte)
nr14    equ     $FF14           ;               frequency (high byte)

nr21    equ     $FF16           ; sound-2       duty/length
nr22    equ     $FF17           ;               envelope
nr23    equ     $FF18           ;               frequency (low byte)
nr24    equ     $FF19           ;               frequency (high byte)

nr30    equ     $FF1A           ; sound-3       off
nr31    equ     $FF1B           ;               length
nr32    equ     $FF1C           ;               output level
nr33    equ     $FF1D           ;               frequency (low byte)
nr34    equ     $FF1E           ;               frequency (high byte)

nr41    equ     $FF20           ; sound-3(4?)   length
nr42    equ     $FF21           ;               envelope
nr43    equ     $FF22           ;               frequency
nr44    equ     $FF23           ;               ionitial/sequence

nr50    equ     $FF24           ;so1/so2 level
nr51    equ     $FF25           ;so1/so2 allocation
nr52    equ     $FF26           ;end flag

wfram   equ     $FF30           ;wave form RAM

;
;--------------------------------------
;
	ifdef	bart
	ifdef	devapd
	include	bart\bartdef.snd
	else
	include	bartdef.snd
	endif
	endif
;
;--------------------------------------
;
	ifdef	turn
	ifdef	devapd
	include	turn\turndef.snd
	else
	include	turndef.snd
	endif
	endif
;
;--------------------------------------
;
	ifdef	home
	ifdef	devapd
	include	home\homedef.snd
	else
	include	..\frogdef.snd
	endif
	endif
;
;--------------------------------------
;
;

