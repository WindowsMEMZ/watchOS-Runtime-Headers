//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef NTPBAudioEngage_h
#define NTPBAudioEngage_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"
#include "NTPBChannelData.h"
#include "NTPBIssueData.h"
#include "NTPBIssueViewData.h"

@class NSData, NSMutableArray, NSString;

@interface NTPBAudioEngage : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 agedPersonalizationScore; unsigned int x :1 agedUserFeedbackScore; unsigned int x :1 audioDeltaTimePlayed; unsigned int x :1 audioTimePlayed; unsigned int x :1 autoSubscribeCtr; unsigned int x :1 computedGlobalScoreCoefficient; unsigned int x :1 diversifiedPersonalizationScore; unsigned int x :1 featureCtr; unsigned int x :1 globalScore; unsigned int x :1 paidNonpaidSubscriptionCtr; unsigned int x :1 personalizationScore; unsigned int x :1 subscribedChannelCtr; unsigned int x :1 trackDuration; unsigned int x :1 userFeedbackScore; unsigned int x :1 audioEngagementOriginationData; unsigned int x :1 feedType; unsigned int x :1 groupType; unsigned int x :1 listeningSource; unsigned int x :1 playMethod; unsigned int x :1 playbackSpeed; unsigned int x :1 position; unsigned int x :1 trackVariant; unsigned int x :1 userAction; unsigned int x :1 adSupportedChannel; unsigned int x :1 isPaidSubscriberToSourceChannel; } _has;
}

@property (readonly, nonatomic) BOOL hasArticleId;
@property (retain, nonatomic) NSString *articleId;
@property (readonly, nonatomic) BOOL hasSourceChannelId;
@property (retain, nonatomic) NSString *sourceChannelId;
@property (nonatomic) BOOL hasAdSupportedChannel;
@property (nonatomic) BOOL adSupportedChannel;
@property (nonatomic) BOOL hasGroupType;
@property (nonatomic) int groupType;
@property (readonly, nonatomic) BOOL hasGroupFeedId;
@property (retain, nonatomic) NSString *groupFeedId;
@property (readonly, nonatomic) BOOL hasGroupViewExposureId;
@property (retain, nonatomic) NSData *groupViewExposureId;
@property (nonatomic) BOOL hasFeedType;
@property (nonatomic) int feedType;
@property (readonly, nonatomic) BOOL hasFeedId;
@property (retain, nonatomic) NSString *feedId;
@property (nonatomic) BOOL hasTrackDuration;
@property (nonatomic) long long trackDuration;
@property (nonatomic) BOOL hasTrackVariant;
@property (nonatomic) int trackVariant;
@property (nonatomic) BOOL hasAudioTimePlayed;
@property (nonatomic) long long audioTimePlayed;
@property (nonatomic) BOOL hasAudioDeltaTimePlayed;
@property (nonatomic) long long audioDeltaTimePlayed;
@property (nonatomic) BOOL hasUserAction;
@property (nonatomic) int userAction;
@property (nonatomic) BOOL hasPosition;
@property (nonatomic) int position;
@property (readonly, nonatomic) BOOL hasEngagementId;
@property (retain, nonatomic) NSString *engagementId;
@property (nonatomic) BOOL hasPlayMethod;
@property (nonatomic) int playMethod;
@property (nonatomic) BOOL hasListeningSource;
@property (nonatomic) int listeningSource;
@property (readonly, nonatomic) BOOL hasArticleViewingSessionId;
@property (retain, nonatomic) NSData *articleViewingSessionId;
@property (retain, nonatomic) NSMutableArray *fractionalCohortMemberships;
@property (nonatomic) BOOL hasAgedPersonalizationScore;
@property (nonatomic) double agedPersonalizationScore;
@property (nonatomic) BOOL hasAgedUserFeedbackScore;
@property (nonatomic) double agedUserFeedbackScore;
@property (nonatomic) BOOL hasAutoSubscribeCtr;
@property (nonatomic) double autoSubscribeCtr;
@property (nonatomic) BOOL hasComputedGlobalScoreCoefficient;
@property (nonatomic) double computedGlobalScoreCoefficient;
@property (nonatomic) BOOL hasDiversifiedPersonalizationScore;
@property (nonatomic) double diversifiedPersonalizationScore;
@property (nonatomic) BOOL hasFeatureCtr;
@property (nonatomic) double featureCtr;
@property (nonatomic) BOOL hasGlobalScore;
@property (nonatomic) double globalScore;
@property (nonatomic) BOOL hasPaidNonpaidSubscriptionCtr;
@property (nonatomic) double paidNonpaidSubscriptionCtr;
@property (nonatomic) BOOL hasPersonalizationScore;
@property (nonatomic) double personalizationScore;
@property (nonatomic) BOOL hasSubscribedChannelCtr;
@property (nonatomic) double subscribedChannelCtr;
@property (nonatomic) BOOL hasUserFeedbackScore;
@property (nonatomic) double userFeedbackScore;
@property (readonly, nonatomic) BOOL hasIssueData;
@property (retain, nonatomic) NTPBIssueData *issueData;
@property (readonly, nonatomic) BOOL hasIssueViewData;
@property (retain, nonatomic) NTPBIssueViewData *issueViewData;
@property (readonly, nonatomic) BOOL hasChannelData;
@property (retain, nonatomic) NTPBChannelData *channelData;
@property (readonly, nonatomic) BOOL hasLanguage;
@property (retain, nonatomic) NSString *language;
@property (nonatomic) BOOL hasIsPaidSubscriberToSourceChannel;
@property (nonatomic) BOOL isPaidSubscriberToSourceChannel;
@property (nonatomic) BOOL hasPlaybackSpeed;
@property (nonatomic) float playbackSpeed;
@property (nonatomic) BOOL hasAudioEngagementOriginationData;
@property (nonatomic) int audioEngagementOriginationData;

/* class methods */
+ (Class)fractionalCohortMembershipType;

/* instance methods */
- (id)groupTypeAsString:(int)string;
- (int)StringAsGroupType:(id)type;
- (id)feedTypeAsString:(int)string;
- (int)StringAsFeedType:(id)type;
- (id)trackVariantAsString:(int)string;
- (int)StringAsTrackVariant:(id)variant;
- (void)clearFractionalCohortMemberships;
- (void)addFractionalCohortMembership:(id)membership;
- (unsigned long long)fractionalCohortMembershipsCount;
- (id)fractionalCohortMembershipAtIndex:(unsigned long long)index;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)mergeFrom:(id)from;
@end

#endif /* NTPBAudioEngage_h */
