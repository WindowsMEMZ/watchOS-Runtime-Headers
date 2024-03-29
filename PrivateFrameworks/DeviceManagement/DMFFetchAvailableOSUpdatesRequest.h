//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 171.0.0.0.0
//
#ifndef DMFFetchAvailableOSUpdatesRequest_h
#define DMFFetchAvailableOSUpdatesRequest_h
@import Foundation;

#include "DMFTaskRequest.h"

@class NSString;

@interface DMFFetchAvailableOSUpdatesRequest : DMFTaskRequest

@property (copy, nonatomic) NSString *productVersion;
@property (nonatomic) BOOL useDelay;

/* class methods */
+ (id)permittedPlatforms;
+ (BOOL)isPermittedOnSystemConnection;
+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)supportsSecureCoding;
+ (Class)allowlistedClassForResultObject;

/* instance methods */
- (id)init;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* DMFFetchAvailableOSUpdatesRequest_h */
