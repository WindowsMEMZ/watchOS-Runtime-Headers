//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef WKScrollViewDelegateForwarder_h
#define WKScrollViewDelegateForwarder_h
@import Foundation;

#include "UIScrollViewDelegate-Protocol.h"
#include "WKWebView.h"

@class NSString;
@protocol {WeakObjCPtr<id<UIScrollViewDelegate>>="m_weakReference"@};

@interface WKScrollViewDelegateForwarder : NSObject<UIScrollViewDelegate> {
  /* instance variables */
  WKWebView *_internalDelegate;
  struct WeakObjCPtr<id<UIScrollViewDelegate>> { id m_weakReference; } _externalDelegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithInternalDelegate:(id)delegate externalDelegate:(id)delegate;
- (id)methodSignatureForSelector:(SEL)selector;
- (BOOL)respondsToSelector:(SEL)selector;
- (void)forwardInvocation:(id)invocation;
- (id)forwardingTargetForSelector:(SEL)selector;
@end

#endif /* WKScrollViewDelegateForwarder_h */
