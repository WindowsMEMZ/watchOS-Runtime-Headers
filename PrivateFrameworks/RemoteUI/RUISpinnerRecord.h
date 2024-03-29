//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 554.3.2.0.0
//
#ifndef RUISpinnerRecord_h
#define RUISpinnerRecord_h
@import Foundation;

@class NSArray, NSString, UINavigationItem;

@interface RUISpinnerRecord : NSObject

@property (copy, nonatomic) NSArray *rightItems;
@property (copy, nonatomic) NSArray *leftItems;
@property (retain, nonatomic) UINavigationItem *navigationItem;
@property (nonatomic) BOOL hidesBackButton;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *spinningTitle;

/* instance methods */
@end

#endif /* RUISpinnerRecord_h */
