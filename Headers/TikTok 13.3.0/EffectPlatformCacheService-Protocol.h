//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IESEffectPlatformNewResponseModel, IESEffectPlatformResponseModel, NSDictionary, NSString;

@protocol EffectPlatformCacheService <NSObject>
- (void)setJson:(NSDictionary *)arg1 newResponse:(IESEffectPlatformNewResponseModel *)arg2 forKey:(NSString *)arg3;
- (void)setJson:(NSDictionary *)arg1 object:(IESEffectPlatformResponseModel *)arg2 forKey:(NSString *)arg3;
- (void)clearJsonAndObjectForKey:(NSString *)arg1;
- (void)clear;
- (void)clearMemory;
- (void)setEnableMemoryCache:(_Bool)arg1;
- (IESEffectPlatformNewResponseModel *)newResponseWithKey:(NSString *)arg1;
- (IESEffectPlatformResponseModel *)objectWithKey:(NSString *)arg1;
@end
