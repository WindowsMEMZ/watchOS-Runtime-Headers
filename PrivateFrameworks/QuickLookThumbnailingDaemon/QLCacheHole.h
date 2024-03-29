//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 186.2.2.0.0
//
#ifndef QLCacheHole_h
#define QLCacheHole_h
@import Foundation;

@interface QLCacheHole : NSObject

@property (nonatomic) unsigned long long location;
@property (nonatomic) unsigned long long length;

/* class methods */
+ (id)holeWithLocation:(unsigned long long)location length:(unsigned long long)length;

/* instance methods */
- (id)initWithLocation:(unsigned long long)location length:(unsigned long long)length;
- (void)setLocation:(unsigned long long)location length:(unsigned long long)length;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (void)setRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (id)description;
- (BOOL)isEqual:(id)equal;
@end

#endif /* QLCacheHole_h */
