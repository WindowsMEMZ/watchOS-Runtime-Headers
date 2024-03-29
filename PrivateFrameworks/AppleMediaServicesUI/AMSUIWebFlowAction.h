//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 5.2.12.0.0
//
#ifndef AMSUIWebFlowAction_h
#define AMSUIWebFlowAction_h
@import Foundation;

#include "AMSUIWebAction.h"
#include "AMSUIWebActionRunnable-Protocol.h"
#include "AMSUIWebClientContext.h"
#include "AMSUIWebLoadingPageModel.h"
#include "AMSUIWebNavigationBarModel.h"
#include "AMSUIWebPageProvider-Protocol.h"

@class NSDictionary, NSString;

@interface AMSUIWebFlowAction : AMSUIWebAction<AMSUIWebActionRunnable>

@property (retain, nonatomic) id actionData;
@property (nonatomic) long long animationType;
@property (nonatomic) BOOL deferredPresentation;
@property (retain, nonatomic) NSString *backgroundColor;
@property (retain, nonatomic) AMSUIWebLoadingPageModel *loadingPage;
@property (retain, nonatomic) NSDictionary *metrics;
@property (nonatomic) struct CGSize { double x0; double x1; } modalWindowSize;
@property (retain, nonatomic) AMSUIWebNavigationBarModel *navigationBar;
@property (nonatomic) long long popToRelativeIndex;
@property (nonatomic) long long presentationType;
@property (retain, nonatomic) NSObject<AMSUIWebPageProvider> *replacementPage;
@property (nonatomic) long long replacementType;
@property (readonly, nonatomic) AMSUIWebClientContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithContext:(id)context;
- (id)initWithJSObject:(id)jsobject context:(id)context;
- (id)runAction;
- (void)_runWithType:(long long)type options:(id)options;
@end

#endif /* AMSUIWebFlowAction_h */
