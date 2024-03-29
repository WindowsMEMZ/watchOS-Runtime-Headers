//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 43.4.0.0.0
//
#ifndef NUIGridDimension_Protocol_h
#define NUIGridDimension_Protocol_h
@import Foundation;

#include "NUIContainerGridView.h"
#include "NUIGridDimension-Protocol.h"

@class NSArray, NSString;

@protocol NUIGridDimension <NSObject>

@property (copy, nonatomic) NSArray *arrangedSubviews;
@property (nonatomic) BOOL hidden;
@property (nonatomic) double length;
@property (nonatomic) double spacingAfter;
@property (nonatomic) long long alignment;

/* instance methods */
- (BOOL)isHidden;
@end

#endif /* NUIGridDimension_Protocol_h */
