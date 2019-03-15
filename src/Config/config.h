/*
 * ========================= config.h ==========================
 *                          -- tpr --
 *                                        CREATE -- 2018.11.21
 *                                        MODIFY --
 * ----------------------------------------------------------
 *   配置 参数
 *   临时，后期会更换为 lua 来实现
 * ----------------------------
 */
#ifndef _TPR_CONFIG_H_
#define _TPR_CONFIG_H_


//-- 一个 mapSection 占有 256*256 个 mapEnt
//  由于 section 始终是正方形，仅记录一条边的边长（包含多少个 mapents）
//#define SECTION_SIDE_ENTS 256



//-- 一个 section，占有 4*4 chunks
#define CHUNKS_PER_SECTION 4

//-- 一个 chunk，占有 16*16 fields
#define FIELDS_PER_CHUNK  8

//-- 一个 field，占有 4*4 mapents
#define ENTS_PER_FIELD      8
#define HALF_ENTS_PER_FIELD 4

//-- 一个 mapent 占用 8*8像素
#define PIXES_PER_MAPENT  8
#define HALF_PIXES_PER_MAPENT 4
//-- 求 mpos 中间pixel的 ppos 时用到
#define MID_PPOS_IDX_IN_MAPENT 4


//-- 一个 chunk，占有 64*64 mapents
#define ENTS_PER_CHUNK (FIELDS_PER_CHUNK*ENTS_PER_FIELD)

//-- 一个 section，占有 256*256 mapEnts
#define ENTS_PER_SECTION  (ENTS_PER_CHUNK*CHUNKS_PER_SECTION)

//-- 一个 field，占有 20*20 pixel
#define PIXES_PER_FIELD (ENTS_PER_FIELD*PIXES_PER_MAPENT)

//-- 一个 chunk，占有 320*320 pixel
#define PIXES_PER_CHUNK (ENTS_PER_CHUNK*PIXES_PER_MAPENT)


//-- 一个 landWaterMask 预制件，占有 128*128 mapents
#define ENTS_PER_LANDWATERMASK (2*ENTS_PER_CHUNK)


//-- camera.viewingBox z_deep
#define VIEWING_BOX_Z_DEEP  1000



#endif
