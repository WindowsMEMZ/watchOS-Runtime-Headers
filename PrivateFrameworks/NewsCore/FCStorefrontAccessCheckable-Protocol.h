//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCStorefrontAccessCheckable_Protocol_h
#define FCStorefrontAccessCheckable_Protocol_h
@import Foundation;

@protocol FCStorefrontAccessCheckable <NFCopying>

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *sourceChannelID;
@property (readonly, copy, nonatomic) NSArray *blockedStorefrontIDs;
@property (readonly, copy, nonatomic) NSArray *allowedStorefrontIDs;

@end

#endif /* FCStorefrontAccessCheckable_Protocol_h */
