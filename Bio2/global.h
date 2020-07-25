/*
    バイオハザード 2
    Resident Evil 2
    bio2 1.10.exe
*/

#pragma once

#pragma pack(push, 1)

struct MATRIX {
    SHORT m[3][3];
    LONG t[3];
};

struct VECTOR {
    LONG vx;
    LONG vy;
    LONG vz;
    LONG pad;
};

struct SVECTOR {
    SHORT vx;
    SHORT vy;
    SHORT vz;
    SHORT pad;
};

struct POLY_FT4 {
    ULONG tag;
    UCHAR r0;
    UCHAR g0;
    UCHAR b0;
    UCHAR code;
    SHORT x0;
    SHORT y0;
    UCHAR u0;
    UCHAR v0;
    USHORT clut;
    SHORT x1;
    SHORT y1;
    UCHAR u1;
    UCHAR v1;
    USHORT tpage;
    SHORT x2;
    SHORT y2;
    UCHAR u2;
    UCHAR v2;
    USHORT pad1;
    SHORT x3;
    SHORT y3;
    UCHAR u3;
    UCHAR v3;
    USHORT pad2;
};

struct POLY_GT4 {
    ULONG tag;
    UCHAR r0;
    UCHAR g0;
    UCHAR b0;
    UCHAR code;
    SHORT x0;
    SHORT y0;
    UCHAR u0;
    UCHAR v0;
    USHORT clut;
    UCHAR r1;
    UCHAR g1;
    UCHAR b1;
    UCHAR p1;
    SHORT x1;
    SHORT y1;
    UCHAR u1;
    UCHAR v1;
    USHORT tpage;
    UCHAR r2;
    UCHAR g2;
    UCHAR b2;
    UCHAR p2;
    SHORT x2;
    SHORT y2;
    UCHAR u2;
    UCHAR v2;
    USHORT pad2;
    UCHAR r3;
    UCHAR g3;
    UCHAR b3;
    UCHAR p3;
    SHORT x3;
    SHORT y3;
    UCHAR u3;
    UCHAR v3;
    USHORT pad3;
};

struct SPRT {
    ULONG tag;
    UCHAR r0;
    UCHAR g0;
    UCHAR b0;
    UCHAR code;
    SHORT x0;
    SHORT y0;
    UCHAR u0;
    UCHAR v0;
    USHORT clut;
    SHORT w;
    SHORT h;
};

struct SPRT_8 {
    ULONG tag;
    UCHAR r0;
    UCHAR g0;
    UCHAR b0;
    UCHAR code;
    SHORT x0;
    SHORT y0;
    UCHAR u0;
    UCHAR v0;
    USHORT clut;
};

struct DR_MODE {
    ULONG tag;
    ULONG code[2];
};

struct DR_MOVE {
    ULONG tag;
    ULONG code[5];
};

struct TILE {
    ULONG tag;
    UCHAR r0;
    UCHAR g0;
    UCHAR b0;
    UCHAR code;
    SHORT x0;
    SHORT y0;
    SHORT w;
    SHORT h;
};

struct DR_ENV {
    ULONG tag;
    ULONG code[15];
};

struct RECT16 {
    SHORT x;
    SHORT y;
    SHORT w;
    SHORT h;
};

struct DRAWENV {
    RECT16 clip;
    SHORT ofs[2];
    RECT16 tw;
    USHORT tpage;
    UCHAR dtd;
    UCHAR dfe;
    UCHAR isbg;
    UCHAR r0;
    UCHAR g0;
    UCHAR b0;
    DR_ENV dr_env;
};

struct DISPENV {
    RECT16 disp;
    RECT16 screen;
    UCHAR isinter;
    UCHAR isrgb24;
    UCHAR pad0;
    UCHAR pad1;
};

struct DBUF {
    DRAWENV Draw;
    DISPENV Disp;
    DR_MODE Curtain_Dm;
    DR_MODE Pause_Dm;
    TILE Bg_clr;
};

struct BOX {
    SHORT X;
    SHORT Z;
    USHORT W;
    USHORT D;
};

struct SCE_AOT {
    UCHAR Id;
    UCHAR Type;
    UCHAR nFloor;
    UCHAR Super;
    SHORT X;
    SHORT Z;
    USHORT W;
    USHORT D;
};

struct EM_BIN_INFO {
    USHORT Id;
    USHORT Use;
};

struct IN_DOOR_WORK {
    SHORT Next_pos_x;
    SHORT Next_pos_y;
    SHORT Next_pos_z;
    SHORT Next_cdir_y;
    UCHAR Next_stage;
    UCHAR Next_room;
    UCHAR Next_cut;
    UCHAR Next_nfloor;
    UCHAR Dtex_type;
    UCHAR Door_type;
    UCHAR Knock_type;
    UCHAR Key_id;
    UCHAR Key_type;
    UCHAR Free;
};

struct ITEM_WORK {
    UCHAR Id;
    UCHAR Num;
    UCHAR Size;
    UCHAR dummy;
};

struct AT_DATA {
    LONG X;
    LONG Y;
    LONG Z;
    USHORT W;
    USHORT D;
    SHORT Ofs_x;
    SHORT Ofs_z;
    SHORT Ofs_y;
    USHORT At_w;
    USHORT At_d;
    USHORT At_h;
    SHORT Atw_x;
    SHORT Atw_z;
};

struct BRANCH_TBL {
    UCHAR Select_num;
    UCHAR Mess_ofs;
    UCHAR Skip_size;
    UCHAR Home_pos;
    USHORT Str_no;
};

