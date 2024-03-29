//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef WBSExtensionsAnalyticsEventCoalescer_h
#define WBSExtensionsAnalyticsEventCoalescer_h
@import Foundation;

#include "WBSExtensionsAnalyticsEventCoalescerDelegate-Protocol.h"

@class NSMutableSet, NSString, NSTimer;

@interface WBSExtensionsAnalyticsEventCoalescer : NSObject<WBSExtensionsAnalyticsEventCoalescerDelegate> {
  /* instance variables */
  NSMutableSet *_injectedScriptExtensions;
  NSMutableSet *_buttonInvokedExtensions;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
  NSTimer *_resetTimer;
}

@property (nonatomic) double resetInterval;
@property (weak, nonatomic) NSObject<WBSExtensionsAnalyticsEventCoalescerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (BOOL)didInjectScriptForExtensionWithIdentifier:(id)identifier;
- (BOOL)didInvokeToolbarButtonForExtensionWithIdentifier:(id)identifier;
- (void)_configureResetTimer;
- (void)extensionAnalyticsEventCoalescer:(id)coalescer didInjectScriptForExtensionWithIdentifier:(id)identifier;
- (void)extensionAnalyticsEventCoalescer:(id)coalescer didInvokeToolbarButtonForExtensionWithIdentifier:(id)identifier;
@end

#endif /* WBSExtensionsAnalyticsEventCoalescer_h */
