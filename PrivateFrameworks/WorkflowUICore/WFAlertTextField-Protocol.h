//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFAlertTextField_Protocol_h
#define WFAlertTextField_Protocol_h
@import Foundation;

@protocol WFAlertTextField <NSObject>

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *placeholder;
@property (nonatomic) NSString *alertClearButtonMode;
@property (nonatomic) NSString *alertAutocapitalizationType;
@property (nonatomic) NSString *alertReturnKeyType;
@property (nonatomic) long long alertTextInputMode;
@property (copy, nonatomic) NSArray *suggestions;

/* class methods */
+ (BOOL)usesSuggestions;
@end

#endif /* WFAlertTextField_Protocol_h */
