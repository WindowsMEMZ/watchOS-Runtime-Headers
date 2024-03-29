//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 341.35.0.0.0
//
#ifndef MTLSimDevice_h
#define MTLSimDevice_h
@import Foundation;

#include "_MTLDevice.h"
#include "MTLDeviceSPI-Protocol.h"

@class MTLArchitecture, MTLGPUBVHBuilder, MTLResourceListPool, MTLSerializer, MTLTargetDeviceArchitecture, NSArray, NSDictionary, NSString;
@protocol OS_dispatch_queue, OS_xpc_object, {MTLSimConnection="_connection"@"NSObject<OS_xpc_object>""_serialQueue"@"NSObject<OS_dispatch_queue>"}, {unordered_map<unsigned int, MTLSimCommandBuffer *, std::hash<unsigned int>, std::equal_to<unsigned int>, std::allocator<std::pair<const unsigned int, MTLSimCommandBuffer *>>>="__table_"{__hash_table<std::__hash_value_type<unsigned int, MTLSimCommandBuffer *>, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, MTLSimCommandBuffer *>, std::hash<unsigned int>, std::equal_to<unsigned int>>, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, MTLSimCommandBuffer *>, std::equal_to<unsigned int>, std::hash<unsigned int>>, std::allocator<std::__hash_value_type<unsigned int, MTLSimCommandBuffer *>>>="__bucket_list_"{unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLSimCommandBuffer *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLSimCommandBuffer *>, void *> *> *>>>="__ptr_"{__compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLSimCommandBuffer *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLSimCommandBuffer *>, void *> *> *>>>="__value_"^^v"__value_"{__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLSimCommandBuffer *>, void *> *> *>>="__data_"{__compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLSimCommandBuffer *>, void *> *> *>>="__value_"Q}}}}"__p1_"{__compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLSimCommandBuffer *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned int, MTLSimCommandBuffer *>, void *>>>="__value_"{__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLSimCommandBuffer *>, void *> *>="__next_"^v}}"__p2_"{__compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, MTLSimCommandBuffer *>, std::hash<unsigned int>, std::equal_to<unsigned int>>>="__value_"Q}"__p3_"{__compressed_pair<float, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, MTLSimCommandBuffer *>, std::equal_to<unsigned int>, std::hash<unsigned int>>>="__value_"f}}};

@interface MTLSimDevice : _MTLDevice<MTLDeviceSPI> {
  /* instance variables */
  unsigned long long _processRef;
  unsigned int _deserializerVersion;
  NSObject<OS_dispatch_queue> *_commandBufferQueue;
  struct unordered_map<unsigned int, MTLSimCommandBuffer *, std::hash<unsigned int>, std::equal_to<unsigned int>, std::allocator<std::pair<const unsigned int, MTLSimCommandBuffer *>>> { struct __hash_table<std::__hash_value_type<unsigned int, MTLSimCommandBuffer *>, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, MTLSimCommandBuffer *>, std::hash<unsigned int>, std::equal_to<unsigned int>>, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, MTLSimCommandBuffer *>, std::equal_to<unsigned int>, std::hash<unsigned int>>, std::allocator<std::__hash_value_type<unsigned int, MTLSimCommandBuffer *>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLSimCommandBuffer *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLSimCommandBuffer *>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLSimCommandBuffer *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLSimCommandBuffer *>, void *> *> *>>> { void * *__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLSimCommandBuffer *>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLSimCommandBuffer *>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLSimCommandBuffer *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned int, MTLSimCommandBuffer *>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, MTLSimCommandBuffer *>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, MTLSimCommandBuffer *>, std::hash<unsigned int>, std::equal_to<unsigned int>>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, MTLSimCommandBuffer *>, std::equal_to<unsigned int>, std::hash<unsigned int>>> { float __value_; } __p3_; } __table_; } _commandBuffers;
  NSObject<MTLDeviceSPI> *_deviceWrapper;
  struct _opaque_pthread_mutex_t { long long __sig; char x[56] __opaque; } _notificationMutex;
  void * _notifications;
  unsigned long long _hostFeatureProfile;
}

