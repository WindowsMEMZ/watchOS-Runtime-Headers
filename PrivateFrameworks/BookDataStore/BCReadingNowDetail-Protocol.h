//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1062.0.0.0.0
//
#ifndef BCReadingNowDetail_Protocol_h
#define BCReadingNowDetail_Protocol_h
@import Foundation;

#include "BCCloudData.h"
#include "BCCloudDataPrivacyDelegate-Protocol.h"
#include "BCReadingNowDetail-Protocol.h"

@class CKRecord, NSData, NSDate, NSString;

@protocol BCReadingNowDetail <BCCloudData>

@property (readonly, copy, nonatomic) NSString *assetID;
@property (readonly, nonatomic) BOOL isTrackedAsRecent;
@property (readonly, copy, nonatomic) NSDate *lastEngagedDate;
@property (readonly, copy, nonatomic) NSString *cloudAssetType;

@end

#endif /* BCReadingNowDetail_Protocol_h */
