//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 936.60.10.0.0
//
#ifndef MAAutoAssetLockTracker_h
#define MAAutoAssetLockTracker_h
@import Foundation;

#include "MAAutoAssetLockReason.h"
#include "MAAutoAssetPolicy.h"
#include "NSSecureCoding-Protocol.h"

@class NSDate;

@interface MAAutoAssetLockTracker : NSObject<NSSecureCoding>

@property (readonly, retain, nonatomic) MAAutoAssetLockReason *clientLockReason;
@property (retain, nonatomic) MAAutoAssetPolicy *lockUsagePolicy;
@property (nonatomic) long long activeLockCount;
@property (nonatomic) long long maximumLockCount;
@property (nonatomic) long long totalLockCount;
@property (nonatomic) long long continueCount;
@property (retain, nonatomic) NSDate *firstLockTimestamp;
@property (retain, nonatomic) NSDate *lastRefreshTimestamp;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (id)summaryNewMaxColumnStrings;
+ (id)summaryPaddedString:(id)string paddingToLenghtOfString:(id)string paddingWith:(id)with paddingBefore:(BOOL)before;
+ (id)summaryPaddedHeader:(id)header;
+ (id)summaryPaddedBanner:(id)banner;

/* instance methods */
- (id)initForClientLockReason:(id)reason lockingWithUsagePolicy:(id)policy;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copy;
- (id)description;
- (id)summary;
- (id)newSummaryDictionary;
- (void)summaryBuildMaxColumnStrings:(id)strings;
- (id)summaryPadded:(id)padded;
@end

#endif /* MAAutoAssetLockTracker_h */
