//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1033.64.3.0.0
//
#ifndef KTOptInState_h
#define KTOptInState_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSDate, NSString;

@interface KTOptInState : NSObject<NSSecureCoding>

@property unsigned long long state;
@property BOOL everOptIn;
@property (retain) NSString *uri;
@property (retain) NSString *application;
@property (retain) NSDate *smtTimestamp;
@property (retain) NSString *osVersion;
@property (retain) NSString *serialNumber;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)initWithURI:(id)uri application:(id)application;
- (id)initWithApplication:(id)application;
- (id)description;
- (id)debugDescription;
- (id)jsonDescription;
@end

#endif /* KTOptInState_h */