struct _struct_8 {
    unsigned shape : 4;
    unsigned unk0 : 4;	// 0x00 = Weapon Collision OFF (Desk, etc)
                    // 0x08 = Weapon Collision ON (Wall, etc)
    unsigned unk1 : 1;	// 0x00 = nFloor Height OFF (Cannot Walk Under)
                    // 0x01 = nFloor Height ON (Can Walk Under)
    unsigned unk2 : 1;	// 0x00 = 
                    // 0x01 = 
    unsigned unk3 : 1;	// 0x00 = Enemy Collision OFF
                    // 0x01 = Enemy Collision ON
    unsigned unk4 : 1;	// 0x00 = 
                    // 0x01 = 
    unsigned unk5 : 1;	// 0x00 = 
                    // 0x01 = 
    unsigned unk6 : 1;	// 0x00 = Bullet Collision OFF
                    // 0x01 = Bullet Collision ON
    unsigned unk7 : 1;	// 0x00 = Object Collision OFF
                    // 0x01 = Object Collision ON
    unsigned unk8 : 1;	// 0x00 = Player Collision OFF
                    // 0x01 = Player Collision ON
};

union uId {
    USHORT Id;
    struct _struct_8 s;
};

struct _struct_10 {
    unsigned h : 2;		// Width Multiplier X/W (0-3)
    unsigned y : 2;		// Depth Multiplier Z/D (0-3)
                                    // These values seem to determine if the
                                    // W/D values match or exceed the necessary
                                    // requirements for actual collision, where
                                    // the player comes into contact with said
                                    // collision data.
    unsigned Type : 2;	// Stair/Slope/Platform Access
                                    // 00	Climb/Ascend/Jump down from Z-Axis
                                    // 01	Climb/Ascend/Jump up from Z-Axis
                                    // 02	Climb/Ascend/Jump down from X-Axis
                                    // 03	Climb/Ascend/Jump up from X-Axis
    unsigned tFloor : 6;// Height Multiplier (0-9)
                                    // This value determines both shadow and
                                    // bullet deflection height (nFloor).
    unsigned Nine : 4;	// This value is always 9
                                    // There's only one exception in the entire
                                    // game - Retail ROOM104 (Wrecked Motorcycle)
};

union uType {
    USHORT Type;
    struct _struct_10 s;
};

struct SCA_DATA {
    SHORT X;
    SHORT Z;
    USHORT W;
    USHORT D;
    union uId Id;
    union uType Type;
    ULONG Floor;
};

struct RCUT {
    USHORT end_flg;
    USHORT ViewR;
    LONG View_p[3];
    LONG View_r[3];
    LONG pSp;
};

struct VCUT {
    UCHAR Be_flg;
    UCHAR nFloor;
    UCHAR Fcut;
    UCHAR Tcut;
    SHORT Xz[4][2];
};

struct LIGHT_CUT_DATA {
    UCHAR Mag;
    UCHAR Mode[3];
    UCHAR Col[3][3];
    UCHAR Ambient[3];
    SHORT Pos[3][3];
    USHORT L[3];
};

struct MODEL_LINK_INFO {
    LONG Tim_adr;
    LONG Tmd_adr;
};

struct EDT_TABLE_WORK {
    UCHAR id_check;
    UCHAR pan_prog;
    UCHAR tone_pri;
    UCHAR monopoly;
};

struct ROOM_WORK {
    UCHAR nSprite;
    UCHAR nCut;
    UCHAR nOmodel;
    UCHAR nItem;
    UCHAR nDoor;
    UCHAR nRoom_at;
    UCHAR Reverb_lv;
    UCHAR nSprite_max;
    ULONG* pEdt0;
    ULONG* pVh0;
    ULONG* pVb0;
    ULONG padd0;
    ULONG padd1;
    ULONG* pRbj_end;
    ULONG* pSca;
    RCUT* pRcut;
    VCUT* pVcut;
    LIGHT_CUT_DATA* pLight;
    MODEL_LINK_INFO* pOmodel;
    SHORT* pFloor;
    SHORT* pBlock;
    UCHAR* pMessage;
    UCHAR* pMessage_sub;
    ULONG* pScrl;
    SHORT* pScdx;
    SHORT* pScd;
    ULONG* pEsp_hed;
    ULONG* pEsp_end;
    ULONG* pEsp_tim;
    ULONG* pEsp_tim_end;
    ULONG* pRbj;
    RCUT Cut[1];
};

struct SP_WORK {
    USHORT Pos_x;
    USHORT Pos_y;
    USHORT W;
    USHORT H;
    UCHAR U;
    UCHAR V;
    USHORT Clut;
    UCHAR Pri;
    UCHAR Semi;
    UCHAR Col;
    UCHAR Be_flg;
};

struct KAGE_WORK {
    SHORT Off_x;
    SHORT Off_z;
    SHORT Half_x;
    SHORT Half_z;
    SHORT Pos_x;
    SHORT Pos_y;
    SHORT Pos_z;
    UCHAR Be_flg;
    SHORT Dir_y;
    VECTOR* pPos;
    POLY_FT4 Prim[2];
    UCHAR z_align[3];
};

struct KAGE_WORK9 {
    SHORT Off_x;
    SHORT Off_z;
    SHORT Half_x;
    SHORT Half_z;
    SHORT Pos_x;
    SHORT Pos_y;
    SHORT Pos_z;
    UCHAR Be_flg;
    SHORT Dir_y;
    VECTOR* pPos;
    KAGE_WORK* pKw_top;
    UCHAR z_align[3];
};

struct PARTS_W {
    ULONG Be_flg;
    ULONG Attribute;
    ULONG* pTmd;
    ULONG* pPacket;
    ULONG* pTmd2;
    ULONG* pPacket2;
    SHORT M[3][3];
    UCHAR z_align3[2];
    LONG Pos_x;
    LONG Pos_y;
    LONG Pos_z;
    SHORT Old_x;
    SHORT Old_y;
    SHORT Old_z;
    SHORT Old_x2;
    SHORT Old_y2;
    SHORT Old_z2;
    UCHAR z_align4[4];
    MATRIX Workm;
    UCHAR z_align5[2];
    SHORT Cdir_x;
    SHORT Cdir_y;
    SHORT Cdir_z;
    USHORT dummy01;
    ULONG Poly_rgb;
    ULONG* pSuper;
    UCHAR Parts_no;
    CHAR Timer1;
    CHAR Timer2;
    UCHAR Sabun_flg;
    SHORT Rot_x;
    SHORT Rot_y;
    SHORT Rot_z;
    SHORT Sabun_cnt0;
    SHORT Timer0;
    SHORT Timer3;
    ULONG* pSa_dat_head;
    SHORT Size_x;
    SHORT Size_y;
    SHORT Size_z;
    SHORT dummy03;
    ULONG* pOya_parts;
    SHORT Free[10];
};

