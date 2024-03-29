//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 236.12.0.0.0
//
#ifndef SHCustomCatalogTracker_h
#define SHCustomCatalogTracker_h
@import Foundation;

#include "SHCustomCatalog.h"
#include "SHSignatureChunker.h"

@class NSArray;

@interface SHCustomCatalogTracker : NSObject

@property (readonly, nonatomic) SHSignatureChunker *querySignatureChunker;
@property (readonly, nonatomic) SHCustomCatalog *customCatalog;
@property (readonly, nonatomic) NSArray *querySignatureChunks;

/* instance methods */
- (id)initWithQuerySignature:(id)signature customCatalog:(id)catalog;
- (id)trackQuerySignatureChunk:(id)chunk usingReferenceTrackID:(unsigned long long)id error:(id *)error;
@end

#endif /* SHCustomCatalogTracker_h */
