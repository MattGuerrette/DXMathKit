//
//  DXMMatrix.m
//  DXMathKit
//
//  Created by Matthew Guerrette on 3/28/23.
//

#import "DXMMatrix.h"
#import "DXMathConv.h"

simd_float4x4 DXMMatrixRotationAxis(float rotation, simd_float3 axis)
{
    XMFLOAT3 v = simd_make_xmfloat3(axis);
    XMVECTOR _axis = XMLoadFloat3(&v);
    XMMATRIX m = XMMatrixRotationAxis(_axis, rotation);
    return simd_make_matrix(m);
}

simd_float4x4 DXMMatrixTranslation(float x, float y, float z)
{
    XMMATRIX m = XMMatrixTranslation(x, y, z);
    
    return simd_make_matrix(m);
}

simd_float4x4 DXMMatrixScaleUniform(float s)
{
    XMMATRIX m = XMMatrixScaling(s, s, s);
    return simd_make_matrix(m);
}

simd_float4x4 DXMMatrixScale(float x, float y, float z)
{
    XMMATRIX m = XMMatrixScaling(x, y, z);
    return simd_make_matrix(m);
}

simd_float4x4 DXMMatrixLookAtLH(simd_float3 eyePosition,
                                simd_float3 focusPosition,
                                simd_float3 upDirection)
{
    XMMATRIX m = XMMatrixLookAtLH(simd_make_xmvector(eyePosition),
                                  simd_make_xmvector(focusPosition),
                                  simd_make_xmvector(upDirection));
    return simd_make_matrix(m);
}

simd_float4x4 DXMMatrixLookAtRH(simd_float3 eyePosition,
                                simd_float3 focusPosition,
                                simd_float3 upDirection)
{
    XMMATRIX m = XMMatrixLookAtRH(simd_make_xmvector(eyePosition),
                                  simd_make_xmvector(focusPosition),
                                  simd_make_xmvector(upDirection));
    return simd_make_matrix(m);
}

simd_float4x4 DXMMatrixPerspectiveLH(float viewportWidth,
                                     float viewportHeight,
                                     float nearZ,
                                     float farZ)
{
    XMMATRIX m = XMMatrixPerspectiveLH(viewportWidth, viewportHeight, nearZ, farZ);
    return simd_make_matrix(m);
}

simd_float4x4 DXMMatrixPerspectiveRH(float viewportWidth,
                                     float viewportHeight,
                                     float nearZ,
                                     float farZ)
{
    XMMATRIX m = XMMatrixPerspectiveRH(viewportWidth, viewportHeight, nearZ, farZ);
    return simd_make_matrix(m);
}

simd_float4x4 DXMMatrixPerspectiveFovLH(float fov,
                                        float aspectRatio,
                                        float nearZ,
                                        float farZ)
{
    XMMATRIX m = XMMatrixPerspectiveFovLH(fov, aspectRatio, nearZ, farZ);
    return simd_make_matrix(m);
}

simd_float4x4 DXMMatrixPerspectiveFovRH(float fov,
                                        float aspectRatio,
                                        float nearZ,
                                        float farZ)
{
    XMMATRIX m = XMMatrixPerspectiveFovRH(fov, aspectRatio, nearZ, farZ);
    return simd_make_matrix(m);
}

simd_float4x4 DXMMatrixOrthographicLH(float viewportWidth,
                                      float viewportHeight,
                                      float nearZ,
                                      float farZ)
{
    XMMATRIX m = XMMatrixOrthographicLH(viewportWidth, viewportHeight, nearZ, farZ);
    return simd_make_matrix(m);
}

simd_float4x4 DXMMatrixOrthographicRH(float viewportWidth,
                                      float viewportHeight,
                                      float nearZ,
                                      float farZ)
{
    XMMATRIX m = XMMatrixOrthographicRH(viewportWidth, viewportHeight, nearZ, farZ);
    return simd_make_matrix(m);
}

simd_float4x4 DXMMatrixOrthographicOffCenterLH(float viewportLeft,
                                               float viewportRight,
                                               float viewportBottom,
                                               float viewportTop,
                                               float nearZ,
                                               float farZ)
{
    XMMATRIX m = XMMatrixOrthographicOffCenterLH(viewportLeft,
                                                 viewportRight,
                                                 viewportBottom,
                                                 viewportTop,
                                                 nearZ,
                                                 farZ);
    return simd_make_matrix(m);
}

simd_float4x4 DXMMatrixOrthographicOffCenterRH(float viewportLeft,
                                               float viewportRight,
                                               float viewportBottom,
                                               float viewportTop,
                                               float nearZ,
                                               float farZ)
{
    XMMATRIX m = XMMatrixOrthographicOffCenterRH(viewportLeft,
                                                 viewportRight,
                                                 viewportBottom,
                                                 viewportTop,
                                                 nearZ,
                                                 farZ);
    return simd_make_matrix(m);
}

