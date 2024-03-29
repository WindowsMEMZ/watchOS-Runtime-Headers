//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOPlaceExternalAction_h
#define GEOPlaceExternalAction_h
@import Foundation;

#include "GEOPDActionData.h"

@class NSArray, NSOrderedSet, NSString;

@interface GEOPlaceExternalAction : NSObject {
  /* instance variables */
  GEOPDActionData *_actionData;
}

@property (readonly, nonatomic) NSString *actionName;
@property (readonly, nonatomic) NSString *symbolName;
@property (readonly, nonatomic) NSArray *actionProviders;
@property (readonly, nonatomic) NSOrderedSet *appAdamIds;
@property (readonly, nonatomic) NSString *winningAdamId;
@property (readonly, nonatomic) NSString *categoryId;
@property (readonly, nonatomic) BOOL possiblyHasSupportedIntegrations;

/* instance methods */
- (id)initWithActionData:(id)data attributionMap:(id)map;
- (void)_setupActionProvidersWithAttributionMap:(id)map;
- (id)partnerActionForAdamId:(id)id;
- (id)description;
@end

#endif /* GEOPlaceExternalAction_h */
