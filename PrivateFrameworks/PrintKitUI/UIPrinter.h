//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 37.5.0.0.0
//
#ifndef UIPrinter_h
#define UIPrinter_h
@import Foundation;

@class NSString, NSURL;

@interface UIPrinter : NSObject

@property (readonly, copy) NSURL *URL;
@property (readonly, copy) NSString *displayName;
@property (readonly, copy) NSString *displayLocation;
@property (readonly) long long supportedJobTypes;
@property (readonly, copy) NSString *makeAndModel;
@property (readonly) BOOL supportsColor;
@property (readonly) BOOL supportsDuplex;

/* class methods */
+ (id)printerWithURL:(id)url;

/* instance methods */
- (void)contactPrinter:(id /* block */)printer;
@end

#endif /* UIPrinter_h */
