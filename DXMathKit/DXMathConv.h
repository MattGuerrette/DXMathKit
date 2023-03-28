//
//  DXMathConv.h
//  DXMathKit
//
//  Created by Matthew Guerrette on 3/28/23.
//

#ifndef DXMathConv_h
#define DXMathConv_h

#import <simd/simd.h>

#ifdef __APPLE__
#ifdef __arm__
#define _XM_ARM_NEON_INTRINSICS_ // Apple architecture
#endif
#endif

#import <DirectXMath.h>
#import <DirectXColors.h>
#import <DirectXCollision.h>

using namespace DirectX;

inline XMFLOAT2 simd_make_xmfloat2(simd_float2 v)
{
    return XMFLOAT2(v[0], v[1]);
}

inline XMFLOAT3 simd_make_xmfloat3(simd_float3 v)
{
    return XMFLOAT3(v[0], v[1], v[2]);
}

inline XMFLOAT4 simd_make_xmfloat4(simd_float4 v)
{
    return XMFLOAT4(v[0], v[1], v[2], v[3]);
}

inline simd_float3 simd_make_float3(XMVECTOR v)
{
    XMFLOAT3 r;
    XMStoreFloat3(&r, v);
    
    return simd_make_float3(r.x, r.y, r.z);
}

inline simd_float4 simd_make_float4(XMVECTOR v)
{
    XMFLOAT4 r;
    XMStoreFloat4(&r, v);
    
    return simd_make_float4(r.x, r.y, r.z, r.w);
}

inline simd_float4x4 simd_make_matrix(XMMATRIX m)
{
    return simd_matrix(simd_make_float4(m.r[0]),
                       simd_make_float4(m.r[1]),
                       simd_make_float4(m.r[2]),
                       simd_make_float4(m.r[3]));
}

inline XMVECTOR simd_make_xmvector(simd_float3 v)
{
    XMFLOAT3 _v = simd_make_xmfloat3(v);
    return XMLoadFloat3(&_v);
}



#endif /* DXMathConv_h */
