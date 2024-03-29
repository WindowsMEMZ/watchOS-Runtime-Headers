//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPassEntitlementsComposerEntry_h
#define PKPassEntitlementsComposerEntry_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "PKDisplayablePassEntitlement.h"
#include "PKIdentifiable-Protocol.h"
#include "PKPassEntitlementsComposer.h"
#include "PKPassEntitlementsComposerView-Protocol.h"
#include "PKPassShareTimeConfiguration.h"
#include "PKPassSharedEntitlement.h"

@class NSString;

@interface PKPassEntitlementsComposerEntry : NSObject<PKPassEntitlementsComposerView, PKIdentifiable> {
  /* instance variables */
  PKPassEntitlementsComposer *_parentEntitlementComposer;
}

@property (retain, nonatomic) PKDisplayablePassEntitlement *displayableEntitlement;
@property (retain, nonatomic) PKPassSharedEntitlement *sharedEntitlement;
@property (readonly, nonatomic) NSObject<NSCopying> *identifier;
@property (readonly, nonatomic) unsigned long long possibleShareability;
@property (readonly, nonatomic) unsigned long long possibleVisibility;
@property (readonly, nonatomic) unsigned long long possibleManageability;
@property (readonly, nonatomic) PKPassShareTimeConfiguration *possibleTimeConfiguration;
@property (nonatomic) unsigned long long shareability;
@property (nonatomic) unsigned long long visibility;
@property (nonatomic) unsigned long long manageability;
@property (retain, nonatomic) PKPassShareTimeConfiguration *timeConfiguration;
@property (nonatomic) BOOL isUsingAdvancedScheduling;
@property (nonatomic) BOOL enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
@end

#endif /* PKPassEntitlementsComposerEntry_h */
