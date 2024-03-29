//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 752.2.0.0.0
//
#ifndef ASCloudKitServerChangeTokenCache_h
#define ASCloudKitServerChangeTokenCache_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface ASCloudKitServerChangeTokenCache : NSObject<NSCopying> {
  /* instance variables */
  NSMutableDictionary *_databaseChangeTokensByDatabaseScope;
  NSMutableDictionary *_zoneChangeTokensByZoneID;
  double _timestamp;
  NSObject<OS_dispatch_queue> *_serialQueue;
}

@property (nonatomic) BOOL expired;

/* class methods */
+ (id)changeTokenCacheFromUserDefaultsWithSerialQueue:(id)queue;

/* instance methods */
- (id)initWithSerialQueue:(id)queue;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isExpired;
- (void)persistToUserDefaults;
- (id)serverChangeTokenForDatabase:(id)database;
- (void)setServerChangeToken:(id)token forDatabase:(id)database;
- (id)serverChangeTokenForRecordZoneID:(id)id;
- (void)setServerChangeToken:(id)token forRecordZoneID:(id)id;
@end

#endif /* ASCloudKitServerChangeTokenCache_h */
