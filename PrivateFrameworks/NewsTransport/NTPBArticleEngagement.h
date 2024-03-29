//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef NTPBArticleEngagement_h
#define NTPBArticleEngagement_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"
#include "NTPBIssueData.h"
#include "NTPBIssueViewData.h"

@class NSData, NSString;

@interface NTPBArticleEngagement : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 articleOpenedAtTimestamp; unsigned int x :1 eventTimestamp; unsigned int x :1 articleEngagementType; unsigned int x :1 utcOffset; unsigned int x :1 isPaidSubscriber; } _has;
}

@property (nonatomic) BOOL hasArticleEngagementType;
@property (nonatomic) int articleEngagementType;
@property (readonly, nonatomic) BOOL hasSessionId;
@property (retain, nonatomic) NSData *sessionId;
@property (readonly, nonatomic) BOOL hasUserId;
@property (retain, nonatomic) NSString *userId;
@property (nonatomic) BOOL hasEventTimestamp;
@property (nonatomic) long long eventTimestamp;
@property (readonly, nonatomic) BOOL hasArticleId;
@property (retain, nonatomic) NSString *articleId;
@property (readonly, nonatomic) BOOL hasChannelId;
@property (retain, nonatomic) NSString *channelId;
@property (nonatomic) BOOL hasUtcOffset;
@property (nonatomic) int utcOffset;
@property (readonly, nonatomic) BOOL hasCountryCode;
@property (retain, nonatomic) NSString *countryCode;
@property (nonatomic) BOOL hasArticleOpenedAtTimestamp;
@property (nonatomic) long long articleOpenedAtTimestamp;
@property (nonatomic) BOOL hasIsPaidSubscriber;
@property (nonatomic) BOOL isPaidSubscriber;
@property (readonly, nonatomic) BOOL hasIssueData;
@property (retain, nonatomic) NTPBIssueData *issueData;
@property (readonly, nonatomic) BOOL hasIssueViewData;
@property (retain, nonatomic) NTPBIssueViewData *issueViewData;
@property (readonly, nonatomic) BOOL hasDeviceModel;
@property (retain, nonatomic) NSString *deviceModel;

/* instance methods */
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)mergeFrom:(id)from;
@end

#endif /* NTPBArticleEngagement_h */
