//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2202.0.0.0.0
//
#ifndef NSMutableDictionary_Foundation_h
#define NSMutableDictionary_Foundation_h
@import Foundation;

@interface NSMutableDictionary (Foundation)
/* instance methods */
- (void)setValue:(id)value forKey:(id)key;
- (Class)classForCoder;
- (id)initWithContentsOfFile:(id)file;
- (id)initWithContentsOfURL:(id)url;
- (id)initWithContentsOfURL:(id)url error:(id *)error;
- (void)_web_setInt:(int)int forKey:(id)key;
- (void)_web_setBool:(BOOL)bool forKey:(id)key;
- (void)_web_setObject:(id)object forUncopiedKey:(id)key;
- (id)__swift_objectForKeyedSubscript:(id)subscript;
- (void)__swift_setObject:(id)object forKeyedSubscript:(id)subscript;
@end

#endif /* NSMutableDictionary_Foundation_h */
