/*
	バイオハザード 2
	Resident Evil 2
	bio2 1.10.exe

	Original: https://github.com/Gemini-Loboto3/RE2-Mod-SDK
	Gemini, Loboto3

	Extended: https://github.com/MeganGrass/RE2-Mod-SDK-Ext
	Megan Grass
*/

#include "bio2_hook.h"

// Executable
typedef struct tagEngineCall
{
	FARPROC Door_model_init;
	FARPROC AddPrim;
	FARPROC WinMain;
	FARPROC Config;
	FARPROC Config_main;
	FARPROC Config_fade_in_wait;
	FARPROC Config_padd_snd;
	FARPROC Die_demo;
	FARPROC Die_demo_move;
	FARPROC Die_move_wait;
	FARPROC Die_move_set_cut;
	FARPROC Die_move_set_cut_usual;
	FARPROC Die_enemy_set;
	FARPROC Die_light_set;
	FARPROC Die_vcut_set;
	FARPROC Die_move_pause;
	FARPROC Die_move_main;
	FARPROC Die_move_out;
	FARPROC Die_move_end;
	FARPROC Die_spiral_move;
	FARPROC Die_spir_init;
	FARPROC Die_spir_move;
	FARPROC Die_spir_move_init;
	FARPROC Die_spir_move_main;
	FARPROC Die_spir_move_hold;
	FARPROC Die_spir_move_erase;
	FARPROC Die_spir_move_end;
	FARPROC Die_spr_load;
	FARPROC Die_snd_trans;
	FARPROC Door_scheduler_main;
	FARPROC Door_Trans;
	FARPROC Door_model_set;
	FARPROC Door_texture_load;
	FARPROC SquareRoot12;
	FARPROC catan;
	FARPROC ratan2;
	FARPROC ApplyMatrix;
	FARPROC ApplyMatrixSV;
	FARPROC ApplyMatrixLV;
	FARPROC GetClut;
	FARPROC GetTPage;
	FARPROC MatrixNormal;
	FARPROC MulMatrix0;
	FARPROC MulMatrix;
	FARPROC MulMatrix2;
	FARPROC CompM;
	FARPROC OuterProduct0;
	FARPROC RotMatrix;
	FARPROC RotMatrixX;
	FARPROC RotMatrixY;
	FARPROC RotMatrixZ;
	FARPROC ScaleMatrix;
	FARPROC SetRotMatrix;
	FARPROC SetLightMatrix;
	FARPROC SetColorMatrix;
	FARPROC SetTransMatrix;
	FARPROC TransposeMatrix;
	FARPROC VectorNormal;
	FARPROC SetGeomScreen;
	FARPROC rsin;
	FARPROC rcos;
	FARPROC SquareRoot0;
	FARPROC Set_enemy_work;
	FARPROC Em_bin_load;
	FARPROC Hani_ck;
	FARPROC Add_speedXZ;
	FARPROC Add_speedXYZ;
	FARPROC Add_speedXYZsuper;
	FARPROC Direction_ck;
	FARPROC Goto00;
	FARPROC Goto00_ck;
	FARPROC Goto01;
	FARPROC Goto01_ck;
	FARPROC Dir_pos_ck;
	FARPROC L_pos_ckXZ;
	FARPROC L_pos_ckXZM;
	FARPROC Cdir_ck;
	FARPROC Cdir_ck2;
	FARPROC Gacha_ch;
	FARPROC Set_base_pos;
	FARPROC Null_pos_set;
	FARPROC get_null_pos;
	FARPROC Spd_get;
	FARPROC Rnd;
	FARPROC Em_seq_sound;
	FARPROC Foot_set_pl;
	FARPROC Kage_work_init;
	FARPROC Kage_work9_init;
	FARPROC Kage_work_set;
	FARPROC Kage_work9_set;
	FARPROC MulKage;
	FARPROC Kage_work_sort;
	FARPROC Kage_work9_sort;
	FARPROC Kage_work_color_set;
	FARPROC Kage_work9_color_set;
	FARPROC Esp_init_C;
	FARPROC Esp_init_R;
	FARPROC Esp_data_set0;
	FARPROC Esp_data_set1;
	FARPROC Esp_call;
	FARPROC Esp_call3D;
	FARPROC Esp_call3D2;
	FARPROC Esp_call2;
	FARPROC Esp_call3;
	FARPROC Esp_kill;
	FARPROC Esp_kill2;
	FARPROC Esp_die;
	FARPROC Esp_ctrl;
	FARPROC Esp_move;
	FARPROC Esp_pos;
	FARPROC Gun_light_reset;
	FARPROC Joint_trans2;
	FARPROC ko_joint_trans2;
	FARPROC ko_joint_trans3;
	FARPROC PartsWork_set;
	FARPROC PartsWork_link;
	FARPROC Init_Parts_work;
	FARPROC Parts_down;
	FARPROC Parts_bomb;
	FARPROC Parts_ryu;
	FARPROC HMatrix;
	FARPROC Joint_move;
	FARPROC J_seq;
	FARPROC hokan_svec;
	FARPROC Joint_move_p;
	FARPROC Joint_move2;
	FARPROC J_seq2;
	FARPROC Scr_effect;
	FARPROC Scr_quake;
	FARPROC Line_work_init;
	FARPROC main;
	FARPROC Init_system;
	FARPROC Init_main;
	FARPROC Swap_Cbuff;
	FARPROC Bg_set_mode;
	FARPROC Bg_load;
	FARPROC Bg_draw;
	FARPROC Fade_set;
	FARPROC Fade_adjust;
	FARPROC Fade_off;
	FARPROC Fade_status;
	FARPROC System_trans;
	FARPROC Init_global;
	FARPROC Cut_check;
	FARPROC Cut_change;
	FARPROC Ccut_search;
	FARPROC Hit_ck_point4;
	FARPROC Hit_ck_box;
	FARPROC Logo;
	FARPROC mapModelingData;
	FARPROC MulLMatrix;
	FARPROC Mirror_model_cp;
	FARPROC Mizu_trans;
	FARPROC Mizu_div_ck;
	FARPROC Mizu_div_main;
	FARPROC Print8;
	FARPROC Print14;
	FARPROC Print_main;
	FARPROC Mess_set;
	FARPROC Moji_trans_main;
	FARPROC Mess_disp;
	FARPROC Branch_disp;
	FARPROC name_ptr_set;
	FARPROC mess_trans;
	FARPROC Name_disp;
	FARPROC Mess_print;
	FARPROC moji_trans_main;
	FARPROC moji_trans_8;
	FARPROC moji_trans_14;
	FARPROC Moji_buff_init;
	FARPROC Moji_init;
	FARPROC Moji_mode_init;
	FARPROC Init_movie_work;
	FARPROC Oba_ck_hit;
	FARPROC Oba_ck_only;
	FARPROC Oba_set_ofs;
	FARPROC Oba_ck_em;
	FARPROC Oba_ck_em2;
	FARPROC Sca_ck_em;
	FARPROC Om_init;
	FARPROC Col_chg_init;
	FARPROC Tex_chg_init;
	FARPROC Tex_ctr;
	FARPROC Col_chg;
	FARPROC Tex_chg;
	FARPROC Om_move;
	FARPROC Om_trans;
	FARPROC Om_move_box;
	FARPROC Om_set_fall_dir;
	FARPROC Oma_set_ofs;
	FARPROC Oma_ck_oba;
	FARPROC Oma_ck_om;
	FARPROC Oma_ck_front;
	FARPROC Oma_pl_updown_ck;
	FARPROC Oma_Spl_updown_ck;
	FARPROC Oma_front_ck;
	FARPROC Oma_on_check;
	FARPROC Oma_pull;
	FARPROC Oma_pull_hosei_x;
	FARPROC Oma_pull_hosei_z;
	FARPROC Oma_get_on_om;
	FARPROC Oma_ob_pull2;
	FARPROC Omd_in_check;
	FARPROC Oma_obj_ck_all;
	FARPROC Pad_set;
	FARPROC Pad_get_trg;
	FARPROC Pad_rep_set;
	FARPROC Computer200;
	FARPROC Computer613;
	FARPROC Computer_init;
	FARPROC Computer_exit;
	FARPROC Keyboard_Input;
	FARPROC Keyboard_set;
	FARPROC Keyboard;
	FARPROC Wframe_in_out;
	FARPROC Wframe_set;
	FARPROC Wframe_move;
	FARPROC Get_moji_code;
	FARPROC Cprint;
	FARPROC Console_put;
	FARPROC Console_roll_up;
	FARPROC Console_clr;
	FARPROC Console_trans;
	FARPROC Sprite_Trans;
	FARPROC Set_sp_work;
	FARPROC Pl_weapon_ch;
	FARPROC Plw02_init;
	FARPROC Plw09_init;
	FARPROC Plw0c_init;
	FARPROC Plw0f_init;
	FARPROC Plw12_init;
	FARPROC Weapon_cls;
	FARPROC init_Weapon_at;
	FARPROC Weapon_at_ck;
	FARPROC Set_MinMax;
	FARPROC Attack_r_ck0;
	FARPROC Attack_r_ck1;
	FARPROC Em_ck;
	FARPROC Hand_ck;
	FARPROC Mag_set;
	FARPROC Mag_down;
	FARPROC G_rot_st;
	FARPROC G_rot;
	FARPROC Gat_lp_st;
	FARPROC Gat_rot;
	FARPROC Pl_water;
	FARPROC null;
	FARPROC Set_room;
	FARPROC Set_stage;
	FARPROC Replace_rdt;
	FARPROC Em_init_move;
	FARPROC Root_ck;
	FARPROC Rnd_area;
	FARPROC Guide_check;
	FARPROC kara_rootck2;
	FARPROC Sa_dat_set;
	FARPROC Sca_get_area;
	FARPROC Sca_ck_hit;
	FARPROC Sca_ck_hit_om;
	FARPROC Sca_hit_box2;
	FARPROC Sca_hit_box;
	FARPROC Sca_hosei_box;
	FARPROC Sca_hit_naname_a;
	FARPROC Sca_ck_naname_a;
	FARPROC Sca_hit_naname_b;
	FARPROC Sca_ck_naname_b;
	FARPROC Sca_hit_naname_c;
	FARPROC Sca_ck_naname_c;
	FARPROC Sca_hit_naname_d;
	FARPROC Sca_ck_naname_d;
	FARPROC Sca_hit_hishi;
	FARPROC Sca_ck_hishi;
	FARPROC Sca_hit_circle;
	FARPROC Sca_ck_circle;
	FARPROC Sca_hit_koban_x;
	FARPROC Sca_ck_koban_x;
	FARPROC Sca_hit_koban_z;
	FARPROC Sca_ck_koban_z;
	FARPROC Sca_hit_slope;
	FARPROC Sca_hit_stairs;
	FARPROC Sca_hit_curve;
	FARPROC Sca_get_slope_high;
	FARPROC Sca_get_stairs_high;
	FARPROC Sca_get_curve_high;
	FARPROC Sca_get_ground;
	FARPROC Sca_get_dir;
	FARPROC Sca_get_dir_super;
	FARPROC Sca_get_dir_super_tmp;
	FARPROC Get_axis;
	FARPROC Get_axis2;
	FARPROC Sca_get_pos;
	FARPROC Sca_get_pos_super;
	FARPROC Sca_get_pos_super_tmp;
	FARPROC Sca_ck_line;
	FARPROC Sca_get_high;
	FARPROC Sca_get_low;
	FARPROC Sce_test_init;
	FARPROC Em_kind_search;
	FARPROC Sce_se_set;
	FARPROC Sce_rnd_set;
	FARPROC Sce_model_init;
	FARPROC Sce_work_clr;
	FARPROC Sce_work_clr_set;
	FARPROC Sce_aot_init;
	FARPROC Event_init;
	FARPROC Event_exec;
	FARPROC Sce_scheduler_set;
	FARPROC Sce_col_chg_init;
	FARPROC Sce_mirror_init;
	FARPROC Sce_scheduler;
	FARPROC Sce_scheduler_main;
	FARPROC Nop;
	FARPROC Evt_end;
	FARPROC Evt_next;
	FARPROC Evt_chain;
	FARPROC Evt_exec;
	FARPROC Evt_kill;
	FARPROC Ifel_ck;
	FARPROC Else_ck;
	FARPROC Endif;
	FARPROC Sleep;
	FARPROC Sleeping;
	FARPROC Wsleep;
	FARPROC Wsleeping;
	FARPROC For;
	FARPROC For2;
	FARPROC Next;
	FARPROC While;
	FARPROC Ewhile;
	FARPROC Do;
	FARPROC Edwhile;
	FARPROC While_main;
	FARPROC Switch;
	FARPROC Default;
	FARPROC Eswitch;
	FARPROC Goto;
	FARPROC Gosub;
	FARPROC Return;
	FARPROC Break;
	FARPROC Work_copy;
	FARPROC Rbj_reset;
	FARPROC Ck;
	FARPROC Set;
	FARPROC Cmp;
	FARPROC Save;
	FARPROC Copy;
	FARPROC Calc;
	FARPROC Calc2;
	FARPROC Calc_branch;
	FARPROC Sce_rnd;
	FARPROC Cut_chg;
	FARPROC Cut_old;
	FARPROC Cut_chg_main;
	FARPROC Cut_auto;
	FARPROC Cut_replace;
	FARPROC Cut_be_set;
	FARPROC Message_on;
	FARPROC Aot_set;
	FARPROC Aot_set_4p;
	FARPROC Door_aot_set;
	FARPROC Door_aot_set_4p;
	FARPROC Item_aot_set;
	FARPROC Item_aot_set2;
	FARPROC Item_aot_set_4p;
	FARPROC Aot_reset;
	FARPROC Aot_on;
	FARPROC Obj_model_set;
	FARPROC Super_set;
	FARPROC Super_on;
	FARPROC Super_reset;
	FARPROC Work_set;
	FARPROC Parts_set;
	FARPROC Speed_set;
	FARPROC Add_speed;
	FARPROC Add_aspeed;
	FARPROC Pos_set;
	FARPROC Dir_set;
	FARPROC Member_set;
	FARPROC Member_set2;
	FARPROC Member_set_branch;
	FARPROC Member_copy;
	FARPROC Member_cmp;
	FARPROC Load_member_branch;
	FARPROC Member_calc;
	FARPROC Member_calc2;
	FARPROC Load_member_addr_branch;
	FARPROC Dir_ck;
	FARPROC Se_on;
	FARPROC Sca_id_set;
	FARPROC Sce_espr_on;
	FARPROC Sce_espr_on2;
	FARPROC Sce_espr3d_on;
	FARPROC Sce_espr3d_on2;
	FARPROC Sce_espr_kill;
	FARPROC Sce_espr_kill2;
	FARPROC Sce_espr_task;
	FARPROC Sce_espr_control;
	FARPROC Get_matrix;
	FARPROC Plc_motion;
	FARPROC Plc_dest;
	FARPROC Plc_gun;
	FARPROC Plc_neck;
	FARPROC Plc_ret;
	FARPROC Plc_stop;
	FARPROC Plc_flg;
	FARPROC Plc_rot;
	FARPROC Plc_cnt;
	FARPROC Sce_em_set;
	FARPROC Sce_em_set2;
	FARPROC Sce_key_ck;
	FARPROC Sce_trg_ck;
	FARPROC Sce_bgm_control;
	FARPROC Sce_bgmtbl_set;
	FARPROC Sce_fade_set;
	FARPROC Sce_fade_adjust;
	FARPROC Xa_on;
	FARPROC Xa_vol;
	FARPROC Se_vol;
	FARPROC Sce_shake_on;
	FARPROC Sce_line_start;
	FARPROC Sce_line_main;
	FARPROC Sce_line_end;
	FARPROC Mizu_div_set;
	FARPROC Keep_Item_ck;
	FARPROC Sce_Item_cmp;
	FARPROC Sce_Item_lost;
	FARPROC Sce_Item_lost2;
	FARPROC Weapon_chg;
	FARPROC Sce_Item_get;
	FARPROC Kage_set;
	FARPROC Light_pos_set;
	FARPROC Light_kido_set;
	FARPROC Light_color_set;
	FARPROC Light_pos_set2;
	FARPROC Light_kido_set2;
	FARPROC Light_color_set2;
	FARPROC Sce_scr_move;
	FARPROC Flr_set;
	FARPROC Movie_on;
	FARPROC Splc_ret;
	FARPROC Splc_sce;
	FARPROC Evt_next2;
	FARPROC Mirror_set;
	FARPROC Sce_parts_bomb;
	FARPROC Sce_parts_down;
	FARPROC Col_chg_set;
	FARPROC Plc_heal;
	FARPROC St_map_hint;
	FARPROC Sce_em_pos_ck;
	FARPROC Poison_ck;
	FARPROC Poison_clr;
	FARPROC Case;
	FARPROC Vib_fade_set;
	FARPROC Sce_at_check;
	FARPROC Nothing;
	FARPROC Sce_Door;
	FARPROC Sce_Item;
	FARPROC Sce_Normal;
	FARPROC Sce_Message;
	FARPROC Sce_Event;
	FARPROC Sce_Flg_chg;
	FARPROC Sce_Water;
	FARPROC Sce_Move;
	FARPROC Sce_Save;
	FARPROC Sce_Itembox;
	FARPROC Sce_Damage;
	FARPROC Sce_Status;
	FARPROC Sce_Hikidashi;
	FARPROC Sce_Windows;
	FARPROC Sce_at;
	FARPROC Water_ck;
	FARPROC Floor_check;
	FARPROC Snd_sys_init;
	FARPROC Snd_sys_init_sub2;
	FARPROC Snd_sys_core_set;
	FARPROC Snd_sys_arms_set;
	FARPROC Snd_sys_room_set;
	FARPROC Snd_sys_enem_set;
	FARPROC Snd_bgm_set;
	FARPROC Snd_bgm_ck;
	FARPROC Snd_bgm_play_ck;
	FARPROC Snd_bgm_main;
	FARPROC Snd_bgm_sub;
	FARPROC Snd_bgm_fade_ON;
	FARPROC Snd_bgm_ctr;
	FARPROC Snd_bgm_tbl_set;
	FARPROC Snd_se_stad;
	FARPROC Snd_se_enem;
	FARPROC Snd_se_walk;
	FARPROC Snd_se_call;
	FARPROC Snd_se_pri_ck;
	FARPROC Snd_se_3D;
	FARPROC Snd_se_dir_ck;
	FARPROC Xa_play;
	FARPROC Xa_error;
	FARPROC Xa_control_stop;
	FARPROC Xa_control_init;
	FARPROC Xa_control_play;
	FARPROC Xa_control_end;
	FARPROC Xa_control;
	FARPROC Spl_soba_pos_set;
	FARPROC Spl_enemy_ck;
	FARPROC Spl_em_pos_ck;
	FARPROC Spl_em_cdir_ck;
	FARPROC Spl_pllock_get;
	FARPROC Spl_life_down;
	FARPROC model_disp;
	FARPROC Set_iwork;
	FARPROC Set_iwork_num;
	FARPROC Check_pl_life;
	FARPROC Check_item_space;
	FARPROC Check_item_mix;
	FARPROC Search_item;
	FARPROC Search_item_id;
	FARPROC Sort_item;
	FARPROC Shift_item;
	FARPROC Set_item;
	FARPROC Tama_reload;
	FARPROC Check_cursol_distance;
	FARPROC Memcpy;
	FARPROC Memclr;
	FARPROC Mapping_tmd;
	FARPROC Set_view;
	FARPROC Set_light;
	FARPROC Set_Light_data;
	FARPROC Flg_on;
	FARPROC Flg_off;
	FARPROC Flg_ck;
	FARPROC Rot_vector;
	FARPROC Rot_vector_super;
	FARPROC Rot_add_matrix;
	FARPROC Set_front_pos;
	FARPROC InitGeom_func;
	FARPROC Init_scheduler;
	FARPROC Scheduler;
	FARPROC Task_execute;
	FARPROC Task_sleep;
	FARPROC Task_exit;
	FARPROC Task_kill;
	FARPROC Task_chain;
	FARPROC Task_suspend;
	FARPROC Task_signal;
	FARPROC Task_status;
} ENGINE_CALL;
static ENGINE_CALL mprc;

