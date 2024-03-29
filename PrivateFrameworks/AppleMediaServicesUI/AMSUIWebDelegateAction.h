//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 5.2.12.0.0
//
#ifndef AMSUIWebDelegateAction_h
#define AMSUIWebDelegateAction_h
@import Foundation;

#include "AMSUIWebAction.h"
#include "AMSUIWebActionRunnable-Protocol.h"
#include "AMSUIWebClientContext.h"

@class NSDictionary, NSString;

@interface AMSUIWebDelegateAction : AMSUIWebAction<AMSUIWebActionRunnable>

@property (retain, nonatomic) NSDictionary *delegateData;
@property (readonly, nonatomic) AMSUIWebClientContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithJSObject:(id)jsobject context:(id)context;
- (id)runAction;
- (id)_handleResolveActionWithData:(id)data;
- (id)_infoWithBuyParams:(id)params additionalInfo:(id)info;
- (id)_handleActionObject:(id)object;
- (id)_didResolveWithResult:(id)result error:(id)error;
@end

#endif /* AMSUIWebDelegateAction_h */
