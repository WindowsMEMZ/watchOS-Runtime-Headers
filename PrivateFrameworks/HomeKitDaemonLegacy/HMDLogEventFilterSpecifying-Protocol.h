//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDLogEventFilterSpecifying_Protocol_h
#define HMDLogEventFilterSpecifying_Protocol_h
@import Foundation;

@protocol HMDLogEventFilterSpecifying <NSObject>

@property (readonly) BOOL enableEventFilterSpecifying;
@property (readonly, nonatomic) NSString *sampledCategory;
@property (readonly, nonatomic) NSUUID *sampledUUID;
@property (readonly, nonatomic) NSData *sampledData;

@end

#endif /* HMDLogEventFilterSpecifying_Protocol_h */
