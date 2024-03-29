//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1299.2.3.1.0
//
#ifndef _LSOpenConfiguration_h
#define _LSOpenConfiguration_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class BSServiceConnectionEndpoint, NSDictionary, NSURL, UISClickAttribution, UISPasteSharingToken;

@interface _LSOpenConfiguration : NSObject<NSCopying, NSSecureCoding>

@property (copy, nonatomic) NSDictionary *frontBoardOptions;
@property (nonatomic) BOOL ignoreOpenStrategy;
@property (nonatomic) BOOL ignoreAppLinkEnabledProperty;
@property (copy, nonatomic) NSURL *referrerURL;
@property (nonatomic) BOOL sensitive;
@property (nonatomic) BOOL allowURLOverrides;
@property (retain, nonatomic) BSServiceConnectionEndpoint *targetConnectionEndpoint;
@property (retain, nonatomic) UISClickAttribution *clickAttribution;
@property (retain, nonatomic) UISPasteSharingToken *pasteSharingToken;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (BOOL)isSensitive;
@end

#endif /* _LSOpenConfiguration_h */
