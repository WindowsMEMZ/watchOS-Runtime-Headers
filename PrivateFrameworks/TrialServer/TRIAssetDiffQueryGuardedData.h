//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 396.4.0.0.0
//
#ifndef TRIAssetDiffQueryGuardedData_h
#define TRIAssetDiffQueryGuardedData_h
@import Foundation;

@class NSDate, NSError, NSMutableDictionary;

@interface TRIAssetDiffQueryGuardedData : NSObject {
  /* instance variables */
  NSMutableDictionary *recordIdsForTargetAssetIds;
  NSDate *retryAfter;
  NSError *error;
}

/* instance methods */
@end

#endif /* TRIAssetDiffQueryGuardedData_h */
