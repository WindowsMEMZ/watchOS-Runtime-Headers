//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef _GEOSimpleTileRequesterOperation_h
#define _GEOSimpleTileRequesterOperation_h
@import Foundation;

#include "GEODataRequest.h"
#include "GEODataURLSession.h"
#include "GEODataURLSessionTask.h"
#include "GEODataURLSessionTaskDelegate-Protocol.h"
#include "GEOSimpleTileRequesterOperationDelegate-Protocol.h"
#include "_GEOSimpleTileRequesterOperation.h"

@class NSData, NSString, NSURL;
@protocol OS_dispatch_queue, OS_os_activity;

@interface _GEOSimpleTileRequesterOperation : NSObject<GEODataURLSessionTaskDelegate> {
  /* instance variables */
  double _startTime;
  double _endTime;
  int _attempts;
  int _checksumMethod;
  BOOL _isRunning;
}

@property (readonly, nonatomic) GEODataRequest *request;
@property (nonatomic) unsigned long long signpostID;
@property (retain, nonatomic) NSObject<OS_os_activity> *activity;
@property (retain, nonatomic) NSObject<OS_os_activity> *parentTileActivity;
@property (readonly, nonatomic) NSURL *URL;
@property unsigned int priority;
@property (nonatomic) BOOL shouldDownloadToDisk;
@property (retain, nonatomic) NSString *requestingBundleId;
@property (retain, nonatomic) NSString *requestingBundleVersion;
@property (nonatomic) double tileLoaderCreateTime;
@property (retain, nonatomic) NSData *data;
@property (readonly, nonatomic) NSURL *downloadedFileURL;
@property (retain, nonatomic) NSString *responseEtag;
@property (retain, nonatomic) GEODataURLSessionTask *task;
@property (readonly, nonatomic) BOOL responseIsCacheable;
@property (retain, nonatomic) _GEOSimpleTileRequesterOperation *baseTile;
@property (retain, nonatomic) _GEOSimpleTileRequesterOperation *localizationTile;
@property (retain, nonatomic) GEODataURLSession *dataSession;
@property (nonatomic) struct _GEOTileKey { unsigned int x0 :7; unsigned int x1 :1; union { struct _GEOStandardTileKey { unsigned int x0 :40; unsigned int x1 :6; unsigned int x2 :26; unsigned int x3 :26; unsigned int x4 :14; unsigned int x5 :4; unsigned int x6 :4; } x0; struct _GEOGloriaQuadIDTileKey { unsigned int x0 :6; unsigned int x1 :64; unsigned int x2 :14; unsigned int x3 :4; union { struct { unsigned int x0 :10; unsigned int x1 :10; unsigned int x2 :12; } x0; unsigned int x1; } x4; } x1; struct _GEORegionalResourceKey { unsigned int x0 :32; unsigned int x1 :8; unsigned int x2 :6; unsigned int x3 :8; unsigned int x4 :8; unsigned int x5 :1; unsigned int x6 :57; } x2; struct _GEOSputnikMetadataKey { unsigned int x0 :32; unsigned int x1 :24; unsigned int x2 :14; unsigned int x3 :8; unsigned int x4 :42; } x3; struct _GEOFlyoverKey { unsigned int x0 :6; unsigned int x1 :26; unsigned int x2 :26; unsigned int x3 :8; unsigned int x4 :24; unsigned int x5 :14; unsigned int x6 :8; unsigned int x7 :8; } x4; struct _GEOTransitLineSelectionKey { unsigned int x0 :6; unsigned int x1 :25; unsigned int x2 :25; unsigned int x3 :64; } x5; struct _GEOPolygonSelectionKey { unsigned int x0 :6; unsigned int x1 :25; unsigned int x2 :25; unsigned int x3 :64; } x6; struct _GEORoadSelectionKey { unsigned int x0 :6; unsigned int x1 :25; unsigned int x2 :25; unsigned int x3 :64; } x7; struct _GEOContourLinesKey { unsigned int x0 :6; unsigned int x1 :26; unsigned int x2 :26; unsigned int x3 :4; unsigned int x4 :8; unsigned int x5 :50; } x8; struct _GEOTileOverlayKey { unsigned int x0 :6; unsigned int x1 :26; unsigned int x2 :26; unsigned int x3 :8; unsigned int x4 :32; unsigned int x5 :16; unsigned int x6 :6; } x9; struct _GEOIdentifiedResourceKey { unsigned long long x0; unsigned char x1; unsigned char x2; unsigned int x3 :1; unsigned int x4 :39; } x10; struct _GEOS2TileKey { unsigned int x0 :6; unsigned int x1 :26; unsigned int x2 :26; unsigned int x3 :3; unsigned int x4 :14; unsigned int x5 :4; unsigned int x6 :4; unsigned int x7 :37; } x11; struct _GEOLiveTileKey { unsigned int x0 :6; unsigned int x1 :26; unsigned int x2 :26; unsigned int x3 :14; unsigned int x4 :4; unsigned int x5 :4; unsigned int x6 :4; unsigned int x7 :36; } x12; } x2; } key;
@property (readonly, nonatomic) unsigned long long contentLength;
@property (readonly, nonatomic) unsigned long long responseMaxAge;
@property (readonly, nonatomic) BOOL finished;
@property (nonatomic) double timeout;
@property (readonly, nonatomic) int httpResponseStatusCode;
@property (readonly, nonatomic) BOOL existingCachedDataCurrent;
@property (readonly, weak, nonatomic) NSObject<GEOSimpleTileRequesterOperationDelegate> *delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithRequest:(id)request delegateQueue:(id)queue delegate:(id)delegate;
- (void)start;
- (void)cancel;
- (void)clearAllRelatedOperations;
- (double)elapsed;
- (double)startTime;
- (void)dataURLSession:(id)urlsession shouldConvertDataTask:(id)task toDownloadTaskForEstimatedResponseSize:(unsigned long long)size completionHandler:(id /* block */)handler;
- (void)dataURLSession:(id)urlsession didCompleteTask:(id)task;
- (BOOL)isExistingCachedDataCurrent;
@end

#endif /* _GEOSimpleTileRequesterOperation_h */
