//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2274.8.0.0.0
//
#ifndef CSIndexExtensionRequestHandler_h
#define CSIndexExtensionRequestHandler_h
@import Foundation;

#include "CSSearchableIndexDelegate-Protocol.h"
#include "NSExtensionRequestHandling-Protocol.h"

@class NSString;

@interface CSIndexExtensionRequestHandler : NSObject<NSExtensionRequestHandling, CSSearchableIndexDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)dealloc;
- (void)beginRequestWithExtensionContext:(id)context;
- (void)reindexAllSearchableItemsForIndex:(id)index acknowledgementHandler:(id /* block */)handler;
- (void)searchableIndex:(id)index reindexAllSearchableItemsWithAcknowledgementHandler:(id /* block */)handler;
- (void)index:(id)index reindexSearchableItemsWithIdentifiers:(id)identifiers acknowledgementHandler:(id /* block */)handler;
- (void)searchableIndex:(id)index reindexSearchableItemsWithIdentifiers:(id)identifiers acknowledgementHandler:(id /* block */)handler;
- (void)searchableIndexDidThrottle:(id)throttle;
- (void)searchableIndexDidFinishThrottle:(id)throttle;
@end

#endif /* CSIndexExtensionRequestHandler_h */