struct MODEL_WORK {
    ULONG Attribute;
    ULONG* pTmd;
    ULONG* pPacket;
    ULONG* pTmd2;
    ULONG* pPacket2;
    SHORT M[3][3];
    LONG Pos_x;
    LONG Pos_y;
    LONG Pos_z;
    SHORT Old_x;
    SHORT Old_y;
    SHORT Old_z;
    SHORT Old_x2;
    SHORT Old_y2;
    SHORT Old_z2;
    USHORT dummy00;
    MATRIX Workm;
    SHORT Cdir_x;
    SHORT Cdir_y;
    SHORT Cdir_z;
    USHORT dummy01;
    ULONG Poly_rgb;
    ULONG* pSuper;
};

struct OM_PARTS_WORK {
    ULONG be_flg;
    ULONG Attribute;
    ULONG* pTmd;
    ULONG* pPacket;
    ULONG* pTmd2;
    ULONG* pPacket2;
    SHORT M[3][3];
    LONG Pos_x;
    LONG Pos_y;
    LONG Pos_z;
    SHORT Old_x;
    SHORT Old_y;
    SHORT Old_z;
    SHORT Old_x2;
    SHORT Old_y2;
    SHORT Old_z2;
    USHORT dummy00;
    MATRIX Workm;
    SHORT Cdir_x;
    SHORT Cdir_y;
    SHORT Cdir_z;
    USHORT dummy01;
    ULONG Poly_rgb;
    ULONG* pSuper;
    UCHAR parts_no;
    CHAR timer;
    SHORT dummy03;
};

struct OBJ_MODEL_WORK {
    ULONG Be_flg;
    UCHAR Routine_0;
    UCHAR Routine_1;
    UCHAR Routine_2;
    UCHAR Routine_3;
    UCHAR Id;
    UCHAR Sc_id;
    UCHAR At_obj_no;
    UCHAR At_sce_no;
    UCHAR Work_no;
    UCHAR At_em_no;
    USHORT At_em_flg;
    ULONG Attribute;
    ULONG* pTmd;
    ULONG* pPacket;
    ULONG* pTmd2;
    ULONG* pPacket2;
    SHORT M[3][3];
    UCHAR z_align4[2];
    LONG Pos_x;
    LONG Pos_y;
    LONG Pos_z;
    SHORT Old_x;
    SHORT Old_y;
    SHORT Old_z;
    SHORT Old_x2;
    SHORT Old_y2;
    SHORT Old_z2;
    UCHAR z_align5[4];
    MATRIX Workm;
    UCHAR z_align7[2];
    SHORT Cdir_x;
    SHORT Cdir_y;
    SHORT Cdir_z;
    USHORT dummy01;
    ULONG Poly_rgb;
    ULONG* pSuper;
    AT_DATA Atd[4];
    UCHAR Tpage;
    UCHAR Clut;
    UCHAR nFloor;
    UCHAR Parts_num;
    ULONG* pKan_t_ptr;
    SHORT Water;
    USHORT Type;
    ULONG Sca_info;
    SCA_DATA* pSca_hit_data;
    SHORT Sca_old_x;
    SHORT Sca_old_z;
    MATRIX Super_matrix;
    UCHAR z_align6[2];
    SVECTOR Super_vector;
    UCHAR Push_cnt;
    UCHAR Free0[3];
    OM_PARTS_WORK* pSin_parts_ptr;
    PARTS_W Parts;
};

