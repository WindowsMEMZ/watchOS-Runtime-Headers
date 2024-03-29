//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 171.0.0.0.0
//
#ifndef DMFFetchScreenshotRequest_h
#define DMFFetchScreenshotRequest_h
@import Foundation;

#include "DMFTaskRequest.h"

@class NSString;

@interface DMFFetchScreenshotRequest : DMFTaskRequest

@property (nonatomic) unsigned long long maxWidth;
@property (nonatomic) unsigned long long maxHeight;
@property (nonatomic) BOOL usesPixels;
@property (copy, nonatomic) NSString *sessionToken;

/* class methods */
+ (Class)allowlistedClassForResultObject;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* DMFFetchScreenshotRequest_h */
