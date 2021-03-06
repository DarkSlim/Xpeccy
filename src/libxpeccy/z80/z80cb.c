// 00..07	rlc	4 [4rd 3wr]
void cb00(Z80CPU* cpu) {RLC(cpu->b);}
void cb01(Z80CPU* cpu) {RLC(cpu->c);}
void cb02(Z80CPU* cpu) {RLC(cpu->d);}
void cb03(Z80CPU* cpu) {RLC(cpu->e);}
void cb04(Z80CPU* cpu) {RLC(cpu->h);}
void cb05(Z80CPU* cpu) {RLC(cpu->l);}
void cb06(Z80CPU* cpu) {cpu->tmpb = MEMRD(cpu->hl,4); RLC(cpu->tmpb); MEMWR(cpu->hl,cpu->tmpb,3);}
void cb07(Z80CPU* cpu) {RLC(cpu->a);}
// 08..0f	rrc
void cb08(Z80CPU* cpu) {RRC(cpu->b);}
void cb09(Z80CPU* cpu) {RRC(cpu->c);}
void cb0A(Z80CPU* cpu) {RRC(cpu->d);}
void cb0B(Z80CPU* cpu) {RRC(cpu->e);}
void cb0C(Z80CPU* cpu) {RRC(cpu->h);}
void cb0D(Z80CPU* cpu) {RRC(cpu->l);}
void cb0E(Z80CPU* cpu) {cpu->tmpb = MEMRD(cpu->hl,4); RRC(cpu->tmpb); MEMWR(cpu->hl,cpu->tmpb,3);}
void cb0F(Z80CPU* cpu) {RRC(cpu->a);}
// 10..17	rl
void cb10(Z80CPU* cpu) {RL(cpu->b);}
void cb11(Z80CPU* cpu) {RL(cpu->c);}
void cb12(Z80CPU* cpu) {RL(cpu->d);}
void cb13(Z80CPU* cpu) {RL(cpu->e);}
void cb14(Z80CPU* cpu) {RL(cpu->h);}
void cb15(Z80CPU* cpu) {RL(cpu->l);}
void cb16(Z80CPU* cpu) {cpu->tmpb = MEMRD(cpu->hl,4); RL(cpu->tmpb); MEMWR(cpu->hl,cpu->tmpb,3);}
void cb17(Z80CPU* cpu) {RL(cpu->a);}
// 18..1f	rr
void cb18(Z80CPU* cpu) {RR(cpu->b);}
void cb19(Z80CPU* cpu) {RR(cpu->c);}
void cb1A(Z80CPU* cpu) {RR(cpu->d);}
void cb1B(Z80CPU* cpu) {RR(cpu->e);}
void cb1C(Z80CPU* cpu) {RR(cpu->h);}
void cb1D(Z80CPU* cpu) {RR(cpu->l);}
void cb1E(Z80CPU* cpu) {cpu->tmpb = MEMRD(cpu->hl,4); RR(cpu->tmpb); MEMWR(cpu->hl,cpu->tmpb,3);}
void cb1F(Z80CPU* cpu) {RR(cpu->a);}
// 20..27	sla
void cb20(Z80CPU* cpu) {SLA(cpu->b);}
void cb21(Z80CPU* cpu) {SLA(cpu->c);}
void cb22(Z80CPU* cpu) {SLA(cpu->d);}
void cb23(Z80CPU* cpu) {SLA(cpu->e);}
void cb24(Z80CPU* cpu) {SLA(cpu->h);}
void cb25(Z80CPU* cpu) {SLA(cpu->l);}
void cb26(Z80CPU* cpu) {cpu->tmpb = MEMRD(cpu->hl,4); SLA(cpu->tmpb); MEMWR(cpu->hl,cpu->tmpb,3);}
void cb27(Z80CPU* cpu) {SLA(cpu->a);}
// 28..2f	sra
void cb28(Z80CPU* cpu) {SRA(cpu->b);}
void cb29(Z80CPU* cpu) {SRA(cpu->c);}
void cb2A(Z80CPU* cpu) {SRA(cpu->d);}
void cb2B(Z80CPU* cpu) {SRA(cpu->e);}
void cb2C(Z80CPU* cpu) {SRA(cpu->h);}
void cb2D(Z80CPU* cpu) {SRA(cpu->l);}
void cb2E(Z80CPU* cpu) {cpu->tmpb = MEMRD(cpu->hl,4); SRA(cpu->tmpb); MEMWR(cpu->hl,cpu->tmpb,3);}
void cb2F(Z80CPU* cpu) {SRA(cpu->a);}
// 30..37	sll
void cb30(Z80CPU* cpu) {SLL(cpu->b);}
void cb31(Z80CPU* cpu) {SLL(cpu->c);}
void cb32(Z80CPU* cpu) {SLL(cpu->d);}
void cb33(Z80CPU* cpu) {SLL(cpu->e);}
void cb34(Z80CPU* cpu) {SLL(cpu->h);}
void cb35(Z80CPU* cpu) {SLL(cpu->l);}
void cb36(Z80CPU* cpu) {cpu->tmpb = MEMRD(cpu->hl,4); SLL(cpu->tmpb); MEMWR(cpu->hl,cpu->tmpb,3);}
void cb37(Z80CPU* cpu) {SLL(cpu->a);}
// 38..3f	srl
void cb38(Z80CPU* cpu) {SRL(cpu->b);}
void cb39(Z80CPU* cpu) {SRL(cpu->c);}
void cb3A(Z80CPU* cpu) {SRL(cpu->d);}
void cb3B(Z80CPU* cpu) {SRL(cpu->e);}
void cb3C(Z80CPU* cpu) {SRL(cpu->h);}
void cb3D(Z80CPU* cpu) {SRL(cpu->l);}
void cb3E(Z80CPU* cpu) {cpu->tmpb = MEMRD(cpu->hl,4); SRL(cpu->tmpb); MEMWR(cpu->hl,cpu->tmpb,3);}
void cb3F(Z80CPU* cpu) {SRL(cpu->a);}

