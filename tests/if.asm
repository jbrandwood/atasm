	*=$2000

.IF TARGET<=2
	.IF TARGET=1
		lda #11
	.ELSEIF TARGET=2
		lda #22
	.ELSEIF TARGET=2
		lda #222
	.ELSE
		lda #ff
	.ENDIF
.ELSEIF TARGET=3
	lda #33
.ELSEIF TARGET=4
	lda #44
.ELSE
	lda #$fe
.ENDIF
	sta $4000

.IF TARGET=4
	lda #4
.ELSEIF TARGET=3
	lda #3
.ELSEIF TARGET=2
	lda #2
.ELSEIF TARGET=1
	lda #1
.ELSE
	lda #$fd
.ENDIF

	sta $3000