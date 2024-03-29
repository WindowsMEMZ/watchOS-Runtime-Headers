//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef IMADropTarget_h
#define IMADropTarget_h
@import Foundation;

@interface IMADropTarget : NSObject

@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } screenCoordinate;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } initialSize;
@property (readonly, nonatomic) double scale;
@property (readonly, nonatomic) double meshScaleFactor;
@property (readonly, nonatomic) double rotation;

/* instance methods */
- (id)initWithScreenCoordinate:(struct CGPoint { double x0; double x1; })coordinate initialSize:(struct CGSize { double x0; double x1; })size scale:(double)scale meshScaleFactor:(double)factor rotation:(double)rotation;
- (id)description;
@end

#endif /* IMADropTarget_h */
