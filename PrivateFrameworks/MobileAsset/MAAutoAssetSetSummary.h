//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 936.60.10.0.0
//
#ifndef MAAutoAssetSetSummary_h
#define MAAutoAssetSetSummary_h
@import Foundation;

#include "MAAutoAssetSetStatus.h"
#include "NSSecureCoding-Protocol.h"

@class NSString;

@interface MAAutoAssetSetSummary : NSObject<NSSecureCoding>

@property (retain, nonatomic) NSString *clientDomainName;
@property (retain, nonatomic) NSString *assetSetIdentifier;
@property (nonatomic) long long assetSetRepresentation;
@property (retain, nonatomic) MAAutoAssetSetStatus *setJobStatus;
@property (nonatomic) long long scheduledIntervalSecs;
@property (nonatomic) long long scheduledRemainingSecs;
@property (nonatomic) long long pushDelaySecs;
@property (nonatomic) long long activeClientCount;
@property (nonatomic) long long activeMonitorCount;
@property (nonatomic) long long maximumClientCount;
@property (nonatomic) long long totalClientCount;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (id)assetSetRepresentationName:(long long)name;
+ (id)summaryNewMaxColumnStrings;
+ (id)summaryPaddedString:(id)string paddingToLenghtOfString:(id)string paddingWith:(id)with paddingBefore:(BOOL)before;
+ (id)summaryPaddedHeader:(id)header;
+ (id)summaryPaddedBanner:(id)banner;

/* instance methods */
- (id)initWithDomainName:(id)name forAssetSetIdentifier:(id)identifier withAssetSetRepresentation:(long long)representation withSetJobStatus:(id)status withScheduledIntervalSecs:(long long)secs withScheduledRemainingSecs:(long long)secs withPushDelaySecs:(long long)secs withActiveClientCount:(long long)count withActiveMonitorCount:(long long)count withMaximumClientCount:(long long)count withTotalClientCount:(long long)count;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)description;
- (id)summary;
- (void)summaryBuildMaxColumnStrings:(id)strings;
- (id)summaryPadded:(id)padded;
- (id)assetSetRepresentationName;
@end

#endif /* MAAutoAssetSetSummary_h */
