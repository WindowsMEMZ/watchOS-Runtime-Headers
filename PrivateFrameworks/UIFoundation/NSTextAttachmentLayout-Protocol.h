//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 908.2.0.0.0
//
#ifndef NSTextAttachmentLayout_Protocol_h
#define NSTextAttachmentLayout_Protocol_h
@import Foundation;

@protocol NSTextAttachmentLayout <NSObject>
/* instance methods */
- (id)imageForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds attributes:(id)attributes location:(id)location textContainer:(id)container;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })attachmentBoundsForAttributes:(id)attributes location:(id)location textContainer:(id)container proposedLineFragment:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })fragment position:(struct CGPoint { double x0; double x1; })position;
- (id)viewProviderForParentView:(id)view location:(id)location textContainer:(id)container;
@end

#endif /* NSTextAttachmentLayout_Protocol_h */
