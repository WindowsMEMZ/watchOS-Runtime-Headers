//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 466.7.8.3.2
//
#ifndef AKAuthorizationScopeEditPlatterCell_h
#define AKAuthorizationScopeEditPlatterCell_h
@import Foundation;

#include "PUICListPlatterCell.h"

@class PUICTextField;

@interface AKAuthorizationScopeEditPlatterCell : PUICListPlatterCell

@property (readonly, nonatomic) PUICTextField *detailTextField;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)_setupDetailTextField;
@end

#endif /* AKAuthorizationScopeEditPlatterCell_h */