// 40..47	bit 0,r		4 [4rd]
void cb40(Z80CPU* cpu) {BIT(0,cpu->b);}
void cb41(Z80CPU* cpu) {BIT(0,cpu->c);}
void cb42(Z80CPU* cpu) {BIT(0,cpu->d);}
void cb43(Z80CPU* cpu) {BIT(0,cpu->e);}
void cb44(Z80CPU* cpu) {BIT(0,cpu->h);}
void cb45(Z80CPU* cpu) {BIT(0,cpu->l);}
void cb46(Z80CPU* cpu) {cpu->tmp = MEMRD(cpu->hl,4); BITM(0,cpu->tmp);}
void cb47(Z80CPU* cpu) {BIT(0,cpu->a);}
// 48..4f	bit 1,r
void cb48(Z80CPU* cpu) {BIT(1,cpu->b);}
void cb49(Z80CPU* cpu) {BIT(1,cpu->c);}
void cb4A(Z80CPU* cpu) {BIT(1,cpu->d);}
void cb4B(Z80CPU* cpu) {BIT(1,cpu->e);}
void cb4C(Z80CPU* cpu) {BIT(1,cpu->h);}
void cb4D(Z80CPU* cpu) {BIT(1,cpu->l);}
void cb4E(Z80CPU* cpu) {cpu->tmp = MEMRD(cpu->hl,4); BITM(1,cpu->tmp);}
void cb4F(Z80CPU* cpu) {BIT(1,cpu->a);}
// 50..57	bit 2,r
void cb50(Z80CPU* cpu) {BIT(2,cpu->b);}
void cb51(Z80CPU* cpu) {BIT(2,cpu->c);}
void cb52(Z80CPU* cpu) {BIT(2,cpu->d);}
void cb53(Z80CPU* cpu) {BIT(2,cpu->e);}
void cb54(Z80CPU* cpu) {BIT(2,cpu->h);}
void cb55(Z80CPU* cpu) {BIT(2,cpu->l);}
void cb56(Z80CPU* cpu) {cpu->tmp = MEMRD(cpu->hl,4); BITM(2,cpu->tmp);}
void cb57(Z80CPU* cpu) {BIT(2,cpu->a);}
// 58..5f	bit 3,r
void cb58(Z80CPU* cpu) {BIT(3,cpu->b);}
void cb59(Z80CPU* cpu) {BIT(3,cpu->c);}
void cb5A(Z80CPU* cpu) {BIT(3,cpu->d);}
void cb5B(Z80CPU* cpu) {BIT(3,cpu->e);}
void cb5C(Z80CPU* cpu) {BIT(3,cpu->h);}
void cb5D(Z80CPU* cpu) {BIT(3,cpu->l);}
void cb5E(Z80CPU* cpu) {cpu->tmp = MEMRD(cpu->hl,4); BITM(3,cpu->tmp);}
void cb5F(Z80CPU* cpu) {BIT(3,cpu->a);}
// 60..67	bit 4,r
void cb60(Z80CPU* cpu) {BIT(4,cpu->b);}
void cb61(Z80CPU* cpu) {BIT(4,cpu->c);}
void cb62(Z80CPU* cpu) {BIT(4,cpu->d);}
void cb63(Z80CPU* cpu) {BIT(4,cpu->e);}
void cb64(Z80CPU* cpu) {BIT(4,cpu->h);}
void cb65(Z80CPU* cpu) {BIT(4,cpu->l);}
void cb66(Z80CPU* cpu) {cpu->tmp = MEMRD(cpu->hl,4); BITM(4,cpu->tmp);}
void cb67(Z80CPU* cpu) {BIT(4,cpu->a);}
// 68..6f	bit 5,r
void cb68(Z80CPU* cpu) {BIT(5,cpu->b);}
void cb69(Z80CPU* cpu) {BIT(5,cpu->c);}
void cb6A(Z80CPU* cpu) {BIT(5,cpu->d);}
void cb6B(Z80CPU* cpu) {BIT(5,cpu->e);}
void cb6C(Z80CPU* cpu) {BIT(5,cpu->h);}
void cb6D(Z80CPU* cpu) {BIT(5,cpu->l);}
void cb6E(Z80CPU* cpu) {cpu->tmp = MEMRD(cpu->hl,4); BITM(5,cpu->tmp);}
void cb6F(Z80CPU* cpu) {BIT(5,cpu->a);}
// 70..77	bit 6,r
void cb70(Z80CPU* cpu) {BIT(6,cpu->b);}
void cb71(Z80CPU* cpu) {BIT(6,cpu->c);}
void cb72(Z80CPU* cpu) {BIT(6,cpu->d);}
void cb73(Z80CPU* cpu) {BIT(6,cpu->e);}
void cb74(Z80CPU* cpu) {BIT(6,cpu->h);}
void cb75(Z80CPU* cpu) {BIT(6,cpu->l);}
void cb76(Z80CPU* cpu) {cpu->tmp = MEMRD(cpu->hl,4); BITM(6,cpu->tmp);}
void cb77(Z80CPU* cpu) {BIT(6,cpu->a);}
// 78..7f	bit 7,r
void cb78(Z80CPU* cpu) {BIT(7,cpu->b);}
void cb79(Z80CPU* cpu) {BIT(7,cpu->c);}
void cb7A(Z80CPU* cpu) {BIT(7,cpu->d);}
void cb7B(Z80CPU* cpu) {BIT(7,cpu->e);}
void cb7C(Z80CPU* cpu) {BIT(7,cpu->h);}
void cb7D(Z80CPU* cpu) {BIT(7,cpu->l);}
void cb7E(Z80CPU* cpu) {cpu->tmp = MEMRD(cpu->hl,4); BITM(7,cpu->tmp);}
void cb7F(Z80CPU* cpu) {BIT(7,cpu->a);}

