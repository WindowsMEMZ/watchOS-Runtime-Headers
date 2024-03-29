//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFMatchTextGetGroupIntentHandler_h
#define WFMatchTextGetGroupIntentHandler_h
@import Foundation;

#include "WFMatchTextGetGroupIntentHandling-Protocol.h"

@class NSString;

@interface WFMatchTextGetGroupIntentHandler : NSObject<WFMatchTextGetGroupIntentHandling>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)resolveGroupIndexForMatchTextGetGroup:(id)group withCompletion:(id /* block */)completion;
- (void)resolveMatchesForMatchTextGetGroup:(id)group withCompletion:(id /* block */)completion;
- (void)resolveTypeForMatchTextGetGroup:(id)group withCompletion:(id /* block */)completion;
- (void)handleMatchTextGetGroup:(id)group completion:(id /* block */)completion;
- (id)matchedTextInString:(id)string withResult:(id)result atIndex:(long long)index;
@end

#endif /* WFMatchTextGetGroupIntentHandler_h */
