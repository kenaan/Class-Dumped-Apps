//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSString;

@protocol AWEAppSettingGetterProtocol <NSObject>
- (id)objectForKeyPath:(NSString *)arg1 defaultValue:(id)arg2 stable:(_Bool)arg3;
- (id)objectForKeyPath:(NSString *)arg1 defaultValue:(id)arg2;
- (NSDictionary *)dictionaryForKeyPath:(NSString *)arg1 defaultValue:(NSDictionary *)arg2 stable:(_Bool)arg3;
- (NSDictionary *)dictionaryForKeyPath:(NSString *)arg1 defaultValue:(NSDictionary *)arg2;
- (NSArray *)arrayForKeyPath:(NSString *)arg1 defaultValue:(NSArray *)arg2 stable:(_Bool)arg3;
- (NSArray *)arrayForKeyPath:(NSString *)arg1 defaultValue:(NSArray *)arg2;
- (NSString *)stringForKeyPath:(NSString *)arg1 defaultValue:(NSString *)arg2 stable:(_Bool)arg3;
- (NSString *)stringForKeyPath:(NSString *)arg1 defaultValue:(NSString *)arg2;
- (long long)intValueForKeyPath:(NSString *)arg1 defaultValue:(long long)arg2 stable:(_Bool)arg3;
- (long long)intValueForKeyPath:(NSString *)arg1 defaultValue:(long long)arg2;
- (double)doubleValueForKeyPath:(NSString *)arg1 defaultValue:(double)arg2 stable:(_Bool)arg3;
- (double)doubleValueForKeyPath:(NSString *)arg1 defaultValue:(double)arg2;
- (_Bool)boolValueForKeyPath:(NSString *)arg1 defaultValue:(_Bool)arg2 stable:(_Bool)arg3;
- (_Bool)boolValueForKeyPath:(NSString *)arg1 defaultValue:(_Bool)arg2;

@optional
- (void)fetchSettings;
@end

