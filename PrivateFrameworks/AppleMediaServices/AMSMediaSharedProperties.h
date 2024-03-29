//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tools: [ld (607.2), ld (814.1), ld (902.8)]
//    - LC_SOURCE_VERSION: 7.2.10.0.0
//
#ifndef AMSMediaSharedProperties_h
#define AMSMediaSharedProperties_h
@import Foundation;

#include "AMSMediaTokenServiceProtocol-Protocol.h"
#include "AMSURLSession.h"

@interface AMSMediaSharedProperties : NSObject

@property (readonly, nonatomic) AMSURLSession *session;
@property (readonly, nonatomic) NSObject<AMSMediaTokenServiceProtocol> *tokenService;

/* class methods */
+ (id)propertiesForMarketingItemTask:(id)task;
+ (id)propertiesForMediaTask:(id)task;
+ (id)propertiesForMercuryCacheFetchTask:(id)task;
+ (id)propertiesForRatingsTask:(id)task;
+ (id)propertiesForStorefrontsTask:(id)task;
+ (id)propertiesForNotificationSettingsTask:(id)task;
+ (id)propertiesForUserNotificationSettingsTask:(id)task;
+ (id)_propertiesForClientIdentifier:(id)identifier account:(id)account bag:(id)bag clientInfo:(id)info URLKnownToBeTrusted:(BOOL)trusted;
+ (id)accessQueue;
+ (id)sharedPropertiesMapTable;

/* instance methods */
- (id)_initWithClientIdentifier:(id)identifier account:(id)account bag:(id)bag clientInfo:(id)info URLKnownToBeTrusted:(BOOL)trusted;
- (void)dealloc;
@end

#endif /* AMSMediaSharedProperties_h */
