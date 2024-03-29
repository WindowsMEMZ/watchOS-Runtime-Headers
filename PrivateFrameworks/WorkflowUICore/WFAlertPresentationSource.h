//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFAlertPresentationSource_h
#define WFAlertPresentationSource_h
@import Foundation;

@class UIBarButtonItem, UIView;

@interface WFAlertPresentationSource : NSObject

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } sourceRect;
@property (readonly, nonatomic) UIView *sourceView;
@property (readonly, nonatomic) UIBarButtonItem *barButtonItem;
@property (nonatomic) unsigned long long permittedArrowDirections;
@property (nonatomic) BOOL canOverlapSourceViewRect;

/* class methods */
+ (id)sourceWithView:(id)view;
+ (id)sourceWithView:(id)view rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
+ (id)sourceWithBarButtonItem:(id)item;

/* instance methods */
- (id)init;
- (id)initWithSourceView:(id)view sourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect barButtonItem:(id)item;
@end

#endif /* WFAlertPresentationSource_h */
