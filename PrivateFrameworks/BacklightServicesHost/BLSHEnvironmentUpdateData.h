//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3.2.4.0.0
//
#ifndef BLSHEnvironmentUpdateData_h
#define BLSHEnvironmentUpdateData_h
@import Foundation;

@class NSString;

@interface BLSHEnvironmentUpdateData : NSObject

@property (readonly, copy, nonatomic) NSString *environmentIdentifier;
@property (readonly, nonatomic) long long newBacklightState;
@property (readonly, nonatomic) unsigned long long pendingTransitionStateCount;
@property (readonly, nonatomic) unsigned long long timeStamp;

/* instance methods */
- (id)initWithEnvironmentIdentifier:(id)identifier newBacklightState:(long long)state pendingTransitionStateCount:(unsigned long long)count;
- (id)description;
- (BOOL)isEqual:(id)equal;
@end

#endif /* BLSHEnvironmentUpdateData_h */
