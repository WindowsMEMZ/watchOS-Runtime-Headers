//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 205.6.1.0.0
//
#ifndef VCPMADImageSafetyClassificationTask_h
#define VCPMADImageSafetyClassificationTask_h
@import Foundation;

#include "VCPMADServiceImageAsset.h"
#include "VCPMADServiceImageProcessingSubtaskProtocol-Protocol.h"
#include "VCPMADTaskProtocol-Protocol.h"

@class MADImageSafetyClassificationRequest, NSString;
@protocol {Scaler="pool_"{CF<__CVPixelBufferPool *>="value_"^{__CVPixelBufferPool}}"width_"i"height_"i"format_"I"transfer_session_"{CF<OpaqueVTPixelTransferSession *>="value_"^{OpaqueVTPixelTransferSession}}}, {atomic<bool>="__a_"{__cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>>="__a_value"AB}};

@interface VCPMADImageSafetyClassificationTask : NSObject<VCPMADServiceImageProcessingSubtaskProtocol, VCPMADTaskProtocol> {
  /* instance variables */
  MADImageSafetyClassificationRequest *_request;
  VCPMADServiceImageAsset *_imageAsset;
  NSString *_signpostPayload;
  struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { atomic  __a_value; BOOL x0; } __a_; } _canceled;
  struct Scaler { struct CF<__CVPixelBufferPool *> { struct __CVPixelBufferPool *value_; } pool_; int width_; int height_; unsigned int format_; struct CF<OpaqueVTPixelTransferSession *> { struct OpaqueVTPixelTransferSession *value_; } transfer_session_; } _scaler;
}

/* class methods */
+ (id)taskWithRequest:(id)request imageAsset:(id)asset andSignpostPayload:(id)payload;
+ (id)dependencies;

/* instance methods */
- (id)initWithRequest:(id)request imageAsset:(id)asset andSignpostPayload:(id)payload;
- (float)resourceRequirement;
- (BOOL)autoCancellable;
- (void)cancel;
- (void)logMemoryWithMessage:(id)message;
- (int)createUprightPixelBuffer:(struct __CVBuffer * *)buffer fromSourceBuffer:(struct __CVBuffer *)buffer andOrientation:(unsigned int)orientation;
- (int)run;
@end

#endif /* VCPMADImageSafetyClassificationTask_h */