struct ENEMY_WORK {
    ULONG Be_flg;
    UCHAR Routine_0;
    UCHAR Routine_1;
    UCHAR Routine_2;
    UCHAR Routine_3;
    UCHAR Id;
    UCHAR Sc_id;
    UCHAR At_obj_no;
    UCHAR At_sce_no;
    UCHAR Work_no;
    UCHAR At_em_no;
    USHORT At_em_flg;
    ULONG Attribute;
    ULONG* pTmd;
    ULONG* pPacket;
    ULONG* pTmd2;
    ULONG* pPacket2;
    SHORT M[3][3];
    LONG Pos_x;
    LONG Pos_y;
    LONG Pos_z;
    SHORT Old_x;
    SHORT Old_y;
    SHORT Old_z;
    SHORT Old_x2;
    SHORT Old_y2;
    SHORT Old_z2;
    USHORT dummy00;
    MATRIX Workm;
    SHORT Cdir_x;
    SHORT Cdir_y;
    SHORT Cdir_z;
    USHORT dummy01;
    ULONG Poly_rgb;
    ULONG* pSuper;
    AT_DATA Atd[4];
    UCHAR Tpage;
    UCHAR Clut;
    UCHAR nFloor;
    UCHAR Parts_num;
    ULONG* pKan_t_ptr;
    SHORT Water;
    USHORT Type;
    ULONG Sca_info;
    SCA_DATA* pSca_hit_data;
    SHORT Sca_old_x;
    SHORT Sca_old_z;
    MATRIX Super_matrix;
    SVECTOR Super_vector;
    SHORT Spd_x;
    SHORT Spd_y;
    SHORT Spd_z;
    UCHAR In_screen;
    UCHAR Model_Tex_type;
    UCHAR Move_no;
    UCHAR Move_cnt;
    UCHAR Hokan_flg;
    UCHAR Mplay_flg;
    UCHAR Root_ck_cnt;
    CHAR D_life_u;
    CHAR D_life_c;
    CHAR D_life_d;
    USHORT Status_flg;
    SHORT Life;
    SHORT Timer0;
    SHORT Timer1;
    SHORT Fpos_x;
    SHORT Fpos_y;
    SHORT Fpos_z;
    SHORT Max_life;
    SHORT Base_pos_x;
    SHORT Base_pos_y;
    SHORT Base_pos_z;
    CHAR Timer2;
    CHAR Timer3;
    ULONG* pKage_work;
    SHORT Neck_point_x;
    SHORT Neck_point_y;
    SHORT Neck_point_z;
    SHORT Size;
    ULONG* pNow_seq;
    ULONG* pSeq_t_ptr;
    ULONG* pSub0_kan_t_ptr;
    ULONG* pSub0_seq_t_ptr;
    ULONG* pSub1_kan_t_ptr;
    ULONG* pSub1_seq_t_ptr;
    ULONG* pRoom_kan_t_ptr;
    ULONG* pRoom_seq_t_ptr;
    PARTS_W* pSin_parts_ptr;
    ULONG* pParts_tmd;
    ULONG* pParts_packet;
    ULONG* pM_char_ptr;
    ULONG* pM_option_tmd;
    ULONG* pM_option_packet;
    ULONG* pM_Kage_work;
    ULONG* pEnemy_ptr;
    ULONG* pEnemy_neck;
    ULONG* pSa_dat;
    UCHAR Neck_flg;
    UCHAR Neck_no;
    SHORT Ground;
    SHORT Dest_x;
    SHORT Dest_z;
    USHORT Down_cnt;
    UCHAR At_hit_flg;
    UCHAR Set_flg_no;
    USHORT Sce_flg;
    UCHAR Em_set_flg;
    UCHAR Model_type;
    USHORT Damage_flg;
    UCHAR Damage_no;
    UCHAR Damage_cnt;
    SHORT Sce_free0;
    SHORT Sce_free1;
    SHORT Sce_free2;
    SHORT Sce_free3;
    SHORT Spl_flg;
    SHORT Parts0_pos_y;
    SCA_DATA* pT_xz;
    OBJ_MODEL_WORK* pOn_om;
    ULONG nOba;
    UCHAR Attw_timer;
    UCHAR Attw_seq_no;
    SHORT Eff_at_r;
    ULONG L_pl;
    ULONG L_spl;
    SHORT Dir_spl;
    CHAR Se_type;
    UCHAR Area_no;
    ULONG Tmp_routine;
    ULONG* pDamage_work;
    VOID* pTbefore_func;
    VOID* pTafter_func;
    SHORT Spd_base_x;
    SHORT Spd_base_y;
    SHORT Spd_base_z;
    SHORT Kage_ofs;
    ULONG Free[12];
};

struct PLAYER_WORK {
    ULONG Be_flg;
    UCHAR Routine_0;
    UCHAR Routine_1;
    UCHAR Routine_2;
    UCHAR Routine_3;
    UCHAR Id;
    UCHAR Sc_id;
    UCHAR At_obj_no;
    UCHAR At_sce_no;
    UCHAR Work_no;
    UCHAR At_em_no;
    USHORT At_em_flg;
    ULONG Attribute;
    ULONG* pTmd;
    ULONG* pPacket;
    ULONG* pTmd2;
    ULONG* pPacket2;
    SHORT M[3][3];
    UCHAR z_align0[2];
    LONG Pos_x;
    LONG Pos_y;
    LONG Pos_z;
    SHORT Old_x;
    SHORT Old_y;
    SHORT Old_z;
    SHORT Old_x2;
    SHORT Old_y2;
    SHORT Old_z2;
    USHORT dummy00[2];
    MATRIX Workm;
    UCHAR z_align4[2];
    SHORT Cdir_x;
    SHORT Cdir_y;
    SHORT Cdir_z;
    USHORT dummy01;
    ULONG Poly_rgb;
    ULONG* pSuper;
    AT_DATA Atd[4];
    UCHAR Tpage;
    UCHAR Clut;
    UCHAR nFloor;
    UCHAR Parts_num;
    ULONG* pKan_t_ptr;
    SHORT Water;
    USHORT Type;
    ULONG Sca_info;
    SCA_DATA* pSca_hit_data;
    SHORT Sca_old_x;
    SHORT Sca_old_z;
    MATRIX Super_matrix;
    UCHAR z_align5[2];
    SVECTOR Super_vector;
    SHORT Spd_x;
    SHORT Spd_y;
    SHORT Spd_z;
    UCHAR In_screen;
    UCHAR Model_Tex_type;
    UCHAR Move_no;
    UCHAR Move_cnt;
    UCHAR Hokan_flg;
    UCHAR Mplay_flg;
    UCHAR Root_ck_cnt;
    CHAR D_life_u;
    CHAR D_life_c;
    CHAR D_life_d;
    USHORT Status_flg;
    SHORT Life;
    SHORT Timer0;
    SHORT Timer1;
    SHORT Fpos_x;
    SHORT Fpos_y;
    SHORT Fpos_z;
    SHORT Max_life;
    SHORT Base_pos_x;
    SHORT Base_pos_y;
    SHORT Base_pos_z;
    CHAR Timer2;
    CHAR Timer3;
    ULONG* pKage_work;
    SHORT Neck_point_x;
    SHORT Neck_point_y;
    SHORT Neck_point_z;
    SHORT Size;
    ULONG* pNow_seq;
    ULONG* pSeq_t_ptr;
    ULONG* pSub0_kan_t_ptr;
    ULONG* pSub0_seq_t_ptr;
    ULONG* pSub1_kan_t_ptr;
    ULONG* pSub1_seq_t_ptr;
    ULONG* pRoom_kan_t_ptr;
    ULONG* pRoom_seq_t_ptr;
    PARTS_W* pSin_parts_ptr;
    ULONG* pParts_tmd;
    ULONG* pParts_packet;
    ULONG* pM_char_ptr;
    ULONG* pM_option_tmd;
    ULONG* pM_option_packet;
    ULONG* pM_Kage_work;
    ULONG* pEnemy_ptr;
    ULONG* pEnemy_neck;
    ULONG* pSa_dat;
    UCHAR Neck_flg;
    UCHAR Neck_no;
    SHORT Ground;
    SHORT Dest_x;
    SHORT Dest_z;
    USHORT Down_cnt;
    UCHAR At_hit_flg;
    UCHAR Set_flg_no;
    USHORT Sce_flg;
    UCHAR Em_set_flg;
    UCHAR Model_type;
    USHORT Damage_flg;
    UCHAR Damage_no;
    UCHAR Damage_cnt;
    SHORT Sce_free0;
    SHORT Sce_free1;
    SHORT Sce_free2;
    SHORT Sce_free3;
    SHORT Spl_flg;
    SHORT Parts0_pos_y;
    SCA_DATA* pT_xz;
    OBJ_MODEL_WORK* pOn_om;
    ULONG nOba;
    UCHAR Attw_timer;
    UCHAR Attw_seq_no;
    SHORT Eff_at_r;
    ULONG L_pl;
    ULONG L_spl;
    SHORT Dir_spl;
    CHAR Se_type;
    UCHAR Area_no;
    ULONG Tmp_routine;
    ULONG* pDamage_work;
    VOID* pTbefore_func;
    VOID* pTafter_func;
    SHORT Spd_base_x;
    SHORT Spd_base_y;
    SHORT Spd_base_z;
    SHORT Kage_ofs;
    USHORT Poison_timer;
    UCHAR Poison_down;
    UCHAR z_align7;
};

