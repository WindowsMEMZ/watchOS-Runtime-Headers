//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 5.2.12.0.0
//
#ifndef AMSUIWebButtonModel_h
#define AMSUIWebButtonModel_h
@import Foundation;

#include "AMSUIWebActionRunnable-Protocol.h"
#include "AMSUIWebActivityIndicatorModel.h"
#include "AMSUIWebModelInterface-Protocol.h"

@class NSDictionary, NSString;

@interface AMSUIWebButtonModel : NSObject<AMSUIWebModelInterface>

@property (retain, nonatomic) NSDictionary *underlyingJSObject;
@property (retain, nonatomic) NSString *accessibilityLabel;
@property (retain, nonatomic) NSObject<AMSUIWebActionRunnable> *action;
@property (copy, nonatomic) id /* block */ actionBlock;
@property (retain, nonatomic) AMSUIWebActivityIndicatorModel *activityIndicator;
@property (nonatomic) BOOL bold;
@property (nonatomic) BOOL enabled;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *keyEquivalent;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) long long style;
@property (retain, nonatomic) NSString *systemImageName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithJSObject:(id)jsobject context:(id)context;
- (id)createBarButtonItemWithNavigationBarModel:(id)model actionBlock:(id /* block */)block;
- (long long)_barButtonItemStyle;
- (id)_createSpinnerItem;
- (id)_createProxCardItemWithActionBlock:(id /* block */)block;
- (id)createDialogAction;
- (id)_imageForButtonWithNavStyle:(long long)style;
@end

#endif /* AMSUIWebButtonModel_h */
