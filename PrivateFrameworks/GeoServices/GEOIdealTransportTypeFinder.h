//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOIdealTransportTypeFinder_h
#define GEOIdealTransportTypeFinder_h
@import Foundation;

@interface GEOIdealTransportTypeFinder : NSObject
/* class methods */
+ (long long)idealTransportTypeForOrigin:(struct { double x0; double x1; })origin destination:(struct { double x0; double x1; })destination mapType:(int)type;
+ (long long)idealTransportTypeForCoordinates:(struct { double x0; double x1; } *)coordinates count:(unsigned long long)count mapType:(int)type;
+ (long long)idealTransportTypeForMapType:(int)type;
+ (long long)idealTransportType;
+ (id)_transportTypePreferenceAsString:(long long)string;
@end

#endif /* GEOIdealTransportTypeFinder_h */
