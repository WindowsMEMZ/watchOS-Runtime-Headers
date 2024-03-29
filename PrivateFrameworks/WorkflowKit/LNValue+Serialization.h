//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef LNValue_Serialization_h
#define LNValue_Serialization_h
@import Foundation;

@interface LNValue (Serialization)
/* class methods */
+ (id)valueFromSerializedRepresentation:(id)representation valueType:(id)type variableProvider:(id)provider parameter:(id)parameter;
+ (id)valueFromSerializedRepresentation:(id)representation valueType:(id)type variableProvider:(id)provider parameter:(id)parameter bundleIdentifier:(id)identifier;

/* instance methods */
- (id)wfSerializedRepresentation;
@end

#endif /* LNValue_Serialization_h */
