//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 12563.0.0.0.0
//
#ifndef ABSConstantsMapping_h
#define ABSConstantsMapping_h
@import Foundation;

@class NSDictionary;

@interface ABSConstantsMapping : NSObject

@property (retain, nonatomic) NSDictionary *mapping;
@property (retain, nonatomic) id defaultConstant;

/* class methods */
+ (id)ABToCNPersonKindConstantsMapping;
+ (id)CNToABPersonKindConstantsMapping;
+ (id)ABtoCNContactDisplayNameOrderConstantsMapping;
+ (id)CNToABCompositeNameFormatConstantsMapping;
+ (id)ABToCNContactSortOrderConstantsMapping;
+ (id)CNToABPersonSortOrderingConstantsMapping;
+ (id)ABToCNPersonAddressConstantsMapping;
+ (id)CNToABPersonAddressConstantsMapping;
+ (id)ABToCNPersonInstantMessageConstantsMapping;
+ (id)CNToABPersonInstantMessageConstantsMapping;
+ (id)ABToCNPersonSocialProfileConstantsMapping;
+ (id)CNToABPersonSocialProfileConstantsMapping;
+ (id)ABToCNLabelConstantsMapping;
+ (id)CNToABLabelConstantsMapping;
+ (id)ABToCNContainerTypeConstantsMapping;
+ (id)CNToABSourceTypeConstantsMapping;

/* instance methods */
- (id)initWithMapping:(id)mapping;
- (id)invertedMapping;
- (id)mappedConstant:(id)constant;
@end

#endif /* ABSConstantsMapping_h */
