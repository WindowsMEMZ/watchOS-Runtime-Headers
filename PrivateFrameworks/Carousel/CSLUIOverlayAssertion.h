//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLUIOverlayAssertion_h
#define CSLUIOverlayAssertion_h
@import Foundation;

#include "BSCancellable-Protocol.h"
#include "CSLUIOverlayAssertionDelegate-Protocol.h"

@class NSString;

@interface CSLUIOverlayAssertion : NSObject<BSCancellable> {
  /* instance variables */
  NSObject<CSLUIOverlayAssertionDelegate> *_delegate;
  NSString *_name;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithDelegate:(id)delegate andName:(id)name;
- (void)dealloc;
- (void)cancel;
- (id)name;
@end

#endif /* CSLUIOverlayAssertion_h */
