//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDCameraSignificantEventFaceClassificationModel_h
#define HMDCameraSignificantEventFaceClassificationModel_h
@import Foundation;

#include "HMBModel.h"

@class NSString, NSUUID;

@interface HMDCameraSignificantEventFaceClassificationModel : HMBModel

@property (retain, @dynamic) NSUUID *personManagerUUID;
@property (retain, @dynamic) NSUUID *personUUID;
@property (retain, @dynamic) NSString *personName;
@property (retain, @dynamic) NSUUID *unassociatedFaceCropUUID;

/* class methods */
+ (id)hmbProperties;
+ (id)hmbExternalRecordType;

/* instance methods */
- (id)createFaceClassification;
@end

#endif /* HMDCameraSignificantEventFaceClassificationModel_h */