struct _CARD {
    UCHAR magic[2];
    UCHAR type;
    UCHAR blockEntry;
    UCHAR title[64];
    UCHAR reserve[28];
    UCHAR clut[32];
    UCHAR icon[3][128];
};

struct SAVE_DATA {
    _CARD Card_head;
    ULONG Game_play_time;
    ULONG Front_play_time;
    UCHAR Max_item_num;
    UCHAR Stereo;
    UCHAR Pl_id;
    UCHAR Save_area;
    UCHAR Vol_Se;
    UCHAR Vol_Bgm;
    UCHAR Key_idx;
    UCHAR Pl_poison_down;
    USHORT Pl_poison_timer;
    USHORT Dummy16;
    ULONG Status_bak;
    UCHAR Equip_id;
    UCHAR Equip_no;
    SHORT Pl_life;
    USHORT Zonbi_cnt;
    USHORT Cure_cnt;
    USHORT Save_cnt;
    SHORT Pl_pos_x;
    SHORT Pl_pos_y;
    SHORT Pl_pos_z;
    ULONG Weapon_mugen;
    USHORT Bgm_tbl[142];
    SHORT F_atari;
    SHORT U_atari;
    SHORT Use_id;
    SHORT Get_id;
    SHORT Sce_work[8];
    SHORT DSce_work[4];
    SHORT Sce_tmp_work[8];
    SHORT Stage_no;
    SHORT Room_no;
    SHORT Cut_no;
    SHORT Room_no_old;
    SHORT Cut_no_old;
    SHORT Sce_random;
    SHORT Player_life;
    SHORT Sce_timer;
    SHORT Change_player;
    SHORT Def_em_set;
    SHORT Def_aot_set;
    SHORT Count_down_timer;
    ULONG Scenario_flg[8];
    ULONG Common_flg[8];
    ULONG Room_flg[2];
    ULONG Enemy_flg[8];
    ULONG Enemy_flg2[8];
    ULONG Item_flg[8];
    ULONG Item_flg2[4];
    ULONG Item_c_flg[7];
    ULONG Map_o_flg;
    ULONG Map_flg[4];
    ULONG Map_c_flg[2];
    ULONG Map_i_flg;
    ULONG Pri_be_flg[16][4];
    ULONG File_flg;
    ULONG Zapping_flg[2];
    ULONG Key_flg[2];
    ITEM_WORK Item_work[11];
    ITEM_WORK Item_boxwork[64];
    UCHAR File_tag_bk[24];
    USHORT Dummy[4];
};