// Structures
MONITOR* Monitor;
STATUS* St;
BGMCTR* Bgm;
SCENARIO* Sce;
MOJIDISP* Moji;
GLOBAL* G;
MAIN* Main;
GAME* Game;

// Functions
NAKED VOID Door_model_init(DOOR_WORK* pTmpDwork, ULONG Model_no) { JUMP(Door_model_init); }
NAKED INT AddPrim(VOID* p, UINT page, INT otag, INT add_back) { JUMP(AddPrim); }
NAKED INT __stdcall WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, INT nShowCmd) { JUMP(WinMain); }
NAKED VOID Config(VOID) { JUMP(Config); }
NAKED VOID Config_main(VOID) { JUMP(Config_main); }
NAKED VOID Config_fade_in_wait(INT param_1) { JUMP(Config_fade_in_wait); }
NAKED VOID Config_padd_snd(USHORT param_1, USHORT param_2, INT param_3) { JUMP(Config_padd_snd); }
NAKED VOID Die_demo(VOID) { JUMP(Die_demo); }
NAKED VOID Die_demo_move(VOID) { JUMP(Die_demo_move); }
NAKED VOID Die_move_wait(VOID) { JUMP(Die_move_wait); }
NAKED VOID Die_move_set_cut(MATRIX* param_1) { JUMP(Die_move_set_cut); }
NAKED VOID Die_move_set_cut_usual(VOID) { JUMP(Die_move_set_cut_usual); }
NAKED VOID Die_enemy_set(VOID) { JUMP(Die_enemy_set); }
NAKED VOID Die_light_set(VOID) { JUMP(Die_light_set); }
NAKED VOID Die_vcut_set(VOID) { JUMP(Die_vcut_set); }
NAKED VOID Die_move_pause(MATRIX* param_1) { JUMP(Die_move_pause); }
NAKED VOID Die_move_main(VOID) { JUMP(Die_move_main); }
NAKED VOID Die_move_out(VOID) { JUMP(Die_move_out); }
NAKED VOID Die_move_end(ULONG param_1) { JUMP(Die_move_end); }
NAKED VOID Die_spiral_move(MATRIX* param_1) { JUMP(Die_spiral_move); }
NAKED VOID Die_spir_init(VOID) { JUMP(Die_spir_init); }
NAKED VOID Die_spir_move(VOID) { JUMP(Die_spir_move); }
NAKED VOID Die_spir_move_init(VOID) { JUMP(Die_spir_move_init); }
NAKED VOID Die_spir_move_main(VOID) { JUMP(Die_spir_move_main); }
NAKED VOID Die_spir_move_hold(VOID) { JUMP(Die_spir_move_hold); }
NAKED VOID Die_spir_move_erase(VOID) { JUMP(Die_spir_move_erase); }
NAKED VOID Die_spir_move_end(VOID) { JUMP(Die_spir_move_end); }
NAKED VOID Die_spr_load(VOID) { JUMP(Die_spr_load); }
NAKED VOID Die_snd_trans(VOID) { JUMP(Die_snd_trans); }
NAKED VOID Door_scheduler_main(VOID) { JUMP(Door_scheduler_main); }
NAKED VOID Door_Trans(VOID) { JUMP(Door_Trans); }
NAKED ULONG Door_model_set(SCE_TASK* pSce) { JUMP(Door_model_set); }
NAKED VOID Door_texture_load(VOID) { JUMP(Door_texture_load); }
NAKED LONG SquareRoot12(LONG a) { JUMP(SquareRoot12); }
NAKED INT catan(INT a) { JUMP(catan); }
NAKED LONG ratan2(LONG y, LONG x) { JUMP(ratan2); }
NAKED VECTOR* ApplyMatrix(MATRIX* m, SVECTOR* v0, VECTOR* v1) { JUMP(ApplyMatrix); }
NAKED SVECTOR* ApplyMatrixSV(MATRIX* m, SVECTOR* v0, SVECTOR* v1) { JUMP(ApplyMatrixSV); }
NAKED VECTOR* ApplyMatrixLV(MATRIX* m, VECTOR* v0, VECTOR* v1) { JUMP(ApplyMatrixLV); }
NAKED USHORT GetClut(INT x, INT y) { JUMP(GetClut); }
NAKED USHORT GetTPage(INT tp, INT abr, INT x, INT y) { JUMP(GetTPage); }
NAKED VOID MatrixNormal(MATRIX* m, MATRIX* n) { JUMP(MatrixNormal); }
NAKED MATRIX* MulMatrix0(MATRIX* m0, MATRIX* m1, MATRIX* m2) { JUMP(MulMatrix0); }
NAKED MATRIX* MulMatrix(MATRIX* m0, MATRIX* m1) { JUMP(MulMatrix); }
NAKED MATRIX* MulMatrix2(MATRIX* m0, MATRIX* m1) { JUMP(MulMatrix2); }
NAKED VOID CompM(MATRIX* m0, MATRIX* m1, MATRIX* m2) { JUMP(CompM); }
NAKED VOID OuterProduct0(VECTOR* V0, VECTOR* V1, VECTOR* V2) { JUMP(OuterProduct0); }
NAKED MATRIX* RotMatrix(SVECTOR* r, MATRIX* m) { JUMP(RotMatrix); }
NAKED MATRIX* RotMatrixX(LONG r, MATRIX* m) { JUMP(RotMatrixX); }
NAKED MATRIX* RotMatrixY(LONG r, MATRIX* m) { JUMP(RotMatrixY); }
NAKED MATRIX* RotMatrixZ(LONG r, MATRIX* m) { JUMP(RotMatrixZ); }
NAKED MATRIX* ScaleMatrix(MATRIX* m, VECTOR* v) { JUMP(ScaleMatrix); }
NAKED VOID SetRotMatrix(MATRIX* m) { JUMP(SetRotMatrix); }
NAKED VOID SetLightMatrix(MATRIX* m) { JUMP(SetLightMatrix); }
NAKED VOID SetColorMatrix(MATRIX* m) { JUMP(SetColorMatrix); }
NAKED VOID SetTransMatrix(MATRIX* m) { JUMP(SetTransMatrix); }
NAKED MATRIX* TransposeMatrix(MATRIX* m0, MATRIX* m1) { JUMP(TransposeMatrix); }
NAKED LONG VectorNormal(VECTOR* V0, VECTOR* V1) { JUMP(VectorNormal); }
NAKED VOID SetGeomScreen(LONG h) { JUMP(SetGeomScreen); }
NAKED INT rsin(INT a) { JUMP(rsin); }
NAKED INT rcos(INT a) { JUMP(rcos); }
NAKED LONG SquareRoot0(LONG a) { JUMP(SquareRoot0); }
NAKED ENEMY_WORK* Set_enemy_work(UCHAR Id) { JUMP(Set_enemy_work); }
NAKED VOID Em_bin_load(ULONG Id) { JUMP(Em_bin_load); }
NAKED ULONG Hani_ck(VECTOR* pV, SHORT* pPxzhw) { JUMP(Hani_ck); }
NAKED VOID Add_speedXZ(ENEMY_WORK* pEm, LONG muki) { JUMP(Add_speedXZ); }
NAKED VOID Add_speedXYZ(ENEMY_WORK* pEm, LONG muki_y, LONG muki_z) { JUMP(Add_speedXYZ); }
NAKED VOID Add_speedXYZsuper(ENEMY_WORK* pEm, LONG muki_y, LONG muki_z) { JUMP(Add_speedXYZsuper); }
NAKED SHORT Direction_ck(SHORT Hontai_x, SHORT Hontai_z, SHORT Target_x, SHORT Target_z) { JUMP(Direction_ck); }
NAKED VOID Goto00(ENEMY_WORK* pEm, LONG Vec_x, LONG Vec_z, SHORT Add_dir) { JUMP(Goto00); }
NAKED LONG Goto00_ck(ENEMY_WORK* pEm, LONG Vec_x, LONG Vec_z, SHORT Add_dir) { JUMP(Goto00_ck); }
NAKED VOID Goto01(ENEMY_WORK* pEm, SHORT Dir, SHORT Add_dir) { JUMP(Goto01); }
NAKED LONG Goto01_ck(ENEMY_WORK* pEm, SHORT Dir, SHORT Add_dir) { JUMP(Goto01_ck); }
NAKED LONG Dir_pos_ck(VECTOR* pV, VECTOR* pP, SHORT Hed_dir, SHORT Hani_dir) { JUMP(Dir_pos_ck); }
NAKED LONG L_pos_ckXZ(VECTOR* pV, VECTOR* pP, ULONG Ll) { JUMP(L_pos_ckXZ); }
NAKED LONG L_pos_ckXZM(MATRIX* pM, VECTOR* pP, ULONG Ll, SVECTOR* pSv) { JUMP(L_pos_ckXZM); }
NAKED UCHAR Cdir_ck(ENEMY_WORK* pEm, ENEMY_WORK* pT) { JUMP(Cdir_ck); }
NAKED UCHAR Cdir_ck2(ENEMY_WORK* pEm, ENEMY_WORK* pT) { JUMP(Cdir_ck2); }
NAKED ULONG Gacha_ch(VOID) { JUMP(Gacha_ch); }
NAKED VOID Set_base_pos(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq, ULONG R_flg) { JUMP(Set_base_pos); }
NAKED VOID Null_pos_set(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq, ULONG R_flg) { JUMP(Null_pos_set); }
NAKED VOID get_null_pos(SVECTOR* pSv, ULONG R_flg, ULONG Kan, ULONG Seq) { JUMP(get_null_pos); }
NAKED VOID Spd_get(ENEMY_WORK* pEm, ULONG Kan, ULONG Seq, ULONG R_flg) { JUMP(Spd_get); }
NAKED UCHAR Rnd(VOID) { JUMP(Rnd); }
NAKED VOID Em_seq_sound(ENEMY_WORK* pEm) { JUMP(Em_seq_sound); }
NAKED VOID Foot_set_pl(ENEMY_WORK* pEm, ULONG Mode, ULONG Foot_no) { JUMP(Foot_set_pl); }
NAKED VOID Kage_work_init(VOID) { JUMP(Kage_work_init); }
NAKED VOID Kage_work9_init(VOID) { JUMP(Kage_work9_init); }
NAKED VOID Kage_work_set(ULONG* pK, ULONG Off, ULONG Half, ULONG Color, VECTOR* pPos) { JUMP(Kage_work_set); }
NAKED VOID Kage_work9_set(ULONG* pK, ULONG Off, ULONG Half, ULONG Color, VECTOR* pPos) { JUMP(Kage_work9_set); }
NAKED VOID MulKage(KAGE_WORK* pKw, SHORT Grand, SHORT Dir_y, ULONG Flg) { JUMP(MulKage); }
NAKED VOID Kage_work_sort(VOID) { JUMP(Kage_work_sort); }
NAKED VOID Kage_work9_sort(VOID) { JUMP(Kage_work9_sort); }
NAKED VOID Kage_work_color_set(ULONG* pK, ULONG Color) { JUMP(Kage_work_color_set); }
NAKED VOID Kage_work9_color_set(ULONG* pK, ULONG Color) { JUMP(Kage_work9_color_set); }
NAKED UCHAR Esp_init_C(VOID) { JUMP(Esp_init_C); }
NAKED UCHAR Esp_init_R(VOID) { JUMP(Esp_init_R); }
NAKED UCHAR Esp_data_set0(UCHAR* ptr8, ULONG* ptr32, ULONG addr, ULONG type) { JUMP(Esp_data_set0); }
NAKED VOID Esp_data_set1(ULONG* plong, ULONG* ptr) { JUMP(Esp_data_set1); }
NAKED UCHAR Esp_call(ULONG bit, SHORT dir_y, MATRIX* pmat, SVECTOR* svec) { JUMP(Esp_call); }
NAKED UCHAR Esp_call3D(ULONG bit, SHORT dir_y, MATRIX* pmat, SVECTOR* svec, SVECTOR* dsv) { JUMP(Esp_call3D); }
NAKED UCHAR Esp_call3D2(ULONG bit, ULONG dir_y_id2, MATRIX* pmat, SVECTOR* svec, SVECTOR* dsv) { JUMP(Esp_call3D2); }
NAKED UCHAR Esp_call2(ULONG bit, ULONG dir_y_id2, MATRIX* pmat, SVECTOR* svec) { JUMP(Esp_call2); }
NAKED UCHAR Esp_call3(ULONG bit, SHORT dir_y, MATRIX* pmat, SVECTOR* svec) { JUMP(Esp_call3); }
NAKED UCHAR Esp_kill(UCHAR id, UCHAR tp, MATRIX* pmat) { JUMP(Esp_kill); }
NAKED UCHAR Esp_kill2(ULONG id2) { JUMP(Esp_kill2); }
NAKED VOID Esp_die(VOID) { JUMP(Esp_die); }
NAKED UCHAR Esp_ctrl(UCHAR id, UCHAR tp, USHORT rtn, MATRIX* pmat) { JUMP(Esp_ctrl); }
NAKED VOID Esp_move(VOID) { JUMP(Esp_move); }
NAKED VOID Esp_pos(INT param_1) { JUMP(Esp_pos); }
NAKED VOID Gun_light_reset(VOID) { JUMP(Gun_light_reset); }
NAKED VOID Joint_trans2(ENEMY_WORK* pEm, PARTS_W* pP_ptr) { JUMP(Joint_trans2); }
NAKED VOID ko_joint_trans2(ENEMY_WORK* pEm, PARTS_W* pP_ptr, ULONG be_flg, MATRIX* wm) { JUMP(ko_joint_trans2); }
NAKED VOID ko_joint_trans3(ENEMY_WORK* pEm, PARTS_W* pP_ptr, ULONG be_flg, MATRIX* wm) { JUMP(ko_joint_trans3); }
NAKED ULONG PartsWork_set(ENEMY_WORK* pEm, ULONG work_top) { JUMP(PartsWork_set); }
NAKED ULONG PartsWork_link(ENEMY_WORK* pEm, ULONG Packet_top, ULONG* pKan_t_ptr, ULONG Flg) { JUMP(PartsWork_link); }
NAKED VOID Init_Parts_work(ENEMY_WORK* pEm) { JUMP(Init_Parts_work); }
NAKED VOID Parts_down(PARTS_W* pP_ptr, MATRIX* wm) { JUMP(Parts_down); }
NAKED VOID Parts_bomb(PARTS_W* pP_ptr) { JUMP(Parts_bomb); }
NAKED VOID Parts_ryu(PARTS_W* pP_ptr) { JUMP(Parts_ryu); }
NAKED VOID HMatrix(MATRIX* pM0, MATRIX* pM1, MATRIX* pM2, ULONG Late) { JUMP(HMatrix); }
NAKED ULONG Joint_move(ENEMY_WORK* pEm, ULONG Kan_t_ptr, ULONG Seq_t_ptr, ULONG Late_flg) { JUMP(Joint_move); }
NAKED ULONG J_seq(ULONG Kan_t_ptr, ULONG Seq_t_ptr, ULONG* pSeq_ptr, ULONG Late_flg) { JUMP(J_seq); }
NAKED VOID hokan_svec(SVECTOR* sv0, SVECTOR* sv1, SVECTOR* sv2, ULONG late) { JUMP(hokan_svec); }
NAKED ULONG Joint_move_p(JOINT_P* pJp, ULONG Kan_t_ptr, ULONG Seq_t_ptr, ULONG Late_flg) { JUMP(Joint_move_p); }
NAKED ULONG Joint_move2(ENEMY_WORK* pEm, ULONG Kan_t_ptr, ULONG Seq_t_ptr, ULONG Late_flg) { JUMP(Joint_move2); }
NAKED ULONG J_seq2(ULONG Kan_t_ptr, ULONG Seq_t_ptr, ULONG* pSeq_ptr, ULONG Late_flg) { JUMP(J_seq2); }
NAKED VOID Scr_effect(VOID) { JUMP(Scr_effect); }
NAKED VOID Scr_quake(ULONG Amp) { JUMP(Scr_quake); }
NAKED VOID Line_work_init(VOID) { JUMP(Line_work_init); }
NAKED INT main(INT _Argc, CHAR** _Argv, CHAR** _Env) { JUMP(main); }
NAKED VOID Init_system(VOID) { JUMP(Init_system); }
NAKED VOID Init_main(VOID) { JUMP(Init_main); }
NAKED VOID Swap_Cbuff(VOID) { JUMP(Swap_Cbuff); }
NAKED VOID Bg_set_mode(ULONG Mode, ULONG Rgb) { JUMP(Bg_set_mode); }
NAKED VOID Bg_load(VOID) { JUMP(Bg_load); }
NAKED VOID Bg_draw(VOID) { JUMP(Bg_draw); }
NAKED VOID Fade_set(USHORT A0, SHORT Add, ULONG Mask, ULONG Pri) { JUMP(Fade_set); }
NAKED VOID Fade_adjust(ULONG No, ULONG Kido, ULONG Rgb, RECT* Rect) { JUMP(Fade_adjust); }
NAKED VOID Fade_off(ULONG No) { JUMP(Fade_off); }
NAKED ULONG Fade_status(ULONG No) { JUMP(Fade_status); }
NAKED VOID System_trans(VOID) { JUMP(System_trans); }
NAKED VOID Init_global(VOID) { JUMP(Init_global); }
NAKED ULONG Cut_check(ULONG Flg) { JUMP(Cut_check); }
NAKED VOID Cut_change(ULONG Fc) { JUMP(Cut_change); }
NAKED VCUT* Ccut_search(ULONG Fc) { JUMP(Ccut_search); }
NAKED ULONG Hit_ck_point4(VECTOR* p, VCUT* cp) { JUMP(Hit_ck_point4); }
NAKED ULONG Hit_ck_box(VECTOR* p, BOX* q) { JUMP(Hit_ck_box); }
NAKED VOID Logo(VOID) { JUMP(Logo); }
NAKED VOID mapModelingData(ULONG* pHead) { JUMP(mapModelingData); }
NAKED VOID MulLMatrix(MATRIX* lwm, MATRIX* klwm, MATRIX* nlm) { JUMP(MulLMatrix); }
NAKED ULONG Mirror_model_cp(ENEMY_WORK* pEm, ULONG Mem) { JUMP(Mirror_model_cp); }
NAKED VOID Mizu_trans(OBJ_MODEL_WORK* pOwork, ULONG toumei) { JUMP(Mizu_trans); }
NAKED VOID Mizu_div_ck(OBJ_MODEL_WORK* pOwork, ULONG Size_x, ULONG Size_z) { JUMP(Mizu_div_ck); }
NAKED VOID Mizu_div_main(OBJ_MODEL_WORK* pOwork, ULONG Size_x, ULONG Size_z, ENEMY_WORK* pEwork) { JUMP(Mizu_div_main); }
NAKED LONG Print8(ULONG x, ULONG y, ULONG c, ULONG p, UCHAR* pPtr) { JUMP(Print8); }
NAKED LONG Print14(ULONG x, ULONG y, ULONG c, ULONG p, UCHAR* pPtr) { JUMP(Print14); }
NAKED LONG Print_main(ULONG x, ULONG y, ULONG attr, UCHAR** pSave) { JUMP(Print_main); }
NAKED LONG Mess_set(ULONG Pos_xy, USHORT Attr, ULONG Mess_no, ULONG Stop_data) { JUMP(Mess_set); }
NAKED VOID Moji_trans_main(VOID) { JUMP(Moji_trans_main); }
NAKED VOID Mess_disp(MOJIDISP* pMoji) { JUMP(Mess_disp); }
NAKED VOID Branch_disp(MOJIDISP* pMoji, BRANCH_TBL* pBtbl, ULONG Flg, ULONG Mode) { JUMP(Branch_disp); }
NAKED UCHAR* name_ptr_set(UCHAR Item_id) { JUMP(name_ptr_set); }
NAKED VOID mess_trans(MOJIDISP* pMoji) { JUMP(mess_trans); }
NAKED VOID Name_disp(LONG Pos_x, LONG Pos_y, ULONG Attr, ULONG Item_id) { JUMP(Name_disp); }
NAKED VOID Mess_print(ULONG Pos_x, ULONG Pos_y, UCHAR* pMess, ULONG Attr) { JUMP(Mess_print); }
NAKED VOID moji_trans_main(MOJIDISP* pMoji) { JUMP(moji_trans_main); }
NAKED UCHAR* moji_trans_8(UCHAR* pBuff0, ULONG Pos, MOJIDISP* pMoji) { JUMP(moji_trans_8); }
NAKED UCHAR* moji_trans_14(UCHAR* pBuff0, ULONG Pos, MOJIDISP* pMoji) { JUMP(moji_trans_14); }
NAKED VOID Moji_buff_init(VOID) { JUMP(Moji_buff_init); }
NAKED VOID Moji_init(VOID) { JUMP(Moji_init); }
NAKED VOID Moji_mode_init(VOID) { JUMP(Moji_mode_init); }
NAKED VOID Init_movie_work(ULONG Id) { JUMP(Init_movie_work); }
NAKED ULONG Oba_ck_hit(ENEMY_WORK* pEm1, ENEMY_WORK* pEm2) { JUMP(Oba_ck_hit); }
NAKED ULONG Oba_ck_only(VECTOR* pV, ENEMY_WORK* pEm1, ENEMY_WORK* pEm2) { JUMP(Oba_ck_only); }
NAKED VOID Oba_set_ofs(ENEMY_WORK* pEm, VECTOR* pPos) { JUMP(Oba_set_ofs); }
NAKED VOID Oba_ck_em(ENEMY_WORK* pEm) { JUMP(Oba_ck_em); }
NAKED VOID Oba_ck_em2(ENEMY_WORK* pEm) { JUMP(Oba_ck_em2); }
NAKED VOID Sca_ck_em(ENEMY_WORK* pEm, ULONG Sc_id) { JUMP(Sca_ck_em); }
NAKED VOID Om_init(ULONG Om_no, ULONG* pTmd_adr) { JUMP(Om_init); }
NAKED VOID Col_chg_init(ULONG Col_wk_no, CC_PARTS_WORK* pCcp) { JUMP(Col_chg_init); }
NAKED VOID Tex_chg_init(ULONG Col_wk_no, CC_PARTS_WORK* pCcp) { JUMP(Tex_chg_init); }
NAKED VOID Tex_ctr(VOID) { JUMP(Tex_ctr); }
NAKED VOID Col_chg(CC_PARTS_WORK* pCcp, RECT* pRect, ULONG Ctr) { JUMP(Col_chg); }
NAKED VOID Tex_chg(CC_PARTS_WORK* pCcp, RECT* pRect, ULONG Ctr) { JUMP(Tex_chg); }
NAKED VOID Om_move(VOID) { JUMP(Om_move); }
NAKED VOID Om_trans(VOID) { JUMP(Om_trans); }
NAKED VOID Om_move_box(OBJ_MODEL_WORK* pOm) { JUMP(Om_move_box); }
NAKED VOID Om_set_fall_dir(OBJ_MODEL_WORK* pOm) { JUMP(Om_set_fall_dir); }
NAKED VOID Oma_set_ofs(OBJ_MODEL_WORK* pOm) { JUMP(Oma_set_ofs); }
NAKED ULONG Oma_ck_oba(ENEMY_WORK* pEm, OBJ_MODEL_WORK* pOm, ULONG Flg) { JUMP(Oma_ck_oba); }
NAKED ULONG Oma_ck_om(OBJ_MODEL_WORK* pOm, OBJ_MODEL_WORK* pOm2) { JUMP(Oma_ck_om); }
NAKED ULONG Oma_ck_front(ENEMY_WORK* pEm, OBJ_MODEL_WORK* pOm) { JUMP(Oma_ck_front); }
NAKED ULONG Oma_pl_updown_ck(ULONG Id) { JUMP(Oma_pl_updown_ck); }
NAKED ULONG Oma_Spl_updown_ck(ENEMY_WORK* pEm) { JUMP(Oma_Spl_updown_ck); }
NAKED ULONG Oma_front_ck(ENEMY_WORK* pEm, OBJ_MODEL_WORK* pOm) { JUMP(Oma_front_ck); }
NAKED OBJ_MODEL_WORK* Oma_on_check(ENEMY_WORK* pEm) { JUMP(Oma_on_check); }
NAKED VOID Oma_pull(ENEMY_WORK* pEm, OBJ_MODEL_WORK* pOm) { JUMP(Oma_pull); }
NAKED VOID Oma_pull_hosei_x(ENEMY_WORK* pEm, AT_DATA* pOat, LONG X2, LONG W) { JUMP(Oma_pull_hosei_x); }
NAKED VOID Oma_pull_hosei_z(ENEMY_WORK* pEm, AT_DATA* pOat, LONG Z2, LONG D) { JUMP(Oma_pull_hosei_z); }
NAKED OBJ_MODEL_WORK* Oma_get_on_om(ENEMY_WORK* pEm, AT_DATA* pEat) { JUMP(Oma_get_on_om); }
NAKED VOID Oma_ob_pull2(ENEMY_WORK* pEm, OBJ_MODEL_WORK* pOm, ULONG Id, ULONG Spd) { JUMP(Oma_ob_pull2); }
NAKED ULONG Omd_in_check(VECTOR* pVec, OBJ_MODEL_WORK* pOm, LONG R, ULONG Flg) { JUMP(Omd_in_check); }
NAKED ULONG Oma_obj_ck_all(VECTOR* pPos, ENEMY_WORK* pEm) { JUMP(Oma_obj_ck_all); }
NAKED VOID Pad_set(VOID) { JUMP(Pad_set); }
NAKED ULONG Pad_get_trg(VOID) { JUMP(Pad_get_trg); }
NAKED VOID Pad_rep_set(ULONG Mask, USHORT Data) { JUMP(Pad_rep_set); }
NAKED VOID Computer200(VOID) { JUMP(Computer200); }
NAKED VOID Computer613(VOID) { JUMP(Computer613); }
NAKED VOID Computer_init(ULONG Cut_no, ULONG Open_flg) { JUMP(Computer_init); }
NAKED VOID Computer_exit(ULONG Close_flg) { JUMP(Computer_exit); }
NAKED ULONG Keyboard_Input(ULONG Length, ULONG Flg) { JUMP(Keyboard_Input); }
NAKED VOID Keyboard_set(ULONG Be_flg, ULONG W, ULONG H, ULONG Col) { JUMP(Keyboard_set); }
NAKED ULONG Keyboard(VOID) { JUMP(Keyboard); }
NAKED ULONG Wframe_in_out(VOID) { JUMP(Wframe_in_out); }
NAKED VOID Wframe_set(ULONG X, ULONG Y, ULONG X2, ULONG Y2) { JUMP(Wframe_set); }
NAKED ULONG Wframe_move(ULONG X, ULONG Y, ULONG W, ULONG H) { JUMP(Wframe_move); }
NAKED ULONG Get_moji_code(UCHAR Moji) { JUMP(Get_moji_code); }
NAKED ULONG Cprint(ULONG Speed, UCHAR* pMess, ULONG* Mend) { JUMP(Cprint); }
NAKED VOID Console_put(UCHAR Moji) { JUMP(Console_put); }
NAKED VOID Console_roll_up(VOID) { JUMP(Console_roll_up); }
NAKED VOID Console_clr(VOID) { JUMP(Console_clr); }
NAKED VOID Console_trans(ULONG Be_flg) { JUMP(Console_trans); }
NAKED VOID Sprite_Trans(ULONG nPacket) { JUMP(Sprite_Trans); }
NAKED VOID Set_sp_work(SP_WORK* pSp, SP_WORK* pSw) { JUMP(Set_sp_work); }
NAKED VOID Pl_weapon_ch(ENEMY_WORK* pEm) { JUMP(Pl_weapon_ch); }
NAKED VOID Plw02_init(ENEMY_WORK* pEm) { JUMP(Plw02_init); }
NAKED VOID Plw09_init(ENEMY_WORK* pEm) { JUMP(Plw09_init); }
NAKED VOID Plw0c_init(ENEMY_WORK* pEm) { JUMP(Plw0c_init); }
NAKED VOID Plw0f_init(ENEMY_WORK* pEm) { JUMP(Plw0f_init); }
NAKED VOID Plw12_init(ENEMY_WORK* pEm) { JUMP(Plw12_init); }
NAKED VOID Weapon_cls(ENEMY_WORK* pEm) { JUMP(Weapon_cls); }
NAKED VOID init_Weapon_at(ENEMY_WORK* pEm, ATTACK_WEAPON_TBL* At_tbl_top) { JUMP(init_Weapon_at); }
NAKED ULONG Weapon_at_ck(ENEMY_WORK* pEm, ULONG W_no, ATTACK_WEAPON_TBL* At_tbl_top) { JUMP(Weapon_at_ck); }
NAKED LONG Set_MinMax(ATTACK_WEAPON_EM* pAwe, UCHAR Ck_flg, LONG* pMax, LONG* pMin) { JUMP(Set_MinMax); }
NAKED ULONG Attack_r_ck0(MODEL_WORK* pOm, MODEL_WORK* pPm, ATTACK_WORK* pAt) { JUMP(Attack_r_ck0); }
NAKED ULONG Attack_r_ck1(VECTOR* pH, SHORT Cdir_y, VECTOR* pT, ATTACK_WORK* pAt) { JUMP(Attack_r_ck1); }
NAKED ULONG Em_ck(ENEMY_WORK* pEm, ULONG LL) { JUMP(Em_ck); }
NAKED VOID Hand_ck(ENEMY_WORK* pEm, LONG Ck_pos_y, SHORT Type) { JUMP(Hand_ck); }
NAKED VOID Mag_set(ENEMY_WORK* pEm) { JUMP(Mag_set); }
NAKED VOID Mag_down(ENEMY_WORK* pEm) { JUMP(Mag_down); }
NAKED VOID G_rot_st(ENEMY_WORK* pEm) { JUMP(G_rot_st); }
NAKED VOID G_rot(ENEMY_WORK* pEm) { JUMP(G_rot); }
NAKED VOID Gat_lp_st(ENEMY_WORK* pEm) { JUMP(Gat_lp_st); }
NAKED VOID Gat_rot(ENEMY_WORK* pEm) { JUMP(Gat_rot); }
NAKED VOID Pl_water(ENEMY_WORK* pEm) { JUMP(Pl_water); }
NAKED VOID null(VOID) { JUMP(null); }
NAKED VOID Set_room(VOID) { JUMP(Set_room); }
NAKED VOID Set_stage(VOID) { JUMP(Set_stage); }
NAKED VOID Replace_rdt(VOID) { JUMP(Replace_rdt); }
NAKED VOID Em_init_move(VOID) { JUMP(Em_init_move); }
NAKED UCHAR Root_ck(ENEMY_WORK* pEm, VECTOR* Dest, UCHAR Dest_area, UCHAR Mode) { JUMP(Root_ck); }
NAKED UCHAR Rnd_area(VOID) { JUMP(Rnd_area); }
NAKED UCHAR Guide_check(SHORT target_x, SHORT target_z) { JUMP(Guide_check); }
NAKED VOID kara_rootck2(UCHAR hontai_area, UCHAR target_area, SHORT target_x, SHORT target_z) { JUMP(kara_rootck2); }
NAKED VOID Sa_dat_set(ENEMY_WORK* pEm, ULONG* pSa) { JUMP(Sa_dat_set); }
NAKED ULONG Sca_get_area(LONG X, LONG Z, LONG Sx, LONG Sz) { JUMP(Sca_get_area); }
NAKED ULONG Sca_ck_hit(VECTOR* pPos, LONG R, ULONG Floor, ULONG Flg) { JUMP(Sca_ck_hit); }
NAKED ULONG Sca_ck_hit_om(OBJ_MODEL_WORK* pOm, ULONG Att, ULONG Flg) { JUMP(Sca_ck_hit_om); }
NAKED ULONG Sca_hit_box2(ENEMY_WORK* pEm, LONG R, SCA_DATA* pT_xz) { JUMP(Sca_hit_box2); }
NAKED ULONG Sca_hit_box(ENEMY_WORK* pEm, LONG R, SCA_DATA* pScd) { JUMP(Sca_hit_box); }
NAKED ULONG Sca_hosei_box(ENEMY_WORK* pEm, SVECTOR* pOld, LONG X, LONG Z) { JUMP(Sca_hosei_box); }
NAKED ULONG Sca_hit_naname_a(ENEMY_WORK* pEm, LONG R, SCA_DATA* pT_xz) { JUMP(Sca_hit_naname_a); }
NAKED ULONG Sca_ck_naname_a(VECTOR* pPos, LONG R, SCA_DATA* pT_xz) { JUMP(Sca_ck_naname_a); }
NAKED ULONG Sca_hit_naname_b(ENEMY_WORK* pEm, LONG R, SCA_DATA* pT_xz) { JUMP(Sca_hit_naname_b); }
NAKED ULONG Sca_ck_naname_b(VECTOR* pPos, LONG R, SCA_DATA* pT_xz) { JUMP(Sca_ck_naname_b); }
NAKED ULONG Sca_hit_naname_c(ENEMY_WORK* pEm, LONG R, SCA_DATA* pT_xz) { JUMP(Sca_hit_naname_c); }
NAKED ULONG Sca_ck_naname_c(VECTOR* pPos, LONG R, SCA_DATA* pT_xz) { JUMP(Sca_ck_naname_c); }
NAKED ULONG Sca_hit_naname_d(ENEMY_WORK* pEm, LONG R, SCA_DATA* pT_xz) { JUMP(Sca_hit_naname_d); }
NAKED ULONG Sca_ck_naname_d(VECTOR* pPos, LONG R, SCA_DATA* pT_xz) { JUMP(Sca_ck_naname_d); }
NAKED ULONG Sca_hit_hishi(ENEMY_WORK* pEm, LONG R, SCA_DATA* pT_xz) { JUMP(Sca_hit_hishi); }
NAKED ULONG Sca_ck_hishi(VECTOR* pPos, LONG R, SCA_DATA* pT_xz) { JUMP(Sca_ck_hishi); }
NAKED ULONG Sca_hit_circle(ENEMY_WORK* pEm, LONG R, SCA_DATA* pT_xz) { JUMP(Sca_hit_circle); }
NAKED ULONG Sca_ck_circle(VECTOR* pPos, LONG R, SCA_DATA* pT_xz) { JUMP(Sca_ck_circle); }
NAKED ULONG Sca_hit_koban_x(ENEMY_WORK* pEm, LONG R, SCA_DATA* pT_xz) { JUMP(Sca_hit_koban_x); }
NAKED ULONG Sca_ck_koban_x(VECTOR* pPos, LONG R, SCA_DATA* pT_xz) { JUMP(Sca_ck_koban_x); }
NAKED ULONG Sca_hit_koban_z(ENEMY_WORK* pEm, LONG R, SCA_DATA* pT_xz) { JUMP(Sca_hit_koban_z); }
NAKED ULONG Sca_ck_koban_z(VECTOR* pPos, LONG R, SCA_DATA* pT_xz) { JUMP(Sca_ck_koban_z); }
NAKED ULONG Sca_hit_slope(ENEMY_WORK* pEm, LONG R, SCA_DATA* pT_xz) { JUMP(Sca_hit_slope); }
NAKED ULONG Sca_hit_stairs(ENEMY_WORK* pEm, LONG R, SCA_DATA* pT_xz) { JUMP(Sca_hit_stairs); }
NAKED ULONG Sca_hit_curve(ENEMY_WORK* pEm, LONG R, SCA_DATA* pT_xz) { JUMP(Sca_hit_curve); }
NAKED LONG Sca_get_slope_high(LONG Pos_x, LONG Pos_z, LONG R, SCA_DATA* pT_xz) { JUMP(Sca_get_slope_high); }
NAKED LONG Sca_get_stairs_high(VECTOR* pPos, LONG Low_y, LONG High_y, SCA_DATA* pT_xz) { JUMP(Sca_get_stairs_high); }
NAKED LONG Sca_get_curve_high(VECTOR* pPos, LONG Low_y, LONG High_y, SCA_DATA* pT_xz) { JUMP(Sca_get_curve_high); }
NAKED LONG Sca_get_ground(VECTOR* pPos, LONG R, ULONG Att, ULONG Flg) { JUMP(Sca_get_ground); }
NAKED USHORT Sca_get_dir(VECTOR* pPos, SCA_DATA* pT_xz) { JUMP(Sca_get_dir); }
NAKED LONG Sca_get_dir_super(VECTOR* pPos, SCA_DATA* pSca_dat, MATRIX* pSuper, ULONG Flg) { JUMP(Sca_get_dir_super); }
NAKED USHORT Sca_get_dir_super_tmp(LONG X, LONG Z, LONG Sx, LONG Sz, LONG Sw, LONG Sd) { JUMP(Sca_get_dir_super_tmp); }
NAKED ULONG Get_axis(MATRIX* pM) { JUMP(Get_axis); }
NAKED ULONG Get_axis2(MATRIX* pM) { JUMP(Get_axis2); }
NAKED LONG Sca_get_pos(LONG Dir, SCA_DATA* pSca_dat) { JUMP(Sca_get_pos); }
NAKED VOID Sca_get_pos_super(VECTOR* pPos, SCA_DATA* pSca_dat, MATRIX* pSuper, VECTOR* pVec) { JUMP(Sca_get_pos_super); }
NAKED USHORT Sca_get_pos_super_tmp(LONG X, LONG Z, LONG Sx, LONG Sz, LONG Sw, LONG Sd, LONG* pX, LONG* pZ) { JUMP(Sca_get_pos_super_tmp); }
NAKED ULONG Sca_ck_line(VECTOR* pV1, VECTOR* pV2, ULONG Att, ULONG Flg) { JUMP(Sca_ck_line); }
NAKED LONG Sca_get_high(SCA_DATA* pSca_dat) { JUMP(Sca_get_high); }
NAKED LONG Sca_get_low(SCA_DATA* pSca_dat) { JUMP(Sca_get_low); }
NAKED VOID Sce_test_init(VOID) { JUMP(Sce_test_init); }
NAKED ULONG Em_kind_search(ULONG Id) { JUMP(Em_kind_search); }
NAKED VOID Sce_se_set(VOID) { JUMP(Sce_se_set); }
NAKED VOID Sce_rnd_set(VOID) { JUMP(Sce_rnd_set); }
NAKED VOID Sce_model_init(VOID) { JUMP(Sce_model_init); }
NAKED VOID Sce_work_clr(VOID) { JUMP(Sce_work_clr); }
NAKED VOID Sce_work_clr_set(VOID) { JUMP(Sce_work_clr_set); }
NAKED VOID Sce_aot_init(VOID) { JUMP(Sce_aot_init); }
NAKED VOID Event_init(SCE_TASK* pSce, ULONG Evt_no) { JUMP(Event_init); }
NAKED VOID Event_exec(ULONG Task_level, ULONG Evt_no) { JUMP(Event_exec); }
NAKED VOID Sce_scheduler_set(VOID) { JUMP(Sce_scheduler_set); }
NAKED VOID Sce_col_chg_init(VOID) { JUMP(Sce_col_chg_init); }
NAKED VOID Sce_mirror_init(VOID) { JUMP(Sce_mirror_init); }
NAKED VOID Sce_scheduler(VOID) { JUMP(Sce_scheduler); }
NAKED VOID Sce_scheduler_main(VOID) { JUMP(Sce_scheduler_main); }
NAKED ULONG Nop(SCE_TASK* pSce) { JUMP(Nop); }
NAKED ULONG Evt_end(SCE_TASK* pSce) { JUMP(Evt_end); }
NAKED ULONG Evt_next(SCE_TASK* pSce) { JUMP(Evt_next); }
NAKED ULONG Evt_chain(SCE_TASK* pSce) { JUMP(Evt_chain); }
NAKED ULONG Evt_exec(SCE_TASK* pSce) { JUMP(Evt_exec); }
NAKED ULONG Evt_kill(SCE_TASK* pSce) { JUMP(Evt_kill); }
NAKED ULONG Ifel_ck(SCE_TASK* pSce) { JUMP(Ifel_ck); }
NAKED ULONG Else_ck(SCE_TASK* pSce) { JUMP(Else_ck); }
NAKED ULONG Endif(SCE_TASK* pSce) { JUMP(Endif); }
NAKED ULONG Sleep(SCE_TASK* pSce) { JUMP(Sleep); }
NAKED ULONG Sleeping(SCE_TASK* pSce) { JUMP(Sleeping); }
NAKED ULONG Wsleep(SCE_TASK* pSce) { JUMP(Wsleep); }
NAKED ULONG Wsleeping(SCE_TASK* pSce) { JUMP(Wsleeping); }
NAKED ULONG For(SCE_TASK* pSce) { JUMP(For); }
NAKED ULONG For2(SCE_TASK* pSce) { JUMP(For2); }
NAKED ULONG Next(SCE_TASK* pSce) { JUMP(Next); }
NAKED ULONG While(SCE_TASK* pSce) { JUMP(While); }
NAKED ULONG Ewhile(SCE_TASK* pSce) { JUMP(Ewhile); }
NAKED ULONG Do(SCE_TASK* pSce) { JUMP(Do); }
NAKED ULONG Edwhile(SCE_TASK* pSce) { JUMP(Edwhile); }
NAKED ULONG While_main(SCE_TASK* pSce, UCHAR* pData, UCHAR Ofs) { JUMP(While_main); }
NAKED ULONG Switch(SCE_TASK* pSce) { JUMP(Switch); }
NAKED ULONG Default(SCE_TASK* pSce) { JUMP(Default); }
NAKED ULONG Eswitch(SCE_TASK* pSce) { JUMP(Eswitch); }
NAKED ULONG Goto(SCE_TASK* pSce) { JUMP(Goto); }
NAKED ULONG Gosub(SCE_TASK* pSce) { JUMP(Gosub); }
NAKED ULONG Return(SCE_TASK* pSce) { JUMP(Return); }
NAKED ULONG Break(SCE_TASK* pSce) { JUMP(Break); }
NAKED ULONG Work_copy(SCE_TASK* pSce) { JUMP(Work_copy); }
NAKED ULONG Rbj_reset(SCE_TASK* pSce) { JUMP(Rbj_reset); }
NAKED ULONG Ck(SCE_TASK* pSce) { JUMP(Ck); }
NAKED ULONG Set(SCE_TASK* pSce) { JUMP(Set); }
NAKED ULONG Cmp(SCE_TASK* pSce) { JUMP(Cmp); }
NAKED ULONG Save(SCE_TASK* pSce) { JUMP(Save); }
NAKED ULONG Copy(SCE_TASK* pSce) { JUMP(Copy); }
NAKED ULONG Calc(SCE_TASK* pSce) { JUMP(Calc); }
NAKED ULONG Calc2(SCE_TASK* pSce) { JUMP(Calc2); }
NAKED VOID Calc_branch(ULONG Exp, SHORT* Ans, LONG Num) { JUMP(Calc_branch); }
NAKED ULONG Sce_rnd(SCE_TASK* pSce) { JUMP(Sce_rnd); }
NAKED ULONG Cut_chg(SCE_TASK* pSce) { JUMP(Cut_chg); }
NAKED ULONG Cut_old(SCE_TASK* pSce) { JUMP(Cut_old); }
NAKED VOID Cut_chg_main(ULONG Cut_no) { JUMP(Cut_chg_main); }
NAKED ULONG Cut_auto(SCE_TASK* pSce) { JUMP(Cut_auto); }
NAKED ULONG Cut_replace(SCE_TASK* pSce) { JUMP(Cut_replace); }
NAKED ULONG Cut_be_set(SCE_TASK* pSce) { JUMP(Cut_be_set); }
NAKED ULONG Message_on(SCE_TASK* pSce) { JUMP(Message_on); }
NAKED ULONG Aot_set(SCE_TASK* pSce) { JUMP(Aot_set); }
NAKED ULONG Aot_set_4p(SCE_TASK* pSce) { JUMP(Aot_set_4p); }
NAKED ULONG Door_aot_set(SCE_TASK* pSce) { JUMP(Door_aot_set); }
NAKED ULONG Door_aot_set_4p(SCE_TASK* pSce) { JUMP(Door_aot_set_4p); }
NAKED ULONG Item_aot_set(SCE_TASK* pSce) { JUMP(Item_aot_set); }
NAKED ULONG Item_aot_set2(SCE_TASK* pSce) { JUMP(Item_aot_set2); }
NAKED ULONG Item_aot_set_4p(SCE_TASK* pSce) { JUMP(Item_aot_set_4p); }
NAKED ULONG Aot_reset(SCE_TASK* pSce) { JUMP(Aot_reset); }
NAKED ULONG Aot_on(SCE_TASK* pSce) { JUMP(Aot_on); }
NAKED ULONG Obj_model_set(SCE_TASK* pSce) { JUMP(Obj_model_set); }
NAKED ULONG Super_set(SCE_TASK* pSce) { JUMP(Super_set); }
NAKED ULONG Super_on(SCE_TASK* pSce) { JUMP(Super_on); }
NAKED ULONG Super_reset(SCE_TASK* pSce) { JUMP(Super_reset); }
NAKED ULONG Work_set(SCE_TASK* pSce) { JUMP(Work_set); }
NAKED ULONG Parts_set(SCE_TASK* pSce) { JUMP(Parts_set); }
NAKED ULONG Speed_set(SCE_TASK* pSce) { JUMP(Speed_set); }
NAKED ULONG Add_speed(SCE_TASK* pSce) { JUMP(Add_speed); }
NAKED ULONG Add_aspeed(SCE_TASK* pSce) { JUMP(Add_aspeed); }
NAKED ULONG Pos_set(SCE_TASK* pSce) { JUMP(Pos_set); }
NAKED ULONG Dir_set(SCE_TASK* pSce) { JUMP(Dir_set); }
NAKED ULONG Member_set(SCE_TASK* pSce) { JUMP(Member_set); }
NAKED ULONG Member_set2(SCE_TASK* pSce) { JUMP(Member_set2); }
NAKED VOID Member_set_branch(ENEMY_WORK* pW, ULONG Member, LONG D0) { JUMP(Member_set_branch); }
NAKED ULONG Member_copy(SCE_TASK* pSce) { JUMP(Member_copy); }
NAKED ULONG Member_cmp(SCE_TASK* pSce) { JUMP(Member_cmp); }
NAKED LONG Load_member_branch(ENEMY_WORK* pW, ULONG Member) { JUMP(Load_member_branch); }
NAKED ULONG Member_calc(SCE_TASK* pSce) { JUMP(Member_calc); }
NAKED ULONG Member_calc2(SCE_TASK* pSce) { JUMP(Member_calc2); }
NAKED SHORT* Load_member_addr_branch(ENEMY_WORK* pW, ULONG Member) { JUMP(Load_member_addr_branch); }
NAKED ULONG Dir_ck(SCE_TASK* pSce) { JUMP(Dir_ck); }
NAKED ULONG Se_on(SCE_TASK* pSce) { JUMP(Se_on); }
NAKED ULONG Sca_id_set(SCE_TASK* pSce) { JUMP(Sca_id_set); }
NAKED ULONG Sce_espr_on(SCE_TASK* pSce) { JUMP(Sce_espr_on); }
NAKED ULONG Sce_espr_on2(SCE_TASK* pSce) { JUMP(Sce_espr_on2); }
NAKED ULONG Sce_espr3d_on(SCE_TASK* pSce) { JUMP(Sce_espr3d_on); }
NAKED ULONG Sce_espr3d_on2(SCE_TASK* pSce) { JUMP(Sce_espr3d_on2); }
NAKED ULONG Sce_espr_kill(SCE_TASK* pSce) { JUMP(Sce_espr_kill); }
NAKED ULONG Sce_espr_kill2(SCE_TASK* pSce) { JUMP(Sce_espr_kill2); }
NAKED ULONG Sce_espr_task(SCE_TASK* pSce) { JUMP(Sce_espr_task); }
NAKED ULONG Sce_espr_control(SCE_TASK* pSce) { JUMP(Sce_espr_control); }
NAKED MATRIX* Get_matrix(LONG Work_kind, LONG Work_no) { JUMP(Get_matrix); }
NAKED ULONG Plc_motion(SCE_TASK* pSce) { JUMP(Plc_motion); }
NAKED ULONG Plc_dest(SCE_TASK* pSce) { JUMP(Plc_dest); }
NAKED ULONG Plc_gun(SCE_TASK* pSce) { JUMP(Plc_gun); }
NAKED ULONG Plc_neck(SCE_TASK* pSce) { JUMP(Plc_neck); }
NAKED ULONG Plc_ret(SCE_TASK* pSce) { JUMP(Plc_ret); }
NAKED ULONG Plc_stop(SCE_TASK* pSce) { JUMP(Plc_stop); }
NAKED ULONG Plc_flg(SCE_TASK* pSce) { JUMP(Plc_flg); }
NAKED ULONG Plc_rot(SCE_TASK* pSce) { JUMP(Plc_rot); }
NAKED ULONG Plc_cnt(SCE_TASK* pSce) { JUMP(Plc_cnt); }
NAKED ULONG Sce_em_set(SCE_TASK* pSce) { JUMP(Sce_em_set); }
NAKED ULONG Sce_em_set2(SCE_TASK* pSce) { JUMP(Sce_em_set2); }
NAKED ULONG Sce_key_ck(SCE_TASK* pSce) { JUMP(Sce_key_ck); }
NAKED ULONG Sce_trg_ck(SCE_TASK* pSce) { JUMP(Sce_trg_ck); }
NAKED ULONG Sce_bgm_control(SCE_TASK* pSce) { JUMP(Sce_bgm_control); }
NAKED ULONG Sce_bgmtbl_set(SCE_TASK* pSce) { JUMP(Sce_bgmtbl_set); }
NAKED ULONG Sce_fade_set(SCE_TASK* pSce) { JUMP(Sce_fade_set); }
NAKED ULONG Sce_fade_adjust(SCE_TASK* pSce) { JUMP(Sce_fade_adjust); }
NAKED ULONG Xa_on(SCE_TASK* pSce) { JUMP(Xa_on); }
NAKED ULONG Xa_vol(SCE_TASK* pSce) { JUMP(Xa_vol); }
NAKED ULONG Se_vol(SCE_TASK* pSce) { JUMP(Se_vol); }
NAKED ULONG Sce_shake_on(SCE_TASK* pSce) { JUMP(Sce_shake_on); }
NAKED ULONG Sce_line_start(SCE_TASK* pSce) { JUMP(Sce_line_start); }
NAKED ULONG Sce_line_main(SCE_TASK* pSce) { JUMP(Sce_line_main); }
NAKED ULONG Sce_line_end(SCE_TASK* pSce) { JUMP(Sce_line_end); }
NAKED ULONG Mizu_div_set(SCE_TASK* pSce) { JUMP(Mizu_div_set); }
NAKED ULONG Keep_Item_ck(SCE_TASK* pSce) { JUMP(Keep_Item_ck); }
NAKED ULONG Sce_Item_cmp(SCE_TASK* pSce) { JUMP(Sce_Item_cmp); }
NAKED ULONG Sce_Item_lost(SCE_TASK* pSce) { JUMP(Sce_Item_lost); }
NAKED ULONG Sce_Item_lost2(SCE_TASK* pSce) { JUMP(Sce_Item_lost2); }
NAKED ULONG Weapon_chg(SCE_TASK* pSce) { JUMP(Weapon_chg); }
NAKED ULONG Sce_Item_get(SCE_TASK* pSce) { JUMP(Sce_Item_get); }
NAKED ULONG Kage_set(SCE_TASK* pSce) { JUMP(Kage_set); }
NAKED ULONG Light_pos_set(SCE_TASK* pSce) { JUMP(Light_pos_set); }
NAKED ULONG Light_kido_set(SCE_TASK* pSce) { JUMP(Light_kido_set); }
NAKED ULONG Light_color_set(SCE_TASK* pSce) { JUMP(Light_color_set); }
NAKED ULONG Light_pos_set2(SCE_TASK* pSce) { JUMP(Light_pos_set2); }
NAKED ULONG Light_kido_set2(SCE_TASK* pSce) { JUMP(Light_kido_set2); }
NAKED ULONG Light_color_set2(SCE_TASK* pSce) { JUMP(Light_color_set2); }
NAKED ULONG Sce_scr_move(SCE_TASK* pSce) { JUMP(Sce_scr_move); }
NAKED ULONG Flr_set(SCE_TASK* pSce) { JUMP(Flr_set); }
NAKED ULONG Movie_on(SCE_TASK* pSce) { JUMP(Movie_on); }
NAKED ULONG Splc_ret(SCE_TASK* pSce) { JUMP(Splc_ret); }
NAKED ULONG Splc_sce(SCE_TASK* pSce) { JUMP(Splc_sce); }
NAKED ULONG Evt_next2(SCE_TASK* pSce) { JUMP(Evt_next2); }
NAKED ULONG Mirror_set(SCE_TASK* pSce) { JUMP(Mirror_set); }
NAKED ULONG Sce_parts_bomb(SCE_TASK* pSce) { JUMP(Sce_parts_bomb); }
NAKED ULONG Sce_parts_down(SCE_TASK* pSce) { JUMP(Sce_parts_down); }
NAKED ULONG Col_chg_set(SCE_TASK* pSce) { JUMP(Col_chg_set); }
NAKED ULONG Plc_heal(SCE_TASK* pSce) { JUMP(Plc_heal); }
NAKED ULONG St_map_hint(SCE_TASK* pSce) { JUMP(St_map_hint); }
NAKED ULONG Sce_em_pos_ck(SCE_TASK* pSce) { JUMP(Sce_em_pos_ck); }
NAKED ULONG Poison_ck(SCE_TASK* pSce) { JUMP(Poison_ck); }
NAKED ULONG Poison_clr(SCE_TASK* pSce) { JUMP(Poison_clr); }
NAKED ULONG Case(SCE_TASK* pSce) { JUMP(Case); }
NAKED ULONG Vib_fade_set(SCE_TASK* pSce) { JUMP(Vib_fade_set); }
NAKED ULONG Sce_at_check(ENEMY_WORK* pEm, ULONG attribute, ULONG auto_flg) { JUMP(Sce_at_check); }
NAKED ULONG Nothing(VOID* pAot) { JUMP(Nothing); }
NAKED ULONG Sce_Door(VOID* pAot) { JUMP(Sce_Door); }
NAKED ULONG Sce_Item(VOID* pAot) { JUMP(Sce_Item); }
NAKED ULONG Sce_Normal(VOID* pAot) { JUMP(Sce_Normal); }
NAKED ULONG Sce_Message(VOID* pAot) { JUMP(Sce_Message); }
NAKED ULONG Sce_Event(VOID* pAot) { JUMP(Sce_Event); }
NAKED ULONG Sce_Flg_chg(VOID* pAot) { JUMP(Sce_Flg_chg); }
NAKED ULONG Sce_Water(VOID* pAot) { JUMP(Sce_Water); }
NAKED ULONG Sce_Move(VOID* pAot) { JUMP(Sce_Move); }
NAKED ULONG Sce_Save(VOID* pAot) { JUMP(Sce_Save); }
NAKED ULONG Sce_Itembox(VOID* pAot) { JUMP(Sce_Itembox); }
NAKED ULONG Sce_Damage(VOID* pAot) { JUMP(Sce_Damage); }
NAKED ULONG Sce_Status(VOID* pAot) { JUMP(Sce_Status); }
NAKED ULONG Sce_Hikidashi(VOID* pAot) { JUMP(Sce_Hikidashi); }
NAKED ULONG Sce_Windows(VOID* pAot) { JUMP(Sce_Windows); }
NAKED VOID Sce_at(VOID) { JUMP(Sce_at); }
NAKED LONG Water_ck(LONG Pos_x, LONG Pos_z) { JUMP(Water_ck); }
NAKED UCHAR Floor_check(LONG check_x, LONG check_z, ULONG nfloor) { JUMP(Floor_check); }
NAKED VOID Snd_sys_init(VOID) { JUMP(Snd_sys_init); }
NAKED VOID Snd_sys_init_sub2(VOID) { JUMP(Snd_sys_init_sub2); }
NAKED VOID Snd_sys_core_set(UCHAR core_type_no, UCHAR sw) { JUMP(Snd_sys_core_set); }
NAKED VOID Snd_sys_arms_set(UCHAR arms_type_no) { JUMP(Snd_sys_arms_set); }
NAKED VOID Snd_sys_room_set(VOID) { JUMP(Snd_sys_room_set); }
NAKED VOID Snd_sys_enem_set(VOID) { JUMP(Snd_sys_enem_set); }
NAKED VOID Snd_bgm_set(VOID) { JUMP(Snd_bgm_set); }
NAKED VOID Snd_bgm_ck(VOID) { JUMP(Snd_bgm_ck); }
NAKED VOID Snd_bgm_play_ck(VOID) { JUMP(Snd_bgm_play_ck); }
NAKED CHAR Snd_bgm_main(VOID) { JUMP(Snd_bgm_main); }
NAKED CHAR Snd_bgm_sub(VOID) { JUMP(Snd_bgm_sub); }
NAKED VOID Snd_bgm_fade_ON(UCHAR time, UCHAR mode) { JUMP(Snd_bgm_fade_ON); }
NAKED VOID Snd_bgm_ctr(ULONG code) { JUMP(Snd_bgm_ctr); }
NAKED VOID Snd_bgm_tbl_set(ULONG code) { JUMP(Snd_bgm_tbl_set); }
NAKED VOID Snd_se_stad(ULONG bits, VECTOR* pVec) { JUMP(Snd_se_stad); }
NAKED VOID Snd_se_enem(UCHAR SENo, ENEMY_WORK* pEm) { JUMP(Snd_se_enem); }
NAKED VOID Snd_se_walk(USHORT no, USHORT lr, ENEMY_WORK* pEm) { JUMP(Snd_se_walk); }
NAKED VOID Snd_se_call(VOID) { JUMP(Snd_se_call); }
NAKED UCHAR Snd_se_pri_ck(UCHAR Sv_ch, UCHAR Sv_pri) { JUMP(Snd_se_pri_ck); }
NAKED VOID Snd_se_3D(VECTOR* pVec) { JUMP(Snd_se_3D); }
NAKED SHORT Snd_se_dir_ck(LONG B_x, LONG B_z, LONG T_x, LONG T_z) { JUMP(Snd_se_dir_ck); }
NAKED VOID Xa_play(ULONG mode, ULONG no) { JUMP(Xa_play); }
NAKED VOID Xa_error(VOID) { JUMP(Xa_error); }
NAKED VOID Xa_control_stop(VOID) { JUMP(Xa_control_stop); }
NAKED VOID Xa_control_init(VOID) { JUMP(Xa_control_init); }
NAKED VOID Xa_control_play(VOID) { JUMP(Xa_control_play); }
NAKED VOID Xa_control_end(VOID) { JUMP(Xa_control_end); }
NAKED VOID Xa_control(VOID) { JUMP(Xa_control); }
NAKED ULONG Spl_soba_pos_set(SHORT ll, SHORT dir, SHORT dir2, SVECTOR* pPos) { JUMP(Spl_soba_pos_set); }
NAKED VOID Spl_enemy_ck(ENEMY_WORK* pEm) { JUMP(Spl_enemy_ck); }
NAKED ULONG Spl_em_pos_ck(ENEMY_WORK* pEm, ULONG Lim) { JUMP(Spl_em_pos_ck); }
NAKED ULONG Spl_em_cdir_ck(ENEMY_WORK* pEm) { JUMP(Spl_em_cdir_ck); }
NAKED ULONG Spl_pllock_get(ENEMY_WORK* pEm, ENEMY_WORK* pYo) { JUMP(Spl_pllock_get); }
NAKED ULONG Spl_life_down(ENEMY_WORK* pEm, LONG Down_life, ULONG Mode) { JUMP(Spl_life_down); }
NAKED VOID model_disp(MODEL_WORK* pOm, ULONG type, ULONG no) { JUMP(model_disp); }
NAKED VOID Set_iwork(ULONG no, ULONG id, ULONG num, ULONG size) { JUMP(Set_iwork); }
NAKED VOID Set_iwork_num(ULONG no, ULONG num) { JUMP(Set_iwork_num); }
NAKED ULONG Check_pl_life(VOID) { JUMP(Check_pl_life); }
NAKED ULONG Check_item_space(ULONG id) { JUMP(Check_item_space); }
NAKED ULONG Check_item_mix(VOID) { JUMP(Check_item_mix); }
NAKED LONG Search_item(ULONG type) { JUMP(Search_item); }
NAKED LONG Search_item_id(ULONG id) { JUMP(Search_item_id); }
NAKED VOID Sort_item(VOID) { JUMP(Sort_item); }
NAKED VOID Shift_item(ULONG type) { JUMP(Shift_item); }
NAKED VOID Set_item(ULONG id, ULONG num, ULONG* adr) { JUMP(Set_item); }
NAKED VOID Tama_reload(VOID) { JUMP(Tama_reload); }
NAKED VOID Check_cursol_distance(ULONG type) { JUMP(Check_cursol_distance); }
NAKED VOID Memcpy(VOID* p, VOID* q, LONG r) { JUMP(Memcpy); }
NAKED VOID Memclr(VOID* p, LONG r) { JUMP(Memclr); }
NAKED ULONG Mapping_tmd(ULONG Mode, ULONG* pTmd_adr, ULONG Ctp, ULONG Ccl) { JUMP(Mapping_tmd); }
NAKED VOID Set_view(LONG* pVp, LONG* pVr) { JUMP(Set_view); }
NAKED VOID Set_light(VECTOR* pV) { JUMP(Set_light); }
NAKED VOID Set_Light_data(ULONG No, VECTOR* pLig, UCHAR* pRgb) { JUMP(Set_Light_data); }
NAKED VOID Flg_on(ULONG* p, ULONG x) { JUMP(Flg_on); }
NAKED VOID Flg_off(ULONG* p, ULONG x) { JUMP(Flg_off); }
NAKED ULONG Flg_ck(ULONG* p, ULONG x) { JUMP(Flg_ck); }
NAKED VOID Rot_vector(SHORT dir, SVECTOR* p, SVECTOR* q) { JUMP(Rot_vector); }
NAKED VOID Rot_vector_super(SHORT dir, MATRIX* pM, SVECTOR* p, SVECTOR* q) { JUMP(Rot_vector_super); }
NAKED VOID Rot_add_matrix(LONG* pPos, SHORT* pDir, MATRIX* pM, SVECTOR* Add_dir) { JUMP(Rot_add_matrix); }
NAKED VOID Set_front_pos(ENEMY_WORK* pEm) { JUMP(Set_front_pos); }
NAKED VOID InitGeom_func(VOID) { JUMP(InitGeom_func); }
NAKED VOID Init_scheduler(VOID) { JUMP(Init_scheduler); }
NAKED VOID Scheduler(VOID) { JUMP(Scheduler); }
NAKED VOID Task_execute(ULONG Level, VOID* pFuncall) { JUMP(Task_execute); }
NAKED VOID Task_sleep(ULONG Sleep_counter) { JUMP(Task_sleep); }
NAKED VOID Task_exit(VOID) { JUMP(Task_exit); }
NAKED VOID Task_kill(ULONG Level) { JUMP(Task_kill); }
NAKED VOID Task_chain(VOID* pFuncall) { JUMP(Task_chain); }
NAKED VOID Task_suspend(ULONG Level) { JUMP(Task_suspend); }
NAKED VOID Task_signal(ULONG Level) { JUMP(Task_signal); }
NAKED ULONG Task_status(ULONG Level) { JUMP(Task_status); }

