//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 506.1.0.0.0
//
#ifndef HWEncoding_h
#define HWEncoding_h
@import Foundation;

@interface HWEncoding : NSObject
/* class methods */
+ (id)encodeHandwriting:(id)handwriting compress:(BOOL)compress;
+ (id)decodeHandwritingFromData:(id)data;
+ (id)protoMessageFromHandwriting:(id)handwriting;
+ (id)encodeBrushStrokesAsData:(id)data inCanvasBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds inStrokesFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
+ (id)decodedBrushStrokesWithData:(id)data inCanvasBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds inStrokesFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame strokeDataFieldCount:(unsigned int)count count:(unsigned long long)count;
+ (void)writeDataToDisk:(id)disk withName:(id)name;
+ (id)protoDrawingFromDrawing:(id)drawing compress:(BOOL)compress;
@end

#endif /* HWEncoding_h */