struct GLOBAL {
    ULONG Ot0[2][8];
    ULONG* pOt0;
    ULONG Ot1[2][1024];
    ULONG* pOt1;
    ULONG Ot2[2][16];
    ULONG* pOt2;
    UCHAR Padd_data[2][36];
    ULONG Padd;
    ULONG Padd_trg;
    USHORT Padd1;
    USHORT Padd1_trg;
    USHORT Padd2;
    USHORT Padd2_trg;
    ULONG Key;
    ULONG Key_trg;
    ULONG Key_old;
    ULONG Random;
    ULONG* pPl_emd_top;
    ULONG* pPl_pac_top;
    ROOM_WORK* pRoom;
    UCHAR* pFree_work_head;
    UCHAR* pFree_work;
    ENEMY_WORK* pEm;
    ENEMY_WORK** ppEnemy_end;
    VCUT* Cccut;
    VCUT* Cccut_next;
    VOID* pPldamage_Em[64];
    VOID* pPldie_Em[64];
    ULONG* pBs_check_sum;
    USHORT* pXa_sector;
    ULONG* pOld_tim;
    ULONG* pOld_tmd;
    IN_DOOR_WORK* pSce_aot_on;
    ULONG* Sp_bak;
    SCE_AOT* Sce_aot[32];
    SCE_AOT* pAot_data;
    ULONG Game_time_offset;
    UCHAR Cbuf_id;
    UCHAR Sound_mode;
    UCHAR Bk_equip_no;
    UCHAR Bk_item_num;
    ITEM_WORK Bk_item_work[10];
    KAGE_WORK9 Kage9[5];
    KAGE_WORK Kage[50];
    ULONG* pBs_size;
    VOID* pFree;
    SCA_DATA* pSca_hit_data[32];
    ULONG Rbj_set_flg;
    ULONG System_flg;
    ULONG Unknown_flg0;
    UCHAR Window_no;
    UCHAR Mirror_flg;
    SHORT Mirror_pos;
    SHORT Mirror_max;
    SHORT Mirror_min;
    UCHAR Save_cursor;
    UCHAR Dummy8[3];
    VECTOR Wep_hit_pos[5];
    ULONG Status_flg;
    ULONG Stop_flg;
    ULONG Use_flg[4];
    UCHAR Ctpage;
    UCHAR Cclut;
    UCHAR Next_cut_no;
    UCHAR Enemy_num;
    USHORT Room_enemy_flg;
    USHORT Room_player_flg;
    PLAYER_WORK Player;
    USHORT Unknown_flg1;
    USHORT Unknown_flg2;
    ENEMY_WORK* pEnemy[34];
    VOID* Em_move_tbl[96];
    VOID* Em_ov_mtbl[2][96];
    EM_BIN_INFO Em_bin_info[2];
    OBJ_MODEL_WORK Ob_model[32];
    OBJ_MODEL_WORK* pObj_work_end;
    SHORT Root_rot;
    SHORT Root_area_no;
    SHORT Root_dest_x;
    SHORT Root_dest_z;
    UCHAR nSce_aot;
    UCHAR Get_item_id;
    USHORT Pdemo_cnt;
    UCHAR Up_event_no;
    UCHAR Up_eve_rtn;
    UCHAR Up_key_rtn;
    UCHAR Up_wnd_rtn;
    USHORT Movie_Isrgb24;
    UCHAR Movie_id;
    UCHAR Ibox_Futa_no;
    SHORT Light3_pos_x;
    SHORT Light3_pos_y;
    SHORT Light3_pos_z;
    USHORT Light3_L;
    UCHAR Light3_col[4];
    UCHAR Memcard_rtn;
    UCHAR Front_func_rtn;
    UCHAR Back_func_rtn;
    UCHAR Em_se_set_no;
    ULONG Em_default;
    LONG Unknown_Buffer[145];
    SHORT Scrl_y;
    SHORT Scrl_flg;
    VOID* Front_func;
    VOID* Back_func;
    UCHAR Font_type;
    UCHAR Dummy8_3[3];
    SAVE_DATA SaveData;
    ULONG ExData0[8];
    ULONG ExData1[4];
    ULONG ExData2[8];
    ULONG ExData3[25];
    UCHAR pad[12];
};

struct TCB {
    LONG status;
    LONG mode;
    ULONG reg[40];
    LONG system[6];
};

struct EXEC {
    ULONG pc0;
    ULONG gp0;
    ULONG t_addr;
    ULONG t_size;
    ULONG d_addr;
    ULONG d_size;
    ULONG b_addr;
    ULONG b_size;
    ULONG saddr;
    ULONG ssize;
    ULONG sp;
    ULONG fp;
    ULONG gp;
    ULONG ret;
    ULONG base;
};

struct TASK {
    USHORT Tcb_status;
    SHORT Tcb_sleep_ctr;
    LONG* pTcb_pc;
    ULONG Tcb_th;
    TCB* pTcb;
    ULONG Tcb_init_sp;
    EXEC Tcb_exec;
    ULONG* pPc;
    USHORT R_no[6];
    SHORT Ctr[8];
    UCHAR Free[16];
};

struct SCE_TASK {
    UCHAR Routine0;
    UCHAR Status;
    CHAR Sub_ctr;
    UCHAR Task_level;
    CHAR Ifel_ctr[4];
    CHAR Loop_ctr[4];
    CHAR Loop_if_class[4][4];
    UCHAR* Data;
    UCHAR* Lstack[4][4];
    UCHAR* Lbreak[4][4];
    SHORT Lcnt[4][4];
    ULONG Stack[4][8];
    ULONG* pS_SP;
    UCHAR* Ret_addr[4];
    ENEMY_WORK* pWork;
    SHORT Spd_x;
    SHORT Spd_y;
    SHORT Spd_z;
    SHORT Dspd_x;
    SHORT Dspd_y;
    SHORT Dspd_z;
    SHORT Aspd_x;
    SHORT Aspd_y;
    SHORT Aspd_z;
    SHORT Adspd_x;
    SHORT Adspd_y;
    SHORT Adspd_z;
    ULONG R_no_bak;
};

struct SCENARIO {
    SCE_TASK Sce_task[14];
    ULONG Random_base;
    UCHAR* pCScd;
    ENEMY_WORK* pC_em;
    POLY_GT4* pMizu_div;
    UCHAR Type;
    UCHAR Cut_old;
    UCHAR C_id;
    UCHAR C_model_type;
    UCHAR C_kind;
    UCHAR Mizu_div_max;
    UCHAR Mizu_div_ctr;
    UCHAR Rbj_reset_flg;
    UCHAR Se_tmp0;
    UCHAR Se_tmp1;
    UCHAR Se_vol;
};

struct MONITOR {
    ULONG Gp;
    TASK Task[3];
    TASK* pCtcb;
};

struct FADE {
    SHORT Kido;
    SHORT Add;
    UCHAR Hrate;
    UCHAR Mask_r;
    UCHAR Mask_g;
    UCHAR Mask_b;
    UCHAR Pri;
    TILE T[2];
    DR_MODE Dr_mode[2];
};

struct MAIN {
    DBUF Db[2];
    DBUF* pDb;
    ULONG Pad_rmask;
    UCHAR Pad_wait_time;
    UCHAR Pad_repeat_time;
    UCHAR Vloop;
    UCHAR Bg_chg_flg;
    FADE Fade[4];
    RECT16 Rect;
    UCHAR Bg_mode;
    UCHAR Curtain_kido;
    UCHAR Key_idx;
    UCHAR Scrl_type;
    UCHAR Padoff_stop_flg;
    UCHAR Pollhost_flg;
};

