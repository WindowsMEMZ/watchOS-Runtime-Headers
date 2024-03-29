//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKEnterCurrencyAmountViewDelegate_Protocol_h
#define PKEnterCurrencyAmountViewDelegate_Protocol_h
@import Foundation;

@protocol PKEnterCurrencyAmountViewDelegate <NSObject>
/* instance methods */
- (BOOL)enterCurrencyAmountView:(id)view shouldChangeAmountFrom:(id)from to:(id)to;
- (void)enterCurrencyAmountViewDidChangeAmount:(id)amount;
@optional
/* instance methods */
- (void)enterCurrencyAmountViewDidLayoutKeyboard:(id)keyboard;
@end

#endif /* PKEnterCurrencyAmountViewDelegate_Protocol_h */
