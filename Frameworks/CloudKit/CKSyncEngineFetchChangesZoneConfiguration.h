//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2130.14.1.0.0
//
#ifndef CKSyncEngineFetchChangesZoneConfiguration_h
#define CKSyncEngineFetchChangesZoneConfiguration_h
@import Foundation;

#include "CKPropertiesDescription-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSString;

@interface CKSyncEngineFetchChangesZoneConfiguration : NSObject<CKPropertiesDescription, NSCopying>

@property BOOL shouldFetchAssetContents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)CKDescribePropertiesUsing:(id)using;
- (id)redactedDescription;
- (id)CKDescriptionClassName;
- (BOOL)CKDescriptionShouldPrintPointer;
@end

#endif /* CKSyncEngineFetchChangesZoneConfiguration_h */