VOID Bio2_Hook(UCHAR* pExe) {

	// Structures
	Monitor = (MONITOR*)&pExe[0x689dac - EXE_BASE];
	St = (STATUS*)&pExe[0x691f5c - EXE_BASE];
	Bgm = (BGMCTR*)&pExe[0x693498 - EXE_BASE];
	Sce = (SCENARIO*)&pExe[0x694a00 - EXE_BASE];
	Moji = (MOJIDISP*)&pExe[0x9814c0 - EXE_BASE];
	G = (GLOBAL*)&pExe[0x9864E0 - EXE_BASE];
	Main = (MAIN*)&pExe[0x98ef40 - EXE_BASE];
	Game = (GAME*)&pExe[0x991f80 - EXE_BASE];

	// Functions
	ASSIGN(Door_model_init, 0x432b30);
	ASSIGN(AddPrim, 0x440280);
	ASSIGN(WinMain, 0x441ed0);
	ASSIGN(Config, 0x449fd0);
	ASSIGN(Config_main, 0x44a040);
	ASSIGN(Config_fade_in_wait, 0x44a0b0);
	ASSIGN(Config_padd_snd, 0x44c2e0);
	ASSIGN(Die_demo, 0x44df10);
	ASSIGN(Die_demo_move, 0x44df60);
	ASSIGN(Die_move_wait, 0x44e0b0);
	ASSIGN(Die_move_set_cut, 0x44e300);
	ASSIGN(Die_move_set_cut_usual, 0x44e4b0);
	ASSIGN(Die_enemy_set, 0x44e550);
	ASSIGN(Die_light_set, 0x44e690);
	ASSIGN(Die_vcut_set, 0x44e730);
	ASSIGN(Die_move_pause, 0x44e7b0);
	ASSIGN(Die_move_main, 0x44e800);
	ASSIGN(Die_move_out, 0x44e900);
	ASSIGN(Die_move_end, 0x44e9a0);
	ASSIGN(Die_spiral_move, 0x44e9d0);
	ASSIGN(Die_spir_init, 0x44eb90);
	ASSIGN(Die_spir_move, 0x44ebe0);
	ASSIGN(Die_spir_move_init, 0x44ec40);
	ASSIGN(Die_spir_move_main, 0x44ef70);
	ASSIGN(Die_spir_move_hold, 0x44f300);
	ASSIGN(Die_spir_move_erase, 0x44f530);
	ASSIGN(Die_spir_move_end, 0x44f830);
	ASSIGN(Die_spr_load, 0x44fce0);
	ASSIGN(Die_snd_trans, 0x44fe10);
	ASSIGN(Door_scheduler_main, 0x450230);
	ASSIGN(Door_Trans, 0x450350);
	ASSIGN(Door_model_set, 0x4504d0);
	ASSIGN(Door_texture_load, 0x4505c0);
	ASSIGN(SquareRoot12, 0x4508d0);
	ASSIGN(catan, 0x4508f0);
	ASSIGN(ratan2, 0x450910);
	ASSIGN(ApplyMatrix, 0x450950);
	ASSIGN(ApplyMatrixSV, 0x4509d0);
	ASSIGN(ApplyMatrixLV, 0x450a10);
	ASSIGN(GetClut, 0x450a90);
	ASSIGN(GetTPage, 0x450ac0);
	ASSIGN(MatrixNormal, 0x450bc0);
	ASSIGN(MulMatrix0, 0x450c20);
	ASSIGN(MulMatrix, 0x450dd0);
	ASSIGN(MulMatrix2, 0x450df0);
	ASSIGN(CompM, 0x450e10);
	ASSIGN(OuterProduct0, 0x450e80);
	ASSIGN(RotMatrix, 0x450f60);
	ASSIGN(RotMatrixX, 0x451040);
	ASSIGN(RotMatrixY, 0x4510b0);
	ASSIGN(RotMatrixZ, 0x451120);
	ASSIGN(ScaleMatrix, 0x4512e0);
	ASSIGN(SetRotMatrix, 0x4513c0);
	ASSIGN(SetLightMatrix, 0x451430);
	ASSIGN(SetColorMatrix, 0x451450);
	ASSIGN(SetTransMatrix, 0x451470);
	ASSIGN(TransposeMatrix, 0x451490);
	ASSIGN(VectorNormal, 0x4514e0);
	ASSIGN(SetGeomScreen, 0x451570);
	ASSIGN(rsin, 0x451710);
	ASSIGN(rcos, 0x451760);
	ASSIGN(SquareRoot0, 0x451780);
	ASSIGN(Set_enemy_work, 0x4b1a20);
	ASSIGN(Em_bin_load, 0x4b20b0);
	ASSIGN(Hani_ck, 0x4b2190);
	ASSIGN(Add_speedXZ, 0x4b21d0);
	ASSIGN(Add_speedXYZ, 0x4b2240);
	ASSIGN(Add_speedXYZsuper, 0x4b22c0);
	ASSIGN(Direction_ck, 0x4b2360);
	ASSIGN(Goto00, 0x4b23c0);
	ASSIGN(Goto00_ck, 0x4b2440);
	ASSIGN(Goto01, 0x4b24a0);
	ASSIGN(Goto01_ck, 0x4b2510);
	ASSIGN(Dir_pos_ck, 0x4b2550);
	ASSIGN(L_pos_ckXZ, 0x4b25a0);
	ASSIGN(L_pos_ckXZM, 0x4b25e0);
	ASSIGN(Cdir_ck, 0x4b2670);
	ASSIGN(Cdir_ck2, 0x4b26a0);
	ASSIGN(Gacha_ch, 0x4b26f0);
	ASSIGN(Set_base_pos, 0x4b2710);
	ASSIGN(Null_pos_set, 0x4b27d0);
	ASSIGN(get_null_pos, 0x4b2870);
	ASSIGN(Spd_get, 0x4b2920);
	ASSIGN(Rnd, 0x4b2a90);
	ASSIGN(Em_seq_sound, 0x4b2ad0);
	ASSIGN(Foot_set_pl, 0x4b2b00);
	ASSIGN(Kage_work_init, 0x4b2c00);
	ASSIGN(Kage_work9_init, 0x4b2cc0);
	ASSIGN(Kage_work_set, 0x4b2ce0);
	ASSIGN(Kage_work9_set, 0x4b2d90);
	ASSIGN(MulKage, 0x4b3050);
	ASSIGN(Kage_work_sort, 0x4b3110);
	ASSIGN(Kage_work9_sort, 0x4b32e0);
	ASSIGN(Kage_work_color_set, 0x4b34a0);
	ASSIGN(Kage_work9_color_set, 0x4b34d0);
	ASSIGN(Esp_init_C, 0x4b7ff0);
	ASSIGN(Esp_init_R, 0x4b8080);
	ASSIGN(Esp_data_set0, 0x4b8100);
	ASSIGN(Esp_data_set1, 0x4b8170);
	ASSIGN(Esp_call, 0x4b8470);
	ASSIGN(Esp_call3D, 0x4b8720);
	ASSIGN(Esp_call3D2, 0x4b8a00);
	ASSIGN(Esp_call2, 0x4b8cf0);
	ASSIGN(Esp_call3, 0x4b8fb0);
	ASSIGN(Esp_kill, 0x4b9260);
	ASSIGN(Esp_kill2, 0x4b92d0);
	ASSIGN(Esp_die, 0x4b9300);
	ASSIGN(Esp_ctrl, 0x4b9370);
	ASSIGN(Esp_move, 0x4b93d0);
	ASSIGN(Esp_pos, 0x4b9590);
	ASSIGN(Gun_light_reset, 0x4c0ca0);
	ASSIGN(Joint_trans2, 0x4c0ce0);
	ASSIGN(ko_joint_trans2, 0x4c0e40);
	ASSIGN(ko_joint_trans3, 0x4c11d0);
	ASSIGN(PartsWork_set, 0x4c1270);
	ASSIGN(PartsWork_link, 0x4c12b0);
	ASSIGN(Init_Parts_work, 0x4c1500);
	ASSIGN(Parts_down, 0x4c1820);
	ASSIGN(Parts_bomb, 0x4c1a60);
	ASSIGN(Parts_ryu, 0x4c1b40);
	ASSIGN(HMatrix, 0x4c1bd0);
	ASSIGN(Joint_move, 0x4c1c30);
	ASSIGN(J_seq, 0x4c1ca0);
	ASSIGN(hokan_svec, 0x4c21c0);
	ASSIGN(Joint_move_p, 0x4c2770);
	ASSIGN(Joint_move2, 0x4c2bc0);
	ASSIGN(J_seq2, 0x4c2c30);
	ASSIGN(Scr_effect, 0x4c3bc0);
	ASSIGN(Scr_quake, 0x4c3bf0);
	ASSIGN(Line_work_init, 0x4c3c60);
	ASSIGN(main, 0x4c3c70);
	ASSIGN(Init_system, 0x4c3f10);
	ASSIGN(Init_main, 0x4c4000);
	ASSIGN(Swap_Cbuff, 0x4c4460);
	ASSIGN(Bg_set_mode, 0x4c4690);
	ASSIGN(Bg_load, 0x4c4700);
	ASSIGN(Bg_draw, 0x4c4890);
	ASSIGN(Fade_set, 0x4c49c0);
	ASSIGN(Fade_adjust, 0x4c4a50);
	ASSIGN(Fade_off, 0x4c4ab0);
	ASSIGN(Fade_status, 0x4c4ad0);
	ASSIGN(System_trans, 0x4c4af0);
	ASSIGN(Init_global, 0x4c4d70);
	ASSIGN(Cut_check, 0x4c4de0);
	ASSIGN(Cut_change, 0x4c4e60);
	ASSIGN(Ccut_search, 0x4c4e90);
	ASSIGN(Hit_ck_point4, 0x4c4ec0);
	ASSIGN(Hit_ck_box, 0x4c4fb0);
	ASSIGN(Logo, 0x4c4ff0);
	ASSIGN(mapModelingData, 0x4c5130);
	ASSIGN(MulLMatrix, 0x4c5170);
	ASSIGN(Mirror_model_cp, 0x4c52a0);
	ASSIGN(Mizu_trans, 0x4c7de0);
	ASSIGN(Mizu_div_ck, 0x4c81a0);
	ASSIGN(Mizu_div_main, 0x4c8260);
	ASSIGN(Print8, 0x4c85e0);
	ASSIGN(Print14, 0x4c8603);
	ASSIGN(Print_main, 0x4c8629);
	ASSIGN(Mess_set, 0x4c89b2);
	ASSIGN(Moji_trans_main, 0x4c8cca);
	ASSIGN(Mess_disp, 0x4c8dce);
	ASSIGN(Branch_disp, 0x4c9593);
	ASSIGN(name_ptr_set, 0x4c9909);
	ASSIGN(mess_trans, 0x4c9978);
	ASSIGN(Name_disp, 0x4c9e93);
	ASSIGN(Mess_print, 0x4ca2f9);
	ASSIGN(moji_trans_main, 0x4ca68b);
	ASSIGN(moji_trans_8, 0x4ca73b);
	ASSIGN(moji_trans_14, 0x4ca9e7);
	ASSIGN(Moji_buff_init, 0x4cace6);
	ASSIGN(Moji_init, 0x4cad29);
	ASSIGN(Moji_mode_init, 0x4cae34);
	ASSIGN(Init_movie_work, 0x4caec0);
	ASSIGN(Oba_ck_hit, 0x4cc150);
	ASSIGN(Oba_ck_only, 0x4cc4c0);
	ASSIGN(Oba_set_ofs, 0x4cc5a0);
	ASSIGN(Oba_ck_em, 0x4cc680);
	ASSIGN(Oba_ck_em2, 0x4cc6d0);
	ASSIGN(Sca_ck_em, 0x4cc730);
	ASSIGN(Om_init, 0x4cc7c0);
	ASSIGN(Col_chg_init, 0x4cc850);
	ASSIGN(Tex_chg_init, 0x4cc8c0);
	ASSIGN(Tex_ctr, 0x4cc950);
	ASSIGN(Col_chg, 0x4cc9e0);
	ASSIGN(Tex_chg, 0x4ccb30);
	ASSIGN(Om_move, 0x4ccd70);
	ASSIGN(Om_trans, 0x4cd090);
	ASSIGN(Om_move_box, 0x4cd290);
	ASSIGN(Om_set_fall_dir, 0x4cd580);
	ASSIGN(Oma_set_ofs, 0x4cd610);
	ASSIGN(Oma_ck_oba, 0x4cd720);
	ASSIGN(Oma_ck_om, 0x4cdac0);
	ASSIGN(Oma_ck_front, 0x4cdcb0);
	ASSIGN(Oma_pl_updown_ck, 0x4cde00);
	ASSIGN(Oma_Spl_updown_ck, 0x4ce0c0);
	ASSIGN(Oma_front_ck, 0x4ce3e0);
	ASSIGN(Oma_on_check, 0x4ce510);
	ASSIGN(Oma_pull, 0x4ce580);
	ASSIGN(Oma_pull_hosei_x, 0x4cec90);
	ASSIGN(Oma_pull_hosei_z, 0x4cece0);
	ASSIGN(Oma_get_on_om, 0x4ced30);
	ASSIGN(Oma_ob_pull2, 0x4cede0);
	ASSIGN(Omd_in_check, 0x4ceef0);
	ASSIGN(Oma_obj_ck_all, 0x4cef90);
	ASSIGN(Pad_set, 0x4d0f30);
	ASSIGN(Pad_get_trg, 0x4d1140);
	ASSIGN(Pad_rep_set, 0x4d1150);
	ASSIGN(Computer200, 0x4d1170);
	ASSIGN(Computer613, 0x4d1820);
	ASSIGN(Computer_init, 0x4d1d60);
	ASSIGN(Computer_exit, 0x4d1e90);
	ASSIGN(Keyboard_Input, 0x4d1fe0);
	ASSIGN(Keyboard_set, 0x4d21d0);
	ASSIGN(Keyboard, 0x4d2240);
	ASSIGN(Wframe_in_out, 0x4d2480);
	ASSIGN(Wframe_set, 0x4d25c0);
	ASSIGN(Wframe_move, 0x4d2690);
	ASSIGN(Get_moji_code, 0x4d2790);
	ASSIGN(Cprint, 0x4d27a0);
	ASSIGN(Console_put, 0x4d29c0);
	ASSIGN(Console_roll_up, 0x4d29e0);
	ASSIGN(Console_clr, 0x4d2a50);
	ASSIGN(Console_trans, 0x4d2a80);
	ASSIGN(Sprite_Trans, 0x4d2b70);
	ASSIGN(Set_sp_work, 0x4d2c80);
	ASSIGN(Pl_weapon_ch, 0x4d2d20);
	ASSIGN(Plw02_init, 0x4d2fc0);
	ASSIGN(Plw09_init, 0x4d3050);
	ASSIGN(Plw0c_init, 0x4d30d0);
	ASSIGN(Plw0f_init, 0x4d32b0);
	ASSIGN(Plw12_init, 0x4d3330);
	ASSIGN(Weapon_cls, 0x4d33e0);
	ASSIGN(init_Weapon_at, 0x4d3410);
	ASSIGN(Weapon_at_ck, 0x4d3440);
	ASSIGN(Set_MinMax, 0x4d3d20);
	ASSIGN(Attack_r_ck0, 0x4d3ee0);
	ASSIGN(Attack_r_ck1, 0x4d40c0);
	ASSIGN(Em_ck, 0x4d4310);
	ASSIGN(Hand_ck, 0x4d44a0);
	ASSIGN(Mag_set, 0x4d4550);
	ASSIGN(Mag_down, 0x4d46a0);
	ASSIGN(G_rot_st, 0x4d4820);
	ASSIGN(G_rot, 0x4d4850);
	ASSIGN(Gat_lp_st, 0x4d48d0);
	ASSIGN(Gat_rot, 0x4d4910);
	ASSIGN(Pl_water, 0x4d49c0);
	ASSIGN(null, 0x4dbfd0);
	ASSIGN(Set_room, 0x4de7b0);
	ASSIGN(Set_stage, 0x4def00);
	ASSIGN(Replace_rdt, 0x4deff0);
	ASSIGN(Em_init_move, 0x4df180);
	ASSIGN(Root_ck, 0x4df320);
	ASSIGN(Rnd_area, 0x4df4d0);
	ASSIGN(Guide_check, 0x4df500);
	ASSIGN(kara_rootck2, 0x4df570);
	ASSIGN(Sa_dat_set, 0x4dfd20);
	ASSIGN(Sca_get_area, 0x4e0380);
	ASSIGN(Sca_ck_hit, 0x4e03b0);
	ASSIGN(Sca_ck_hit_om, 0x4e07e0);
	ASSIGN(Sca_hit_box2, 0x4e0980);
	ASSIGN(Sca_hit_box, 0x4e0a00);
	ASSIGN(Sca_hosei_box, 0x4e0b40);
	ASSIGN(Sca_hit_naname_a, 0x4e0c60);
	ASSIGN(Sca_ck_naname_a, 0x4e0ec0);
	ASSIGN(Sca_hit_naname_b, 0x4e0f20);
	ASSIGN(Sca_ck_naname_b, 0x4e11a0);
	ASSIGN(Sca_hit_naname_c, 0x4e11f0);
	ASSIGN(Sca_ck_naname_c, 0x4e1460);
	ASSIGN(Sca_hit_naname_d, 0x4e14b0);
	ASSIGN(Sca_ck_naname_d, 0x4e1750);
	ASSIGN(Sca_hit_hishi, 0x4e17b0);
	ASSIGN(Sca_ck_hishi, 0x4e1f10);
	ASSIGN(Sca_hit_circle, 0x4e2080);
	ASSIGN(Sca_ck_circle, 0x4e2120);
	ASSIGN(Sca_hit_koban_x, 0x4e2170);
	ASSIGN(Sca_ck_koban_x, 0x4e2250);
	ASSIGN(Sca_hit_koban_z, 0x4e2300);
	ASSIGN(Sca_ck_koban_z, 0x4e23e0);
	ASSIGN(Sca_hit_slope, 0x4e24c0);
	ASSIGN(Sca_hit_stairs, 0x4e2680);
	ASSIGN(Sca_hit_curve, 0x4e2870);
	ASSIGN(Sca_get_slope_high, 0x4e2930);
	ASSIGN(Sca_get_stairs_high, 0x4e29f0);
	ASSIGN(Sca_get_curve_high, 0x4e2aa0);
	ASSIGN(Sca_get_ground, 0x4e2ae0);
	ASSIGN(Sca_get_dir, 0x4e2ec0);
	ASSIGN(Sca_get_dir_super, 0x4e2f30);
	ASSIGN(Sca_get_dir_super_tmp, 0x4e30f0);
	ASSIGN(Get_axis, 0x4e3150);
	ASSIGN(Get_axis2, 0x4e31c0);
	ASSIGN(Sca_get_pos, 0x4e3250);
	ASSIGN(Sca_get_pos_super, 0x4e32b0);
	ASSIGN(Sca_get_pos_super_tmp, 0x4e33a0);
	ASSIGN(Sca_ck_line, 0x4e3440);
	ASSIGN(Sca_get_high, 0x4e3910);
	ASSIGN(Sca_get_low, 0x4e3940);
	ASSIGN(Sce_test_init, 0x4e39e0);
	ASSIGN(Em_kind_search, 0x4e3ab0);
	ASSIGN(Sce_se_set, 0x4e3ae0);
	ASSIGN(Sce_rnd_set, 0x4e3bd0);
	ASSIGN(Sce_model_init, 0x4e3c20);
	ASSIGN(Sce_work_clr, 0x4e3da0);
	ASSIGN(Sce_work_clr_set, 0x4e3e50);
	ASSIGN(Sce_aot_init, 0x4e3f40);
	ASSIGN(Event_init, 0x4e3f60);
	ASSIGN(Event_exec, 0x4e3fa0);
	ASSIGN(Sce_scheduler_set, 0x4e40d0);
	ASSIGN(Sce_col_chg_init, 0x4e4180);
	ASSIGN(Sce_mirror_init, 0x4e41c0);
	ASSIGN(Sce_scheduler, 0x4e42d0);
	ASSIGN(Sce_scheduler_main, 0x4e4310);
	ASSIGN(Nop, 0x4e43b0);
	ASSIGN(Evt_end, 0x4e43d0);
	ASSIGN(Evt_next, 0x4e4420);
	ASSIGN(Evt_chain, 0x4e4440);
	ASSIGN(Evt_exec, 0x4e4460);
	ASSIGN(Evt_kill, 0x4e4490);
	ASSIGN(Ifel_ck, 0x4e44c0);
	ASSIGN(Else_ck, 0x4e4510);
	ASSIGN(Endif, 0x4e4550);
	ASSIGN(Sleep, 0x4e4580);
	ASSIGN(Sleeping, 0x4e45c0);
	ASSIGN(Wsleep, 0x4e4610);
	ASSIGN(Wsleeping, 0x4e4640);
	ASSIGN(For, 0x4e4670);
	ASSIGN(For2, 0x4e46e0);
	ASSIGN(Next, 0x4e4770);
	ASSIGN(While, 0x4e47c0);
	ASSIGN(Ewhile, 0x4e4830);
	ASSIGN(Do, 0x4e4860);
	ASSIGN(Edwhile, 0x4e48b0);
	ASSIGN(While_main, 0x4e4900);
	ASSIGN(Switch, 0x4e4970);
	ASSIGN(Default, 0x4e4a00);
	ASSIGN(Eswitch, 0x4e4a20);
	ASSIGN(Goto, 0x4e4a50);
	ASSIGN(Gosub, 0x4e4aa0);
	ASSIGN(Return, 0x4e4b00);
	ASSIGN(Break, 0x4e4b40);
	ASSIGN(Work_copy, 0x4e4b80);
	ASSIGN(Rbj_reset, 0x4e4bd0);
	ASSIGN(Ck, 0x4e4bf0);
	ASSIGN(Set, 0x4e4c40);
	ASSIGN(Cmp, 0x4e4cc0);
	ASSIGN(Save, 0x4e4d60);
	ASSIGN(Copy, 0x4e4d90);
	ASSIGN(Calc, 0x4e4dd0);
	ASSIGN(Calc2, 0x4e4e10);
	ASSIGN(Calc_branch, 0x4e4e60);
	ASSIGN(Sce_rnd, 0x4e4f60);
	ASSIGN(Cut_chg, 0x4e4f80);
	ASSIGN(Cut_old, 0x4e4fe0);
	ASSIGN(Cut_chg_main, 0x4e5020);
	ASSIGN(Cut_auto, 0x4e5050);
	ASSIGN(Cut_replace, 0x4e5090);
	ASSIGN(Cut_be_set, 0x4e5120);
	ASSIGN(Message_on, 0x4e5170);
	ASSIGN(Aot_set, 0x4e51c0);
	ASSIGN(Aot_set_4p, 0x4e5200);
	ASSIGN(Door_aot_set, 0x4e5250);
	ASSIGN(Door_aot_set_4p, 0x4e5290);
	ASSIGN(Item_aot_set, 0x4e52e0);
	ASSIGN(Item_aot_set2, 0x4e53b0);
	ASSIGN(Item_aot_set_4p, 0x4e5520);
	ASSIGN(Aot_reset, 0x4e5600);
	ASSIGN(Aot_on, 0x4e5660);
	ASSIGN(Obj_model_set, 0x4e56b0);
	ASSIGN(Super_set, 0x4e59e0);
	ASSIGN(Super_on, 0x4e5bc0);
	ASSIGN(Super_reset, 0x4e5e30);
	ASSIGN(Work_set, 0x4e5e90);
	ASSIGN(Parts_set, 0x4e5f60);
	ASSIGN(Speed_set, 0x4e6040);
	ASSIGN(Add_speed, 0x4e6070);
	ASSIGN(Add_aspeed, 0x4e60e0);
	ASSIGN(Pos_set, 0x4e6150);
	ASSIGN(Dir_set, 0x4e61e0);
	ASSIGN(Member_set, 0x4e6220);
	ASSIGN(Member_set2, 0x4e6260);
	ASSIGN(Member_set_branch, 0x4e62a0);
	ASSIGN(Member_copy, 0x4e6610);
	ASSIGN(Member_cmp, 0x4e6650);
	ASSIGN(Load_member_branch, 0x4e6700);
	ASSIGN(Member_calc, 0x4e69c0);
	ASSIGN(Member_calc2, 0x4e6a10);
	ASSIGN(Load_member_addr_branch, 0x4e6a60);
	ASSIGN(Dir_ck, 0x4e6cd0);
	ASSIGN(Se_on, 0x4e6d10);
	ASSIGN(Sca_id_set, 0x4e6df0);
	ASSIGN(Sce_espr_on, 0x4e6e30);
	ASSIGN(Sce_espr_on2, 0x4e6f10);
	ASSIGN(Sce_espr3d_on, 0x4e6fa0);
	ASSIGN(Sce_espr3d_on2, 0x4e7040);
	ASSIGN(Sce_espr_kill, 0x4e70f0);
	ASSIGN(Sce_espr_kill2, 0x4e7130);
	ASSIGN(Sce_espr_task, 0x4e7160);
	ASSIGN(Sce_espr_control, 0x4e71d0);
	ASSIGN(Get_matrix, 0x4e7210);
	ASSIGN(Plc_motion, 0x4e72d0);
	ASSIGN(Plc_dest, 0x4e7330);
	ASSIGN(Plc_gun, 0x4e74d0);
	ASSIGN(Plc_neck, 0x4e7510);
	ASSIGN(Plc_ret, 0x4e7630);
	ASSIGN(Plc_stop, 0x4e7670);
	ASSIGN(Plc_flg, 0x4e76c0);
	ASSIGN(Plc_rot, 0x4e7740);
	ASSIGN(Plc_cnt, 0x4e77a0);
	ASSIGN(Sce_em_set, 0x4e77d0);
	ASSIGN(Sce_em_set2, 0x4e7cb0);
	ASSIGN(Sce_key_ck, 0x4e8230);
	ASSIGN(Sce_trg_ck, 0x4e8260);
	ASSIGN(Sce_bgm_control, 0x4e8290);
	ASSIGN(Sce_bgmtbl_set, 0x4e82e0);
	ASSIGN(Sce_fade_set, 0x4e8320);
	ASSIGN(Sce_fade_adjust, 0x4e83c0);
	ASSIGN(Xa_on, 0x4e8470);
	ASSIGN(Xa_vol, 0x4e84b0);
	ASSIGN(Se_vol, 0x4e84e0);
	ASSIGN(Sce_shake_on, 0x4e8550);
	ASSIGN(Sce_line_start, 0x4e8580);
	ASSIGN(Sce_line_main, 0x4e85b0);
	ASSIGN(Sce_line_end, 0x4e85d0);
	ASSIGN(Mizu_div_set, 0x4e85f0);
	ASSIGN(Keep_Item_ck, 0x4e8630);
	ASSIGN(Sce_Item_cmp, 0x4e8660);
	ASSIGN(Sce_Item_lost, 0x4e8700);
	ASSIGN(Sce_Item_lost2, 0x4e8750);
	ASSIGN(Weapon_chg, 0x4e87b0);
	ASSIGN(Sce_Item_get, 0x4e8830);
	ASSIGN(Kage_set, 0x4e8890);
	ASSIGN(Light_pos_set, 0x4e8990);
	ASSIGN(Light_kido_set, 0x4e8a10);
	ASSIGN(Light_color_set, 0x4e8a50);
	ASSIGN(Light_pos_set2, 0x4e8aa0);
	ASSIGN(Light_kido_set2, 0x4e8b20);
	ASSIGN(Light_color_set2, 0x4e8b60);
	ASSIGN(Sce_scr_move, 0x4e8bb0);
	ASSIGN(Flr_set, 0x4e8be0);
	ASSIGN(Movie_on, 0x4e8c40);
	ASSIGN(Splc_ret, 0x4e8c70);
	ASSIGN(Splc_sce, 0x4e8d00);
	ASSIGN(Evt_next2, 0x4e8d70);
	ASSIGN(Mirror_set, 0x4e8db0);
	ASSIGN(Sce_parts_bomb, 0x4e8e10);
	ASSIGN(Sce_parts_down, 0x4e8eb0);
	ASSIGN(Col_chg_set, 0x4e8f40);
	ASSIGN(Plc_heal, 0x4e8fb0);
	ASSIGN(St_map_hint, 0x4e8fe0);
	ASSIGN(Sce_em_pos_ck, 0x4e9030);
	ASSIGN(Poison_ck, 0x4e90c0);
	ASSIGN(Poison_clr, 0x4e90e0);
	ASSIGN(Case, 0x4e9110);
	ASSIGN(Vib_fade_set, 0x4e9130);
	ASSIGN(Sce_at_check, 0x4e9150);
	ASSIGN(Nothing, 0x4e9440);
	ASSIGN(Sce_Door, 0x4e9460);
	ASSIGN(Sce_Item, 0x4e96c0);
	ASSIGN(Sce_Normal, 0x4e97c0);
	ASSIGN(Sce_Message, 0x4e97d0);
	ASSIGN(Sce_Event, 0x4e9800);
	ASSIGN(Sce_Flg_chg, 0x4e9830);
	ASSIGN(Sce_Water, 0x4e9880);
	ASSIGN(Sce_Move, 0x4e98a0);
	ASSIGN(Sce_Save, 0x4e98f0);
	ASSIGN(Sce_Itembox, 0x4e99f0);
	ASSIGN(Sce_Damage, 0x4e9b70);
	ASSIGN(Sce_Status, 0x4e9c80);
	ASSIGN(Sce_Hikidashi, 0x4e9cb0);
	ASSIGN(Sce_Windows, 0x4ea0b0);
	ASSIGN(Sce_at, 0x4ea0d0);
	ASSIGN(Water_ck, 0x4ea1c0);
	ASSIGN(Floor_check, 0x4ea2b0);
	ASSIGN(Snd_sys_init, 0x4ec220);
	ASSIGN(Snd_sys_init_sub2, 0x4ec410);
	ASSIGN(Snd_sys_core_set, 0x4ec450);
	ASSIGN(Snd_sys_arms_set, 0x4ec6d0);
	ASSIGN(Snd_sys_room_set, 0x4ec7d0);
	ASSIGN(Snd_sys_enem_set, 0x4ec8a0);
	ASSIGN(Snd_bgm_set, 0x4ec9c0);
	ASSIGN(Snd_bgm_ck, 0x4ecbe0);
	ASSIGN(Snd_bgm_play_ck, 0x4ecce0);
	ASSIGN(Snd_bgm_main, 0x4ecda0);
	ASSIGN(Snd_bgm_sub, 0x4ed050);
	ASSIGN(Snd_bgm_fade_ON, 0x4ed260);
	ASSIGN(Snd_bgm_ctr, 0x4ed2f0);
	ASSIGN(Snd_bgm_tbl_set, 0x4ed920);
	ASSIGN(Snd_se_stad, 0x4ed950);
	ASSIGN(Snd_se_enem, 0x4ede30);
	ASSIGN(Snd_se_walk, 0x4edf40);
	ASSIGN(Snd_se_call, 0x4ee350);
	ASSIGN(Snd_se_pri_ck, 0x4ee770);
	ASSIGN(Snd_se_3D, 0x4ee780);
	ASSIGN(Snd_se_dir_ck, 0x4eebd0);
	ASSIGN(Xa_play, 0x4eec30);
	ASSIGN(Xa_error, 0x4eecd0);
	ASSIGN(Xa_control_stop, 0x4eed10);
	ASSIGN(Xa_control_init, 0x4eed30);
	ASSIGN(Xa_control_play, 0x4eed40);
	ASSIGN(Xa_control_end, 0x4eed80);
	ASSIGN(Xa_control, 0x4eedf0);
	ASSIGN(Spl_soba_pos_set, 0x4f5a00);
	ASSIGN(Spl_enemy_ck, 0x4f5b70);
	ASSIGN(Spl_em_pos_ck, 0x4f5df0);
	ASSIGN(Spl_em_cdir_ck, 0x4f5f00);
	ASSIGN(Spl_pllock_get, 0x4f5f90);
	ASSIGN(Spl_life_down, 0x4f5fe0);
	ASSIGN(model_disp, 0x500560);
	ASSIGN(Set_iwork, 0x5024d0);
	ASSIGN(Set_iwork_num, 0x502500);
	ASSIGN(Check_pl_life, 0x502530);
	ASSIGN(Check_item_space, 0x502570);
	ASSIGN(Check_item_mix, 0x502590);
	ASSIGN(Search_item, 0x502620);
	ASSIGN(Search_item_id, 0x502660);
	ASSIGN(Sort_item, 0x502690);
	ASSIGN(Shift_item, 0x502720);
	ASSIGN(Set_item, 0x502820);
	ASSIGN(Tama_reload, 0x502aa0);
	ASSIGN(Check_cursol_distance, 0x502b30);
	ASSIGN(Memcpy, 0x502d50);
	ASSIGN(Memclr, 0x502d70);
	ASSIGN(Mapping_tmd, 0x502d90);
	ASSIGN(Set_view, 0x502db0);
	ASSIGN(Set_light, 0x502f00);
	ASSIGN(Set_Light_data, 0x503070);
	ASSIGN(Flg_on, 0x503120);
	ASSIGN(Flg_off, 0x503140);
	ASSIGN(Flg_ck, 0x503170);
	ASSIGN(Rot_vector, 0x503190);
	ASSIGN(Rot_vector_super, 0x5031c0);
	ASSIGN(Rot_add_matrix, 0x503210);
	ASSIGN(Set_front_pos, 0x503350);
	ASSIGN(InitGeom_func, 0x508b50);
	ASSIGN(Init_scheduler, 0x508b60);
	ASSIGN(Scheduler, 0x508bc0);
	ASSIGN(Task_execute, 0x508cc0);
	ASSIGN(Task_sleep, 0x508ce0);
	ASSIGN(Task_exit, 0x508d10);
	ASSIGN(Task_kill, 0x508d40);
	ASSIGN(Task_chain, 0x508d60);
	ASSIGN(Task_suspend, 0x508d90);
	ASSIGN(Task_signal, 0x508da0);
	ASSIGN(Task_status, 0x508db0);
}
