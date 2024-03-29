//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIBarBackButtonItemAppearanceStorage_h
#define _UIBarBackButtonItemAppearanceStorage_h
@import Foundation;

@class NSMutableDictionary, NSValue;

@interface _UIBarBackButtonItemAppearanceStorage : NSObject {
  /* instance variables */
  NSMutableDictionary *backgroundImages;
  NSMutableDictionary *miniBackgroundImages;
  NSMutableDictionary *backgroundVerticalAdjustmentsForBarMetrics;
}

@property (retain, nonatomic) NSValue *titlePositionOffset;
@property (retain, nonatomic) NSValue *miniTitlePositionOffset;

/* instance methods */
- (void)setBackgroundImage:(id)image forState:(unsigned long long)state isMini:(BOOL)mini;
- (id)backgroundImageForState:(unsigned long long)state isMini:(BOOL)mini;
- (id)anyBackgroundImage;
- (void)setBackgroundVerticalAdjustment:(double)adjustment forBarMetrics:(long long)metrics;
- (double)backgroundVerticalAdjustmentForBarMetrics:(long long)metrics;
@end

#endif /* _UIBarBackButtonItemAppearanceStorage_h */
