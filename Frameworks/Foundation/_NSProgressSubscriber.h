//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2202.0.0.0.0
//
#ifndef _NSProgressSubscriber_h
#define _NSProgressSubscriber_h
@import Foundation;

#include "NSLock.h"
#include "NSProgressSubscriber-Protocol.h"
#include "NSString.h"

@class NSMutableDictionary;

@interface _NSProgressSubscriber : NSObject<NSProgressSubscriber> {
  /* instance variables */
  id /* block */ _publishingHandler;
  NSString *_subscriberID;
  NSMutableDictionary *_proxiesByPublisherID;
  BOOL _started;
  NSLock *_lock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithPublishingHandler:(id /* block */)handler;
- (void)dealloc;
- (void)startForCategory:(id)category;
- (void)startForFileURL:(id)url;
- (void)stop;
- (void)addPublisher:(id)publisher forID:(id)id withValues:(id)values isOld:(BOOL)old;
- (void)observePublisherUserInfoForID:(id)id value:(id)value forKey:(id)key;
- (void)observePublisherForID:(id)id values:(id)values forKeys:(id)keys;
- (void)removePublisherForID:(id)id;
@end

#endif /* _NSProgressSubscriber_h */
