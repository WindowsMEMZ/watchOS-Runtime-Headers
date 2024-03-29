//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _IntArray2D_h
#define _IntArray2D_h
@import Foundation;

@interface _IntArray2D : NSObject {
  /* instance variables */
  long long * _arrayData;
}

@property (readonly, nonatomic) unsigned long long iSize;
@property (readonly, nonatomic) unsigned long long jSize;
@property (nonatomic) BOOL shouldBoundsCheck;

/* class methods */
+ (id)arrayWithISize:(unsigned long long)isize jSize:(unsigned long long)size;

/* instance methods */
- (void)dealloc;
- (id)description;
- (id)initWithISize:(unsigned long long)isize jSize:(unsigned long long)size;
- (BOOL)inBoundsForIIndex:(unsigned long long)iindex jIndex:(unsigned long long)index;
- (void)assertBoundsForIIndex:(unsigned long long)iindex jIndex:(unsigned long long)index;
- (long long);
- (long long);
- (void);
@end

#endif /* _IntArray2D_h */
