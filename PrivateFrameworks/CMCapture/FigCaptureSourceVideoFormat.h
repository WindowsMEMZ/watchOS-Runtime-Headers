//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 470.14.3.0.0
//
#ifndef FigCaptureSourceVideoFormat_h
#define FigCaptureSourceVideoFormat_h
@import Foundation;

#include "FigCaptureSourceFormat.h"
#include "FigCaptureSourceCompanionFormat.h"
#include "FigCaptureSourceVideoFormat.h"
#include "FigXPCCoding-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSArray, NSString;

@interface FigCaptureSourceVideoFormat : FigCaptureSourceFormat<FigXPCCoding, NSSecureCoding> {
  /* instance variables */
  NSArray *_frontEndScalerCompanionFormats;
  FigCaptureSourceCompanionFormat *_nonSIFRCompanionFormat;
  FigCaptureSourceCompanionFormat *_fullBinSIFRCompanionFormat;
  FigCaptureSourceCompanionFormat *_actionCameraCompanionFormat;
  FigCaptureSourceCompanionFormat *_depthCompanionFormat;
  FigCaptureSourceCompanionFormat *_ultraHighResCompanionFormat;
  FigCaptureSourceCompanionFormat *_fsdNetCompanionFormat;
  FigCaptureSourceCompanionFormat *_stereoVideoCompanionFormat;
}

