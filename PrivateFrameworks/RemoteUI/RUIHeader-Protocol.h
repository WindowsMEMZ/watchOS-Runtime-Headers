//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 554.3.2.0.0
//
#ifndef RUIHeader_Protocol_h
#define RUIHeader_Protocol_h
@import Foundation;

@protocol RUIHeader <NSObject>
/* instance methods */
- (id)initWithAttributes:(id)attributes;
@optional
/* instance methods */
- (double)headerHeightForWidth:(double)width inView:(id)view;
- (void)setText:(id)text attributes:(id)attributes;
- (id)headerLabel;
- (void)setSubHeaderText:(id)text attributes:(id)attributes;
- (id)subHeaderLabel;
- (void)setSubHeaderTopMargin:(double)margin;
- (void)setImageLabelPadding:(double)padding;
- (void)setDetailText:(id)text attributes:(id)attributes;
- (id)detailHeaderLabel;
- (void)setIconImage:(id)image;
- (void)setImageSize:(struct CGSize { double x0; double x1; })size;
- (void)setImageAlignment:(int)alignment;
- (void)setDelegate:(id)delegate;
- (void)setSectionIsFirst:(BOOL)first;
- (double)headerHeightForWidth:(double)width inTableView:(id)view;
- (void)setHTMLContent:(id)htmlcontent toElementsMatchingQuery:(id)query;
@end

#endif /* RUIHeader_Protocol_h */