// 80..87	res 0,r		4 [4rd 3wr]
void cb80(Z80CPU* cpu) {RES(0,cpu->b);}
void cb81(Z80CPU* cpu) {RES(0,cpu->c);}
void cb82(Z80CPU* cpu) {RES(0,cpu->d);}
void cb83(Z80CPU* cpu) {RES(0,cpu->e);}
void cb84(Z80CPU* cpu) {RES(0,cpu->h);}
void cb85(Z80CPU* cpu) {RES(0,cpu->l);}
void cb86(Z80CPU* cpu) {cpu->tmp = MEMRD(cpu->hl,4); RES(0,cpu->tmp); MEMWR(cpu->hl,cpu->tmp,3);}
void cb87(Z80CPU* cpu) {RES(0,cpu->a);}
// 88..8f	res 1,r
void cb88(Z80CPU* cpu) {RES(1,cpu->b);}
void cb89(Z80CPU* cpu) {RES(1,cpu->c);}
void cb8A(Z80CPU* cpu) {RES(1,cpu->d);}
void cb8B(Z80CPU* cpu) {RES(1,cpu->e);}
void cb8C(Z80CPU* cpu) {RES(1,cpu->h);}
void cb8D(Z80CPU* cpu) {RES(1,cpu->l);}
void cb8E(Z80CPU* cpu) {cpu->tmp = MEMRD(cpu->hl,4); RES(1,cpu->tmp); MEMWR(cpu->hl,cpu->tmp,3);}
void cb8F(Z80CPU* cpu) {RES(1,cpu->a);}
// 90..97	res 2,r
void cb90(Z80CPU* cpu) {RES(2,cpu->b);}
void cb91(Z80CPU* cpu) {RES(2,cpu->c);}
void cb92(Z80CPU* cpu) {RES(2,cpu->d);}
void cb93(Z80CPU* cpu) {RES(2,cpu->e);}
void cb94(Z80CPU* cpu) {RES(2,cpu->h);}
void cb95(Z80CPU* cpu) {RES(2,cpu->l);}
void cb96(Z80CPU* cpu) {cpu->tmp = MEMRD(cpu->hl,4); RES(2,cpu->tmp); MEMWR(cpu->hl,cpu->tmp,3);}
void cb97(Z80CPU* cpu) {RES(2,cpu->a);}
// 98..9f	res 3,r
void cb98(Z80CPU* cpu) {RES(3,cpu->b);}
void cb99(Z80CPU* cpu) {RES(3,cpu->c);}
void cb9A(Z80CPU* cpu) {RES(3,cpu->d);}
void cb9B(Z80CPU* cpu) {RES(3,cpu->e);}
void cb9C(Z80CPU* cpu) {RES(3,cpu->h);}
void cb9D(Z80CPU* cpu) {RES(3,cpu->l);}
void cb9E(Z80CPU* cpu) {cpu->tmp = MEMRD(cpu->hl,4); RES(3,cpu->tmp); MEMWR(cpu->hl,cpu->tmp,3);}
void cb9F(Z80CPU* cpu) {RES(3,cpu->a);}
// a0..a7	res 4,r
void cbA0(Z80CPU* cpu) {RES(4,cpu->b);}
void cbA1(Z80CPU* cpu) {RES(4,cpu->c);}
void cbA2(Z80CPU* cpu) {RES(4,cpu->d);}
void cbA3(Z80CPU* cpu) {RES(4,cpu->e);}
void cbA4(Z80CPU* cpu) {RES(4,cpu->h);}
void cbA5(Z80CPU* cpu) {RES(4,cpu->l);}
void cbA6(Z80CPU* cpu) {cpu->tmp = MEMRD(cpu->hl,4); RES(4,cpu->tmp); MEMWR(cpu->hl,cpu->tmp,3);}
void cbA7(Z80CPU* cpu) {RES(4,cpu->a);}
// a8..af	res 5,r
void cbA8(Z80CPU* cpu) {RES(5,cpu->b);}
void cbA9(Z80CPU* cpu) {RES(5,cpu->c);}
void cbAA(Z80CPU* cpu) {RES(5,cpu->d);}
void cbAB(Z80CPU* cpu) {RES(5,cpu->e);}
void cbAC(Z80CPU* cpu) {RES(5,cpu->h);}
void cbAD(Z80CPU* cpu) {RES(5,cpu->l);}
void cbAE(Z80CPU* cpu) {cpu->tmp = MEMRD(cpu->hl,4); RES(5,cpu->tmp); MEMWR(cpu->hl,cpu->tmp,3);}
void cbAF(Z80CPU* cpu) {RES(5,cpu->a);}
// b0..b7	res 6,r
void cbB0(Z80CPU* cpu) {RES(6,cpu->b);}
void cbB1(Z80CPU* cpu) {RES(6,cpu->c);}
void cbB2(Z80CPU* cpu) {RES(6,cpu->d);}
void cbB3(Z80CPU* cpu) {RES(6,cpu->e);}
void cbB4(Z80CPU* cpu) {RES(6,cpu->h);}
void cbB5(Z80CPU* cpu) {RES(6,cpu->l);}
void cbB6(Z80CPU* cpu) {cpu->tmp = MEMRD(cpu->hl,4); RES(6,cpu->tmp); MEMWR(cpu->hl,cpu->tmp,3);}
void cbB7(Z80CPU* cpu) {RES(6,cpu->a);}
// b8..bf	res 7,r
void cbB8(Z80CPU* cpu) {RES(7,cpu->b);}
void cbB9(Z80CPU* cpu) {RES(7,cpu->c);}
void cbBA(Z80CPU* cpu) {RES(7,cpu->d);}
void cbBB(Z80CPU* cpu) {RES(7,cpu->e);}
void cbBC(Z80CPU* cpu) {RES(7,cpu->h);}
void cbBD(Z80CPU* cpu) {RES(7,cpu->l);}
void cbBE(Z80CPU* cpu) {cpu->tmp = MEMRD(cpu->hl,4); RES(7,cpu->tmp); MEMWR(cpu->hl,cpu->tmp,3);}
void cbBF(Z80CPU* cpu) {RES(7,cpu->a);}

