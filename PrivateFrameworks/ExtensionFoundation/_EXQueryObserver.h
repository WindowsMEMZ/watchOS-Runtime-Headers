//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 141.1.1.0.0
//
#ifndef _EXQueryObserver_h
#define _EXQueryObserver_h
@import Foundation;

#include "_EXQueryController.h"
#include "_EXQueryControllerDelegate-Protocol.h"

@class NSArray, NSString;
@protocol _EXQueryObserverDelegate;

@interface _EXQueryObserver : _EXQueryController<_EXQueryControllerDelegate>

@property (weak) NSObject<_EXQueryObserverDelegate> *internalDelegate;
@property (readonly) NSArray *extensions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithQueries:(id)queries delegate:(id)delegate;
- (void)queryControllerDidUpdate:(id)update difference:(id)difference;
@end

#endif /* _EXQueryObserver_h */
