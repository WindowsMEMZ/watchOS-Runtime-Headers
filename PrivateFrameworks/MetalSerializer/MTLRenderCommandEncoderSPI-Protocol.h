//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 341.35.0.0.0
//
#ifndef MTLRenderCommandEncoderSPI_Protocol_h
#define MTLRenderCommandEncoderSPI_Protocol_h
@import Foundation;

@protocol MTLRenderCommandEncoderSPI <MTLCommandEncoderSPI, MTLRenderCommandEncoder>
/* instance methods */
- (void)setDepthClipModeSPI:(unsigned long long)spi;
- (void)setLineWidth:(float)width;
- (void)addSplitHandler:(id /* block */)handler;
- (BOOL)isMemorylessRender;
- (void)setFragmentTexture:(id)texture atTextureIndex:(unsigned long long)index samplerState:(id)state atSamplerIndex:(unsigned long long)index;
- (void)setVertexAmplificationMode:(unsigned long long)mode value:(unsigned long long)value;
- (void)setObjectVisibleFunctionTable:(id)table atBufferIndex:(unsigned long long)index;
- (void)setObjectVisibleFunctionTables:(const id *)tables withBufferRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (void)setMeshVisibleFunctionTable:(id)table atBufferIndex:(unsigned long long)index;
- (void)setMeshVisibleFunctionTables:(const id *)tables withBufferRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (void)setObjectBytes:(const void *)bytes length:(unsigned long long)length atIndex:(unsigned long long)index;
- (void)setObjectBuffer:(id)buffer offset:(unsigned long long)offset atIndex:(unsigned long long)index;
- (void)setObjectBufferOffset:(unsigned long long)offset atIndex:(unsigned long long)index;
- (void)setObjectBuffers:(const id *)buffers offsets:(const unsigned long long *)offsets withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (void)setObjectTexture:(id)texture atIndex:(unsigned long long)index;
- (void)setObjectTextures:(const id *)textures withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (void)setObjectSamplerState:(id)state atIndex:(unsigned long long)index;
- (void)setObjectSamplerStates:(const id *)states withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (void)setObjectSamplerState:(id)state lodMinClamp:(float)clamp lodMaxClamp:(float)clamp atIndex:(unsigned long long)index;
- (void)setObjectSamplerStates:(const id *)states lodMinClamps:(const float *)clamps lodMaxClamps:(const float *)clamps withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (void)setObjectThreadgroupMemoryLength:(unsigned long long)length atIndex:(unsigned long long)index;
- (void)setMeshBytes:(const void *)bytes length:(unsigned long long)length atIndex:(unsigned long long)index;
- (void)setMeshBuffer:(id)buffer offset:(unsigned long long)offset atIndex:(unsigned long long)index;
- (void)setMeshBufferOffset:(unsigned long long)offset atIndex:(unsigned long long)index;
- (void)setMeshBuffers:(const id *)buffers offsets:(const unsigned long long *)offsets withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (void)setMeshTexture:(id)texture atIndex:(unsigned long long)index;
- (void)setMeshTextures:(const id *)textures withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (void)setMeshSamplerState:(id)state atIndex:(unsigned long long)index;
- (void)setMeshSamplerStates:(const id *)states withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (void)setMeshSamplerState:(id)state lodMinClamp:(float)clamp lodMaxClamp:(float)clamp atIndex:(unsigned long long)index;
- (void)setMeshSamplerStates:(const id *)states lodMinClamps:(const float *)clamps lodMaxClamps:(const float *)clamps withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (void)drawMeshThreadgroups:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })threadgroups threadsPerObjectThreadgroup:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })threadgroup threadsPerMeshThreadgroup:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })threadgroup;
- (void)drawMeshThreads:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })threads threadsPerObjectThreadgroup:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })threadgroup threadsPerMeshThreadgroup:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })threadgroup;
- (void)drawMeshThreadgroupsWithIndirectBuffer:(id)buffer indirectBufferOffset:(unsigned long long)offset threadsPerObjectThreadgroup:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })threadgroup threadsPerMeshThreadgroup:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })threadgroup;
@optional
/* instance methods */
- (void)setCommandDataCorruptModeSPI:(unsigned long long)spi;
- (void)setAlphaTestReferenceValue:(float)value;
- (void)setPointSize:(float)size;
- (void)setClipPlane:(float)plane p2:(float)p2 p3:(float)p3 p4:(float)p4 atIndex:(unsigned long long)index;
- (void)setVertexSamplerState:(id)state lodMinClamp:(float)clamp lodMaxClamp:(float)clamp lodBias:(float)bias atIndex:(unsigned long long)index;
- (void)setFragmentSamplerState:(id)state lodMinClamp:(float)clamp lodMaxClamp:(float)clamp lodBias:(float)bias atIndex:(unsigned long long)index;
- (void)setViewportTransformEnabled:(BOOL)enabled;
- (void)setProvokingVertexMode:(unsigned long long)mode;
- (void)setPrimitiveRestartEnabled:(BOOL)enabled;
- (void)setPrimitiveRestartEnabled:(BOOL)enabled index:(unsigned long long)index;
- (void)setTriangleFrontFillMode:(unsigned long long)mode backFillMode:(unsigned long long)mode;
- (void)setTransformFeedbackState:(unsigned long long)state;
- (void)setDepthCleared;
- (void)setStencilCleared;
- (void)setColorResolveTexture:(id)texture slice:(unsigned long long)slice depthPlane:(unsigned long long)plane level:(unsigned long long)level atIndex:(unsigned long long)index;
- (void)setColorResolveTexture:(id)texture slice:(unsigned long long)slice depthPlane:(unsigned long long)plane level:(unsigned long long)level yInvert:(BOOL)invert atIndex:(unsigned long long)index;
- (void)setDepthResolveTexture:(id)texture slice:(unsigned long long)slice depthPlane:(unsigned long long)plane level:(unsigned long long)level;
- (void)setDepthResolveTexture:(id)texture slice:(unsigned long long)slice depthPlane:(unsigned long long)plane level:(unsigned long long)level yInvert:(BOOL)invert;
- (void)setStencilResolveTexture:(id)texture slice:(unsigned long long)slice depthPlane:(unsigned long long)plane level:(unsigned long long)level;
- (void)setStencilResolveTexture:(id)texture slice:(unsigned long long)slice depthPlane:(unsigned long long)plane level:(unsigned long long)level yInvert:(BOOL)invert;
- (void)dispatchThreadsPerTile:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })tile inRegion:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })region;
- (void)dispatchThreadsPerTile:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })tile inRegion:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })region withRenderTargetArrayIndex:(unsigned int)index;
- (void)useResourceGroup:(id)group usage:(unsigned long long)usage stages:(unsigned long long)stages;
- (void)setObjectIntersectionFunctionTable:(id)table atBufferIndex:(unsigned long long)index;
- (void)setObjectIntersectionFunctionTables:(const id *)tables withBufferRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (void)setObjectAccelerationStructure:(id)structure atBufferIndex:(unsigned long long)index;
- (void)setMeshIntersectionFunctionTable:(id)table atBufferIndex:(unsigned long long)index;
- (void)setMeshIntersectionFunctionTables:(const id *)tables withBufferRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (void)setMeshAccelerationStructure:(id)structure atBufferIndex:(unsigned long long)index;
@end

#endif /* MTLRenderCommandEncoderSPI_Protocol_h */
