//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDHealthServiceOOBInfo_h
#define HDHealthServiceOOBInfo_h
@import Foundation;

@class NSData;

@interface HDHealthServiceOOBInfo : NSObject

@property (readonly, nonatomic) NSData *oobData;
@property (readonly, nonatomic) NSData *randomValue;
@property (readonly, nonatomic) NSData *confirmationValue;
@property (readonly, nonatomic) NSData *btAddress;

/* instance methods */
- (id)initWithOOBData:(id)oobdata btAddress:(id)address;
- (id)description;
@end

#endif /* HDHealthServiceOOBInfo_h */
