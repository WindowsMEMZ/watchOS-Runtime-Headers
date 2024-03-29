//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3628.0.0.0.0
//
#ifndef CNPostalAddressFormattingSpecification_h
#define CNPostalAddressFormattingSpecification_h
@import Foundation;

@class NSArray, NSDictionary;

@interface CNPostalAddressFormattingSpecification : NSObject

@property (readonly, nonatomic) NSDictionary *fieldLabelMap;
@property (readonly, nonatomic) NSArray *displayFieldArrangement;
@property (readonly, nonatomic) NSArray *editingFieldArrangement;

/* instance methods */
- (id)initWithDisplayFieldArrangement:(id)arrangement editingFieldArrangement:(id)arrangement fieldLabelMap:(id)map;
- (id)localizedPlaceholderForKey:(id)key;
@end

#endif /* CNPostalAddressFormattingSpecification_h */
