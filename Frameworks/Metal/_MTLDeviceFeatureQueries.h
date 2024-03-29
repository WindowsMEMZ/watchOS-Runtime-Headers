//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 341.35.0.0.0
//
#ifndef _MTLDeviceFeatureQueries_h
#define _MTLDeviceFeatureQueries_h
@import Foundation;

#include "MTLDeviceFeatureQueries.h"
#include "MTLDeviceSPI-Protocol.h"

@interface _MTLDeviceFeatureQueries : MTLDeviceFeatureQueries {
  /* instance variables */
  struct { NSString *name; long long requirement; BOOL supported; } _featureInfo[185];
  BOOL isAGX;
  NSObject<MTLDeviceSPI> *_device;
}

/* instance methods */
- (void)validate;
- (id)initWithDevice:(id)device;
- (BOOL)familySupportsBufferlessClientStorageTexture;
- (BOOL)familySupportsComputeMemoryBarrier;
- (BOOL)familySupportsRenderMemoryBarrier;
- (BOOL)familySupportsPartialRenderMemoryBarrier;
- (BOOL)familySupportsArgumentBuffersTier2;
- (BOOL)familySupportsReadWriteTextureArgumentsTier2;
- (BOOL)familySupportsStreamingCodecSignaling;
- (BOOL)familySupportsProgrammableSamplePositions;
- (BOOL)familySupportsLargeFramebufferConfigs;
- (BOOL)familySupportsCustomBorderColor;
- (BOOL)familySupportsSamplerAddressModeClampToHalfBorder;
- (BOOL)familySupportsBCTextureCompression;
- (BOOL)familySupports3DBCTextures;
- (BOOL)familySupportsRGBA10A2Gamma;
- (BOOL)familySupportsBGR10A2;
- (BOOL)familySupportsPrimitiveRestartOverride;
- (BOOL)familySupportsGlobalVariableRelocation;
- (BOOL)familySupportsGlobalVariableRelocationRender;
- (BOOL)familySupportsGlobalVariableRelocationCompute;
- (BOOL)familySupportsTLS;
- (BOOL)familySupports32bpcMSAATextures;
- (BOOL)familySupports32BitMSAA;
- (BOOL)familySupports32BitFloatFiltering;
- (BOOL)familySupportsVertexAmplification;
- (BOOL)familySupportsPlacementHeaps;
- (BOOL)familySupportsOpenCLTextureWriteSwizzles;
- (BOOL)familySupportsPullModelInterpolation;
- (BOOL)familySupportsInt64;
- (BOOL)familySupportsFixedLinePointFillDepthGradient;
- (BOOL)familySupportsLateEvalEvent;
- (BOOL)familySupportsNonZeroTextureWriteLOD;
- (BOOL)familySupportsSharedTextureHandles;
- (BOOL)familySupportsBufferPrefetchStatistics;
- (BOOL)familySupportsLimitedYUVFormats;
- (BOOL)familySupportsNonPrivateDepthStencilTextures;
- (BOOL)familySupportsNonPrivateMSAATextures;
- (BOOL)familySupportsSharedStorageHeapResources;
- (BOOL)familySupportsSharedStorageTextures;
- (BOOL)familySupportsLinearTextureFromSharedBuffer;
- (BOOL)familySupportsPipelineLibraries;
- (BOOL)familySupportsFragmentOnlyEncoders;
- (BOOL)familySupportsBufferWithIOSurface;
- (BOOL)familySupportsProgrammableBlending;
- (BOOL)familySupportsRenderToLinearTextures;
- (BOOL)familySupportsMemorylessRenderTargets;
- (BOOL)familySupportsFastMathInfNaNPropagation;
- (BOOL)familySupportsInvariantVertexPosition;
- (BOOL)familySupportsShaderLODAverage;
- (BOOL)familySupportsRelaxedTextureViewRequirements;
- (BOOL)familySupportsSeparateDepthStencil;
- (BOOL)familySupportsGPUStatistics;
- (BOOL)familySupportsCompressedTextureViewSPI;
- (BOOL)familySupportsRenderTargetTextureRotation;
- (BOOL)familySupportsDynamicControlPointCount;
- (BOOL)familySupportsIABHashForTools;
- (BOOL)familySupportsBinaryArchives;
- (BOOL)familySupportsBinaryLibraries;
- (BOOL)familySupportsDeadlineProfile;
- (BOOL)familySupportsFillTexture;
- (BOOL)familySupportsSetThreadgroupPackingDisabled;
- (BOOL)familySupportsASTCTextureCompression;
- (BOOL)familySupportsExtendedYUVFormats;
- (BOOL)familySupportsPublicXR10Formats;
- (BOOL)familySupportsSRGBwrites;
- (BOOL)familySupportsDepthClipMode;
- (BOOL)familySupportsPacked32TextureBufferWrites;
- (BOOL)familySupports3DASTCTextures;
- (BOOL)familySupportsExtendedXR10Formats;
- (BOOL)familySupportsFragmentBufferWrites;
- (BOOL)familySupportsCountingOcclusionQuery;
- (BOOL)familySupportsBaseVertexInstanceDrawing;
- (BOOL)familySupportsIndirectDrawAndDispatch;
- (BOOL)familySupportsTessellation;
- (BOOL)familySupportsReadWriteBufferArguments;
- (BOOL)familySupportsArrayOfTextures;
- (BOOL)familySupportsArrayOfSamplers;
- (BOOL)familySupportsCombinedMSAAStoreAndResolveAction;
- (BOOL)familySupportsMutableTier1ArgumentBuffers;
- (BOOL)familySupportsSamplerCompareFunction;
- (BOOL)familySupportsMSAADepthResolve;
- (BOOL)familySupportsMSAAStencilResolve;
- (BOOL)familySupportsMSAADepthResolveFilter;
- (BOOL)familySupportsGFXIndirectCommandBuffers;
- (BOOL)familySupportsCMPIndirectCommandBuffers;
- (BOOL)familySupportsIndirectStageInRegion;
- (BOOL)familySupportsIndirectTextures;
- (BOOL)familySupportsNorm16BCubicFiltering;
- (BOOL)familySupportsTextureOutOfBoundsReads;
- (BOOL)familySupportsTextureSwizzle;
- (BOOL)familySupportsAlphaYUVFormats;
- (BOOL)familySupportsMemoryOrderAtomics;
- (BOOL)familySupportsQuadGroup;
- (BOOL)familySupportsRenderTextureWrites;
- (BOOL)familySupportsImageBlocks;
- (BOOL)familySupportsTileShaders;
- (BOOL)familySupportsImageBlockSampleCoverageControl;
- (BOOL)familySupportsNativeHardwareFP16;
- (BOOL)familySupportsPostDepthCoverage;
- (BOOL)familySupportsMipLevelsSmallerThanBlockSize;
- (BOOL)familySupportsNonUniformThreadgroupSize;
- (BOOL)familySupportsReadWriteTextureArguments;
- (BOOL)familySupportsReadWriteTextureCubeArguments;
- (BOOL)familySupportsTextureCubeArray;
- (BOOL)familySupportsQuadShufflesAndBroadcast;
- (BOOL)familySupportsConcurrentComputeDispatch;
- (BOOL)familySupportsRenderPassWithoutRenderTarget;
- (BOOL)familySupportsRasterOrderGroups;
- (BOOL)familySupportsRasterOrderGroupsColorAttachment;
- (BOOL)familySupportsDynamicAttributeStride;
- (BOOL)familySupportsLinearTexture2DArray;
- (BOOL)familySupportsNonSquareTileShaders;
- (BOOL)familySupportsSeparateVisibilityAndShadingRate;
- (BOOL)familySupports2DLinearTexArraySPI;
- (BOOL)familySupportsLayeredRendering;
- (BOOL)familySupportsViewportAndScissorArray;
- (BOOL)familySupportsIndirectTessellation;
- (BOOL)familySupportsMSAAStencilResolveFilter;
- (BOOL)familySupportsStencilFeedback;
- (BOOL)familySupportsFP32TessFactors;
- (BOOL)familySupportsUnalignedVertexFetch;
- (BOOL)familySupportsExtendedVertexFormats;
- (BOOL)familySupportsSIMDGroup;
- (BOOL)familySupportsShaderMinLODClamp;
- (BOOL)familySupportsSIMDShufflesAndBroadcast;
- (BOOL)familySupportsWritableArrayOfTextures;
- (BOOL)familySupportsVariableRateRasterization;
- (BOOL)familySupportsYCBCRFormats;
- (BOOL)familySupportsYCBCRFormatsPQ;
- (BOOL)familySupportsYCBCRFormats12;
- (BOOL)familySupportsYCBCRFormatsXR;
- (BOOL)familySupportsASTCHDRTextureCompression;
- (BOOL)familySupportsSparseTextures;
- (BOOL)familySupportsSparseHeaps;
- (BOOL)familySupportsIndirectWritableTextures;
- (BOOL)familySupportsFunctionPointers;
- (BOOL)familySupportsDynamicLibraries;
- (BOOL)familySupportsStatefulDynamicLibraries;
- (BOOL)familySupportsRenderDynamicLibraries;
- (BOOL)familySupportsFunctionPointersFromRender;
- (BOOL)familySupportsSharedFunctionTables;
- (BOOL)familySupportsRaytracingFromRender;
- (BOOL)familySupportsPrimitiveMotionBlur;
- (BOOL)familySupportsRayTracingExtendedVertexFormats;
- (BOOL)familySupportsHeapAccelerationStructureAllocation;
- (BOOL)familySupportsRayTracingPerPrimitiveData;
- (BOOL)familySupportsRayTracingTraversalMetrics;
- (BOOL)familySupportsRayTracingBuffersFromTables;
- (BOOL)familySupportsRayTracingAccelerationStructureCPUDeserialization;
- (BOOL)familySupportsRayTracingMultiLevelInstancing;
- (BOOL)familySupportsRayTracingIndirectInstanceAccelerationStructureBuild;
- (BOOL)familySupportsRayTracingGPUTableUpdateBuffers;
- (BOOL)familySupportsRayTracingCurves;
- (BOOL)familySupportsShaderBarycentricCoordinates;
- (BOOL)familySupportsBlackOrWhiteSamplerBorderColors;
- (BOOL)familySupportsMirrorClampToEdgeSamplerMode;
- (BOOL)familySupportsSIMDReduction;
- (BOOL)familySupportsDepthClipModeClampExtended;
- (BOOL)familySupportsTexture2DMultisampleArray;
- (BOOL)familySupportsForceSeamsOnCubemaps;
- (BOOL)familySupportsFloat16BCubicFiltering;
- (BOOL)familySupportsFloat16InfNanFiltering;
- (BOOL)familySupportsRTZRounding;
- (BOOL)familySupportsAnisoSampleFix;
- (BOOL)familySupportsYCBCRPackedFormatsPQ;
- (BOOL)familySupportsYCBCRPackedFormats12;
- (BOOL)familySupportsYCBCRPackedFormatsXR;
- (BOOL)familySupportsBufferBoundsChecking;
- (BOOL)familySupportsForkJoin;
- (BOOL)familySupportsDevicePartitioning;
- (BOOL)familySupportsComputeCompressedTextureWrite;
- (BOOL)familySupportsSIMDGroupMatrix;
- (BOOL)familySupportsInterchangeTiled;
- (BOOL)familySupportsQuadReduction;
- (BOOL)familySupportsSIMDShuffleAndFill;
- (BOOL)familySupportsBfloat16Format;
- (BOOL)familySupportsSparseDepthAttachments;
- (BOOL)familySupportsLossyCompression;
- (BOOL)familySupportsMeshShaders;
- (BOOL)familySupportsFunctionPointersFromMesh;
- (BOOL)familySupportsMeshShadersInICB;
- (BOOL)familySupportsBfloat16Buffers;
- (BOOL)familySupportsCommandBufferJump;
- (BOOL)familySupportsStackOverflowErrorCode;
- (BOOL)familySupportsRayTracingICBs;
- (BOOL)familySupportsExplicitVisibilityGroups;
- (long long)requirementForFeature:(long long)feature;
- (BOOL)supportForFeature:(long long)feature;
- (id)nameForFeature:(long long)feature;
@end

#endif /* _MTLDeviceFeatureQueries_h */
