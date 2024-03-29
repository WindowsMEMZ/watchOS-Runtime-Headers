//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 11207.0.0.0.0
//
#ifndef CTStewieDataClient_h
#define CTStewieDataClient_h
@import Foundation;

#include "CTConnectionPair.h"
#include "CTConnectionPairDelegate-Protocol.h"
#include "CTStewieDataClientDelegate-Protocol.h"
#include "CTStewieState.h"
#include "CTStewieStateMonitor.h"
#include "CTStewieStateMonitorDelegate-Protocol.h"

@class NSString;
@protocol OS_dispatch_queue, {map<std::string, dispatch::block<void (^)(CTStewieMessageAck *, NSDictionary *)>, std::less<std::string>, std::allocator<std::pair<const std::string, dispatch::block<void (^)(CTStewieMessageAck *, NSDictionary *)>>>>="__tree_"{__tree<std::__value_type<std::string, dispatch::block<void (^)(CTStewieMessageAck *, NSDictionary *)>>, std::__map_value_compare<std::string, std::__value_type<std::string, dispatch::block<void (^)(CTStewieMessageAck *, NSDictionary *)>>, std::less<std::string>>, std::allocator<std::__value_type<std::string, dispatch::block<void (^)(CTStewieMessageAck *, NSDictionary *)>>>>="__begin_node_"^v"__pair1_"{__compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, dispatch::block<void (^)(CTStewieMessageAck *, NSDictionary *)>>, void *>>>="__value_"{__tree_end_node<std::__tree_node_base<void *> *>="__left_"^v}}"__pair3_"{__compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, dispatch::block<void (^)(CTStewieMessageAck *, NSDictionary *)>>, std::less<std::string>>>="__value_"Q}}};

@interface CTStewieDataClient : NSObject<CTStewieStateMonitorDelegate, CTConnectionPairDelegate> {
  /* instance variables */
  BOOL fStarted;
  NSObject<OS_dispatch_queue> *fQueue;
  long long fRequestedServices;
  long long fConnectedServices;
  NSObject<CTStewieDataClientDelegate> *fDelegate;
  NSObject<OS_dispatch_queue> *fDelegateQueue;
  CTConnectionPair *fConnectionPair;
  long long fConnectionPairState;
  CTStewieState *fState;
  CTStewieStateMonitor *fMonitor;
  struct map<std::string, dispatch::block<void (^)(CTStewieMessageAck *, NSDictionary *)>, std::less<std::string>, std::allocator<std::pair<const std::string, dispatch::block<void (^)(CTStewieMessageAck *, NSDictionary *)>>>> { struct __tree<std::__value_type<std::string, dispatch::block<void (^)(CTStewieMessageAck *, NSDictionary *)>>, std::__map_value_compare<std::string, std::__value_type<std::string, dispatch::block<void (^)(CTStewieMessageAck *, NSDictionary *)>>, std::less<std::string>>, std::allocator<std::__value_type<std::string, dispatch::block<void (^)(CTStewieMessageAck *, NSDictionary *)>>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, dispatch::block<void (^)(CTStewieMessageAck *, NSDictionary *)>>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, dispatch::block<void (^)(CTStewieMessageAck *, NSDictionary *)>>, std::less<std::string>>> { unsigned long long __value_; } __pair3_; } __tree_; } fOutgoingMessages;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithServices:(long long)services delegate:(id)delegate delegateQueue:(id)queue;
- (BOOL)start;
- (id)getState;
- (void)dispatchOnDelegateQueue:(id /* block */)queue;
- (void)sendMessageInternal:(id)internal usingConnection:(long long)connection completion:(id /* block */)completion;
- (BOOL)sendMessage:(id)message completion:(id /* block */)completion;
- (void)invokeSendCompletionForMsgId:(id)id ack:(id)ack metadata:(id)metadata;
- (void)failAllPendingMessages;
- (void)updateConnectedServices:(long long)services;
- (void)createConnectionPairIfRequired;
- (void)discardConnectionPairIfRequired;
- (void)reEvaluate;
- (void)stateChanged:(id)changed;
- (void)connectionPairStateChanged:(long long)changed;
- (void)receivedData:(id)data fromConnectionId:(long long)id;
@end

#endif /* CTStewieDataClient_h */
