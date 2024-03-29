//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 600.0.0.0.0
//
#ifndef TLVibrationPattern_h
#define TLVibrationPattern_h
@import Foundation;

@class NSDictionary, NSMutableArray;

@interface TLVibrationPattern : NSObject {
  /* instance variables */
  NSMutableArray *_complexPatternDescription;
}

@property (readonly, nonatomic) id _artificiallyRepeatingPropertyListRepresentation;
@property (readonly, nonatomic) id propertyListRepresentation;
@property (retain, nonatomic) id contextObject;

/* class methods */
+ (BOOL)isValidVibrationPatternPropertyListRepresentation:(id)representation;
+ (id)simpleVibrationPatternWithVibrationDuration:(double)duration pauseDuration:(double)duration;
+ (id)complexVibrationPatternWithDurationsForVibrationsAndPauses:(double)pauses;
+ (id)noneVibrationPattern;

/* instance methods */
- (id)init;
- (id)initWithPropertyListRepresentation:(id)representation;
- (id)_initWithPropertyListRepresentation:(id)representation skipValidation:(BOOL)validation;
- (double)_computedDuration;
- (void)appendVibrationComponentWithDuration:(double)duration isPause:(BOOL)pause;
@end

#endif /* TLVibrationPattern_h */
