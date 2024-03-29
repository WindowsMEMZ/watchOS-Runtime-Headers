//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2021.200.1.0.0
//
#ifndef NPTOAssetViewDataSource_Protocol_h
#define NPTOAssetViewDataSource_Protocol_h
@import Foundation;

@protocol NPTOAssetViewDataSource <NSObject>
/* instance methods */
- (void)assetView:(id)view requestAssetContentWithSize:(struct CGSize { double x0; double x1; })size resultHandler:(id /* block */)handler;
@end

#endif /* NPTOAssetViewDataSource_Protocol_h */
