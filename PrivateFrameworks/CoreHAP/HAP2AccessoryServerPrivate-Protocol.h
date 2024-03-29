//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HAP2AccessoryServerPrivate_Protocol_h
#define HAP2AccessoryServerPrivate_Protocol_h
@import Foundation;

@protocol HAP2AccessoryServerPrivate <HAP2AccessoryServer>

@property (readonly, weak, nonatomic) NSObject<HAP2AccessoryServerBrowserPrivate> *browser;
@property (readonly, nonatomic) NSObject<HAP2AccessoryServerControllerPrivate> *controller;
@property (readonly, nonatomic) HAP2SerializedOperationQueue *operationQueue;
@property (retain, nonatomic) NSString *productData;

@end

#endif /* HAP2AccessoryServerPrivate_Protocol_h */