@property (readonly) struct { int x0; int x1; } sensorDimensions;
@property (readonly) struct { int x0; int x1; } previewDimensions;
@property (readonly) float fieldOfView;
@property (readonly) float geometricDistortionCorrectedFieldOfView;
@property (readonly) BOOL binned;
@property (readonly) int stabilizationTypeOverrideForStandard;
@property (readonly) int stabilizationTypeOverrideForCinematic;
@property (readonly) float stabilizationOverscanPercentageOverrideForStandard;
@property (readonly) float stabilizationOverscanPercentageOverrideForCinematic;
@property (readonly) float cinematicStabilizationExtendedLookAheadDuration;
@property (readonly) float maxZoomFactor;
@property (readonly) float zoomFactorUpscaleThreshold;
@property (readonly) float minISO;
@property (readonly) float maxISO;
@property (readonly) struct { long long x0; int x1; unsigned int x2; long long x3; } minExposureDuration;
@property (readonly) struct { long long x0; int x1; unsigned int x2; long long x3; } maxExposureDuration;
@property (readonly) BOOL hasSensorHDRCompanionIndex;
@property (readonly) BOOL prefersSensorHDREnabled;
@property (readonly) BOOL SIFRSupported;
@property (readonly) BOOL lowLightVideoCaptureSupported;
@property (readonly) BOOL variableFrameRateVideoCaptureSupported;
@property (readonly) BOOL videoGreenGhostMitigationSupported;
@property (readonly) BOOL videoGreenGhostMitigationUsesLightSourceMaskAndKeypointDescriptorData;
@property (readonly) float stabilizationOverscanPercentageOverrideForMediumStrength;
@property (readonly) BOOL videoHDRFusionSupported;
@property (readonly) int autoFocusSystem;
@property (readonly) BOOL focusPixelBlurScoreSupported;
@property (readonly) BOOL capturesStillsFromVideoStream;
@property (readonly) BOOL sphereAssistedAutoFocusEnabled;
@property (readonly) BOOL photoFormat;
@property (readonly) BOOL highResPhotoFormat;
@property (readonly) BOOL stillImageStabilizationSupported;
@property (readonly) BOOL irisSupported;
@property (readonly) BOOL irisVideoStabilizationSupported;
@property (readonly) BOOL hdrSupported;
@property (readonly) BOOL hdrOriginalImageDeliverySupported;
@property (readonly) BOOL highResStillImageSupported;
@property (readonly) BOOL quadraHighResStillImageSupported;
@property (readonly) BOOL stereoFusionSupported;
@property (readonly) BOOL redEyeReductionSupported;
@property (readonly) BOOL digitalFlashSupported;
@property (readonly) BOOL deepFusionSupported;
@property (readonly) BOOL zeroShutterLagSupported;
@property (readonly) BOOL zeroShutterLagWithDepthSupported;
@property (readonly) BOOL responsiveShutterSupported;
@property (readonly) BOOL semanticStyleRenderingSupported;
@property (readonly) BOOL highPhotoQualitySupported;
@property (readonly) BOOL wideColorSupported;
@property (readonly) NSArray *supportedColorSpaces;
@property (readonly) unsigned int supportedRawPixelFormat;
@property (readonly) unsigned int internalDemosaicedRawPixelFormat;
@property (readonly) unsigned int supportedDemosaicedRawPixelFormat;
@property (readonly) float defaultSimulatedAperture;
@property (readonly) float minSimulatedAperture;
@property (readonly) float maxSimulatedAperture;
@property (readonly) float defaultPortraitLightingEffectStrength;
@property (readonly) float minPortraitLightingEffectStrength;
@property (readonly) float maxPortraitLightingEffectStrength;
@property (readonly) NSArray *AVCaptureSessionPresets;
@property (readonly) BOOL streamingDisparitySupported;
@property (readonly) BOOL streamingDepthSupported;
@property (readonly) BOOL stillImageDisparitySupported;
@property (readonly) BOOL stillImageDepthSupported;
@property (readonly) float clientMaxContinuousZoomFactorForDepthDataDelivery;
@property (readonly) float maxContinuousZoomFactorForDepthDataDelivery;
@property (readonly) BOOL portraitAutoSuggestSupported;
@property (readonly) NSArray *supportedDepthDataFormats;
@property (readonly) BOOL momentCaptureMovieRecordingSupported;
@property (readonly) BOOL spatialOverCaptureSupported;
@property (readonly) float spatialOverCapturePercentage;
@property (readonly) BOOL nonDestructiveCropSupported;
@property (readonly) BOOL deferredPhotoProcessingSupported;
@property (readonly) BOOL multiCamSupported;
@property (readonly) float hardwareCost;
@property (readonly) int baseSensorPowerConsumption;
@property (readonly) int variableSensorPowerConsumption;
@property (readonly) int ispPowerConsumption;
@property (readonly, nonatomic) BOOL intelligentDistortionCorrectionSupported;
@property (readonly) BOOL cinematicFramingSupported;
@property (readonly) BOOL cinematicFramingSupportedForContinuityCapture;
@property (readonly) BOOL cinematicFramingProvidedBySource;
@property (readonly) BOOL centerStageRectOfInterestSupported;
@property (readonly) FigCaptureSourceVideoFormat *cinematicFramingFormat;
@property (readonly) BOOL manualFramingSupported;
@property (readonly) FigCaptureSourceVideoFormat *geometricDistortionCorrectionFormat;
@property (readonly) BOOL backgroundBlurSupported;
@property (readonly) BOOL backgroundBlurSupportedForContinuityCapture;
@property (readonly) BOOL backgroundBlurProvidedBySource;
@property (readonly) BOOL studioLightingSupported;
@property (readonly) BOOL studioLightingSupportedForContinuityCapture;
@property (readonly) BOOL studioLightingProvidedBySource;
@property (readonly) BOOL reactionEffectsSupported;
@property (readonly) BOOL reactionEffectsSupportedForContinuityCapture;
@property (readonly) BOOL reactionEffectsProvidedBySource;
@property (readonly) NSArray *secondaryNativeResolutionZoomFactors;
@property (readonly, nonatomic) BOOL stereoVideoCaptureSupported;
@property (readonly) float maxContinuousZoomFactorForCinematicVideo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (void)initialize;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithFigCaptureStreamFormatDictionary:(id)dictionary pixelFormatOverride:(unsigned int)override;
- (id)initWithFigCaptureStreamFormatDictionary:(id)dictionary;
- (id)initWithXPCEncoding:(id)xpcencoding;
- (id)copyXPCEncoding;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithNewPixelFormat:(unsigned int)format;
- (void)dealloc;
- (unsigned int)mediaType;
- (int)formatIndex;
- (struct { int x0; int x1; })nativeDimensions;
- (float)defaultMinFrameRateForSessionPreset:(id)preset;
- (float)defaultMaxFrameRateForSessionPreset:(id)preset;
- (struct { int x0; int x1; })geometricDistortionCorrectedNativeDimensions;
- (BOOL)isBinned;
- (BOOL)isStabilizationModeSupported:(int)supported;
- (BOOL)distortionCompensationSupported;
- (int)previewImageQueueSyncStrategy;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })maxVisibleSensorRect;
- (int)fesBinningFactorHorizontal;
- (int)temporalNoiseReductionMode;
- (BOOL)temporalNoiseReductionBand0Disabled;
- (BOOL)temporalNoiseReductionRawEnabled;
- (BOOL)ispChromaNoiseReductionEnabled;
- (float)aeMaxGain;
- (int)maxIntegrationTimeOverride;
- (float)depthDataAEMaxGain;
- (float)depthDataMaxIntegrationTimeOverride;
- (float)lowLightVideoAEMaxGain;
- (float)stereoVideoAEMaxGain;
- (float)variableFrameRateVideoCaptureFromFWAEMaxGain;
- (BOOL)isFocusPixelBlurScoreSupported;
- (id)frontEndScalerCompanionFormats;
- (BOOL)isSIFRSupported;
- (id)nonSIFRCompanionFormat;
- (id)fullBinSIFRCompanionFormat;
- (int)sifrBinningFactorOverrideForNondisruptiveSwitching;
- (BOOL)fullBinSIFROnSecondaryCameraAllowed;
- (id)actionCameraCompanionFormat;
- (id)depthCompanionFormat;
- (id)ultraHighResCompanionFormat;
- (id)fsdNetCompanionFormat;
- (id)stereoVideoCompanionFormat;
- (struct { int x0; int x1; })cinematicFramingOutputDimensions;
- (struct { int x0; int x1; })sensorCropDimensions;
- (struct { int x0; int x1; })preGDCSensorCropDimensions;
- (struct { int x0; int x1; })postGDCCropDimensions;
- (struct { int x0; int x1; })fesInputCropDimensions;
- (struct { int x0; int x1; })cropDimensionsForFES;
- (struct { int x0; int x1; })sourceCropAspectRatio;
- (int)sensorHDRCompanionIndex;
- (BOOL)isVariableFrameRateVideoCaptureSupported;
- (BOOL)isLowLightVideoCaptureSupported;
- (BOOL)isVideoStabilizationStrengthSupported:(int)supported;
- (BOOL)isSecondaryScalerUnavailable;
- (BOOL)isStudioAndContourPreviewRenderingSupported;
- (BOOL)isStagePreviewRenderingSupported;
- (BOOL)isWideAsStatsMasterEnabled;
- (int)horizontalSensorBinningFactor;
- (int)verticalSensorBinningFactor;
- (struct CGSize { double x0; double x1; })stabilizationOverscanFromSensorForFESCropDimensions:(struct { int x0; int x1; })dimensions preferSIFRFormat:(BOOL)sifrformat geometricDistortionCorrection:(BOOL)correction useFESCompanionIndex:(BOOL)index;
- (BOOL)isPhotoFormat;
- (BOOL)isHighResPhotoFormat;
- (BOOL)isStillImageStabilizationSupported;
- (BOOL)isSupplementalTimeOfFlightCameraSupported;
- (BOOL)configureForStillImageStabilizationSupport;
- (BOOL)configureForSpatialOverCaptureSupport;
- (BOOL)configureForDigitalFlashSupport;
- (BOOL)configureForSoftISPSupport;
- (BOOL)configureForNonDisruptiveFullBinSIFRSwitching;
- (BOOL)configureForDepthDataDelivery;
- (BOOL)isIrisSupported;
- (BOOL)isIrisVideoStabilizationSupported;
- (BOOL)isHDRSupported;
- (BOOL)isGNRHDRSupported;
- (BOOL)isHDROriginalImageDeliverySupported;
- (BOOL)isHighResStillImageSupported;
- (BOOL)isQuadraHighResStillImageSupported;
- (BOOL)isStereoFusionSupported;
- (BOOL)isISPMultiBandNoiseReductionSupported;
- (BOOL)isStillImageISPMultiBandNoiseReductionSupported;
- (BOOL)isZeroShutterLagSupported;
- (BOOL)isZeroShutterLagWithDepthSupported;
- (BOOL)zeroShutterLagRequiresUserInitiatedCaptureRequestTime;
- (int)swfrVersion;
- (BOOL)isRedEyeReductionSupported;
- (int)redEyeReductionVersion;
- (int)semanticRenderingVersion;
- (int)semanticDevelopmentVersion;
- (BOOL)isSemanticStyleRenderingSupported;
- (BOOL)isGainMapSupported;
- (int)stillImageGDCSourceMode;
- (BOOL)gdcInStillImageSinkPipelineSupported;
- (int)greenGhostMitigationVersion;
- (int)configureForGreenGhostMitigationVersion;
- (BOOL)isDeepZoomSupported;
- (BOOL)isCinematicFramingSupported;
- (BOOL)isCinematicFramingSupportedForContinuityCapture;
- (BOOL)isCinematicFramingProvidedBySource;
- (BOOL)isCenterStageRectOfInterestSupported;
- (BOOL)isManualFramingSupported;
- (BOOL)isBackgroundBlurSupported;
- (BOOL)isBackgroundBlurSupportedForContinuityCapture;
- (BOOL)isBackgroundBlurProvidedBySource;
- (BOOL)isStudioLightingSupported;
- (BOOL)isStudioLightingSupportedForContinuityCapture;
- (BOOL)isStudioLightingProvidedBySource;
- (BOOL)isDigitalFlashSupported;
- (BOOL)isDigitalFlashRawNigthModeSupported;
- (id)digitalFlashDetectedObjectTypes;
- (BOOL)isWideDigitalFlashAvailableShallowDepthOfFieldEffectsEnabled;
- (BOOL)isDeepFusionSupported;
- (BOOL)isLearnedNRSupported;
- (BOOL)isResponsiveShutterSupported;
- (BOOL)isHighPhotoQualitySupported;
- (BOOL)isCaptureTimePhotoCurationSupported;
- (BOOL)usesPacked10BitFirmwareStillImageOutputPixelFormat;
- (BOOL)isVideoHDRFusionSupported;
- (BOOL)isPortraitAutoSuggestSupported;
- (BOOL)isVideoSTFSupported;
- (BOOL)isVideoSTFMetadataEnabled;
- (BOOL)isVideoGreenGhostMitigationSupported;
- (BOOL)isVideoGreenGhostMitigationUsesLightSourceMaskAndKeypointDescriptorData;
- (BOOL)isSphereAssistedAutoFocusEnabled;
- (struct { int x0; int x1; })stillImageGDCInDCProcessorOutputCropDimensions;
- (id)highResStillImageDimensions;
- (BOOL)isStillImageISPChromaNoiseReductionEnabled;
- (BOOL)isWideColorSupported;
- (id)rawLensShadingCorrection;
- (BOOL)sushiRawSupported;
- (BOOL)sushiRawBlackBorderingEnabled;
- (BOOL)isSIFRStillImageCaptureWithDepthDataDisabled;
- (BOOL)isContentAwareEnhancementSupported;
- (BOOL)isContentAwareAWBSupported;
- (BOOL)isStreamingDisparitySupported;
- (BOOL)isStreamingDepthSupported;
- (BOOL)isStillImageDisparitySupported;
- (BOOL)isStillImageDepthSupported;
- (BOOL)isMomentCaptureMovieRecordingSupported;
- (BOOL)isSpatialOverCaptureSupported;
- (BOOL)isNonDestructiveCropSupported;
- (BOOL)isDeferredPhotoProcessingSupported;
- (BOOL)isMultiCamSupported;
- (BOOL)isValidDerivedSourceFormatForUnderlyingFormat:(id)format;
- (BOOL)isCompatibleWithInfraredFormat:(id)format;
- (BOOL)isStereoVideoCaptureSupported;
@end

#endif /* FigCaptureSourceVideoFormat_h */
