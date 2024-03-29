//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1226.2.2.1.0
//
#ifndef PPUtils_h
#define PPUtils_h
@import Foundation;

@interface PPUtils : NSObject
/* class methods */
+ (void)enumerateChunksOfSize:(unsigned long long)size fromArray:(id)array usingBlock:(id /* block */)block;
+ (BOOL)isInternalDevice;
+ (id)osBuild;
+ (id)Sha256ForData:(id)data withSalt:(id)salt;
+ (id)hexOfBytes:(const void *)bytes size:(unsigned long long)size;
+ (id)hexUUID;
+ (long long)compareDouble:(double)double withDouble:(double)double;
+ (long long)reverseCompareDouble:(double)double withDouble:(double)double;
+ (id)formatStringArray:(id)array truncatingAtLength:(unsigned long long)length;
+ (id)coordinatesToGeoHashWithLength:(unsigned long long)length latitude:(double)latitude longitude:(double)longitude;
+ (BOOL)yesWithProbability:(double)probability;
+ (id)currentLocaleLanguageCode;
+ (id)reduceSpotlightDomainIdentifiers:(id)identifiers;
+ (double)jaroSimilarityForString:(id)string other:(id)other;
+ (id)sqliteGlobEscape:(id)escape;
+ (BOOL)isFirstPartyApp:(id)app;
+ (BOOL)localizedTimeStructForDate:(id)date tm:(struct tm { int x0; int x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; long long x9; char * x10; } *)tm;
+ (BOOL)localizedTimeStructForSecondsFrom1970:(double)from1970 tm:(struct tm { int x0; int x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; long long x9; char * x10; } *)tm;
+ (id)preferredLanguages;
@end

#endif /* PPUtils_h */
