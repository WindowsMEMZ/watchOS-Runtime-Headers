//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 205.6.1.0.0
//
#ifndef MADVideoRemoveBackgroundPreviewRequest_h
#define MADVideoRemoveBackgroundPreviewRequest_h
@import Foundation;

#include "MADVideoRequest.h"
#include "MADVideoRemoveBackgroundPreviewResult.h"

@interface MADVideoRemoveBackgroundPreviewRequest : MADVideoRequest

@property (readonly, nonatomic) MADVideoRemoveBackgroundPreviewResult *result;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)description;
@end

#endif /* MADVideoRemoveBackgroundPreviewRequest_h */
