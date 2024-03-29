//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2200.4.3.7.0
//
#ifndef MTSyncChangeUnarchiver_h
#define MTSyncChangeUnarchiver_h
@import Foundation;

#include "NSKeyedUnarchiver.h"
#include "MTSerializer-Protocol.h"

@class NSCoder;

@interface MTSyncChangeUnarchiver : NSKeyedUnarchiver<MTSerializer>

@property (readonly, nonatomic) unsigned long long mtType;
@property (readonly, nonatomic) NSCoder *mtCoder;

@end

#endif /* MTSyncChangeUnarchiver_h */
