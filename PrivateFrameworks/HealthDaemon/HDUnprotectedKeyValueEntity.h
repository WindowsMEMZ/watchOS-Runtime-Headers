//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDUnprotectedKeyValueEntity_h
#define HDUnprotectedKeyValueEntity_h
@import Foundation;

#include "HDKeyValueEntity.h"

@interface HDUnprotectedKeyValueEntity : HDKeyValueEntity
/* class methods */
+ (id)badgeForDomain:(long long)domain profile:(id)profile error:(out id *)error;
+ (BOOL)setBadge:(id)badge forDomain:(long long)domain profile:(id)profile error:(out id *)error;
+ (id)databaseTable;
+ (long long)protectionClass;
+ (const char *)_insertStatementKey;
@end

#endif /* HDUnprotectedKeyValueEntity_h */
