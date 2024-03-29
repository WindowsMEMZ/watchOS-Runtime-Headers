//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tools: [ld (607.2), ld (814.1), ld (902.8)]
//    - LC_SOURCE_VERSION: 7.2.10.0.0
//
#ifndef AMSMediaTask_h
#define AMSMediaTask_h
@import Foundation;

#include "AMSTask.h"
#include "AMSBagConsumer-Protocol.h"
#include "AMSBagProtocol-Protocol.h"
#include "AMSProcessInfo.h"

@class ACAccount, NSArray, NSDictionary, NSString;

@interface AMSMediaTask : AMSTask<AMSBagConsumer>

@property (nonatomic) BOOL URLKnownToBeTrusted;
@property (retain, nonatomic) ACAccount *account;
@property (retain, nonatomic) NSArray *additionalPlatforms;
@property (retain, nonatomic) NSDictionary *additionalQueryParams;
@property (readonly, nonatomic) NSObject<AMSBagProtocol> *bag;
@property (retain, nonatomic) NSArray *bundleIdentifiers;
@property (nonatomic) BOOL charts;
@property (readonly, nonatomic) NSString *clientIdentifier;
@property (retain, nonatomic) AMSProcessInfo *clientInfo;
@property (readonly, nonatomic) NSString *clientVersion;
@property (retain, nonatomic) NSDictionary *filters;
@property (retain, nonatomic) NSArray *includedResultKeys;
@property (retain, nonatomic) NSArray *itemIdentifiers;
@property (retain, nonatomic) NSString *logKey;
@property (retain, nonatomic) NSString *searchTerm;
@property (readonly, nonatomic) long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)bagSubProfile;
+ (id)bagSubProfileVersion;
+ (id)createBagForSubProfile;
+ (id)bagKeySet;

/* instance methods */
- (id)initWithType:(long long)type clientIdentifier:(id)identifier clientVersion:(id)version bag:(id)bag;
- (id)perform;
@end

#endif /* AMSMediaTask_h */
