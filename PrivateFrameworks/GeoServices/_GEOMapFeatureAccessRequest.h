//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef _GEOMapFeatureAccessRequest_h
#define _GEOMapFeatureAccessRequest_h
@import Foundation;

#include "GEOMapFeatureAccessRequest-Protocol.h"
#include "GEOTileLoader.h"

@class NSMutableArray, NSString, geo_isolater;

@interface _GEOMapFeatureAccessRequest : NSObject<GEOMapFeatureAccessRequest> {
  /* instance variables */
  NSMutableArray *_clientIdentifiers;
  geo_isolater *_clientIdentifiersIsolater;
}

@property (readonly, nonatomic) GEOTileLoader *tileLoader;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithTileLoader:(id)loader;
- (void)addTileRequest:(id)request;
- (void)cancel;
@end

#endif /* _GEOMapFeatureAccessRequest_h */