struct MOJIDISP {
    DR_MODE Moji_mode[2][16];
    SPRT Prim_sprt[2][256];
    SPRT_8 Prim_sprt_8[2][128];
    SPRT* pSprt_keep;
    SPRT_8* pSprt_8_keep;
    UCHAR Moji_buff[512];
    UCHAR* pBuff_ptr;
    UCHAR Mess_flg;
    UCHAR Mess_r_no0;
    UCHAR Mess_type;
    UCHAR Mess_item;
    UCHAR Mess_wait;
    CHAR Mess_time;
    UCHAR Mcol_init;
    UCHAR Mcol_next;
    UCHAR* Mess_top;
    UCHAR* Mess_end;
    UCHAR* Mess_svp;
    USHORT Mess_pos_x;
    USHORT Mess_pos_y;
    USHORT Pos_x_def;
    USHORT Pos_y_def;
    USHORT Mess_attr;
    CHAR Timer;
    UCHAR dummy0;
    ULONG Stop_keep;
    ULONG Stop_data;
};

struct DslATV {
    UCHAR val0;
    UCHAR val1;
    UCHAR val2;
    UCHAR val3;
};

struct DslFILTER {
    UCHAR file;
    UCHAR chan;
    USHORT pad;
};

struct DslLOC {
    UCHAR minute;
    UCHAR second;
    UCHAR sector;
    UCHAR track;
};

struct CD {
    UCHAR Cd_rtn_no;
    UCHAR Xa_rtn_no;
    UCHAR Check_sum_flg;
    UCHAR Type;
    DslLOC Fpos;
    ULONG Fsize;
    ULONG Fsize_now;
    ULONG Fsize_read;
    ULONG Fsector;
    USHORT Fsector_num;
    USHORT Fsector_read;
    USHORT Fno;
    UCHAR Fsum;
    UCHAR Sum;
    ULONG Sum_cnt;
    ULONG Start_sector;
    ULONG Current_sector;
    ULONG End_sector;
    ULONG* Read_adr;
    UCHAR Use_mode;
    UCHAR Limit_break;
    UCHAR Time_ctr;
    UCHAR Status;
    UCHAR Result[12];
    UCHAR Param[4];
    UCHAR Work_buf[2048];
    DslFILTER Filter;
    DslATV Cdvol;
    ULONG Vol;
    ULONG* Buff_adr;
    UCHAR Read_ctr;
    UCHAR Write_ctr;
    UCHAR First_flg;
    UCHAR Stereo_flg;
    UCHAR Ring_status[12];
    USHORT Ring_size[12];
};

struct BGMCTR {
    UCHAR Main;
    UCHAR Sub;
};

struct VM_DISP {
    RECT16 Rect;
    TILE Cinesco[2][2];
    ULONG Cine_switch;
    USHORT Pos_x;
    USHORT Cur_pos_x;
    USHORT Pos_y;
    USHORT Width;
    USHORT Size;
    USHORT Count;
    USHORT Loop;
    USHORT Attribute;
    USHORT Isrgb24;
    USHORT unk_0;
};

struct GAME {
    UCHAR Doordemo_flg;
    UCHAR Plight_flg;
    UCHAR Plight_cnt;
    UCHAR Plight_col[3];
    ULONG Plight_bak[10];
    VECTOR Plight_pos;
    UCHAR Move_flg;
    UCHAR Rookie_cnt;
    ULONG Stop_bak;
};

struct DOOR_WORK {
    ULONG Be_flg;
    UCHAR Routine_0;
    UCHAR Routine_1;
    UCHAR Routine_2;
    UCHAR Routine_3;
    UCHAR Id;
    UCHAR Sc_id;
    UCHAR At_obj_no;
    UCHAR At_sce_no;
    UCHAR Work_no;
    UCHAR At_em_no;
    USHORT At_em_flg;
    ULONG Attribute;
    ULONG* pTmd;
    ULONG* pPacket;
    ULONG* pTmd2;
    ULONG* pPacket2;
    SHORT M[3][3];
    LONG Pos_x;
    LONG Pos_y;
    LONG Pos_z;
    SHORT Old_x;
    SHORT Old_y;
    SHORT Old_z;
    SHORT Old_x2;
    SHORT Old_y2;
    SHORT Old_z2;
    USHORT dummy00;
    MATRIX Workm;
    SHORT Cdir_x;
    SHORT Cdir_y;
    SHORT Cdir_z;
    USHORT dummy01;
    ULONG Poly_rgb;
    ULONG* pSuper;
    AT_DATA Atd[4];
    UCHAR Tpage;
    UCHAR Clut;
    UCHAR nFloor;
    UCHAR Parts_num;
    ULONG* pKan_t_ptr;
    SHORT Water;
    USHORT Type;
    ULONG Sca_info;
    SCA_DATA* pSca_hit_data;
    SHORT Sca_old_x;
    SHORT Sca_old_z;
    MATRIX Super_matrix;
    SVECTOR Super_vector;
    USHORT Attribute2;
    USHORT Model_no;
    USHORT Free;
    USHORT Free2;
};

