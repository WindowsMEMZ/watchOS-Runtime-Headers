//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 205.6.1.0.0
//
#ifndef NSMutableDictionary_MediaAnalysis_h
#define NSMutableDictionary_MediaAnalysis_h
@import Foundation;

@interface NSMutableDictionary (MediaAnalysis)
/* instance methods */
- (void)vcp_setSyncPoint:(struct { long long x0; int x1; unsigned int x2; long long x3; })point;
- (void)vcp_removeSyncPoint;
- (void)vcp_setTimerange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })timerange;
- (void)vcp_setVersion:(int)version;
- (void)vcp_setDateModified:(id)modified;
- (void)vcp_setDateAnalyzed:(id)analyzed;
- (void)vcp_setTypes:(unsigned long long)types;
- (void)vcp_setFlags:(unsigned long long)flags;
- (void)vcp_setStatsFlags:(unsigned long long)flags;
- (void)vcp_setQuality:(double)quality;
- (void)vcp_setFingerprint:(id)fingerprint;
- (void)vcp_addTypes:(unsigned long long)types;
- (void)vcp_addFlags:(unsigned long long)flags;
- (void)vcp_addStatsFlags:(unsigned long long)flags;
- (id)vcp_mutableResults;
- (void)vcp_setResult:(id)result forKey:(id)key;
- (void)vcp_addEntriesFromResults:(id)results;
- (void)vcp_setResults:(id)results;
- (void)vcp_appendResult:(id)result forKey:(id)key;
- (void)vcp_appendResults:(id)results;
- (void)vcp_removeResultForKey:(id)key;
@end

#endif /* NSMutableDictionary_MediaAnalysis_h */
