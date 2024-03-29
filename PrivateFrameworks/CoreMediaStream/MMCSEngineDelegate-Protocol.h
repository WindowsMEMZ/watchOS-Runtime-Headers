//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef MMCSEngineDelegate_Protocol_h
#define MMCSEngineDelegate_Protocol_h
@import Foundation;

@protocol MMCSEngineDelegate <NSObject>
/* instance methods */
- (void)MMCSEngine:(id)mmcsengine didFinishGettingAsset:(id)asset path:(id)path error:(id)error;
- (void)MMCSEngine:(id)mmcsengine didMakeGetProgress:(float)progress state:(int)state onAsset:(id)asset;
- (void)didFinishGettingAllAssets;
- (void)MMCSEngine:(id)mmcsengine didFinishPuttingAsset:(id)asset putReceipt:(id)receipt error:(id)error;
- (void)MMCSEngine:(id)mmcsengine didCreateRequestorContext:(id)context forAssets:(id)assets;
- (void)MMCSEngine:(id)mmcsengine didMakePutProgress:(float)progress state:(int)state onAsset:(id)asset;
- (void)didFinishPuttingAllAssets;
@optional
/* instance methods */
- (id)MMCSEngine:(id)mmcsengine didRequestAssetWithItemID:(unsigned long long)id;
- (BOOL)MMCSEngine:(id)mmcsengine shouldLogAtLogLevel:(int)level;
- (void)MMCSEngine:(id)mmcsengine logMessage:(id)message logLevel:(int)level;
- (void)MMCSEngine:(id)mmcsengine logPerformanceMetrics:(id)metrics;
@end

#endif /* MMCSEngineDelegate_Protocol_h */