struct STATUS {
    UCHAR Main_rtn;
    UCHAR Sub_rtn0;
    UCHAR Sub_rtn1;
    UCHAR Sub_rtn2;
    UCHAR Sub_rtn3;
    UCHAR Sub_rtn4;
    UCHAR Sub_rtn5;
    UCHAR Sub_rtn6;
    UCHAR Equip_item_no;
    UCHAR Equip_item_no_old;
    UCHAR Equip_item_id;
    UCHAR Equip_item_id_old;
    UCHAR Icursol_main;
    UCHAR Icursol_sub;
    UCHAR Mcursol0;
    UCHAR Mcursol1;
    UCHAR St_type;
    CHAR F_sel_book;
    CHAR F_sel_file;
    UCHAR F_page_no;
    UCHAR Itembox_tpage;
    UCHAR Fread_char;
    UCHAR Exit_flg;
    UCHAR Same_id_work_no;
    UCHAR Using_item_no;
    UCHAR File_flg;
    UCHAR Map_no;
    UCHAR Pl_chenge_flg;
    CHAR Add_cp_x0;
    CHAR Add_cp_y0;
    CHAR X0;
    CHAR Y0;
    CHAR Add_cp_x1;
    CHAR Add_cp_y1;
    CHAR X1;
    CHAR Y1;
    UCHAR Ibox_sel;
    CHAR Ibox_moxe;
    UCHAR Mixed_id;
    UCHAR Mixed_pix_no;
    UCHAR blink_timer0;
    UCHAR blink_sw0;
    UCHAR blink_timer1;
    UCHAR blink_sw1;
    SHORT Machinegun_trg;
    SHORT Goffset_add;
    SHORT F_move_x;
    SHORT F_move_y;
    SHORT Itemlist_pos_x;
    SHORT Itemlist_pos_y;
    SHORT Message_pos_x;
    SHORT Message_pos_y;
    SHORT Status_pos_x;
    SHORT Status_pos_y;
    SHORT Sub_pos_x;
    SHORT Sub_pos_y;
    SHORT Menu0_pos_x;
    SHORT Menu0_pos_y;
    SHORT Menu1_pos_x;
    SHORT Menu1_pos_y;
    SHORT Frame_pos_x;
    SHORT Frame_pos_y;
    SHORT Ibox_pos_x;
    SHORT Ibox_pos_y;
    SHORT Map_pos_x;
    SHORT Map_pos_y;
    SHORT Map_offset_x;
    SHORT Map_offset_y;
    SHORT File_pos_x;
    SHORT File_pos_y;
    SHORT Ecg_x;
    CHAR Recover_type;
    CHAR Ecg_rtn;
    SHORT Heal_x;
    SHORT Cure_y;
    MODEL_WORK Fmodel[30];
    USHORT Add_life;
    USHORT dm00;
    USHORT Clut[22];
    DR_MODE Dmode[24][2];
};

struct SPRITEGp {
    UCHAR U;
    UCHAR V;
    CHAR Ofsx;
    CHAR Ofsy;
};

struct SSEQUENCE {
    UCHAR pGp;
    UCHAR nSpr;
    UCHAR Time;
    UCHAR Twh;
    SHORT Hotx;
    SHORT Hoty;
};

struct MSEQUENCE {
    UCHAR Routine0;
    UCHAR Routine1;
    UCHAR Free0;
    UCHAR Free1;
    USHORT Transx;
    USHORT Transy;
    CHAR Add_x;
    CHAR Add_y;
    CHAR Add_z;
    UCHAR Free2;
    SHORT Speed_x;
    SHORT Speed_y;
    SHORT Speed_z;
    USHORT Free3;
    USHORT Free4;
    USHORT Free5;
};

struct ESP_WORK {
    UCHAR Routine0;
    UCHAR Routine1;
    UCHAR Free0;
    UCHAR Free1;
    USHORT Transx;
    USHORT Transy;
    CHAR Add_x;
    CHAR Add_y;
    CHAR Add_z;
    UCHAR Free2;
    SHORT Speed_x;
    SHORT Speed_y;
    SHORT Speed_z;
    USHORT Free3;
    USHORT Free4;
    USHORT Free5;
    USHORT Be_flg;
    UCHAR Wk_no;
    CHAR Padd0;
    UCHAR Id;
    UCHAR Id2;
    UCHAR Type;
    UCHAR Mov_cnt;
    UCHAR Anm_time;
    UCHAR Anm_cnt;
    SHORT DirY;
    SHORT Mov_x;
    SHORT Mov_y;
    SHORT Mov_z;
    USHORT Tpage;
    SHORT Hot_x;
    SHORT Hot_y;
    SHORT Hot_z;
    USHORT Clut;
    SHORT Pos_x;
    SHORT Pos_y;
    SHORT Pos_z;
    USHORT Mag;
    SHORT Old_x;
    SHORT Old_y;
    SHORT Old_z;
    SHORT Padd1;
    SHORT Cdir_x;
    SHORT Cdir_y;
    SHORT Cdir_z;
    SHORT Padd2;
    SHORT m[3][3];
    SHORT Padd3;
    LONG t[3];
    MATRIX* pMat;
    SSEQUENCE* pAnmseq;
    SPRITEGp* pSprg;
    MSEQUENCE* pMoveseq;
};

struct CC_PARTS_WORK {
    UCHAR Cc_ctr;
    UCHAR Cc_cnt;
    UCHAR Cc_wait;
    UCHAR Cc_num;
    USHORT Cc_pos_x;
    USHORT Cc_pos_y;
    DR_MOVE Cc_dr_move[2];
    RECT16 Cc_dr_rect[2];
    OBJ_MODEL_WORK* pOm;
};

struct JOINT_P {
    UCHAR Move_no;
    UCHAR Move_cnt;
    UCHAR Hokan_flg;
    UCHAR P0_parts_no;
    ULONG On_parts_flg;
    MATRIX P0_m;
    SVECTOR P0_sv;
};

struct ATTACK_SEQ {
    UCHAR Tbl_no;
    UCHAR Timer;
};

struct ATTACK_WORK3 {
    UCHAR Status;
    UCHAR Ck_kin;
    UCHAR Ck_tyu;
    UCHAR Ck_en;
    SHORT Off0_x;
    SHORT Off0_z;
    SHORT R0_x;
    SHORT Half0_R_z;
    SHORT Off1_x;
    SHORT Off1_z;
    SHORT R1_x;
    SHORT Half1_R_z;
    SHORT Off2_x;
    SHORT Off2_z;
    SHORT R2_x;
    SHORT Half2_R_z;
};

struct ATTACK_WEAPON_TBL {
    ATTACK_WORK3* At_work_top;
    ATTACK_SEQ* At_seq_top;
};

struct ATTACK_WEAPON_EM {
    ULONG Damage;
    ULONG SubDamage;
    SHORT Jyo_ue;
    SHORT Jyo_ge;
    SHORT Tyu_ue;
    SHORT Tyu_ge;
    SHORT Ge_ue;
    SHORT Ge_ge;
};

struct ATTACK_WORK {
    SHORT Off_x;
    SHORT Off_z;
    SHORT R_x;
    SHORT Half_R_z;
};

#pragma pack(pop)