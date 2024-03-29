//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKCloudSyncAccountInfo_h
#define HKCloudSyncAccountInfo_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSPersonNameComponents, NSString;

@interface HKCloudSyncAccountInfo : NSObject<NSSecureCoding>

@property (readonly, copy, nonatomic) NSPersonNameComponents *fullName;
@property (readonly, copy, nonatomic) NSString *emailAddress;
@property (readonly, nonatomic) unsigned long long accountSettings;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithFullName:(id)name emailAddress:(id)address accountSettings:(unsigned long long)settings;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* HKCloudSyncAccountInfo_h */
