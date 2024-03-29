//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCAVAssetKeyType_Protocol_h
#define FCAVAssetKeyType_Protocol_h
@import Foundation;

@protocol FCAVAssetKeyType <FCContentArchivable>

@property (readonly, nonatomic) NSData *keyData;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic) BOOL isExpired;

@end

#endif /* FCAVAssetKeyType_Protocol_h */
