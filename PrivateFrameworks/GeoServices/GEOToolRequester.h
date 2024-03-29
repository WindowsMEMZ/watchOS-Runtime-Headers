//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOToolRequester_h
#define GEOToolRequester_h
@import Foundation;

#include "GEOToolProxy-Protocol.h"

@interface GEOToolRequester : NSObject<GEOToolProxy>
/* class methods */
+ (id)sharedRequester;

/* instance methods */
- (id)ping;
- (void)unlockDBs;
- (void)lockDBs;
- (id)getDefault:(id)default source:(long long *)source;
- (unsigned long long)calculatePurgableSpaceForUrgency:(int)urgency;
- (unsigned long long)freePurgableSpace:(unsigned long long)space forUrgency:(int)urgency;
- (void)invalidateTileCache;
- (BOOL)notifyNetworkDefaultsChanged;
- (void)forceProactiveTileDownloaderRun;
- (BOOL)isProactiveTileDownloadEnabled;
- (id)listFilePathsRemote;
- (id)listFilePathsLocal;
@end

#endif /* GEOToolRequester_h */
