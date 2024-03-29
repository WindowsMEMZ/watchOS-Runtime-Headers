//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1899.42.9.28.10
//
#ifndef VKDebugTree_h
#define VKDebugTree_h
@import Foundation;

@class NSArray;
@protocol {DebugTreeNode="_name"{basic_string<char, std::char_traits<char>, std::allocator<char>>="__r_"{__compressed_pair<std::basic_string<char>::__rep, std::allocator<char>>="__value_"{__rep=""(?="__l"{__long="__data_"*"__size_"Q"__cap_"b63"__is_long_"b1}"__s"{__short="__data_"[23c]"__padding_"[0C]"__size_"b7"__is_long_"b1}"__r"{__raw="__words"[3Q]})}}}"_identifier"{basic_string<char, std::char_traits<char>, std::allocator<char>>="__r_"{__compressed_pair<std::basic_string<char>::__rep, std::allocator<char>>="__value_"{__rep=""(?="__l"{__long="__data_"*"__size_"Q"__cap_"b63"__is_long_"b1}"__s"{__short="__data_"[23c]"__padding_"[0C]"__size_"b7"__is_long_"b1}"__r"{__raw="__words"[3Q]})}}}"_children"{vector<gdc::DebugTreeNode, std::allocator<gdc::DebugTreeNode>>="__begin_"^{DebugTreeNode}"__end_"^{DebugTreeNode}"__end_cap_"{__compressed_pair<gdc::DebugTreeNode *, std::allocator<gdc::DebugTreeNode>>="__value_"^{DebugTreeNode}}}"_properties"{vector<gdc::DebugTreeProperty, std::allocator<gdc::DebugTreeProperty>>="__begin_"^{DebugTreeProperty}"__end_"^{DebugTreeProperty}"__end_cap_"{__compressed_pair<gdc::DebugTreeProperty *, std::allocator<gdc::DebugTreeProperty>>="__value_"^{DebugTreeProperty}}}}, {bitset<4UL>="__first_"Q};

@interface VKDebugTree : NSObject {
  /* instance variables */
  struct DebugTreeNode { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *__data_; unsigned long long __size_; unsigned int x :63 __cap_; unsigned int x :1 __is_long_; } __l; struct __short { char x[23] __data_; unsigned char x[0] __padding_; unsigned int x :7 __size_; unsigned int x :1 __is_long_; } __s; struct __raw { unsigned long long x[3] __words; } __r; } x0; } __value_; } __r_; } _name; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *__data_; unsigned long long __size_; unsigned int x :63 __cap_; unsigned int x :1 __is_long_; } __l; struct __short { char x[23] __data_; unsigned char x[0] __padding_; unsigned int x :7 __size_; unsigned int x :1 __is_long_; } __s; struct __raw { unsigned long long x[3] __words; } __r; } x0; } __value_; } __r_; } _identifier; struct vector<gdc::DebugTreeNode, std::allocator<gdc::DebugTreeNode>> { struct DebugTreeNode *__begin_; struct DebugTreeNode *__end_; struct __compressed_pair<gdc::DebugTreeNode *, std::allocator<gdc::DebugTreeNode>> { struct DebugTreeNode *__value_; } __end_cap_; } _children; struct vector<gdc::DebugTreeProperty, std::allocator<gdc::DebugTreeProperty>> { struct DebugTreeProperty *__begin_; struct DebugTreeProperty *__end_; struct __compressed_pair<gdc::DebugTreeProperty *, std::allocator<gdc::DebugTreeProperty>> { struct DebugTreeProperty *__value_; } __end_cap_; } _properties; } _debugTree;
  struct bitset<4UL> { unsigned long long __first_; } _options;
  NSArray *_nodes;
}

/* instance methods */
- (void)setOptions:(id)options;
- (void)setOption:(unsigned long long)option value:(BOOL)value;
- (void)enableAllOptions;
- (void)disableAllOptions;
- (void)_populateData;
- (void)populateData:(id)data;
- (void)replaceInternalData:(const void *)data;
- (const void *)internalData;
- (id)nodes;
- (void)_outputTree:(void *)tree;
- (void)printTree;
- (id)logTree;
- (id)_serializeValue:(const void *)value;
- (struct optional<gdc::DebugTreeValue> { BOOL x0; union ValueUnion { unsigned char x0[64] struct DebugTreeValue { struct ValueStruct { long long x0; unsigned long long x1; double x2; BOOL x3; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char * x0; unsigned long long x1; unsigned int x2 :63; unsigned int x3 :1; } x0; struct __short { char x0[23] unsigned char x1[0] unsigned int x2 :7; unsigned int x3 :1; } x1; struct __raw { unsigned long long x0[3] } x2; } x0; } x0; } x0; } x4; } x0; int x1; } x1; } x1; })_deserializeValue:(id)value;
- (id)_serializeProperty:(const void *)property;
- (struct optional<gdc::DebugTreeProperty> { BOOL x0; union ValueUnion { unsigned char x0[80] struct DebugTreeProperty { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char * x0; unsigned long long x1; unsigned int x2 :63; unsigned int x3 :1; } x0; struct __short { char x0[23] unsigned char x1[0] unsigned int x2 :7; unsigned int x3 :1; } x1; struct __raw { unsigned long long x0[3] } x2; } x0; } x0; } x0; } x0; int x1; struct vector<gdc::DebugTreeValue, std::allocator<gdc::DebugTreeValue>> { struct DebugTreeValue * x0; struct DebugTreeValue * x1; struct __compressed_pair<gdc::DebugTreeValue *, std::allocator<gdc::DebugTreeValue>> { struct DebugTreeValue * x0; } x2; } x2; struct vector<std::string, std::allocator<std::string>> { void * x0; void * x1; struct __compressed_pair<std::string *, std::allocator<std::string>> { void * x0; } x2; } x3; } x1; } x1; })_deserializeProperty:(id)property;
- (id)_serializeNode:(const void *)node;
- (struct optional<gdc::DebugTreeNode> { BOOL x0; union ValueUnion { unsigned char x0[96] struct DebugTreeNode { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char * x0; unsigned long long x1; unsigned int x2 :63; unsigned int x3 :1; } x0; struct __short { char x0[23] unsigned char x1[0] unsigned int x2 :7; unsigned int x3 :1; } x1; struct __raw { unsigned long long x0[3] } x2; } x0; } x0; } x0; } x0; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char * x0; unsigned long long x1; unsigned int x2 :63; unsigned int x3 :1; } x0; struct __short { char x0[23] unsigned char x1[0] unsigned int x2 :7; unsigned int x3 :1; } x1; struct __raw { unsigned long long x0[3] } x2; } x0; } x0; } x0; } x1; struct vector<gdc::DebugTreeNode, std::allocator<gdc::DebugTreeNode>> { struct DebugTreeNode * x0; struct DebugTreeNode * x1; struct __compressed_pair<gdc::DebugTreeNode *, std::allocator<gdc::DebugTreeNode>> { struct DebugTreeNode * x0; } x2; } x2; struct vector<gdc::DebugTreeProperty, std::allocator<gdc::DebugTreeProperty>> { struct DebugTreeProperty * x0; struct DebugTreeProperty * x1; struct __compressed_pair<gdc::DebugTreeProperty *, std::allocator<gdc::DebugTreeProperty>> { struct DebugTreeProperty * x0; } x2; } x3; } x1; } x1; })_deserializeNode:(id)node;
- (id)serializeTree;
- (BOOL)deserializeTree:(id)tree;
- (id)serializeZippedTree;
- (BOOL)deserializeZippedTree:(id)tree;
@end

#endif /* VKDebugTree_h */
