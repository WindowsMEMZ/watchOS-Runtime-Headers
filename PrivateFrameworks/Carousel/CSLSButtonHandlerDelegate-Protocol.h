//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLSButtonHandlerDelegate_Protocol_h
#define CSLSButtonHandlerDelegate_Protocol_h
@import Foundation;

@protocol CSLSButtonHandlerDelegate <NSObject>
/* instance methods */
- (id)setHandlerForButton:(unsigned long long)button buttonAction:(unsigned long long)action handler:(id /* block */)handler;
- (void)removeHandlerForButton:(unsigned long long)button buttonAction:(unsigned long long)action handlerToken:(id)token;
- (id)disableInstantButtonTapsWithIdentifier:(id)identifier;
@end

#endif /* CSLSButtonHandlerDelegate_Protocol_h */
