//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 5.2.12.0.0
//
#ifndef AMSUIWebFetchCardDataAction_h
#define AMSUIWebFetchCardDataAction_h
@import Foundation;

#include "AMSUIWebAction.h"

@class NSString;

@interface AMSUIWebFetchCardDataAction : AMSUIWebAction

@property (retain, nonatomic) NSString *merchantID;
@property (retain, nonatomic) NSString *storeFrontCountryCode;

/* instance methods */
- (id)initWithJSObject:(id)jsobject context:(id)context;
- (id)runAction;
@end

#endif /* AMSUIWebFetchCardDataAction_h */
