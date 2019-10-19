//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol HTSKVStore <NSObject>
+ (id)defaultInstance;
- (void)enumerateKeys:(void (^)(NSString *, _Bool *))arg1;
- (void)clearStore;
- (void)removeObjectForKey:(NSString *)arg1;
- (void)setBool:(_Bool)arg1 forKey:(NSString *)arg2;
- (void)setFloat:(float)arg1 forKey:(NSString *)arg2;
- (void)setDouble:(double)arg1 forKey:(NSString *)arg2;
- (void)setInt64:(long long)arg1 forKey:(NSString *)arg2;
- (void)setInt32:(int)arg1 forKey:(NSString *)arg2;
- (void)setObject:(id)arg1 forKey:(NSString *)arg2;
- (_Bool)boolForKey:(NSString *)arg1;
- (float)floatForKey:(NSString *)arg1;
- (double)doubleForKey:(NSString *)arg1;
- (long long)int64ForKey:(NSString *)arg1;
- (int)int32ForKey:(NSString *)arg1;
- (id)objectOfClass:(Class)arg1 forKey:(NSString *)arg2;
- (_Bool)containsObjectForKey:(NSString *)arg1;
- (id)initWithName:(NSString *)arg1;
@end