@property (readonly) NSObject<OS_xpc_object> *mainConnection;
@property (readonly) NSObject<OS_xpc_object> *resourceConnection;
@property (readonly) NSObject<OS_xpc_object> *compilerConnection;
@property (readonly) MTLSerializer *serializer;
@property (readonly) MTLResourceListPool *resourceListPool;
@property (readonly) BOOL deserializerSupportsSharedEvents;
@property (readonly) BOOL deserializerSupportsSharedTextures;
@property (readonly, nonatomic) BOOL supportsBufferlessClientStorageTexture;
@property (readonly, nonatomic) BOOL supportsComputeMemoryBarrier;
@property (readonly, nonatomic) BOOL supportsRenderMemoryBarrier;
@property (readonly, nonatomic) BOOL supportsPartialRenderMemoryBarrier;
@property (readonly, nonatomic) BOOL supportsArgumentBuffersTier2;
@property (readonly, nonatomic) BOOL supportsReadWriteTextureArgumentsTier2;
@property (readonly, nonatomic) BOOL supportsStreamingCodecSignaling;
@property (readonly, nonatomic) BOOL supportsProgrammableSamplePositions;
@property (readonly, nonatomic) BOOL supportsLargeFramebufferConfigs;
@property (readonly, nonatomic) BOOL supportsCustomBorderColor;
@property (readonly, nonatomic) BOOL supportsSamplerAddressModeClampToHalfBorder;
@property (readonly, nonatomic) BOOL supportsBCTextureCompression;
@property (readonly, nonatomic) BOOL supports3DBCTextures;
@property (readonly, nonatomic) BOOL supportsRGBA10A2Gamma;
@property (readonly, nonatomic) BOOL supportsBGR10A2;
@property (readonly, nonatomic) BOOL supportsPrimitiveRestartOverride;
@property (readonly, nonatomic) BOOL supportsGlobalVariableRelocation;
@property (readonly, nonatomic) BOOL supportsGlobalVariableRelocationRender;
@property (readonly, nonatomic) BOOL supportsGlobalVariableRelocationCompute;
@property (readonly, nonatomic) BOOL supportsTLS;
@property (readonly, nonatomic) BOOL supports32bpcMSAATextures;
@property (readonly, nonatomic) BOOL supports32BitMSAA;
@property (readonly, nonatomic) BOOL supports32BitFloatFiltering;
@property (readonly, nonatomic) BOOL supportsVertexAmplification;
@property (readonly, nonatomic) BOOL supportsPlacementHeaps;
@property (readonly, nonatomic) BOOL supportsOpenCLTextureWriteSwizzles;
@property (readonly, nonatomic) BOOL supportsPullModelInterpolation;
@property (readonly, nonatomic) BOOL supportsInt64;
@property (readonly, nonatomic) BOOL supportsFixedLinePointFillDepthGradient;
@property (readonly, nonatomic) BOOL supportsLateEvalEvent;
@property (readonly, nonatomic) BOOL supportsNonZeroTextureWriteLOD;
@property (readonly, nonatomic) BOOL supportsSharedTextureHandles;
@property (readonly, nonatomic) BOOL supportsBufferPrefetchStatistics;
@property (readonly, nonatomic) BOOL supportsLimitedYUVFormats;
@property (readonly, nonatomic) BOOL supportsNonPrivateDepthStencilTextures;
@property (readonly, nonatomic) BOOL supportsNonPrivateMSAATextures;
@property (readonly, nonatomic) BOOL supportsSharedStorageHeapResources;
@property (readonly, nonatomic) BOOL supportsSharedStorageTextures;
@property (readonly, nonatomic) BOOL supportsLinearTextureFromSharedBuffer;
@property (readonly, nonatomic) BOOL supportsPipelineLibraries;
@property (readonly, nonatomic) BOOL supportsFragmentOnlyEncoders;
@property (readonly, nonatomic) BOOL supportsBufferWithIOSurface;
@property (readonly, nonatomic) BOOL supportsProgrammableBlending;
@property (readonly, nonatomic) BOOL supportsRenderToLinearTextures;
@property (readonly, nonatomic) BOOL supportsMemorylessRenderTargets;
@property (readonly, nonatomic) BOOL supportsFastMathInfNaNPropagation;
@property (readonly, nonatomic) BOOL supportsInvariantVertexPosition;
@property (readonly, nonatomic) BOOL supportsShaderLODAverage;
@property (readonly, nonatomic) BOOL supportsRelaxedTextureViewRequirements;
@property (readonly, nonatomic) BOOL supportsSeparateDepthStencil;
@property (readonly, nonatomic) BOOL supportsGPUStatistics;
@property (readonly, nonatomic) BOOL supportsCompressedTextureViewSPI;
@property (readonly, nonatomic) BOOL supportsRenderTargetTextureRotation;
@property (readonly, nonatomic) BOOL supportsDynamicControlPointCount;
@property (readonly, nonatomic) BOOL supportsIABHashForTools;
@property (readonly, nonatomic) BOOL supportsBinaryArchives;
@property (readonly, nonatomic) BOOL supportsBinaryLibraries;
@property (readonly, nonatomic) BOOL supportsDeadlineProfile;
@property (readonly, nonatomic) BOOL supportsFillTexture;
@property (readonly, nonatomic) BOOL supportsSetThreadgroupPackingDisabled;
@property (readonly, nonatomic) BOOL supportsASTCTextureCompression;
@property (readonly, nonatomic) BOOL supportsExtendedYUVFormats;
@property (readonly, nonatomic) BOOL supportsPublicXR10Formats;
@property (readonly, nonatomic) BOOL supportsSRGBwrites;
@property (readonly, nonatomic) BOOL supportsDepthClipMode;
@property (readonly, nonatomic) BOOL supportsPacked32TextureBufferWrites;
@property (readonly, nonatomic) BOOL supports3DASTCTextures;
@property (readonly, nonatomic) BOOL supportsExtendedXR10Formats;
@property (readonly, nonatomic) BOOL supportsFragmentBufferWrites;
@property (readonly, nonatomic) BOOL supportsCountingOcclusionQuery;
@property (readonly, nonatomic) BOOL supportsBaseVertexInstanceDrawing;
@property (readonly, nonatomic) BOOL supportsIndirectDrawAndDispatch;
@property (readonly, nonatomic) BOOL supportsTessellation;
@property (readonly, nonatomic) BOOL supportsReadWriteBufferArguments;
@property (readonly, nonatomic) BOOL supportsArrayOfTextures;
@property (readonly, nonatomic) BOOL supportsArrayOfSamplers;
@property (readonly, nonatomic) BOOL supportsCombinedMSAAStoreAndResolveAction;
@property (readonly, nonatomic) BOOL supportsMutableTier1ArgumentBuffers;
@property (readonly, nonatomic) BOOL supportsSamplerCompareFunction;
@property (readonly, nonatomic) BOOL supportsMSAADepthResolve;
@property (readonly, nonatomic) BOOL supportsMSAAStencilResolve;
@property (readonly, nonatomic) BOOL supportsMSAADepthResolveFilter;
@property (readonly, nonatomic) BOOL supportsGFXIndirectCommandBuffers;
@property (readonly, nonatomic) BOOL supportsCMPIndirectCommandBuffers;
@property (readonly, nonatomic) BOOL supportsIndirectStageInRegion;
@property (readonly, nonatomic) BOOL supportsIndirectTextures;
@property (readonly, nonatomic) BOOL supportsNorm16BCubicFiltering;
@property (readonly, nonatomic) BOOL supportsTextureOutOfBoundsReads;
@property (readonly, nonatomic) BOOL supportsTextureSwizzle;
@property (readonly, nonatomic) BOOL supportsAlphaYUVFormats;
@property (readonly, nonatomic) BOOL supportsMemoryOrderAtomics;
@property (readonly, nonatomic) BOOL supportsQuadGroup;
@property (readonly, nonatomic) BOOL supportsRenderTextureWrites;
@property (readonly, nonatomic) BOOL supportsImageBlocks;
@property (readonly, nonatomic) BOOL supportsTileShaders;
@property (readonly, nonatomic) BOOL supportsImageBlockSampleCoverageControl;
@property (readonly, nonatomic) BOOL supportsNativeHardwareFP16;
@property (readonly, nonatomic) BOOL supportsPostDepthCoverage;
@property (readonly, nonatomic) BOOL supportsMipLevelsSmallerThanBlockSize;
@property (readonly, nonatomic) BOOL supportsNonUniformThreadgroupSize;
@property (readonly, nonatomic) BOOL supportsReadWriteTextureArguments;
@property (readonly, nonatomic) BOOL supportsReadWriteTextureCubeArguments;
@property (readonly, nonatomic) BOOL supportsTextureCubeArray;
@property (readonly, nonatomic) BOOL supportsQuadShufflesAndBroadcast;
@property (readonly, nonatomic) BOOL supportsConcurrentComputeDispatch;
@property (readonly, nonatomic) BOOL supportsRenderPassWithoutRenderTarget;
@property (readonly, nonatomic) BOOL supportsRasterOrderGroups;
@property (readonly, nonatomic) BOOL supportsRasterOrderGroupsColorAttachment;
@property (readonly, nonatomic) BOOL supportsDynamicAttributeStride;
@property (readonly, nonatomic) BOOL supportsLinearTexture2DArray;
@property (readonly, nonatomic) BOOL supportsNonSquareTileShaders;
@property (readonly, nonatomic) BOOL supportsSeparateVisibilityAndShadingRate;
@property (readonly, nonatomic) BOOL supports2DLinearTexArraySPI;
@property (readonly, nonatomic) BOOL supportsLayeredRendering;
@property (readonly, nonatomic) BOOL supportsViewportAndScissorArray;
@property (readonly, nonatomic) BOOL supportsIndirectTessellation;
@property (readonly, nonatomic) BOOL supportsMSAAStencilResolveFilter;
@property (readonly, nonatomic) BOOL supportsStencilFeedback;
@property (readonly, nonatomic) BOOL supportsFP32TessFactors;
@property (readonly, nonatomic) BOOL supportsUnalignedVertexFetch;
@property (readonly, nonatomic) BOOL supportsExtendedVertexFormats;
@property (readonly, nonatomic) BOOL supportsSIMDGroup;
@property (readonly, nonatomic) BOOL supportsShaderMinLODClamp;
@property (readonly, nonatomic) BOOL supportsSIMDShufflesAndBroadcast;
@property (readonly, nonatomic) BOOL supportsWritableArrayOfTextures;
@property (readonly, nonatomic) BOOL supportsVariableRateRasterization;
@property (readonly, nonatomic) BOOL supportsYCBCRFormats;
@property (readonly, nonatomic) BOOL supportsYCBCRFormatsPQ;
@property (readonly, nonatomic) BOOL supportsYCBCRFormats12;
@property (readonly, nonatomic) BOOL supportsYCBCRFormatsXR;
@property (readonly, nonatomic) BOOL supportsASTCHDRTextureCompression;
@property (readonly, nonatomic) BOOL supportsSparseTextures;
@property (readonly, nonatomic) BOOL supportsSparseHeaps;
@property (readonly, nonatomic) BOOL supportsIndirectWritableTextures;
@property (readonly, nonatomic) BOOL supportsFunctionPointers;
@property (readonly, nonatomic) BOOL supportsDynamicLibraries;
@property (readonly, nonatomic) BOOL supportsStatefulDynamicLibraries;
@property (readonly, nonatomic) BOOL supportsRenderDynamicLibraries;
@property (readonly, nonatomic) BOOL supportsFunctionPointersFromRender;
@property (readonly, nonatomic) BOOL supportsSharedFunctionTables;
@property (readonly, nonatomic) BOOL supportsRaytracingFromRender;
@property (readonly, nonatomic) BOOL supportsPrimitiveMotionBlur;
@property (readonly, nonatomic) BOOL supportsRayTracingExtendedVertexFormats;
@property (readonly, nonatomic) BOOL supportsHeapAccelerationStructureAllocation;
@property (readonly, nonatomic) BOOL supportsRayTracingPerPrimitiveData;
@property (readonly, nonatomic) BOOL supportsRayTracingTraversalMetrics;
@property (readonly, nonatomic) BOOL supportsRayTracingBuffersFromTables;
@property (readonly, nonatomic) BOOL supportsRayTracingAccelerationStructureCPUDeserialization;
@property (readonly, nonatomic) BOOL supportsRayTracingMultiLevelInstancing;
@property (readonly, nonatomic) BOOL supportsRayTracingIndirectInstanceAccelerationStructureBuild;
@property (readonly, nonatomic) BOOL supportsRayTracingGPUTableUpdateBuffers;
@property (readonly, nonatomic) BOOL supportsRayTracingCurves;
@property (readonly, nonatomic) BOOL supportsShaderBarycentricCoordinates;
@property (readonly, nonatomic) BOOL supportsBlackOrWhiteSamplerBorderColors;
@property (readonly, nonatomic) BOOL supportsMirrorClampToEdgeSamplerMode;
@property (readonly, nonatomic) BOOL supportsSIMDReduction;
@property (readonly, nonatomic) BOOL supportsDepthClipModeClampExtended;
@property (readonly, nonatomic) BOOL supportsTexture2DMultisampleArray;
@property (readonly, nonatomic) BOOL supportsForceSeamsOnCubemaps;
@property (readonly, nonatomic) BOOL supportsFloat16BCubicFiltering;
@property (readonly, nonatomic) BOOL supportsFloat16InfNanFiltering;
@property (readonly, nonatomic) BOOL supportsRTZRounding;
@property (readonly, nonatomic) BOOL supportsAnisoSampleFix;
@property (readonly, nonatomic) BOOL supportsYCBCRPackedFormatsPQ;
@property (readonly, nonatomic) BOOL supportsYCBCRPackedFormats12;
@property (readonly, nonatomic) BOOL supportsYCBCRPackedFormatsXR;
@property (readonly, nonatomic) BOOL supportsBufferBoundsChecking;
@property (readonly, nonatomic) BOOL supportsForkJoin;
@property (readonly, nonatomic) BOOL supportsDevicePartitioning;
@property (readonly, nonatomic) BOOL supportsComputeCompressedTextureWrite;
@property (readonly, nonatomic) BOOL supportsSIMDGroupMatrix;
@property (readonly, nonatomic) BOOL supportsInterchangeTiled;
@property (readonly, nonatomic) BOOL supportsQuadReduction;
@property (readonly, nonatomic) BOOL supportsSIMDShuffleAndFill;
@property (readonly, nonatomic) BOOL supportsBfloat16Format;
@property (readonly, nonatomic) BOOL supportsSparseDepthAttachments;
@property (readonly, nonatomic) BOOL supportsLossyCompression;
@property (readonly, nonatomic) BOOL supportsMeshShaders;
@property (readonly, nonatomic) BOOL supportsFunctionPointersFromMesh;
@property (readonly, nonatomic) BOOL supportsMeshShadersInICB;
@property (readonly, nonatomic) BOOL supportsBfloat16Buffers;
@property (readonly, nonatomic) BOOL supportsCommandBufferJump;
@property (readonly, nonatomic) BOOL supportsStackOverflowErrorCode;
@property (readonly, nonatomic) BOOL supportsRayTracingICBs;
@property (readonly, nonatomic) BOOL supportsExplicitVisibilityGroups;
@property (readonly) unsigned long long bufferRobustnessSupport;
@property (readonly) unsigned long long deviceCreationFlags;
@property BOOL gpuAssertionsEnabled;
@property BOOL writableHeapsEnabled;
@property (nonatomic) unsigned long long commandBufferErrorOptions;
@property (readonly) BOOL BCTextureCompressionSupported;
@property (readonly) const struct MTLTargetDeviceArch { unsigned long long x0; unsigned int x1; char * x2; } * targetDeviceInfo;
@property (readonly) MTLTargetDeviceArchitecture *targetDeviceArchitecture;
@property BOOL shaderDebugInfoCaching;
@property (readonly) unsigned long long halfFPConfig;
@property (readonly) unsigned long long singleFPConfig;
@property (readonly) unsigned long long doubleFPConfig;
@property (nonatomic) BOOL metalAssertionsEnabled;
@property (readonly) unsigned long long featureProfile;
@property (readonly) unsigned long long simulatorHostFeatureProfile;
@property (readonly) const struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned int x24; unsigned int x25; float x26; float x27; unsigned int x28; unsigned int x29; unsigned int x30; unsigned int x31; unsigned int x32; unsigned int x33; unsigned int x34; unsigned int x35; unsigned int x36; unsigned int x37; unsigned int x38; unsigned int x39; unsigned int x40; unsigned int x41; unsigned int x42; unsigned int x43; unsigned int x44; unsigned int x45; unsigned int x46; unsigned int x47; unsigned int x48; unsigned int x49; unsigned int x50; unsigned int x51; unsigned int x52; unsigned int x53; unsigned int x54; unsigned int x55; unsigned int x56; unsigned int x57; unsigned int x58; unsigned int x59; unsigned int x60; unsigned int x61; unsigned int x62; unsigned long long x63; } * limits;
@property (readonly) unsigned long long maxFramebufferStorageBits;
@property (readonly) unsigned long long linearTextureArrayAlignmentBytes;
@property (readonly) unsigned long long linearTextureArrayAlignmentSlice;
@property (readonly) unsigned long long maxTileBuffers;
@property (readonly) unsigned long long maxTileTextures;
@property (readonly) unsigned long long maxTileSamplers;
@property (readonly) unsigned long long maxTileInlineDataSize;
@property (readonly) unsigned long long minTilePixels;
@property (readonly) unsigned long long maxColorAttachments;
@property (readonly) unsigned long long maxVertexAttributes;
@property (readonly) unsigned long long maxVertexBuffers;
@property (readonly) unsigned long long maxVertexTextures;
@property (readonly) unsigned long long maxVertexSamplers;
@property (readonly) unsigned long long maxVertexInlineDataSize;
@property (readonly) unsigned long long maxInterpolants;
@property (readonly) unsigned long long maxFragmentBuffers;
@property (readonly) unsigned long long maxFragmentTextures;
@property (readonly) unsigned long long maxFragmentSamplers;
@property (readonly) unsigned long long maxFragmentInlineDataSize;
@property (readonly) unsigned long long maxComputeBuffers;
@property (readonly) unsigned long long maxComputeTextures;
@property (readonly) unsigned long long maxComputeSamplers;
@property (readonly) unsigned long long maxComputeInlineDataSize;
@property (readonly) unsigned long long maxComputeLocalMemorySizes;
@property (readonly) unsigned long long maxTotalComputeThreadsPerThreadgroup;
@property (readonly) unsigned long long maxComputeThreadgroupMemory;
@property (readonly) float maxLineWidth;
@property (readonly) float maxPointSize;
@property (readonly) unsigned long long maxVisibilityQueryOffset;
@property (readonly) unsigned long long minConstantBufferAlignmentBytes;
@property (readonly) unsigned long long minBufferNoCopyAlignmentBytes;
@property (readonly) unsigned long long maxTextureWidth1D;
@property (readonly) unsigned long long maxTextureWidth2D;
@property (readonly) unsigned long long maxTextureHeight2D;
@property (readonly) unsigned long long maxTextureWidth3D;
@property (readonly) unsigned long long maxTextureHeight3D;
@property (readonly) unsigned long long maxTextureDepth3D;
@property (readonly) unsigned long long maxTextureDimensionCube;
@property (readonly) unsigned long long maxTextureLayers;
@property (readonly) unsigned long long linearTextureAlignmentBytes;
@property (readonly) unsigned long long iosurfaceTextureAlignmentBytes;
@property (readonly) unsigned long long iosurfaceReadOnlyTextureAlignmentBytes;
@property (readonly) unsigned long long deviceLinearTextureAlignmentBytes;
@property (readonly) unsigned long long deviceLinearReadOnlyTextureAlignmentBytes;
@property (readonly) unsigned long long maxFunctionConstantIndices;
@property (readonly) unsigned long long maxComputeThreadgroupMemoryAlignmentBytes;
@property (readonly) unsigned long long maxInterpolatedComponents;
@property (readonly) unsigned long long maxTessellationFactor;
@property (readonly) unsigned long long maxIndirectBuffers;
@property (readonly) unsigned long long maxIndirectTextures;
@property (readonly) unsigned long long maxIndirectSamplers;
@property (readonly) unsigned long long maxIndirectSamplersPerDevice;
@property (readonly) unsigned long long maxFenceInstances;
@property (readonly) unsigned long long maxViewportCount;
@property (readonly) unsigned long long maxCustomSamplePositions;
@property (readonly) unsigned long long maxVertexAmplificationFactor;
@property (readonly) unsigned long long maxVertexAmplificationCount;
@property (readonly) unsigned long long maxTextureBufferWidth;
@property (readonly) unsigned long long maxComputeAttributes;
@property (readonly) unsigned long long maxPredicatedNestingDepth;
@property (readonly) unsigned long long maxAccelerationStructureLevels;
@property (readonly) unsigned long long maxConstantBufferArguments;
@property (readonly) BOOL supportPriorityBand;
@property (readonly) unsigned long long sharedMemorySize;
@property (readonly) unsigned long long dedicatedMemorySize;
@property (readonly) struct IndirectArgumentBufferCapabilities { unsigned int x0 :1; unsigned int x1 :1; unsigned int x2 :1; unsigned int x3 :29; } indirectArgumentBufferCapabilities;
@property (readonly) BOOL quadDataSharingSupported;
@property (readonly) unsigned long long sparseTexturesSupport;
@property (readonly) BOOL float32FilteringSupported;
@property (readonly) BOOL msaa32bSupported;
@property (readonly) BOOL RTZRoundingSupported;
@property (readonly) long long defaultTextureWriteRoundingMode;
@property (readonly) BOOL AnisoSampleFixSupported;
@property (readonly) BOOL FixedLinePointFillDepthGradientSupported;
@property (readonly) BOOL largeMRTSupported;
@property (readonly) unsigned long long maxRasterizationRateLayerCount;
@property (readonly) BOOL RGB10A2GammaSupported;
@property (readonly) BOOL CustomBorderColorSupported;
@property (readonly) BOOL ClampToHalfBorderSupported;
@property (readonly) BOOL placementHeapSupported;
@property (readonly) MTLGPUBVHBuilder *GPUBVHBuilder;
@property (readonly) BOOL requiresRaytracingEmulation;
@property (copy, nonatomic) NSDictionary *pluginData;
@property (readonly) unsigned long long maxAccelerationStructureTraversalDepth;
@property (readonly) BOOL requiresBFloat16Emulation;
@property (readonly) NSString *name;
@property (readonly) unsigned long long registryID;
@property (readonly) MTLArchitecture *architecture;
@property (readonly) struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } maxThreadsPerThreadgroup;
@property (readonly) BOOL lowPower;
@property (readonly) BOOL headless;
@property (readonly) BOOL removable;
@property (readonly) BOOL hasUnifiedMemory;
@property (readonly) unsigned long long recommendedMaxWorkingSetSize;
@property (readonly) BOOL depth24Stencil8PixelFormatSupported;
@property (readonly) unsigned long long readWriteTextureSupport;
@property (readonly) unsigned long long argumentBuffersSupport;
@property (readonly) BOOL rasterOrderGroupsSupported;
@property (readonly) BOOL barycentricCoordsSupported;
@property (readonly) unsigned long long currentAllocatedSize;
@property (readonly) unsigned long long maxThreadgroupMemoryLength;
@property (readonly) unsigned long long maxArgumentBufferSamplerCount;
@property (readonly) BOOL programmableSamplePositionsSupported;
@property (readonly) unsigned long long sparseTileSizeInBytes;
@property (readonly) unsigned long long maxBufferLength;
@property (readonly) NSArray *counterSets;
@property (readonly) BOOL supportsRaytracing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (BOOL)supportsVertexAmplificationCount:(unsigned long long)count;
- (id)init;
- (void)dealloc;
- (void)_setDeviceWrapper:(id)wrapper;
- (id)_deviceWrapper;
- (id)compiler;
- (unsigned int)getNewResourceID;
- (struct { unsigned long long x0; unsigned long long x1; })heapBufferSizeAndAlignWithLength:(unsigned long long)length options:(unsigned long long)options;
- (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })sparseTileSizeWithTextureType:(unsigned long long)type pixelFormat:(unsigned long long)format sampleCount:(unsigned long long)count;
- (struct { unsigned long long x0; unsigned long long x1; })heapTextureSizeAndAlignWithDescriptor:(id)descriptor;
- (id)commandBufferForReference:(unsigned int)reference;
- (unsigned int)registerCommandBuffer:(id)buffer;
- (void)releaseCommandBufferRef:(unsigned int)ref;
- (id)newBufferWithLength:(unsigned long long)length options:(unsigned long long)options pointer:(void *)pointer copyBytes:(BOOL)bytes deallocator:(id /* block */)deallocator;
- (id)newBufferWithBytes:(const void *)bytes length:(unsigned long long)length options:(unsigned long long)options;
- (id)newBufferWithBytesNoCopy:(void *)copy length:(unsigned long long)length options:(unsigned long long)options deallocator:(id /* block */)deallocator;
- (id)newBufferWithLength:(unsigned long long)length options:(unsigned long long)options;
- (id)newDepthStencilStateWithDescriptor:(id)descriptor;
- (id)newFence;
- (id)newHeapWithDescriptor:(id)descriptor;
- (id)newIndirectCommandBufferWithDescriptor:(id)descriptor maxCommandCount:(unsigned long long)count options:(unsigned long long)options;
- (void)registerEventNotification:(unsigned int)notification listener:(id)listener event:(id)event value:(unsigned long long)value block:(id /* block */)block;
- (void)dispatchNotificationWithReference:(unsigned int)reference;
- (id)newSamplerStateWithDescriptor:(id)descriptor;
- (id)_fixUpSwizzleForTexture:(id)texture key:(unsigned int)key;
- (id)newTextureWithDescriptor:(id)descriptor;
- (id)newTextureWithDescriptor:(id)descriptor iosurface:(struct __IOSurface *)iosurface plane:(unsigned long long)plane;
- (void)registerViewTexture:(id)texture baseTextureView:(id)view;
- (id)wrapRenderState:(id)state descriptor:(id)descriptor;
- (void *)fragmentFunctionKeyWithRenderPipelineDescriptor:(id)descriptor options:(unsigned long long)options previousStateVariant:(id)variant fragmentKeySize:(unsigned long long *)size;
- (void *)vertexFunctionKeyWithRenderPipelineDescriptor:(id)descriptor options:(unsigned long long)options nextStageVariant:(id)variant vertexKeySize:(unsigned long long *)size;
- (void)freeFragmentFunctionKey:(void *)key fragmentKeySize:(unsigned long long)size;
- (void)freeVertexFunctionKey:(void *)key vertexKeySize:(unsigned long long)size;
- (id)reportLeaks;
- (id)newFunctionVariantWithCompilerOutput:(id)output functionType:(unsigned long long)type;
- (id)newFragmentVariantWithCompilerOutput:(id)output pipelineStatisticsOutput:(id)output;
- (id)newVertexVariantWithCompilerOutput:(id)output pipelineStatisticsOutput:(id)output;
- (id)newRenderPipelineWithDescriptor:(id)descriptor vertexVariant:(id)variant fragmentVariant:(id)variant errorMessage:(id *)message;
- (struct { unsigned int x0 :1; unsigned int x1 :1; unsigned int x2 :1; unsigned int x3 :1; unsigned int x4 :1; unsigned int x5 :1; unsigned int x6 :1; unsigned int x7 :1; unsigned int x8 :1; unsigned int x9 :1; unsigned int x10 :1; unsigned int x11 :53; })pipelineFlagsWithVertexVariant:(id)variant fragmentVariant:(id)variant;
- (id)pipelinePerformanceStatisticsWithVertexVariant:(id)variant fragmentVariant:(id)variant vertexCompileTimeOutput:(id)output fragmentCompileTimeOutput:(id)output;
- (id)pipelinePerformanceStatisticsWithComputeVariant:(id)variant compileTimeOutput:(id)output;
- (id)wrapComputeState:(id)state descriptor:(id)descriptor;
- (id)newComputeVariantWithCompilerOutput:(id)output pipelineStatisticsOutput:(id)output;
- (id)newComputePipelineWithDescriptor:(id)descriptor variant:(id)variant errorMessage:(id *)message;
- (id)familyName;
- (id)newIndirectArgumentBufferLayoutWithStructType:(id)type;
- (id)newArgumentEncoderWithLayout:(id)layout;
- (id)newIndirectCommandBufferWithDescriptor:(id)descriptor maxCount:(unsigned long long)count options:(unsigned long long)options;
- (id)newIndirectComputeCommandEncoderWithBuffer:(id)buffer;
- (id)newIndirectRenderCommandEncoderWithBuffer:(id)buffer;
- (id)newTiledTextureWithBytesNoCopy:(void *)copy length:(unsigned long long)length deallocator:(id /* block */)deallocator descriptor:(id)descriptor offset:(unsigned long long)offset bytesPerRow:(unsigned long long)row;
- (id)newTiledTextureWithBytesNoCopy:(void *)copy length:(unsigned long long)length descriptor:(id)descriptor offset:(unsigned long long)offset bytesPerRow:(unsigned long long)row;
- (id)productName;
- (int)llvmVersion;
- (BOOL)supportsSampleCount:(unsigned long long)count;
- (id)vendorName;
- (id)newCommandQueueWithDescriptor:(id)descriptor;
- (BOOL)setResourcesPurgeableState:(id *)state newState:(unsigned long long)state oldState:(unsigned long long *)state count:(int)count;
- (id)newBufferWithIOSurface:(struct __IOSurface *)iosurface;
- (unsigned long long)minimumLinearTextureAlignmentForPixelFormat:(unsigned long long)format;
- (unsigned long long)minimumTextureBufferAlignmentForPixelFormat:(unsigned long long)format;
- (void)newRenderPipelineStateWithTileDescriptor:(id)descriptor options:(unsigned long long)options completionHandler:(id /* block */)handler;
- (id)newRenderPipelineStateWithTileDescriptor:(id)descriptor options:(unsigned long long)options reflection:(id *)reflection error:(id *)error;
- (id)newRenderPipelineStateWithMeshDescriptor:(id)descriptor error:(id *)error;
- (id)newRenderPipelineStateWithMeshDescriptor:(id)descriptor options:(unsigned long long)options reflection:(id *)reflection error:(id *)error;
- (void)newRenderPipelineStateWithMeshDescriptor:(id)descriptor completionHandler:(id /* block */)handler;
- (void)newRenderPipelineStateWithMeshDescriptor:(id)descriptor options:(unsigned long long)options completionHandler:(id /* block */)handler;
- (BOOL)supportsRasterizationRateMapWithLayerCount:(unsigned long long)count;
- (id)newRasterizationRateMapWithDescriptor:(id)descriptor;
- (id)newEvent;
- (id)newSharedEvent;
- (id)newEventWithOptions:(long long)options;
- (id)newSharedEventWithOptions:(long long)options;
- (id)newSharedEventWithHandle:(id)handle;
- (id)newSharedEventWithMachPort:(unsigned int)port;
- (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })sparseTileSizeWithTextureType:(unsigned long long)type pixelFormat:(unsigned long long)format sampleCount:(unsigned long long)count sparsePageSize:(long long)size;
- (id)newVisibleFunctionTableWithDescriptor:(id)descriptor;
- (id)newIntersectionFunctionTableWithDescriptor:(id)descriptor;
- (BOOL)isHeadless;
- (BOOL)isLowPower;
- (BOOL)isRemovable;
- (BOOL)areProgrammableSamplePositionsSupported;
- (BOOL)isDepth24Stencil8PixelFormatSupported;
@end

#endif /* MTLSimDevice_h */
