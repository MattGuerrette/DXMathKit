//
//  DXMMatrix.h
//  DXMathKit
//
//  Created by Matthew Guerrette on 3/28/23.
//

#import <Foundation/Foundation.h>
#import <simd/simd.h>

FOUNDATION_EXPORT
/// Create a rotation matrix along specified axis
/// ## Topics
///
/// ### Matrix Math
/// - Parameters:
///   - rotation: Rotation angle in radians
///   - axis: Axis of rotation
simd_float4x4 DXMMatrixRotationAxis(float rotation, simd_float3 axis);

FOUNDATION_EXPORT
/// Creates a translation matrix for specified offsets
/// - Parameters:
///   - x: x offset
///   - y: y offset
///   - z: z offset
simd_float4x4 DXMMatrixTranslation(float x, float y, float z);

FOUNDATION_EXPORT
/// Create a uniform scaling matrix
/// - Parameter s: scale factor
simd_float4x4 DXMMatrixScaleUniform(float s);

simd_float4x4 DXMMatrixScale(float x, float y, float z);

FOUNDATION_EXPORT
simd_float4x4 DXMMatrixLookAtLH(simd_float3 eyePosition,
                                simd_float3 focusPosition,
                                simd_float3 upDirection);

FOUNDATION_EXPORT
simd_float4x4 DXMMatrixLookAtRH(simd_float3 eyePosition,
                                simd_float3 focusPosition,
                                simd_float3 upDirection);

FOUNDATION_EXPORT
/// Creates a perspective view matrix in left handed coordinate space
/// - Parameters:
///   - viewportWidth: Viewport width in pixels
///   - viewportHeight: Viewport height in pixels
///   - nearZ: Near plane Z coordinate
///   - farZ: Far plane Z coordinate
simd_float4x4 DXMMatrixPerspectiveLH(float viewportWidth,
                                     float viewportHeight,
                                     float nearZ,
                                     float farZ);

FOUNDATION_EXPORT
/// Creates a perspective view matrix in right handed coordinate space
/// - Parameters:
///   - viewportWidth: Viewport width in pixels
///   - viewportHeight: Viewport height in pixels
///   - nearZ: Near plane Z coordinate
///   - farZ: Far plane Z coordinate
simd_float4x4 DXMMatrixPerspectiveRH(float viewportWidth,
                                     float viewportHeight,
                                     float nearZ,
                                     float farZ);

FOUNDATION_EXPORT
/// Creates a perspective field-of-view matrix in left handed coordinate space
/// - Parameters:
///   - fov: Field of view angle
///   - aspectRatio: Viewport aspect ratio
///   - nearZ: Near plane Z coordinate
///   - farZ: Far plane Z coordinate
simd_float4x4 DXMMatrixPerspectiveFovLH(float fov,
                                        float aspectRatio,
                                        float nearZ,
                                        float farZ);

FOUNDATION_EXPORT
/// Creates a perspective field-of-view matrix in right handed coordinate space
/// - Parameters:
///   - fov: Field of view angle
///   - aspectRatio: Viewport aspect ratio
///   - nearZ: Near plane Z coordinate
///   - farZ: Far plane Z coordinate
simd_float4x4 DXMMatrixPerspectiveFovRH(float fov,
                                        float aspectRatio,
                                        float nearZ,
                                        float farZ);

FOUNDATION_EXPORT
/// Creates an orthographic matrix in left handed coordinate space
/// - Parameters:
///   - viewportWidth: Viewport width in pixels
///   - viewportHeight: Viewport height in pixels
///   - nearZ: Near plane Z coordinate
///   - farZ: Far plane Z coordinate
simd_float4x4 DXMMatrixOrthographicLH(float viewportWidth,
                                      float viewportHeight,
                                      float nearZ,
                                      float farZ);

FOUNDATION_EXPORT
/// Creates an orthographic matrix in right handed coordinate space
/// - Parameters:
///   - viewportWidth: Viewport width in pixels
///   - viewportHeight: Viewport height in pixels
///   - nearZ: Near plane Z coordinate
///   - far: Far plane Z coordinate
simd_float4x4 DXMMatrixOrthographicRH(float viewportWidth,
                                      float viewportHeight,
                                      float nearZ,
                                      float far);

FOUNDATION_EXPORT
/// Creates an off-center orthographics matrix in left handed coordinate space
/// - Parameters:
///   - viewportLeft: Viewport left bounds
///   - viewportRight: Viewport right bounds
///   - viewportBottom: Viewport bottom bounds
///   - viewportTop: Viewport top bounds
///   - nearZ: Near plane Z coordinate
///   - farZ: Far plane Z coordinate
simd_float4x4 DXMMatrixOrthographicOffCenterLH(float viewportLeft,
                                               float viewportRight,
                                               float viewportBottom,
                                               float viewportTop,
                                               float nearZ,
                                               float farZ);

FOUNDATION_EXPORT
/// Creates an off-center orthographic matrix in right handed coordinate space
/// - Parameters:
///   - viewportLeft: Viewport left bounds
///   - viewportRight: Viewport right bounds
///   - viewportBottom: Viewport bottom bounds
///   - viewportTop: Viewport top bounds
///   - nearZ: Near plane Z coordinate
///   - farZ: Far plane Z coordinate
simd_float4x4 DXMMatrixOrthographicOffCenterRH(float viewportLeft,
                                               float viewportRight,
                                               float viewportBottom,
                                               float viewportTop,
                                               float nearZ,
                                               float farZ);
