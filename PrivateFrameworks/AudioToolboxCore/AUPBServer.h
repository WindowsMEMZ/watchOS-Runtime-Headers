//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1387.3.4.0.0
//
#ifndef AUPBServer_h
#define AUPBServer_h
@import Foundation;

#include "AUPBRegistrarHosting-Protocol.h"
#include "AUPBServing-Protocol.h"
#include "NSXPCListenerDelegate-Protocol.h"

@class NSMutableArray, NSString, NSXPCConnection, NSXPCListener;
@protocol {map<unsigned int, AUProcessingBlock, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, AUProcessingBlock>>>="__tree_"{__tree<std::__value_type<unsigned int, AUProcessingBlock>, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, AUProcessingBlock>, std::less<unsigned int>>, std::allocator<std::__value_type<unsigned int, AUProcessingBlock>>>="__begin_node_"^v"__pair1_"{__compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned int, AUProcessingBlock>, void *>>>="__value_"{__tree_end_node<std::__tree_node_base<void *> *>="__left_"^v}}"__pair3_"{__compressed_pair<unsigned long, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, AUProcessingBlock>, std::less<unsigned int>>>="__value_"Q}}}, {map<unsigned int, RemoteAUHandleInfo, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, RemoteAUHandleInfo>>>="__tree_"{__tree<std::__value_type<unsigned int, RemoteAUHandleInfo>, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, RemoteAUHandleInfo>, std::less<unsigned int>>, std::allocator<std::__value_type<unsigned int, RemoteAUHandleInfo>>>="__begin_node_"^v"__pair1_"{__compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned int, RemoteAUHandleInfo>, void *>>>="__value_"{__tree_end_node<std::__tree_node_base<void *> *>="__left_"^v}}"__pair3_"{__compressed_pair<unsigned long, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, RemoteAUHandleInfo>, std::less<unsigned int>>>="__value_"Q}}}, {unique_ptr<CADeprecated::CAMutex, std::default_delete<CADeprecated::CAMutex>>="__ptr_"{__compressed_pair<CADeprecated::CAMutex *, std::default_delete<CADeprecated::CAMutex>>="__value_"^{CAMutex}}}, {unique_ptr<TestAUProcessingBlock, std::default_delete<TestAUProcessingBlock>>="__ptr_"{__compressed_pair<TestAUProcessingBlock *, std::default_delete<TestAUProcessingBlock>>="__value_"^{TestAUProcessingBlock}}};

@interface AUPBServer : NSObject<NSXPCListenerDelegate, AUPBServing> {
  /* instance variables */
  NSXPCConnection *mRegistrarConnection;
  NSObject<AUPBRegistrarHosting> *mProxyInterface;
  NSXPCListener *mListener;
  NSMutableArray *mClientConnections;
  struct unique_ptr<CADeprecated::CAMutex, std::default_delete<CADeprecated::CAMutex>> { struct __compressed_pair<CADeprecated::CAMutex *, std::default_delete<CADeprecated::CAMutex>> { struct CAMutex *__value_; } __ptr_; } mLock;
  struct map<unsigned int, RemoteAUHandleInfo, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, RemoteAUHandleInfo>>> { struct __tree<std::__value_type<unsigned int, RemoteAUHandleInfo>, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, RemoteAUHandleInfo>, std::less<unsigned int>>, std::allocator<std::__value_type<unsigned int, RemoteAUHandleInfo>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned int, RemoteAUHandleInfo>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, RemoteAUHandleInfo>, std::less<unsigned int>>> { unsigned long long __value_; } __pair3_; } __tree_; } mAUHandlesToInfo;
  struct map<unsigned int, AUProcessingBlock, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, AUProcessingBlock>>> { struct __tree<std::__value_type<unsigned int, AUProcessingBlock>, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, AUProcessingBlock>, std::less<unsigned int>>, std::allocator<std::__value_type<unsigned int, AUProcessingBlock>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned int, AUProcessingBlock>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, AUProcessingBlock>, std::less<unsigned int>>> { unsigned long long __value_; } __pair3_; } __tree_; } mBlockHandlesToMethods;
  unsigned int mAUPBRefCounter;
  struct unique_ptr<TestAUProcessingBlock, std::default_delete<TestAUProcessingBlock>> { struct __compressed_pair<TestAUProcessingBlock *, std::default_delete<TestAUProcessingBlock>> { struct TestAUProcessingBlock *__value_; } __ptr_; } mTestBlock;
  unsigned int mAUHandleCntr;
  int mNotifyToken;
  BOOL mValidToken;
  BOOL mConnectionAcknowledged;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedInstance;
