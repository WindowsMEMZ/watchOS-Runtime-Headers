//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDCloudSyncMedicalIDPersistOperation_h
#define HDCloudSyncMedicalIDPersistOperation_h
@import Foundation;

#include "HDCloudSyncSynchronousOperation.h"

@class _HKMedicalIDData;

@interface HDCloudSyncMedicalIDPersistOperation : HDCloudSyncSynchronousOperation

@property (retain, nonatomic) _HKMedicalIDData *medicalIDDataToPersist;

/* instance methods */
- (BOOL)performWithError:(id *)error;
@end

#endif /* HDCloudSyncMedicalIDPersistOperation_h */
