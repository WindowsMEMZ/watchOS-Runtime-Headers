//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2202.0.0.0.0
//
#ifndef NSProgressPublisherProxy_h
#define NSProgressPublisherProxy_h
@import Foundation;

#include "NSFileAccessNode.h"
#include "NSProgressPublisher-Protocol.h"
#include "NSProgressValues.h"
#include "NSString.h"
#include "NSXPCConnection.h"

@interface NSProgressPublisherProxy : NSObject<NSProgressPublisher> {
  /* instance variables */
  NSObject<NSProgressPublisher> *_forwarder;
  id _publisherID;
  NSString *_lowerCaseCategoryName;
  NSXPCConnection *_connection;
}

@property (copy) NSString *category;
@property NSFileAccessNode *itemLocation;
@property (readonly, copy) NSProgressValues *values;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithForwarder:(id)forwarder onConnection:(id)connection publisherID:(id)id values:(id)values;
- (void)dealloc;
- (id)publisherID;
- (BOOL)isFromConnection:(id)connection;
- (void)cancel;
- (void)pause;
- (void)resume;
- (void)prioritize;
- (void)appWithBundleID:(id)id didAcknowledgeWithSuccess:(BOOL)success;
- (id)descriptionWithIndenting:(id)indenting;
- (void)observeUserInfoValue:(id)value forKey:(id)key;
- (void)observeValues:(id)values forKeys:(id)keys;
@end

#endif /* NSProgressPublisherProxy_h */
