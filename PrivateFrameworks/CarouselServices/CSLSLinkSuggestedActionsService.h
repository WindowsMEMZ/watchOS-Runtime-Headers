//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLSLinkSuggestedActionsService_h
#define CSLSLinkSuggestedActionsService_h
@import Foundation;

#include "CSLSLinkSuggestedActionsServiceProviding-Protocol.h"
#include "CSLSXPCService.h"
#include "CSLSXPCServiceDelegate-Protocol.h"

@class NSString;

@interface CSLSLinkSuggestedActionsService : NSObject<CSLSXPCServiceDelegate, CSLSLinkSuggestedActionsServiceProviding> {
  /* instance variables */
  CSLSXPCService *_service;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)serverInterface;

/* instance methods */
- (id)init;
- (void)invalidateSuggestedActionsForIdentifier:(id)identifier completion:(id /* block */)completion;
- (void)handleInvalidation:(id)invalidation;
- (void)handleInterruption:(id)interruption;
@end

#endif /* CSLSLinkSuggestedActionsService_h */
