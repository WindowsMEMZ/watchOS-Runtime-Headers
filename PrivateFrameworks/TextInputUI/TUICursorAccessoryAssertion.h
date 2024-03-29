//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.101.0.0
//
#ifndef TUICursorAccessoryAssertion_h
#define TUICursorAccessoryAssertion_h
@import Foundation;

#include "TUICursorAccessory.h"
#include "TUICursorAccessoryAssertion-Protocol.h"
#include "TUICursorAccessoryAssertionController.h"

@class NSString;

@interface TUICursorAccessoryAssertion : NSObject<TUICursorAccessoryAssertion>

@property (nonatomic) unsigned long long accessoryType;
@property (retain, nonatomic) TUICursorAccessory *accessory;
@property (weak, nonatomic) TUICursorAccessoryAssertionController *controller;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithAccessoryType:(unsigned long long)type accessory:(id)accessory controller:(id)controller;
- (void)dealloc;
- (void)invalidate;
@end

#endif /* TUICursorAccessoryAssertion_h */