// c0..c7	set 0,r		4 [4rd 3wr]
void cbC0(Z80CPU* cpu) {cpu->b |= 0x01;}
void cbC1(Z80CPU* cpu) {cpu->c |= 0x01;}
void cbC2(Z80CPU* cpu) {cpu->d |= 0x01;}
void cbC3(Z80CPU* cpu) {cpu->e |= 0x01;}
void cbC4(Z80CPU* cpu) {cpu->h |= 0x01;}
void cbC5(Z80CPU* cpu) {cpu->l |= 0x01;}
void cbC6(Z80CPU* cpu) {cpu->tmp = MEMRD(cpu->hl,4); cpu->tmp |= 0x01; MEMWR(cpu->hl,cpu->tmp,3);}
void cbC7(Z80CPU* cpu) {cpu->a |= 0x01;}
// c8..cf	set 1,r
void cbC8(Z80CPU* cpu) {cpu->b |= 0x02;}
void cbC9(Z80CPU* cpu) {cpu->c |= 0x02;}
void cbCA(Z80CPU* cpu) {cpu->d |= 0x02;}
void cbCB(Z80CPU* cpu) {cpu->e |= 0x02;}
void cbCC(Z80CPU* cpu) {cpu->h |= 0x02;}
void cbCD(Z80CPU* cpu) {cpu->l |= 0x02;}
void cbCE(Z80CPU* cpu) {cpu->tmp = MEMRD(cpu->hl,4); cpu->tmp |= 0x02; MEMWR(cpu->hl,cpu->tmp,3);}
void cbCF(Z80CPU* cpu) {cpu->a |= 0x02;}
// d0..d7	set 2,r
void cbD0(Z80CPU* cpu) {cpu->b |= 0x04;}
void cbD1(Z80CPU* cpu) {cpu->c |= 0x04;}
void cbD2(Z80CPU* cpu) {cpu->d |= 0x04;}
void cbD3(Z80CPU* cpu) {cpu->e |= 0x04;}
void cbD4(Z80CPU* cpu) {cpu->h |= 0x04;}
void cbD5(Z80CPU* cpu) {cpu->l |= 0x04;}
void cbD6(Z80CPU* cpu) {cpu->tmp = MEMRD(cpu->hl,4); cpu->tmp |= 0x04; MEMWR(cpu->hl,cpu->tmp,3);}
void cbD7(Z80CPU* cpu) {cpu->a |= 0x04;}
// d8..df	set 3,r
void cbD8(Z80CPU* cpu) {cpu->b |= 0x08;}
void cbD9(Z80CPU* cpu) {cpu->c |= 0x08;}
void cbDA(Z80CPU* cpu) {cpu->d |= 0x08;}
void cbDB(Z80CPU* cpu) {cpu->e |= 0x08;}
void cbDC(Z80CPU* cpu) {cpu->h |= 0x08;}
void cbDD(Z80CPU* cpu) {cpu->l |= 0x08;}
void cbDE(Z80CPU* cpu) {cpu->tmp = MEMRD(cpu->hl,4); cpu->tmp |= 0x08; MEMWR(cpu->hl,cpu->tmp,3);}
void cbDF(Z80CPU* cpu) {cpu->a |= 0x08;}
// e0..e7	set 4,r
void cbE0(Z80CPU* cpu) {cpu->b |= 0x10;}
void cbE1(Z80CPU* cpu) {cpu->c |= 0x10;}
void cbE2(Z80CPU* cpu) {cpu->d |= 0x10;}
void cbE3(Z80CPU* cpu) {cpu->e |= 0x10;}
void cbE4(Z80CPU* cpu) {cpu->h |= 0x10;}
void cbE5(Z80CPU* cpu) {cpu->l |= 0x10;}
void cbE6(Z80CPU* cpu) {cpu->tmp = MEMRD(cpu->hl,4); cpu->tmp |= 0x10; MEMWR(cpu->hl,cpu->tmp,3);}
void cbE7(Z80CPU* cpu) {cpu->a |= 0x10;}
// e8..ef	set 5,r
void cbE8(Z80CPU* cpu) {cpu->b |= 0x20;}
void cbE9(Z80CPU* cpu) {cpu->c |= 0x20;}
void cbEA(Z80CPU* cpu) {cpu->d |= 0x20;}
void cbEB(Z80CPU* cpu) {cpu->e |= 0x20;}
void cbEC(Z80CPU* cpu) {cpu->h |= 0x20;}
void cbED(Z80CPU* cpu) {cpu->l |= 0x20;}
void cbEE(Z80CPU* cpu) {cpu->tmp = MEMRD(cpu->hl,4); cpu->tmp |= 0x20; MEMWR(cpu->hl,cpu->tmp,3);}
void cbEF(Z80CPU* cpu) {cpu->a |= 0x20;}
// f0..f7	set 6,r
void cbF0(Z80CPU* cpu) {cpu->b |= 0x40;}
void cbF1(Z80CPU* cpu) {cpu->c |= 0x40;}
void cbF2(Z80CPU* cpu) {cpu->d |= 0x40;}
void cbF3(Z80CPU* cpu) {cpu->e |= 0x40;}
void cbF4(Z80CPU* cpu) {cpu->h |= 0x40;}
void cbF5(Z80CPU* cpu) {cpu->l |= 0x40;}
void cbF6(Z80CPU* cpu) {cpu->tmp = MEMRD(cpu->hl,4); cpu->tmp |= 0x40; MEMWR(cpu->hl,cpu->tmp,3);}
void cbF7(Z80CPU* cpu) {cpu->a |= 0x40;}
// f8..ff	set 7,r
void cbF8(Z80CPU* cpu) {cpu->b |= 0x80;}
void cbF9(Z80CPU* cpu) {cpu->c |= 0x80;}
void cbFA(Z80CPU* cpu) {cpu->d |= 0x80;}
void cbFB(Z80CPU* cpu) {cpu->e |= 0x80;}
void cbFC(Z80CPU* cpu) {cpu->h |= 0x80;}
void cbFD(Z80CPU* cpu) {cpu->l |= 0x80;}
void cbFE(Z80CPU* cpu) {cpu->tmp = MEMRD(cpu->hl,4); cpu->tmp |= 0x80; MEMWR(cpu->hl,cpu->tmp,3);}
void cbFF(Z80CPU* cpu) {cpu->a |= 0x80;}