+ (id)allocWithZone:(struct _NSZone *)zone;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)retain;
- (unsigned long long)retainCount;
- (void)release;
- (id)autorelease;
- (void)dealloc;
- (id)init;
- (void)checkConnectRegistrar;
- (void)startRegistrarConnection;
- (void)handleRegistrarCrash;
- (BOOL)listener:(id)listener shouldAcceptNewConnection:(id)connection;
- (struct OpaqueAUPB *)registerBlock:(const struct AUPBMethods { unsigned int x0; undefined * x1; undefined * x2; undefined * x3; undefined * x4; undefined * x5; undefined * x6; undefined * x7; } *)block withUserData:(void *)data;
- (int)unregisterBlock:(struct OpaqueAUPB *)block;
- (int)registerAU:(struct OpaqueRemoteAudioUnit *)au inBlock:(struct OpaqueAUPB *)block;
- (int)unregisterAU:(struct OpaqueRemoteAudioUnit *)au;
- (unsigned int)handleFromAUPBRef:(struct OpaqueAUPB *)aupbref;
- (void)processingBlockRef:(struct OpaqueAUPB *)ref propertyChanged:(unsigned int)changed;
- (void)processingBlock:(struct OpaqueAUPB *)block properties:(const unsigned int *)properties count:(unsigned int)count changedWithQualifierData:(void *)data length:(unsigned int)length;
- (void)blockListChanged;
- (struct AUProcessingBlock { struct AUPBMethods { unsigned int x0; undefined * x1; undefined * x2; undefined * x3; undefined * x4; undefined * x5; undefined * x6; undefined * x7; } x0; void * x1; } *)aupbFromAUHandle:(unsigned int)auhandle;
- (struct OpaqueRemoteAudioUnit *)auRefFromHandle:(unsigned int)handle;
- (unsigned int)auHandleFromRef:(struct OpaqueRemoteAudioUnit *)ref;
- (struct AUProcessingBlock { struct AUPBMethods { unsigned int x0; undefined * x1; undefined * x2; undefined * x3; undefined * x4; undefined * x5; undefined * x6; undefined * x7; } x0; void * x1; } *)aupbFromRef:(struct OpaqueAUPB *)ref;
- (void)copyProcessingBlock:(unsigned int)block property:(unsigned int)property intoReply:(id /* block */)reply;
- (void)setProcessingBlock:(unsigned int)block property:(unsigned int)property value:(id)value withReply:(id /* block */)reply;
- (void)getAudioUnit:(unsigned int)unit propertyInfo:(unsigned int)info onScope:(unsigned int)scope element:(unsigned int)element inReply:(id /* block */)reply;
- (void)getAudioUnit:(unsigned int)unit property:(unsigned int)property onScope:(unsigned int)scope element:(unsigned int)element inReply:(id /* block */)reply;
- (void)setAudioUnit:(unsigned int)unit property:(unsigned int)property onScope:(unsigned int)scope element:(unsigned int)element value:(id)value withReply:(id /* block */)reply;
- (void)getAudioUnit:(unsigned int)unit parameter:(unsigned int)parameter onScope:(unsigned int)scope element:(unsigned int)element inReply:(id /* block */)reply;
- (void)setAudioUnit:(unsigned int)unit parameter:(unsigned int)parameter onScope:(unsigned int)scope element:(unsigned int)element value:(float)value withReply:(id /* block */)reply;
@end

#endif /* AUPBServer_h */
