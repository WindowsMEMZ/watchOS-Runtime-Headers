//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1338.0.0.0.0
//
#ifndef NSCloudKitMirroringDelegateResetRequest_h
#define NSCloudKitMirroringDelegateResetRequest_h
@import Foundation;

#include "NSCloudKitMirroringRequest.h"

@class NSError;

@interface NSCloudKitMirroringDelegateResetRequest : NSCloudKitMirroringRequest {
  /* instance variables */
  NSError *_causedByError;
}

/* instance methods */
- (id)initWithError:(id)error completionBlock:(id /* block */)block;
- (void)dealloc;
@end

#endif /* NSCloudKitMirroringDelegateResetRequest_h */
