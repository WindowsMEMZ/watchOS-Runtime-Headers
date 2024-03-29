//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CUISAlertBackground_h
#define CUISAlertBackground_h
@import Foundation;

@class UIImage, UIView;
@protocol CUISAlertBackgroundProvider;

@interface CUISAlertBackground : NSObject

@property (retain, nonatomic) NSObject<CUISAlertBackgroundProvider> *backgroundProvider;
@property (copy, nonatomic) id /* block */ didChangeHandler;
@property (readonly, nonatomic) UIImage *image;
@property (readonly, nonatomic) UIView *view;

/* instance methods */
- (void)backgroundDidChange;
@end

#endif /* CUISAlertBackground_h */
