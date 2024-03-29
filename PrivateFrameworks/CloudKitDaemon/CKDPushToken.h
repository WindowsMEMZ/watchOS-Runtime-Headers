//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2130.14.1.0.0
//
#ifndef CKDPushToken_h
#define CKDPushToken_h
@import Foundation;

@class NSData, NSString;

@interface CKDPushToken : NSObject

@property (readonly, copy, nonatomic) NSString *apsEnvironmentString;
@property (readonly, copy, nonatomic) NSData *apsToken;

/* instance methods */
- (id)initWithAPSEnvironmentString:(id)string apsToken:(id)token;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
@end

#endif /* CKDPushToken_h */
