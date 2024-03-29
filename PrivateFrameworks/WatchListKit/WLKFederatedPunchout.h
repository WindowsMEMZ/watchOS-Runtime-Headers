//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 800.20.10.0.0
//
#ifndef WLKFederatedPunchout_h
#define WLKFederatedPunchout_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSDate, NSString, NSURL;

@interface WLKFederatedPunchout : NSObject<NSSecureCoding>

@property (retain, nonatomic) NSString *channelID;
@property (nonatomic) BOOL consented;
@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSString *appAdamID;
@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) NSString *externalContentID;
@property (retain, nonatomic) NSString *canonicalID;
@property (nonatomic) unsigned long long resumeTimeSeconds;
@property (retain, nonatomic) NSDate *punchoutTime;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (BOOL)isConsented;
@end

#endif /* WLKFederatedPunchout_h */
