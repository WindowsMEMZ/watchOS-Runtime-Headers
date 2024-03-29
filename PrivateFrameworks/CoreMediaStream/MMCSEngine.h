//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef MMCSEngine_h
#define MMCSEngine_h
@import Foundation;

#include "MMCSEngineDelegate-Protocol.h"

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSString, NSThread, NSTimer, NSURL;
@protocol OS_dispatch_queue;

@interface MMCSEngine : NSObject {
  /* instance variables */
  NSURL *_workPathURL;
  NSString *_appIDHeader;
  NSString *_dataClass;
  NSDictionary *_options;
  struct _mmcs_engine * _engine;
  struct { long long version; void *context; undefined *getFileDescriptorAndContentTypeFromItemCallback; undefined *getItemProgressCallback; undefined *getItemDoneCallback; undefined *putItemProgressCallback; undefined *putItemDoneCallback; undefined *requestCompletedCallback; } _engineClientContext;
  NSMutableDictionary *_itemIDToAssetMap;
  NSObject<OS_dispatch_queue> *_itemIDToAssetMapQueue;
  NSMutableArray *_requestorContexts;
  NSObject<OS_dispatch_queue> *_reqestorContextQueue;
  NSMutableDictionary *_autoItemIDDictionary;
  NSURL *_autoItemIDPersistenceURL;
  NSObject<OS_dispatch_queue> *_autoItemIDDictionaryQueue;
}

@property (retain, nonatomic) NSTimer *threadKeepAliveTimer;
@property (nonatomic) BOOL isDone;
@property (weak, nonatomic) NSObject<MMCSEngineDelegate> *delegate;
@property (readonly, nonatomic) BOOL hasOutstandingActivity;
@property (nonatomic) BOOL autoGenerateItemID;
@property (nonatomic) BOOL isMetricsGatheringEnabled;
@property (retain, nonatomic) NSThread *workThread;

/* class methods */
+ (id)logStringForGetItemState:(int)state;
+ (id)logStringForPutItemState:(int)state;

/* instance methods */
- (id)initWithWorkPath:(id)path appIDHeader:(id)idheader dataClass:(id)class options:(id)options modes:(id)modes;
- (id)initWithWorkPath:(id)path appIDHeader:(id)idheader dataClass:(id)class options:(id)options;
- (void)performBlock:(id /* block */)block;
- (void)performBlockOnWorkThread:(id /* block */)thread waitUntilDone:(BOOL)done;
- (void)performBlockOnWorkThread:(id /* block */)thread;
- (void)_doNothingTimerHandler:(id)handler;
- (void)threadMain:(id)main;
- (BOOL)_getFileDescriptorAndContentTypeFromItemID:(unsigned long long)id outFD:(int *)fd outItemType:(id *)type outError:(id *)error;
- (void)_getItemProgressItemID:(unsigned long long)id state:(int)state progress:(double)progress requestorContext:(id)context error:(id)error;
- (void)_getItemDoneItemID:(unsigned long long)id path:(id)path requestorContext:(id)context error:(id)error;
- (void)_putItemProgressItemID:(unsigned long long)id state:(int)state progress:(double)progress requestorContext:(id)context error:(id)error;
- (void)_putItemDoneItemID:(unsigned long long)id requestorContext:(id)context putReceipt:(id)receipt error:(id)error;
- (void)_requestCompletedRequestorContext:(id)context;
- (void)cancelOperationsWithContext:(id)context;
- (void)cancelAllOperations;
- (void)shutDownCompletionBlock:(id /* block */)block;
- (BOOL)isActive;
- (void)registerAssetForUpload:(id)upload completionBlock:(id /* block */)block;
- (void)reregisterAssetForUpload:(id)upload;
- (void)reregisterAssetForDownload:(id)download;
- (void)registerAssets:(id)assets forDownloadCompletionBlock:(id /* block */)block;
- (void)unregisterAsset:(id)asset;
- (void)unregisterAssets:(id)assets;
- (void)getAssets:(id)assets requestURL:(id)url DSID:(id)dsid options:(id)options;
- (void)putAssets:(id)assets requestURL:(id)url DSID:(id)dsid options:(id)options;
- (void)_registerAsset:(id)asset;
- (id)_assetWithItemID:(unsigned long long)id;
- (void)_removeAssetForItemID:(unsigned long long)id;
- (void)_registerRequestorContext:(id)context;
- (void)_removeRequestorContext:(id)context;
- (void)_initItemIDPersistence;
- (unsigned long long)_nextItemID;
@end

#endif /* MMCSEngine_h */
