//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1454.2.1.0.0
//
#ifndef EKUILargeTextUtilities_h
#define EKUILargeTextUtilities_h
@import Foundation;

@interface EKUILargeTextUtilities : NSObject
/* class methods */
+ (double)contentSizeCategoryScaledValueForDefaultValue:(double)value shouldScaleForSmallerSizes:(BOOL)sizes;
+ (double)contentSizeCategoryScaledValueForDefaultValue:(double)value maximumValue:(double)value shouldScaleForSmallerSizes:(BOOL)sizes;
+ (double)contentSizeCategoryScaledValueForLargestNonAccessibilityValue:(double)value maximumValue:(double)value;
+ (double)contentSizeCategoryScaledValueForLargestValue:(double)value;
+ (double)contentSizeCategoryScaledValueFromContentSizeCategory:(id)category correspondingValue:(double)value maximumValue:(double)value;
@end

#endif /* EKUILargeTextUtilities_h */
