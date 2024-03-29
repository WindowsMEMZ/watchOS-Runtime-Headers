//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOGeographicMetadataTileFetcher_h
#define GEOGeographicMetadataTileFetcher_h
@import Foundation;

#include "GEOGeographicMetadataFetcher-Protocol.h"
#include "GEOLocation.h"

@class NSArray, NSMapTable, NSString;
@protocol OS_dispatch_queue;

@interface GEOGeographicMetadataTileFetcher : NSObject<GEOGeographicMetadataFetcher> {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_workQueue;
  int _tileStyle;
  unsigned short _mcc;
  unsigned short _mnc;
  GEOLocation *_location;
  unsigned long long _options;
  NSArray *_tileDatas;
  NSMapTable *_resultItems;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initForTileStyle:(int)style location:(id)location options:(unsigned long long)options;
- (id)initForTileStyle:(int)style mcc:(unsigned short)mcc mnc:(unsigned short)mnc location:(id)location options:(unsigned long long)options;
- (void)reportCorrupt:(id)corrupt;
- (void)fetchMetadataWithResponseQueue:(id)queue block:(id /* block */)block;
@end

#endif /* GEOGeographicMetadataTileFetcher_h */
