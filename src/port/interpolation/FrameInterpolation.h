#pragma once

#include "sf64math.h"
#include <libultraship.h>

#ifdef __cplusplus

#include <unordered_map>

std::unordered_map<Mtx*, MtxF> FrameInterpolation_Interpolate(float step);

extern "C" {

#endif

void FrameInterpolation_ShouldInterpolateFrame(bool shouldInterpolate);

void FrameInterpolation_StartRecord(void);

void FrameInterpolation_StopRecord(void);

void FrameInterpolation_RecordOpenChild(const void* a, int b);

void FrameInterpolation_RecordCloseChild(void);

void FrameInterpolation_DontInterpolateCamera(void);

int FrameInterpolation_GetCameraEpoch(void);

void FrameInterpolation_RecordActorPosRotMatrix(void);

void FrameInterpolation_RecordMatrixPush(void);

void FrameInterpolation_RecordMatrixPop(void);

void FrameInterpolation_RecordMatrixMult(MtxF* mf, u8 mode);

void FrameInterpolation_RecordMatrixTranslate(f32 x, f32 y, f32 z, u8 mode);

void FrameInterpolation_RecordMatrixScale(f32 x, f32 y, f32 z, u8 mode);

void FrameInterpolation_RecordMatrixRotate1Coord(u32 coord, f32 value, u8 mode);

void FrameInterpolation_RecordMatrixMtxFToMtx(MtxF* src, Mtx* dest);

void FrameInterpolation_RecordMatrixToMtx(Mtx* dest, char* file, s32 line);

void FrameInterpolation_RecordMatrixReplaceRotation(MtxF* mf);

void FrameInterpolation_RecordMatrixRotateAxis(f32 angle, Vec3f* axis, u8 mode);

void FrameInterpolation_RecordSkinMatrixMtxFToMtx(MtxF* src, Mtx* dest);

void FrameInterpolation_RecordMatrixMultVec3f(Vec3f src, Vec3f dest);
void FrameInterpolation_RecordMatrixMultVec3fNoTranslate(Vec3f src, Vec3f dest);

#ifdef __cplusplus
}
#endif