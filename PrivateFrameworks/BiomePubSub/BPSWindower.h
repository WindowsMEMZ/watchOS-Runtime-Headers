//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 123.2.7.0.1
//
#ifndef BPSWindower_h
#define BPSWindower_h
@import Foundation;

#include "BMBookmarkablePublisher.h"
#include "BMBookmarkablePublisher-Protocol.h"
#include "BPSPublisher-Protocol.h"
#include "BPSWindowAssigner-Protocol.h"

@class NSArray, NSMutableDictionary, NSString;

@interface BPSWindower : BMBookmarkablePublisher<BMBookmarkablePublisher>

@property (retain, nonatomic) NSMutableDictionary *windows;
@property (readonly, nonatomic) NSObject<BPSPublisher> *upstream;
@property (copy, nonatomic) id /* block */ key;
@property (readonly, nonatomic) NSObject<BPSWindowAssigner> *assigner;
@property (readonly, nonatomic) NSArray *bookmarkableUpstreams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)publisherWithPublisher:(id)publisher upstreams:(id)upstreams bookmarkState:(id)state;
+ (id)new;

/* instance methods */
- (BOOL)canStoreInternalStateInBookmark;
- (BOOL)canStorePassThroughValueInBookmark;
- (id)init;
- (id)initWithUpstream:(id)upstream key:(id /* block */)key assigner:(id)assigner;
- (void)subscribe:(id)subscribe;
- (id)upstreamPublishers;
- (void)updateWindowsWithEvent:(id)event;
- (id)firstCompletedWindow;
- (id)firstCompletedWindowShouldRemove:(BOOL)remove;
- (id)nextEvent;
- (BOOL)completed;
- (void)reset;
- (id)bookmark;
- (id)validateBookmark:(id)bookmark;
- (void)applyBookmark:(id)bookmark;
@end

#endif /* BPSWindower_h */
