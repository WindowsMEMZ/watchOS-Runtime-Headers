//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3628.0.0.0.0
//
#ifndef CNContactsLoggerProvider_h
#define CNContactsLoggerProvider_h
@import Foundation;

#include "CNAPITriageLogger-Protocol.h"
#include "CNContactsLogger-Protocol.h"
#include "CNContactsLoggerProvider-Protocol.h"
#include "CNFavoritesLogger-Protocol.h"
#include "CNGeminiLogger-Protocol.h"
#include "CNImageUtilitiesLogger-Protocol.h"
#include "CNSpotlightIndexingLogger-Protocol.h"

@class NSString;
@protocol CNRegulatoryLogger;

@interface CNContactsLoggerProvider : NSObject<CNContactsLoggerProvider>

@property (readonly, nonatomic) NSObject<CNContactsLogger> *contactsLogger;
@property (readonly, nonatomic) NSObject<CNSpotlightIndexingLogger> *spotlightIndexingLogger;
@property (readonly, nonatomic) NSObject<CNRegulatoryLogger> *regulatoryLogger;
@property (readonly, nonatomic) NSObject<CNFavoritesLogger> *favoritesLogger;
@property (readonly, nonatomic) NSObject<CNGeminiLogger> *geminiLogger;
@property (readonly, nonatomic) NSObject<CNAPITriageLogger> *apiTriageLogger;
@property (readonly, nonatomic) NSObject<CNImageUtilitiesLogger> *imageUtilitiesLogger;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)defaultProvider;

/* instance methods */
@end

#endif /* CNContactsLoggerProvider_h */
