//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef CPLCodingPropertyEntry_h
#define CPLCodingPropertyEntry_h
@import Foundation;

@class NSSet, NSString;

@interface CPLCodingPropertyEntry : NSObject

@property (nonatomic) char propertyType;
@property (retain, nonatomic) NSSet *propertyClasses;
@property (nonatomic) SEL propertyGetter;
@property (nonatomic) SEL propertySetter;
@property (nonatomic) undefined * propertyGetterIMP;
@property (nonatomic) undefined * propertySetterIMP;
@property (nonatomic) struct objc_ivar * ivar;
@property (nonatomic) BOOL readOnly;
@property (copy, nonatomic) NSString *structName;

/* instance methods */
- (void *)ivarAddrForObject:(id)object;
- (id)ivarValueForObject:(id)object;
- (void)setIvarValue:(id)value forObject:(id)object;
- (BOOL)isReadOnly;
@end

#endif /* CPLCodingPropertyEntry_h */