// ===

opCode cbTab[256]={
	{0,4,0,0,0,0,&cb00,NULL,"rlc b"},
	{0,4,0,0,0,0,&cb01,NULL,"rlc c"},
	{0,4,0,0,0,0,&cb02,NULL,"rlc d"},
	{0,4,0,0,0,0,&cb03,NULL,"rlc e"},
	{0,4,0,0,0,0,&cb04,NULL,"rlc h"},
	{0,4,0,0,0,0,&cb05,NULL,"rlc l"},
	{0,4,4,3,0,0,&cb06,NULL,"rlc (hl)"},
	{0,4,0,0,0,0,&cb07,NULL,"rlc a"},

	{0,4,0,0,0,0,&cb08,NULL,"rrc b"},
	{0,4,0,0,0,0,&cb09,NULL,"rrc c"},
	{0,4,0,0,0,0,&cb0A,NULL,"rrc d"},
	{0,4,0,0,0,0,&cb0B,NULL,"rrc e"},
	{0,4,0,0,0,0,&cb0C,NULL,"rrc h"},
	{0,4,0,0,0,0,&cb0D,NULL,"rrc l"},
	{0,4,4,3,0,0,&cb0E,NULL,"rrc (hl)"},
	{0,4,0,0,0,0,&cb0F,NULL,"rrc a"},

	{0,4,0,0,0,0,&cb10,NULL,"rl b"},
	{0,4,0,0,0,0,&cb11,NULL,"rl c"},
	{0,4,0,0,0,0,&cb12,NULL,"rl d"},
	{0,4,0,0,0,0,&cb13,NULL,"rl e"},
	{0,4,0,0,0,0,&cb14,NULL,"rl h"},
	{0,4,0,0,0,0,&cb15,NULL,"rl l"},
	{0,4,4,3,0,0,&cb16,NULL,"rl (hl)"},
	{0,4,0,0,0,0,&cb17,NULL,"rl a"},

	{0,4,0,0,0,0,&cb18,NULL,"rr b"},
	{0,4,0,0,0,0,&cb19,NULL,"rr c"},
	{0,4,0,0,0,0,&cb1A,NULL,"rr d"},
	{0,4,0,0,0,0,&cb1B,NULL,"rr e"},
	{0,4,0,0,0,0,&cb1C,NULL,"rr h"},
	{0,4,0,0,0,0,&cb1D,NULL,"rr l"},
	{0,4,4,3,0,0,&cb1E,NULL,"rr (hl)"},
	{0,4,0,0,0,0,&cb1F,NULL,"rr a"},

	{0,4,0,0,0,0,&cb20,NULL,"sla b"},
	{0,4,0,0,0,0,&cb21,NULL,"sla c"},
	{0,4,0,0,0,0,&cb22,NULL,"sla d"},
	{0,4,0,0,0,0,&cb23,NULL,"sla e"},
	{0,4,0,0,0,0,&cb24,NULL,"sla h"},
	{0,4,0,0,0,0,&cb25,NULL,"sla l"},
	{0,4,4,3,0,0,&cb26,NULL,"sla (hl)"},
	{0,4,0,0,0,0,&cb27,NULL,"sla a"},

	{0,4,0,0,0,0,&cb28,NULL,"sra b"},
	{0,4,0,0,0,0,&cb29,NULL,"sra c"},
	{0,4,0,0,0,0,&cb2A,NULL,"sra d"},
	{0,4,0,0,0,0,&cb2B,NULL,"sra e"},
	{0,4,0,0,0,0,&cb2C,NULL,"sra h"},
	{0,4,0,0,0,0,&cb2D,NULL,"sra l"},
	{0,4,4,3,0,0,&cb2E,NULL,"sra (hl)"},
	{0,4,0,0,0,0,&cb2F,NULL,"sra a"},

	{0,4,0,0,0,0,&cb30,NULL,"sll b"},
	{0,4,0,0,0,0,&cb31,NULL,"sll c"},
	{0,4,0,0,0,0,&cb32,NULL,"sll d"},
	{0,4,0,0,0,0,&cb33,NULL,"sll e"},
	{0,4,0,0,0,0,&cb34,NULL,"sll h"},
	{0,4,0,0,0,0,&cb35,NULL,"sll l"},
	{0,4,4,3,0,0,&cb36,NULL,"sll (hl)"},
	{0,4,0,0,0,0,&cb37,NULL,"sll a"},

	{0,4,0,0,0,0,&cb38,NULL,"srl b"},
	{0,4,0,0,0,0,&cb39,NULL,"srl c"},
	{0,4,0,0,0,0,&cb3A,NULL,"srl d"},
	{0,4,0,0,0,0,&cb3B,NULL,"srl e"},
	{0,4,0,0,0,0,&cb3C,NULL,"srl h"},
	{0,4,0,0,0,0,&cb3D,NULL,"srl l"},
	{0,4,4,3,0,0,&cb3E,NULL,"srl (hl)"},
	{0,4,0,0,0,0,&cb3F,NULL,"srl a"},

	{0,4,0,0,0,0,&cb40,NULL,"bit 0,b"},
	{0,4,0,0,0,0,&cb41,NULL,"bit 0,c"},
	{0,4,0,0,0,0,&cb42,NULL,"bit 0,d"},
	{0,4,0,0,0,0,&cb43,NULL,"bit 0,e"},
	{0,4,0,0,0,0,&cb44,NULL,"bit 0,h"},
	{0,4,0,0,0,0,&cb45,NULL,"bit 0,l"},
	{0,4,4,0,0,0,&cb46,NULL,"bit 0,(hl)"},
	{0,4,0,0,0,0,&cb47,NULL,"bit 0,a"},

	{0,4,0,0,0,0,&cb48,NULL,"bit 1,b"},
	{0,4,0,0,0,0,&cb49,NULL,"bit 1,c"},
	{0,4,0,0,0,0,&cb4A,NULL,"bit 1,d"},
	{0,4,0,0,0,0,&cb4B,NULL,"bit 1,e"},
	{0,4,0,0,0,0,&cb4C,NULL,"bit 1,h"},
	{0,4,0,0,0,0,&cb4D,NULL,"bit 1,l"},
	{0,4,4,0,0,0,&cb4E,NULL,"bit 1,(hl)"},
	{0,4,0,0,0,0,&cb4F,NULL,"bit 1,a"},

	{0,4,0,0,0,0,&cb50,NULL,"bit 2,b"},
	{0,4,0,0,0,0,&cb51,NULL,"bit 2,c"},
	{0,4,0,0,0,0,&cb52,NULL,"bit 2,d"},
	{0,4,0,0,0,0,&cb53,NULL,"bit 2,e"},
	{0,4,0,0,0,0,&cb54,NULL,"bit 2,h"},
	{0,4,0,0,0,0,&cb55,NULL,"bit 2,l"},
	{0,4,4,0,0,0,&cb56,NULL,"bit 2,(hl)"},
	{0,4,0,0,0,0,&cb57,NULL,"bit 2,a"},

	{0,4,0,0,0,0,&cb58,NULL,"bit 3,b"},
	{0,4,0,0,0,0,&cb59,NULL,"bit 3,c"},
	{0,4,0,0,0,0,&cb5A,NULL,"bit 3,d"},
	{0,4,0,0,0,0,&cb5B,NULL,"bit 3,e"},
	{0,4,0,0,0,0,&cb5C,NULL,"bit 3,h"},
	{0,4,0,0,0,0,&cb5D,NULL,"bit 3,l"},
	{0,4,4,0,0,0,&cb5E,NULL,"bit 3,(hl)"},
	{0,4,0,0,0,0,&cb5F,NULL,"bit 3,a"},

	{0,4,0,0,0,0,&cb60,NULL,"bit 4,b"},
	{0,4,0,0,0,0,&cb61,NULL,"bit 4,c"},
	{0,4,0,0,0,0,&cb62,NULL,"bit 4,d"},
	{0,4,0,0,0,0,&cb63,NULL,"bit 4,e"},
	{0,4,0,0,0,0,&cb64,NULL,"bit 4,h"},
	{0,4,0,0,0,0,&cb65,NULL,"bit 4,l"},
	{0,4,4,0,0,0,&cb66,NULL,"bit 4,(hl)"},
	{0,4,0,0,0,0,&cb67,NULL,"bit 4,a"},

	{0,4,0,0,0,0,&cb68,NULL,"bit 5,b"},
	{0,4,0,0,0,0,&cb69,NULL,"bit 5,c"},
	{0,4,0,0,0,0,&cb6A,NULL,"bit 5,d"},
	{0,4,0,0,0,0,&cb6B,NULL,"bit 5,e"},
	{0,4,0,0,0,0,&cb6C,NULL,"bit 5,h"},
	{0,4,0,0,0,0,&cb6D,NULL,"bit 5,l"},
	{0,4,4,0,0,0,&cb6E,NULL,"bit 5,(hl)"},
	{0,4,0,0,0,0,&cb6F,NULL,"bit 5,a"},

	{0,4,0,0,0,0,&cb70,NULL,"bit 6,b"},
	{0,4,0,0,0,0,&cb71,NULL,"bit 6,c"},
	{0,4,0,0,0,0,&cb72,NULL,"bit 6,d"},
	{0,4,0,0,0,0,&cb73,NULL,"bit 6,e"},
	{0,4,0,0,0,0,&cb74,NULL,"bit 6,h"},
	{0,4,0,0,0,0,&cb75,NULL,"bit 6,l"},
	{0,4,4,0,0,0,&cb76,NULL,"bit 6,(hl)"},
	{0,4,0,0,0,0,&cb77,NULL,"bit 6,a"},

	{0,4,0,0,0,0,&cb78,NULL,"bit 7,b"},
	{0,4,0,0,0,0,&cb79,NULL,"bit 7,c"},
	{0,4,0,0,0,0,&cb7A,NULL,"bit 7,d"},
	{0,4,0,0,0,0,&cb7B,NULL,"bit 7,e"},
	{0,4,0,0,0,0,&cb7C,NULL,"bit 7,h"},
	{0,4,0,0,0,0,&cb7D,NULL,"bit 7,l"},
	{0,4,4,0,0,0,&cb7E,NULL,"bit 7,(hl)"},
	{0,4,0,0,0,0,&cb7F,NULL,"bit 7,a"},

	{0,4,0,0,0,0,&cb80,NULL,"res 0,b"},
	{0,4,0,0,0,0,&cb81,NULL,"res 0,c"},
	{0,4,0,0,0,0,&cb82,NULL,"res 0,d"},
	{0,4,0,0,0,0,&cb83,NULL,"res 0,e"},
	{0,4,0,0,0,0,&cb84,NULL,"res 0,h"},
	{0,4,0,0,0,0,&cb85,NULL,"res 0,l"},
	{0,4,4,3,0,0,&cb86,NULL,"res 0,(hl)"},
	{0,4,0,0,0,0,&cb87,NULL,"res 0,a"},

	{0,4,0,0,0,0,&cb88,NULL,"res 1,b"},
	{0,4,0,0,0,0,&cb89,NULL,"res 1,c"},
	{0,4,0,0,0,0,&cb8A,NULL,"res 1,d"},
	{0,4,0,0,0,0,&cb8B,NULL,"res 1,e"},
	{0,4,0,0,0,0,&cb8C,NULL,"res 1,h"},
	{0,4,0,0,0,0,&cb8D,NULL,"res 1,l"},
	{0,4,4,3,0,0,&cb8E,NULL,"res 1,(hl)"},
	{0,4,0,0,0,0,&cb8F,NULL,"res 1,a"},

	{0,4,0,0,0,0,&cb90,NULL,"res 2,b"},
	{0,4,0,0,0,0,&cb91,NULL,"res 2,c"},
	{0,4,0,0,0,0,&cb92,NULL,"res 2,d"},
	{0,4,0,0,0,0,&cb93,NULL,"res 2,e"},
	{0,4,0,0,0,0,&cb94,NULL,"res 2,h"},
	{0,4,0,0,0,0,&cb95,NULL,"res 2,l"},
	{0,4,4,3,0,0,&cb96,NULL,"res 2,(hl)"},
	{0,4,0,0,0,0,&cb97,NULL,"res 2,a"},

	{0,4,0,0,0,0,&cb98,NULL,"res 3,b"},
	{0,4,0,0,0,0,&cb99,NULL,"res 3,c"},
	{0,4,0,0,0,0,&cb9A,NULL,"res 3,d"},
	{0,4,0,0,0,0,&cb9B,NULL,"res 3,e"},
	{0,4,0,0,0,0,&cb9C,NULL,"res 3,h"},
	{0,4,0,0,0,0,&cb9D,NULL,"res 3,l"},
	{0,4,4,3,0,0,&cb9E,NULL,"res 3,(hl)"},
	{0,4,0,0,0,0,&cb9F,NULL,"res 3,a"},

	{0,4,0,0,0,0,&cbA0,NULL,"res 4,b"},
	{0,4,0,0,0,0,&cbA1,NULL,"res 4,c"},
	{0,4,0,0,0,0,&cbA2,NULL,"res 4,d"},
	{0,4,0,0,0,0,&cbA3,NULL,"res 4,e"},
	{0,4,0,0,0,0,&cbA4,NULL,"res 4,h"},
	{0,4,0,0,0,0,&cbA5,NULL,"res 4,l"},
	{0,4,4,3,0,0,&cbA6,NULL,"res 4,(hl)"},
	{0,4,0,0,0,0,&cbA7,NULL,"res 4,a"},

	{0,4,0,0,0,0,&cbA8,NULL,"res 5,b"},
	{0,4,0,0,0,0,&cbA9,NULL,"res 5,c"},
	{0,4,0,0,0,0,&cbAA,NULL,"res 5,d"},
	{0,4,0,0,0,0,&cbAB,NULL,"res 5,e"},
	{0,4,0,0,0,0,&cbAC,NULL,"res 5,h"},
	{0,4,0,0,0,0,&cbAD,NULL,"res 5,l"},
	{0,4,4,3,0,0,&cbAE,NULL,"res 5,(hl)"},
	{0,4,0,0,0,0,&cbAF,NULL,"res 5,a"},

	{0,4,0,0,0,0,&cbB0,NULL,"res 6,b"},
	{0,4,0,0,0,0,&cbB1,NULL,"res 6,c"},
	{0,4,0,0,0,0,&cbB2,NULL,"res 6,d"},
	{0,4,0,0,0,0,&cbB3,NULL,"res 6,e"},
	{0,4,0,0,0,0,&cbB4,NULL,"res 6,h"},
	{0,4,0,0,0,0,&cbB5,NULL,"res 6,l"},
	{0,4,4,3,0,0,&cbB6,NULL,"res 6,(hl)"},
	{0,4,0,0,0,0,&cbB7,NULL,"res 6,a"},

	{0,4,0,0,0,0,&cbB8,NULL,"res 7,b"},
	{0,4,0,0,0,0,&cbB9,NULL,"res 7,c"},
	{0,4,0,0,0,0,&cbBA,NULL,"res 7,d"},
	{0,4,0,0,0,0,&cbBB,NULL,"res 7,e"},
	{0,4,0,0,0,0,&cbBC,NULL,"res 7,h"},
	{0,4,0,0,0,0,&cbBD,NULL,"res 7,l"},
	{0,4,4,3,0,0,&cbBE,NULL,"res 7,(hl)"},
	{0,4,0,0,0,0,&cbBF,NULL,"res 7,a"},

	{0,4,0,0,0,0,&cbC0,NULL,"set 0,b"},
	{0,4,0,0,0,0,&cbC1,NULL,"set 0,c"},
	{0,4,0,0,0,0,&cbC2,NULL,"set 0,d"},
	{0,4,0,0,0,0,&cbC3,NULL,"set 0,e"},
	{0,4,0,0,0,0,&cbC4,NULL,"set 0,h"},
	{0,4,0,0,0,0,&cbC5,NULL,"set 0,l"},
	{0,4,4,3,0,0,&cbC6,NULL,"set 0,(hl)"},
	{0,4,0,0,0,0,&cbC7,NULL,"set 0,a"},

	{0,4,0,0,0,0,&cbC8,NULL,"set 1,b"},
	{0,4,0,0,0,0,&cbC9,NULL,"set 1,c"},
	{0,4,0,0,0,0,&cbCA,NULL,"set 1,d"},
	{0,4,0,0,0,0,&cbCB,NULL,"set 1,e"},
	{0,4,0,0,0,0,&cbCC,NULL,"set 1,h"},
	{0,4,0,0,0,0,&cbCD,NULL,"set 1,l"},
	{0,4,4,3,0,0,&cbCE,NULL,"set 1,(hl)"},
	{0,4,0,0,0,0,&cbCF,NULL,"set 1,a"},

	{0,4,0,0,0,0,&cbD0,NULL,"set 2,b"},
	{0,4,0,0,0,0,&cbD1,NULL,"set 2,c"},
	{0,4,0,0,0,0,&cbD2,NULL,"set 2,d"},
	{0,4,0,0,0,0,&cbD3,NULL,"set 2,e"},
	{0,4,0,0,0,0,&cbD4,NULL,"set 2,h"},
	{0,4,0,0,0,0,&cbD5,NULL,"set 2,l"},
	{0,4,4,3,0,0,&cbD6,NULL,"set 2,(hl)"},
	{0,4,0,0,0,0,&cbD7,NULL,"set 2,a"},

	{0,4,0,0,0,0,&cbD8,NULL,"set 3,b"},
	{0,4,0,0,0,0,&cbD9,NULL,"set 3,c"},
	{0,4,0,0,0,0,&cbDA,NULL,"set 3,d"},
	{0,4,0,0,0,0,&cbDB,NULL,"set 3,e"},
	{0,4,0,0,0,0,&cbDC,NULL,"set 3,h"},
	{0,4,0,0,0,0,&cbDD,NULL,"set 3,l"},
	{0,4,4,3,0,0,&cbDE,NULL,"set 3,(hl)"},
	{0,4,0,0,0,0,&cbDF,NULL,"set 3,a"},

	{0,4,0,0,0,0,&cbE0,NULL,"set 4,b"},
	{0,4,0,0,0,0,&cbE1,NULL,"set 4,c"},
	{0,4,0,0,0,0,&cbE2,NULL,"set 4,d"},
	{0,4,0,0,0,0,&cbE3,NULL,"set 4,e"},
	{0,4,0,0,0,0,&cbE4,NULL,"set 4,h"},
	{0,4,0,0,0,0,&cbE5,NULL,"set 4,l"},
	{0,4,4,3,0,0,&cbE6,NULL,"set 4,(hl)"},
	{0,4,0,0,0,0,&cbE7,NULL,"set 4,a"},

	{0,4,0,0,0,0,&cbE8,NULL,"set 5,b"},
	{0,4,0,0,0,0,&cbE9,NULL,"set 5,c"},
	{0,4,0,0,0,0,&cbEA,NULL,"set 5,d"},
	{0,4,0,0,0,0,&cbEB,NULL,"set 5,e"},
	{0,4,0,0,0,0,&cbEC,NULL,"set 5,h"},
	{0,4,0,0,0,0,&cbED,NULL,"set 5,l"},
	{0,4,4,3,0,0,&cbEE,NULL,"set 5,(hl)"},
	{0,4,0,0,0,0,&cbEF,NULL,"set 5,a"},

	{0,4,0,0,0,0,&cbF0,NULL,"set 6,b"},
	{0,4,0,0,0,0,&cbF1,NULL,"set 6,c"},
	{0,4,0,0,0,0,&cbF2,NULL,"set 6,d"},
	{0,4,0,0,0,0,&cbF3,NULL,"set 6,e"},
	{0,4,0,0,0,0,&cbF4,NULL,"set 6,h"},
	{0,4,0,0,0,0,&cbF5,NULL,"set 6,l"},
	{0,4,4,3,0,0,&cbF6,NULL,"set 6,(hl)"},
	{0,4,0,0,0,0,&cbF7,NULL,"set 6,a"},

	{0,4,0,0,0,0,&cbF8,NULL,"set 7,b"},
	{0,4,0,0,0,0,&cbF9,NULL,"set 7,c"},
	{0,4,0,0,0,0,&cbFA,NULL,"set 7,d"},
	{0,4,0,0,0,0,&cbFB,NULL,"set 7,e"},
	{0,4,0,0,0,0,&cbFC,NULL,"set 7,h"},
	{0,4,0,0,0,0,&cbFD,NULL,"set 7,l"},
	{0,4,4,3,0,0,&cbFE,NULL,"set 7,(hl)"},
	{0,4,0,0,0,0,&cbFF,NULL,"set 7,a"},
};
