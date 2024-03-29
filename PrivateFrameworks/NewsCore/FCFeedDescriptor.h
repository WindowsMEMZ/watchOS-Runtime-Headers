//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCFeedDescriptor_h
#define FCFeedDescriptor_h
@import Foundation;

#include "FCChannelProviding-Protocol.h"
#include "FCContentContext-Protocol.h"
#include "FCFeedAdMetadataProviding-Protocol.h"
#include "FCFeedDescriptor.h"
#include "FCFeedTheming-Protocol.h"
#include "FCTagProviding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSArray, NSString;

@interface FCFeedDescriptor : NSObject<NSCopying, FCFeedAdMetadataProviding>

@property (readonly, nonatomic) long long feedType;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSObject<FCFeedTheming> *theme;
@property (retain, nonatomic) NSObject<FCContentContext> *context;
@property (readonly, nonatomic) BOOL hideAccessoryText;
@property (readonly, nonatomic) NSObject<FCTagProviding> *backingTag;
@property (readonly, nonatomic) NSObject<FCChannelProviding> *backingChannel;
@property (readonly, nonatomic) NSString *backingChannelID;
@property (readonly, nonatomic) NSString *backingSectionID;
@property (readonly, nonatomic) NSString *backingTopicID;
@property (readonly, nonatomic) BOOL isSubscribable;
@property (readonly, nonatomic) long long feedSortMethod;
@property (readonly, nonatomic) unsigned long long feedFilterOptions;
@property (readonly, nonatomic) long long feedPersonalizationConfigurationSet;
@property (copy, nonatomic) NSString *referringFeedItemIdentifier;
@property (readonly, nonatomic) unsigned long long feedConfiguration;
@property (readonly, nonatomic) FCFeedDescriptor *alternativeFeedDescriptor;
@property (retain, nonatomic) NSArray *otherArticleIDs;
@property (readonly, nonatomic) NSString *iAdIdentifier;
@property (readonly, nonatomic) NSArray *iAdCategories;
@property (readonly, nonatomic) NSArray *iAdKeywords;
@property (readonly, nonatomic) long long iAdContentProvider;
@property (readonly, nonatomic) NSString *iAdPrimaryAudience;
@property (readonly, nonatomic) NSString *iAdFeedID;
@property (readonly, nonatomic) NSString *iAdSectionID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithIdentifier:(id)identifier;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (BOOL)isSubscribedToWithSubscriptionController:(id)controller;
- (BOOL)hasNotificationsEnabledWithSubscriptionController:(id)controller;
- (id)associateAlternativeFeedDescriptor:(id)descriptor;
- (id)streamOfHeadlinesWithIDs:(id)ids context:(id)context cachedOnly:(BOOL)only maxCachedAge:(double)age;
- (id)fetchOperationForHeadlinesWithIDs:(id)ids context:(id)context;
- (id)streamOfLatestHeadlinesWithContext:(id)context;
- (id)latestHeadlineResultsWithContext:(id)context;
@end

#endif /* FCFeedDescriptor_h */
