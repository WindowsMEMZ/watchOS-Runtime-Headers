//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1852.4.7.0.3
//
#ifndef _DKSyncPowerlog_h
#define _DKSyncPowerlog_h
@import Foundation;

@interface _DKSyncPowerlog : NSObject
/* class methods */
+ (void)recordWithSyncType:(id)type transportType:(long long)type startDate:(id)date endDate:(id)date isEmpty:(BOOL)empty;
@end

#endif /* _DKSyncPowerlog_h */
