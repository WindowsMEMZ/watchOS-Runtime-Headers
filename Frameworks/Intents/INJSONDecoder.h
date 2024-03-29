//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2201.0.2.0.0
//
#ifndef INJSONDecoder_h
#define INJSONDecoder_h
@import Foundation;

@interface INJSONDecoder : NSObject
/* instance methods */
- (void)decodeObject:(id)object withCodableDescription:(id)description from:(id)from;
- (id)decodeWithCodableAttribute:(id)attribute from:(id)from;
- (id)decodeObjectOfClass:(Class)class from:(id)from;
- (id)decodeObjectsOfClass:(Class)class from:(id)from;
- (id)_decodeObjectOfClass:(Class)class withCodableDescription:(id)description from:(id)from outCodableDescription:(id *)description;
- (id)_decodeWithCodableAttribute:(id)attribute from:(id)from;
@end

#endif /* INJSONDecoder_h */
