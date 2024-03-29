//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1880.5.0.0.0
//
#ifndef _NLCoachingBacklightObserver_h
#define _NLCoachingBacklightObserver_h
@import Foundation;

#include "CSLSBacklightObserver-Protocol.h"

@class NSString;

@interface _NLCoachingBacklightObserver : NSObject<CSLSBacklightObserver> {
  /* instance variables */
  id /* block */ _handler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)observerForBacklightOffWithHandler:(id /* block */)handler;

/* instance methods */
- (id)initWithHandler:(id /* block */)handler;
- (void)backlightDidChange:(id)change from:(long long)from to:(long long)to;
- (void)dealloc;
@end

#endif /* _NLCoachingBacklightObserver_h */
