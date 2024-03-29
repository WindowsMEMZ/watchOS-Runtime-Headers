//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 582.60.2.0.0
//
#ifndef MCMContainerSchemaActionUnlink_h
#define MCMContainerSchemaActionUnlink_h
@import Foundation;

#include "MCMContainerSchemaActionBase.h"
#include "MCMContainerSchemaActionHasSinglePath-Protocol.h"

@class NSURL;

@interface MCMContainerSchemaActionUnlink : MCMContainerSchemaActionBase<MCMContainerSchemaActionHasSinglePath> {
  /* instance variables */
  NSURL *_url;
}

/* class methods */
+ (id)actionIdentifier;

/* instance methods */
- (id)initWithPathArgument:(id)argument context:(id)context;
- (id)description;
- (BOOL)performWithError:(id *)error;
@end

#endif /* MCMContainerSchemaActionUnlink_h */
