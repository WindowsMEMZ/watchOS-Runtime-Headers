//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDFaceprintModel_h
#define HMDFaceprintModel_h
@import Foundation;

#include "HMBModel.h"

@class HMBModelReference, NSData, NSUUID;

@interface HMDFaceprintModel : HMBModel

@property (copy, @dynamic) NSData *data;
@property (copy, @dynamic) NSUUID *modelUUID;
@property (retain, @dynamic) HMBModelReference *faceCrop;

/* class methods */
+ (id)hmbProperties;
+ (BOOL)hmbExcludeFromCloudStorage;

/* instance methods */
- (id)initWithFaceprint:(id)faceprint;
- (id)createFaceprint;
@end

#endif /* HMDFaceprintModel_h */
